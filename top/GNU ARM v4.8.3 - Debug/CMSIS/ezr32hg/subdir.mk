################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/Device/SiliconLabs/EZR32HG/Source/system_ezr32hg.c 

S_UPPER_SRCS += \
C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/Device/SiliconLabs/EZR32HG/Source/GCC/startup_ezr32hg.S 

OBJS += \
./CMSIS/ezr32hg/startup_ezr32hg.o \
./CMSIS/ezr32hg/system_ezr32hg.o 

C_DEPS += \
./CMSIS/ezr32hg/system_ezr32hg.d 


# Each subdirectory must supply rules for building sources it contributes
CMSIS/ezr32hg/startup_ezr32hg.o: C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/Device/SiliconLabs/EZR32HG/Source/GCC/startup_ezr32hg.S
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Assembler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m0plus -mthumb -c -x assembler-with-cpp -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/SLWSTK6241A_EZR32HG/examples/ezradio_simple_trx/config/RadioConfig" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/SLWSTK6241A_EZR32HG/examples/ezradio_simple_trx" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/SLWSTK6241A_EZR32HG/examples/ezradio_simple_trx/config" -IC:/Users/ST-BETA/SimplicityStudio/v3_workspace/top/RadioConfig -I"C:\Users\ST-BETA\SimplicityStudio\v3_workspace\top\RadioConfig" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/Device/SiliconLabs/EZR32HG/Include" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/SLWSTK6241A_EZR32HG/config" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emlib/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/common/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/config" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/dmadrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ezradiodrv/common/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ezradiodrv/common/inc/si4x55" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ezradiodrv/plugins/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ezradiodrv/si4455/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/gpiointerrupt/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/nvm/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/rtcdrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/sleep/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/spidrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/uartdrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ustimer/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/reptile/glib" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/reptile/glib/glib" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/reptile/glib/dmd" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/reptile/glib/dmd/ssd2119" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/CMSIS/Include" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/common/drivers" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/common/bsp" '-DSL_WSTK6241A=1' '-DEZRADIO_DRIVER_EXTENDED_SUPPORT=1' '-DEZRADIO_DRIVER_FULL_SUPPORT=1' '-DRADIO_USE_GENERATED_CONFIGURATION=1' '-DEZR32HG320F64R55=1' -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

CMSIS/ezr32hg/system_ezr32hg.o: C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/Device/SiliconLabs/EZR32HG/Source/system_ezr32hg.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m0plus -mthumb '-DSL_WSTK6241A=1' '-DEZRADIO_DRIVER_EXTENDED_SUPPORT=1' '-DEZRADIO_DRIVER_FULL_SUPPORT=1' '-DRADIO_USE_GENERATED_CONFIGURATION=1' '-DEZR32HG320F64R55=1' -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/SLWSTK6241A_EZR32HG/examples/ezradio_simple_trx/config/RadioConfig" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/SLWSTK6241A_EZR32HG/examples/ezradio_simple_trx" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/SLWSTK6241A_EZR32HG/examples/ezradio_simple_trx/config" -IC:/Users/ST-BETA/SimplicityStudio/v3_workspace/top/RadioConfig -I"C:\Users\ST-BETA\SimplicityStudio\v3_workspace\top\RadioConfig" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/Device/SiliconLabs/EZR32HG/Include" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/SLWSTK6241A_EZR32HG/config" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emlib/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/common/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/config" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/dmadrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ezradiodrv/common/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ezradiodrv/common/inc/si4x55" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ezradiodrv/plugins/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ezradiodrv/si4455/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/gpiointerrupt/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/nvm/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/rtcdrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/sleep/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/spidrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/uartdrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/emdrv/ustimer/inc" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/reptile/glib" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/reptile/glib/glib" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/reptile/glib/dmd" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/reptile/glib/dmd/ssd2119" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/CMSIS/Include" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/common/drivers" -I"C:/SiliconLabs/SimplicityStudio/v3/developer/sdks/efm32/v2/kits/common/bsp" -Os -Wall -c -fmessage-length=0 -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -std=c99 -MMD -MP -MF"CMSIS/ezr32hg/system_ezr32hg.d" -MT"CMSIS/ezr32hg/system_ezr32hg.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


