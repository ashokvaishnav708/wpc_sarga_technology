// Copyright 2018 Silicon Laboratories, Inc.
//
//

// Modem configuration parameters
// version: 1.3.0.117
// afc_en: 0
// ant_div: 0
// BER_mode: 0
// Ch_Fil_Bw_AFC: 0
// Chip_Version: 2
// crystal_tol: 20
// dsa_mode: 0
// dsource: 0
// ETSI: 0
// fc: 433000000
// Fdev: 20000
// Fdev_error: 0
// fhch: 10
// fhst: 250000
// freq_xo: 30000000
// hi_pfm_div_mode: 0
// High_perf_Ch_Fil: 1
// if_mode: 2
// inputBW: 0
// Manchester: 0
// Max_Rb_Error: 0
// modulation_type: 2
// OSRtune: 0
// pm_len: 16
// pm_pattern: 0
// raw_demod: 0
// Rsymb: 10000
// RXBW: 150000
// TC: 29

// Modem configuration calculated values
// if_freq: -468750.0
// nb_filter: 4
// nb_filter_bw: 82.6375
// wb_filter: 4
// wb_filter_bw: 82.6375

// This file contains the generated ObjectAPI byte arrays for the given configuration
// Enclosing macro to prevent multiple inclusion
#ifndef __SLAB_RADIO_CONFIG__
#define __SLAB_RADIO_CONFIG__


#define RADIO_CONFIG_POWER_UP { \
  0x02 /* CMD: Power up                                               */,\
  0x01 /* BOOT_OPTIONS,PATCH[7],FUNC[5:0]                             */,\
  0x00 /* XTAL_OPTIONS,TCXO[0]                                        */,\
  0x01 /* XO_FREQ,XO_FREQ[7:0],XO_FREQ[7:0],XO_FREQ[7:0],XO_FREQ[7:0] */,\
  0xC9 /*                                                             */,\
  0xC3 /*                                                             */,\
  0x80 /*                                                             */\
}

#define RADIO_CONFIG_POWER_UP_LEN (7)


#define RADIO_CONFIG_SET_PROPERTY_INT_CTL_ENABLE { \
  0x11 /* CMD: Set property                                                               */,\
  0x01 /* GROUP: Int ctl                                                                  */,\
  0x01 /* NUM_PROPS                                                                       */,\
  0x00 /* START_PROP                                                                      */,\
  0x05 /* INT_CTL_ENABLE,CHIP_INT_STATUS_EN[2],MODEM_INT_STATUS_EN[1],PH_INT_STATUS_EN[0] */\
}

#define RADIO_CONFIG_SET_PROPERTY_INT_CTL_ENABLE_LEN (5)


#define RADIO_CONFIG_SET_PROPERTY_INT_CTL_PH_ENABLE { \
  0x11 /* CMD: Set property                                                                                                                                                                 */,\
  0x01 /* GROUP: Int ctl                                                                                                                                                                    */,\
  0x01 /* NUM_PROPS                                                                                                                                                                         */,\
  0x01 /* START_PROP                                                                                                                                                                        */,\
  0x38 /* INT_CTL_PH_ENABLE,FILTER_MATCH_EN[7],FILTER_MISS_EN[6],PACKET_SENT_EN[5],PACKET_RX_EN[4],CRC_ERROR_EN[3],ALT_CRC_ERROR_EN[2],TX_FIFO_ALMOST_EMPTY_EN[1],RX_FIFO_ALMOST_FULL_EN[0] */\
}

#define RADIO_CONFIG_SET_PROPERTY_INT_CTL_PH_ENABLE_LEN (5)


#define RADIO_CONFIG_SET_PROPERTY_INT_CTL_MODEM_ENABLE { \
  0x11 /* CMD: Set property                                                                                                                                                         */,\
  0x01 /* GROUP: Int ctl                                                                                                                                                            */,\
  0x01 /* NUM_PROPS                                                                                                                                                                 */,\
  0x02 /* START_PROP                                                                                                                                                                */,\
  0x00 /* INT_CTL_MODEM_ENABLE,RSSI_LATCH_EN[7],POSTAMBLE_DETECT_EN[6],INVALID_SYNC_EN[5],RSSI_JUMP_EN[4],RSSI_EN[3],INVALID_PREAMBLE_EN[2],PREAMBLE_DETECT_EN[1],SYNC_DETECT_EN[0] */\
}

#define RADIO_CONFIG_SET_PROPERTY_INT_CTL_MODEM_ENABLE_LEN (5)


#define RADIO_CONFIG_SET_PROPERTY_INT_CTL_CHIP_ENABLE { \
  0x11 /* CMD: Set property                                                                                                                              */,\
  0x01 /* GROUP: Int ctl                                                                                                                                 */,\
  0x01 /* NUM_PROPS                                                                                                                                      */,\
  0x03 /* START_PROP                                                                                                                                     */,\
  0x20 /* INT_CTL_CHIP_ENABLE,CAL_EN[6],FIFO_UNDERFLOW_OVERFLOW_ERROR_EN[5],STATE_CHANGE_EN[4],CMD_ERROR_EN[3],CHIP_READY_EN[2],LOW_BATT_EN[1],WUT_EN[0] */\
}

#define RADIO_CONFIG_SET_PROPERTY_INT_CTL_CHIP_ENABLE_LEN (5)


#define RADIO_CONFIG_SET_PROPERTY_FRR_CTL_A_MODE { \
  0x11 /* CMD: Set property              */,\
  0x02 /* GROUP: Frr ctl                 */,\
  0x01 /* NUM_PROPS                      */,\
  0x00 /* START_PROP                     */,\
  0x01 /* FRR_CTL_A_MODE,FRR_A_MODE[7:0] */\
}

#define RADIO_CONFIG_SET_PROPERTY_FRR_CTL_A_MODE_LEN (5)


#define RADIO_CONFIG_SET_PROPERTY_FRR_CTL_B_MODE { \
  0x11 /* CMD: Set property              */,\
  0x02 /* GROUP: Frr ctl                 */,\
  0x01 /* NUM_PROPS                      */,\
  0x01 /* START_PROP                     */,\
  0x02 /* FRR_CTL_B_MODE,FRR_B_MODE[7:0] */\
}

#define RADIO_CONFIG_SET_PROPERTY_FRR_CTL_B_MODE_LEN (5)


#define RADIO_CONFIG_SET_PROPERTY_FRR_CTL_C_MODE { \
  0x11 /* CMD: Set property              */,\
  0x02 /* GROUP: Frr ctl                 */,\
  0x01 /* NUM_PROPS                      */,\
  0x02 /* START_PROP                     */,\
  0x09 /* FRR_CTL_C_MODE,FRR_C_MODE[7:0] */\
}

#define RADIO_CONFIG_SET_PROPERTY_FRR_CTL_C_MODE_LEN (5)


#define RADIO_CONFIG_SET_PROPERTY_FRR_CTL_D_MODE { \
  0x11 /* CMD: Set property              */,\
  0x02 /* GROUP: Frr ctl                 */,\
  0x01 /* NUM_PROPS                      */,\
  0x03 /* START_PROP                     */,\
  0x00 /* FRR_CTL_D_MODE,FRR_D_MODE[7:0] */\
}

#define RADIO_CONFIG_SET_PROPERTY_FRR_CTL_D_MODE_LEN (5)


#define RADIO_CONFIG_SET_PROPERTY_EZCONFIG_XO_TUNE { \
  0x11 /* CMD: Set property                */,\
  0x24 /* GROUP: Ezconfig                  */,\
  0x01 /* NUM_PROPS                        */,\
  0x03 /* START_PROP                       */,\
  0x45 /* EZCONFIG_XO_TUNE,TUNE_VALUE[6:0] */\
}

#define RADIO_CONFIG_SET_PROPERTY_EZCONFIG_XO_TUNE_LEN (5)


#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_0 { \
  0x66 /* CMD: Ezconfig array write */,\
  0x3F /* DATA0                     */,\
  0x86 /* DATA1                     */,\
  0x92 /* DATA3                     */,\
  0xEB /* DATA4                     */,\
  0x9C /* DATA5                     */,\
  0x14 /* DATA6                     */,\
  0x3F /* DATA7                     */,\
  0x90 /* DATA8                     */,\
  0x15 /* DATA9                     */,\
  0x1F /* DATA10                    */,\
  0x1F /* DATA11                    */,\
  0x11 /* DATA12                    */,\
  0xF7 /* DATA13                    */,\
  0xEE /* DATA14                    */,\
  0x8B /* DATA15                    */,\
  0xF0 /* DATA16                    */,\
  0xE8 /* DATA17                    */,\
  0x56 /* DATA18                    */,\
  0xA7 /* DATA19                    */,\
  0x1D /* DATA20                    */,\
  0xCB /* DATA21                    */,\
  0xE9 /* DATA22                    */,\
  0xEB /* DATA23                    */,\
  0x6C /* DATA24                    */,\
  0xDA /* DATA25                    */,\
  0x39 /* DATA26                    */,\
  0x6F /* DATA27                    */,\
  0xEC /* DATA28                    */,\
  0xF7 /* DATA29                    */,\
  0xC8 /* DATA30                    */,\
  0xA2 /* DATA31                    */,\
  0x50 /* DATA32                    */,\
  0xD0 /* DATA33                    */,\
  0x07 /* DATA34                    */,\
  0x20 /* DATA35                    */,\
  0x78 /* DATA36                    */,\
  0x8E /* DATA37                    */,\
  0x15 /* DATA38                    */,\
  0xB7 /* DATA39                    */,\
  0xA0 /* DATA40                    */,\
  0x8E /* DATA41                    */,\
  0x9B /* DATA42                    */,\
  0x52 /* DATA43                    */,\
  0x75 /* DATA44                    */,\
  0xAC /* DATA45                    */,\
  0x13 /* DATA46                    */,\
  0x11 /* DATA47                    */,\
  0xA8 /* DATA48                    */,\
  0x48 /* DATA49                    */,\
  0x47 /* DATA50                    */,\
  0x84 /* DATA51                    */,\
  0x03 /* DATA52                    */,\
  0x7B /* DATA53                    */,\
  0xD4 /* DATA54                    */,\
  0xC3 /* DATA55                    */,\
  0x8E /* DATA56                    */,\
  0xF2 /* DATA57                    */,\
  0x15 /* DATA58                    */,\
  0x73 /* DATA59                    */,\
  0x15 /* DATA60                    */,\
  0xA5 /* DATA61                    */,\
  0xE8 /* DATA62                    */,\
  0x91 /* DATA63                    */,\
  0xED /* DATA64                    */,\
  0xC4 /* DATA65                    */,\
  0x9E /* DATA66                    */,\
  0x15 /* DATA67                    */,\
  0x6A /* DATA68                    */,\
  0x05 /* DATA69                    */,\
  0x64 /* DATA70                    */,\
  0x46 /* DATA71                    */,\
  0x65 /* DATA72                    */,\
  0x6C /* DATA73                    */,\
  0x3D /* DATA74                    */,\
  0x4A /* DATA75                    */,\
  0xD7 /* DATA76                    */,\
  0x40 /* DATA77                    */,\
  0x2A /* DATA78                    */,\
  0x50 /* DATA79                    */,\
  0x42 /* DATA80                    */,\
  0x61 /* DATA81                    */,\
  0xC4 /* DATA82                    */,\
  0xFF /* DATA83                    */,\
  0x3C /* DATA84                    */,\
  0x32 /* DATA85                    */,\
  0x70 /* DATA86                    */,\
  0xA9 /* DATA87                    */,\
  0x7B /* DATA88                    */,\
  0x0F /* DATA89                    */,\
  0x18 /* DATA90                    */,\
  0xFE /* DATA91                    */,\
  0x89 /* DATA92                    */,\
  0x29 /* DATA93                    */,\
  0x6E /* DATA94                    */,\
  0x52 /* DATA95                    */,\
  0x27 /* DATA96                    */,\
  0x89 /* DATA97                    */,\
  0x43 /* DATA98                    */,\
  0xFA /* DATA99                    */,\
  0x5A /* DATA100                   */,\
  0xEA /* DATA101                   */,\
  0x8A /* DATA102                   */,\
  0x6C /* DATA103                   */,\
  0xCE /* DATA104                   */,\
  0x30 /* DATA105                   */,\
  0xF9 /* DATA106                   */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_0_LEN (107)


#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_NOP_0 { \
  0x00 /* CMD: Nop */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_NOP_0_LEN (1)


#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_1 { \
  0x66 /* CMD: Ezconfig array write */,\
  0xE3 /* DATA0                     */,\
  0xFD /* DATA1                     */,\
  0x35 /* DATA3                     */,\
  0x30 /* DATA4                     */,\
  0xD0 /* DATA5                     */,\
  0x45 /* DATA6                     */,\
  0x6E /* DATA7                     */,\
  0xF4 /* DATA8                     */,\
  0x37 /* DATA9                     */,\
  0x8F /* DATA10                    */,\
  0x0F /* DATA11                    */,\
  0x6E /* DATA12                    */,\
  0xB9 /* DATA13                    */,\
  0x73 /* DATA14                    */,\
  0x40 /* DATA15                    */,\
  0x97 /* DATA16                    */,\
  0xDD /* DATA17                    */,\
  0xE9 /* DATA18                    */,\
  0x32 /* DATA19                    */,\
  0xD0 /* DATA20                    */,\
  0x5D /* DATA21                    */,\
  0xF2 /* DATA22                    */,\
  0x8C /* DATA23                    */,\
  0x53 /* DATA24                    */,\
  0xE0 /* DATA25                    */,\
  0xE8 /* DATA26                    */,\
  0xC2 /* DATA27                    */,\
  0x12 /* DATA28                    */,\
  0xCC /* DATA29                    */,\
  0x84 /* DATA30                    */,\
  0x62 /* DATA31                    */,\
  0x66 /* DATA32                    */,\
  0x5D /* DATA33                    */,\
  0x1D /* DATA34                    */,\
  0x52 /* DATA35                    */,\
  0xB8 /* DATA36                    */,\
  0x42 /* DATA37                    */,\
  0x02 /* DATA38                    */,\
  0xB8 /* DATA39                    */,\
  0xD7 /* DATA40                    */,\
  0x03 /* DATA41                    */,\
  0xB8 /* DATA42                    */,\
  0x50 /* DATA43                    */,\
  0x36 /* DATA44                    */,\
  0x78 /* DATA45                    */,\
  0x1A /* DATA46                    */,\
  0x56 /* DATA47                    */,\
  0x59 /* DATA48                    */,\
  0x0E /* DATA49                    */,\
  0x53 /* DATA50                    */,\
  0x39 /* DATA51                    */,\
  0x7B /* DATA52                    */,\
  0xA1 /* DATA53                    */,\
  0x7C /* DATA54                    */,\
  0x06 /* DATA55                    */,\
  0x2B /* DATA56                    */,\
  0x69 /* DATA57                    */,\
  0x82 /* DATA58                    */,\
  0x88 /* DATA59                    */,\
  0xA1 /* DATA60                    */,\
  0xD7 /* DATA61                    */,\
  0x6D /* DATA62                    */,\
  0x64 /* DATA63                    */,\
  0x17 /* DATA64                    */,\
  0x0B /* DATA65                    */,\
  0x17 /* DATA66                    */,\
  0xBF /* DATA67                    */,\
  0xF1 /* DATA68                    */,\
  0x86 /* DATA69                    */,\
  0x92 /* DATA70                    */,\
  0x80 /* DATA71                    */,\
  0x67 /* DATA72                    */,\
  0x70 /* DATA73                    */,\
  0xD8 /* DATA74                    */,\
  0x0E /* DATA75                    */,\
  0xF6 /* DATA76                    */,\
  0x3D /* DATA77                    */,\
  0x1A /* DATA78                    */,\
  0x2A /* DATA79                    */,\
  0xAB /* DATA80                    */,\
  0x24 /* DATA81                    */,\
  0x8E /* DATA82                    */,\
  0x0B /* DATA83                    */,\
  0x1F /* DATA84                    */,\
  0x5A /* DATA85                    */,\
  0x38 /* DATA86                    */,\
  0xB7 /* DATA87                    */,\
  0x2C /* DATA88                    */,\
  0x78 /* DATA89                    */,\
  0x5E /* DATA90                    */,\
  0x2F /* DATA91                    */,\
  0x2E /* DATA92                    */,\
  0x2B /* DATA93                    */,\
  0xB2 /* DATA94                    */,\
  0xA1 /* DATA95                    */,\
  0x6B /* DATA96                    */,\
  0x94 /* DATA97                    */,\
  0xB0 /* DATA98                    */,\
  0x0B /* DATA99                    */,\
  0xC1 /* DATA100                   */,\
  0x52 /* DATA101                   */,\
  0xC1 /* DATA102                   */,\
  0xFD /* DATA103                   */,\
  0x8E /* DATA104                   */,\
  0x41 /* DATA105                   */,\
  0x01 /* DATA106                   */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_1_LEN (107)


#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_NOP_1 { \
  0x00 /* CMD: Nop */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_NOP_1_LEN (1)


#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_2 { \
  0x66 /* CMD: Ezconfig array write */,\
  0x7C /* DATA0                     */,\
  0x0D /* DATA1                     */,\
  0xE6 /* DATA3                     */,\
  0xC2 /* DATA4                     */,\
  0x22 /* DATA5                     */,\
  0x47 /* DATA6                     */,\
  0x73 /* DATA7                     */,\
  0x58 /* DATA8                     */,\
  0x09 /* DATA9                     */,\
  0x16 /* DATA10                    */,\
  0x51 /* DATA11                    */,\
  0x25 /* DATA12                    */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_2_LEN (13)


#define RADIO_CONFIG_EZCONFIG_CHECK { \
  0x19 /* CMD: Ezconfig check                  */,\
  0x2E /* CHECKSUM,CHECKSUM[7:0],CHECKSUM[7:0] */,\
  0xB9 /*                                      */\
}

#define RADIO_CONFIG_EZCONFIG_CHECK_LEN (3)


#define RADIO_CONFIG_GPIO_PIN_CFG { \
  0x13 /* CMD: Gpio pin cfg                */,\
  0x1D /* GPIO0,PULL_CTL[6],GPIO_MODE[5:0] */,\
  0x1D /* GPIO1,PULL_CTL[6],GPIO_MODE[5:0] */,\
  0x20 /* GPIO2,PULL_CTL[6],GPIO_MODE[5:0] */,\
  0x21 /* GPIO3,PULL_CTL[6],GPIO_MODE[5:0] */,\
  0x00 /* NIRQ,PULL_CTL[6],NIRQ_MODE[5:0]  */,\
  0x00 /* SDO,PULL_CTL[6],SDO_MODE[5:0]    */,\
  0x00 /* GEN_CONFIG,DRV_STRENGTH[6:5]     */\
}

#define RADIO_CONFIG_GPIO_PIN_CFG_LEN (8)


#define RADIO_CONFIG_COUNT (17)


#endif // __SLAB_RADIO_CONFIG__


//        _  _                          
//       | )/ )         Wireless        
//    \\ |//,' __       Application     
//    (")(_)-"()))=-    Software        
//       (\\            Platform        
