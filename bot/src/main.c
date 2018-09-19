/* BOTTOM MODULE CODE */

//#include "stdio.h"

#include "em_device.h"
#include "em_chip.h"
#include "em_gpio.h"
#include "em_cmu.h"
#include "gpiointerrupt.h"
#include "rtcdriver.h"

#include "ezradio_cmd.h"
#include "ezradio_api_lib.h"
#include "ezradio_plugin_manager.h"

/*#include "display.h"
#include "textdisplay.h"
#include "retargettextdisplay.h"
#include "bspconfig.h"
#include "image.h"

// Image widht and height definitions
#define IMAGE_HIGHT           62u
#define BYTES_PER_LINE        ( LS013B7DH03_WIDTH / 8 )
#define BYTES_PER_FRAME       ( IMAGE_HIGHT * BYTES_PER_LINE )
*/
/* STATUS VALUES  */
#define ON 1
#define OFF 0

/* NAMES ASSIGNMENT TO PINS */
#define LED3 4
#define LED4 2
#define RELAY 4

/* Communication Data Start */
#define MOD_ID 0x03
//#define MOD_ID2 0x04

#define ON_STATE 0x01
#define OFF_STATE 0x00

#define ON_SIG 0x01
#define OFF_SIG 0x02

#define ACK 0x03
#define ALIVE 0x04
#define ERASE 0x00
/* Communication Data Close */


#define APP_PKT_DATA_START 1u

#if (defined EZRADIO_PLUGIN_TRANSMIT)
static void appPacketTransmittedCallback (EZRADIODRV_Handle_t handle, Ecode_t status);
#endif //#if ( defined EZRADIO_PLUGIN_TRANSMIT )

#if (defined EZRADIO_PLUGIN_RECEIVE)
static void appPacketReceivedCallback (EZRADIODRV_Handle_t handle, Ecode_t status);
#endif

#if ( defined EZRADIO_PLUGIN_CRC_ERROR )
static void appPacketCrcErrorCallback ( EZRADIODRV_Handle_t handle, Ecode_t status );
#endif //#if ( defined EZRADIO_PLUGIN_CRC_ERROR )

/* RTC frequency */
#define APP_RTC_FREQ_HZ 4u
/* RTC timeout */
#define APP_RTC_TIMEOUT_MS ( 80000u / APP_RTC_FREQ_HZ )

/* RTC set time is expired */
static volatile bool rtcTick = false;

/** Timer used to issue time elapsed interrupt. */
static RTCDRV_TimerID_t rtcTickTimer;
static RTCDRV_TimerID_t rtcRepeateTimer;

static uint8_t radioRxPkt[EZRADIO_FIFO_SIZE];

static uint8_t radioTxPkt[EZRADIO_FIFO_SIZE] = RADIO_CONFIG_DATA_CUSTOM_PAYLOAD;


static volatile int send_flag = 0;
static volatile int relay_status = OFF;
static volatile bool appTxActive = false;

int RepeatCallbackRegister (void(*pFunction)(void*),
                            void* pParameter,
                            unsigned int frequency)
{

	if (ECODE_EMDRV_RTCDRV_OK ==
	RTCDRV_AllocateTimer( &rtcRepeateTimer))
	{
		if (ECODE_EMDRV_RTCDRV_OK ==
		RTCDRV_StartTimer(rtcRepeateTimer, rtcdrvTimerTypePeriodic, frequency,
		  (RTCDRV_Callback_t)pFunction, pParameter ))
		{
			return 0;
		}
	}

	return -1;
}

void RTC_App_IRQHandler()
{
  rtcTick = true;
}

void gpioSetup()
{
	CMU_ClockEnable(cmuClock_GPIO, true);

	GPIOINT_Init();

	GPIO_PinModeSet(gpioPortF,LED3,gpioModePushPull,0);
	GPIO_PinModeSet(gpioPortF,LED4,gpioModePushPull,0);
	GPIO_PinModeSet(gpioPortD,RELAY,gpioModePushPull,0);

}


int main(void)
{
	EZRADIODRV_HandleData_t appRadioInitData = EZRADIODRV_INIT_DEFAULT;
	EZRADIODRV_Handle_t appRadioHandle = &appRadioInitData;

	CHIP_Init();

	CMU_ClockSelectSet(cmuClock_HF, cmuSelect_HFXO);

	/* Initialize the display module. */
	//DISPLAY_Init();

	  /* Retarget stdio to the display. */
	//if (TEXTDISPLAY_EMSTATUS_OK != RETARGET_TextDisplayInit()) while(1);

	RTCDRV_Init();

	if (ECODE_EMDRV_RTCDRV_OK != RTCDRV_AllocateTimer( &rtcTickTimer) )	while (1);
	if (ECODE_EMDRV_RTCDRV_OK != RTCDRV_StartTimer(rtcTickTimer, rtcdrvTimerTypePeriodic, APP_RTC_TIMEOUT_MS,
						(RTCDRV_Callback_t)RTC_App_IRQHandler, NULL ) )
	{
		while (1);
	}

	gpioSetup();

	GPIO_PinOutClear(gpioPortD,RELAY);

	#if (defined EZRADIO_PLUGIN_RECEIVE)
	appRadioInitData.packetRx.userCallback = &appPacketReceivedCallback;
	appRadioInitData.packetRx.pktBuf = radioRxPkt;
	#endif

	#if (defined EZRADIO_PLUGIN_TRANSMIT)
	appRadioInitData.packetTx.userCallback = &appPacketTransmittedCallback;
	#endif

	#if ( defined EZRADIO_PLUGIN_CRC_ERROR )
	appRadioInitData.packetCrcError.userCallback = &appPacketCrcErrorCallback;
	#endif

	radioTxPkt[APP_PKT_DATA_START] = MOD_ID;

	//printf("BOTTOM MODULE\n");

	ezradioInit(appRadioHandle);
	ezradioResetTRxFifo();
	ezradioStartRx(appRadioHandle);
	while (1)
	{
		ezradioPluginManager(appRadioHandle);

		if(send_flag == 1)
		{
			if(!appTxActive)
			{
				appTxActive = true;
				send_flag = 0;
				ezradioStartTransmitConfigured( appRadioHandle, radioTxPkt );
			}
		}
		if(rtcTick)
		{
			rtcTick = false;
			GPIO_PinOutClear(gpioPortD,RELAY);
			relay_status = OFF;
			//printf("Transmitter Dead\n");
		}
	}
}

#if (defined EZRADIO_PLUGIN_RECEIVE)
static void appPacketReceivedCallback(EZRADIODRV_Handle_t handle, Ecode_t status)
{
	//Silent warning.
	(void)handle;

	if ( status == ECODE_EMDRV_EZRADIODRV_OK )
	{
		if ( (radioRxPkt[APP_PKT_DATA_START] == MOD_ID)
			 && (radioRxPkt[APP_PKT_DATA_START + 1] == OFF_STATE)
			 && (radioRxPkt[APP_PKT_DATA_START + 2] == ON_SIG) )
		{
			GPIO_PinOutSet(gpioPortF,LED3);
			send_flag = 1;
			GPIO_PinOutSet(gpioPortD,RELAY);
			relay_status = ON;
			//printf("ON Pkt Received\n");
			radioTxPkt[APP_PKT_DATA_START + 1] = ON_STATE;
			radioTxPkt[APP_PKT_DATA_START + 2] = ACK;
			//printf("ON ACK pkt Ready\n");
			RTCDRV_StartTimer(rtcTickTimer, rtcdrvTimerTypePeriodic, APP_RTC_TIMEOUT_MS,
				                      (RTCDRV_Callback_t)RTC_App_IRQHandler, NULL );
		}
		else if ( (radioRxPkt[APP_PKT_DATA_START] == MOD_ID)
			 && (radioRxPkt[APP_PKT_DATA_START + 1] == ON_STATE)
			 && (radioRxPkt[APP_PKT_DATA_START + 2] == OFF_SIG) )
		{
			GPIO_PinOutSet(gpioPortF,LED3);
			send_flag = 1;
			GPIO_PinOutClear(gpioPortD,RELAY);
			relay_status = OFF;
			//printf("OFF Pkt Received\n");
			radioTxPkt[APP_PKT_DATA_START + 1] = OFF_STATE;
			radioTxPkt[APP_PKT_DATA_START + 2] = ACK;
			//printf("OFF ACK pkt Ready\n");
			RTCDRV_StartTimer(rtcTickTimer, rtcdrvTimerTypePeriodic, APP_RTC_TIMEOUT_MS,
				                      (RTCDRV_Callback_t)RTC_App_IRQHandler, NULL );
		}
		else if ( (radioRxPkt[APP_PKT_DATA_START] == MOD_ID)
			 && ((radioRxPkt[APP_PKT_DATA_START + 1] == ON_STATE) || (radioRxPkt[APP_PKT_DATA_START + 1] == OFF_STATE))
			 && (radioRxPkt[APP_PKT_DATA_START + 2] == ALIVE) )
		{
			GPIO_PinOutSet(gpioPortF,LED3);
			send_flag = 1;
			//printf("ALIVE Pkt Received\n");
			if( relay_status == ON ) radioTxPkt[APP_PKT_DATA_START + 1] = ON_STATE;
			else if( relay_status == OFF ) radioTxPkt[APP_PKT_DATA_START + 1] = OFF_STATE;
			radioTxPkt[APP_PKT_DATA_START + 2] = ALIVE;
			//printf("ALIVE Pkt Ready\n");
			RTCDRV_StartTimer(rtcTickTimer, rtcdrvTimerTypePeriodic, APP_RTC_TIMEOUT_MS,
				                      (RTCDRV_Callback_t)RTC_App_IRQHandler, NULL );
		}
	}
}
#endif

#if (defined EZRADIO_PLUGIN_TRANSMIT)
static void appPacketTransmittedCallback(EZRADIODRV_Handle_t handle, Ecode_t status)
{
	if ( status == ECODE_EMDRV_EZRADIODRV_OK )
	{
		appTxActive = false;
		GPIO_PinOutClear(gpioPortF,LED3);
		//printf("Packet Sent\n");
		ezradioStartRx(handle);
	}
}
#endif //#if ( defined EZRADIO_PLUGIN_TRANSMIT )

#if ( defined EZRADIO_PLUGIN_CRC_ERROR )
static void appPacketCrcErrorCallback ( EZRADIODRV_Handle_t handle, Ecode_t status )
{
	if ( status == ECODE_EMDRV_EZRADIODRV_OK )
	{
		ezradioStartRx( handle );
	}
}
#endif
