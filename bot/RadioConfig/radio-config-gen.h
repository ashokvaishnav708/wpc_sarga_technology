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
  0x6B /* DATA0                     */,\
  0x7D /* DATA1                     */,\
  0x8D /* DATA3                     */,\
  0xB5 /* DATA4                     */,\
  0x1F /* DATA5                     */,\
  0xDC /* DATA6                     */,\
  0x80 /* DATA7                     */,\
  0xA4 /* DATA8                     */,\
  0x20 /* DATA9                     */,\
  0x13 /* DATA10                    */,\
  0x83 /* DATA11                    */,\
  0x71 /* DATA12                    */,\
  0xF5 /* DATA13                    */,\
  0xAE /* DATA14                    */,\
  0x02 /* DATA15                    */,\
  0x40 /* DATA16                    */,\
  0x7B /* DATA17                    */,\
  0x9C /* DATA18                    */,\
  0x7B /* DATA19                    */,\
  0x6F /* DATA20                    */,\
  0x2C /* DATA21                    */,\
  0x9E /* DATA22                    */,\
  0x88 /* DATA23                    */,\
  0x17 /* DATA24                    */,\
  0x83 /* DATA25                    */,\
  0xFC /* DATA26                    */,\
  0x2E /* DATA27                    */,\
  0xF7 /* DATA28                    */,\
  0x28 /* DATA29                    */,\
  0x5F /* DATA30                    */,\
  0x14 /* DATA31                    */,\
  0x99 /* DATA32                    */,\
  0xD2 /* DATA33                    */,\
  0xB1 /* DATA34                    */,\
  0x97 /* DATA35                    */,\
  0x74 /* DATA36                    */,\
  0x1E /* DATA37                    */,\
  0x57 /* DATA38                    */,\
  0x51 /* DATA39                    */,\
  0x74 /* DATA40                    */,\
  0x2B /* DATA41                    */,\
  0xBE /* DATA42                    */,\
  0x5D /* DATA43                    */,\
  0x89 /* DATA44                    */,\
  0x8C /* DATA45                    */,\
  0xD7 /* DATA46                    */,\
  0x46 /* DATA47                    */,\
  0xCE /* DATA48                    */,\
  0xED /* DATA49                    */,\
  0xCE /* DATA50                    */,\
  0x69 /* DATA51                    */,\
  0x51 /* DATA52                    */,\
  0xF5 /* DATA53                    */,\
  0x15 /* DATA54                    */,\
  0x6E /* DATA55                    */,\
  0xEA /* DATA56                    */,\
  0x4B /* DATA57                    */,\
  0xD7 /* DATA58                    */,\
  0x6C /* DATA59                    */,\
  0xDD /* DATA60                    */,\
  0x52 /* DATA61                    */,\
  0x66 /* DATA62                    */,\
  0x8E /* DATA63                    */,\
  0x8E /* DATA64                    */,\
  0xCC /* DATA65                    */,\
  0xE8 /* DATA66                    */,\
  0x14 /* DATA67                    */,\
  0x5E /* DATA68                    */,\
  0xB4 /* DATA69                    */,\
  0x7A /* DATA70                    */,\
  0xA4 /* DATA71                    */,\
  0x67 /* DATA72                    */,\
  0x20 /* DATA73                    */,\
  0x96 /* DATA74                    */,\
  0x1E /* DATA75                    */,\
  0xD0 /* DATA76                    */,\
  0xA6 /* DATA77                    */,\
  0x63 /* DATA78                    */,\
  0xBE /* DATA79                    */,\
  0x93 /* DATA80                    */,\
  0xEA /* DATA81                    */,\
  0x11 /* DATA82                    */,\
  0x34 /* DATA83                    */,\
  0x74 /* DATA84                    */,\
  0x31 /* DATA85                    */,\
  0xC3 /* DATA86                    */,\
  0x06 /* DATA87                    */,\
  0x33 /* DATA88                    */,\
  0x57 /* DATA89                    */,\
  0x74 /* DATA90                    */,\
  0x45 /* DATA91                    */,\
  0x78 /* DATA92                    */,\
  0x90 /* DATA93                    */,\
  0xD2 /* DATA94                    */,\
  0x43 /* DATA95                    */,\
  0xC9 /* DATA96                    */,\
  0x8B /* DATA97                    */,\
  0x27 /* DATA98                    */,\
  0xA1 /* DATA99                    */,\
  0xDE /* DATA100                   */,\
  0x21 /* DATA101                   */,\
  0x27 /* DATA102                   */,\
  0x34 /* DATA103                   */,\
  0xFF /* DATA104                   */,\
  0x4A /* DATA105                   */,\
  0x4C /* DATA106                   */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_0_LEN (107)


#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_NOP_0 { \
  0x00 /* CMD: Nop */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_NOP_0_LEN (1)


#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_1 { \
  0x66 /* CMD: Ezconfig array write */,\
  0x47 /* DATA0                     */,\
  0x9E /* DATA1                     */,\
  0xA7 /* DATA3                     */,\
  0x10 /* DATA4                     */,\
  0x73 /* DATA5                     */,\
  0x45 /* DATA6                     */,\
  0xA4 /* DATA7                     */,\
  0x42 /* DATA8                     */,\
  0x33 /* DATA9                     */,\
  0x26 /* DATA10                    */,\
  0xEB /* DATA11                    */,\
  0xC0 /* DATA12                    */,\
  0x03 /* DATA13                    */,\
  0x0E /* DATA14                    */,\
  0xD2 /* DATA15                    */,\
  0xF3 /* DATA16                    */,\
  0xE6 /* DATA17                    */,\
  0x27 /* DATA18                    */,\
  0x03 /* DATA19                    */,\
  0xDE /* DATA20                    */,\
  0xDA /* DATA21                    */,\
  0xC4 /* DATA22                    */,\
  0x2A /* DATA23                    */,\
  0x39 /* DATA24                    */,\
  0x42 /* DATA25                    */,\
  0x54 /* DATA26                    */,\
  0x89 /* DATA27                    */,\
  0x20 /* DATA28                    */,\
  0xDC /* DATA29                    */,\
  0x4D /* DATA30                    */,\
  0xB4 /* DATA31                    */,\
  0x22 /* DATA32                    */,\
  0x32 /* DATA33                    */,\
  0xEE /* DATA34                    */,\
  0x13 /* DATA35                    */,\
  0x17 /* DATA36                    */,\
  0x25 /* DATA37                    */,\
  0xB7 /* DATA38                    */,\
  0x52 /* DATA39                    */,\
  0x10 /* DATA40                    */,\
  0xEB /* DATA41                    */,\
  0x53 /* DATA42                    */,\
  0x59 /* DATA43                    */,\
  0x73 /* DATA44                    */,\
  0xD5 /* DATA45                    */,\
  0x66 /* DATA46                    */,\
  0xB5 /* DATA47                    */,\
  0x17 /* DATA48                    */,\
  0xE3 /* DATA49                    */,\
  0x90 /* DATA50                    */,\
  0xDE /* DATA51                    */,\
  0xAA /* DATA52                    */,\
  0x1C /* DATA53                    */,\
  0x1D /* DATA54                    */,\
  0xC1 /* DATA55                    */,\
  0xF9 /* DATA56                    */,\
  0x14 /* DATA57                    */,\
  0x63 /* DATA58                    */,\
  0xC3 /* DATA59                    */,\
  0x5E /* DATA60                    */,\
  0x6C /* DATA61                    */,\
  0xF6 /* DATA62                    */,\
  0xAB /* DATA63                    */,\
  0xE5 /* DATA64                    */,\
  0x89 /* DATA65                    */,\
  0x34 /* DATA66                    */,\
  0x7C /* DATA67                    */,\
  0xB1 /* DATA68                    */,\
  0x8A /* DATA69                    */,\
  0x33 /* DATA70                    */,\
  0x6B /* DATA71                    */,\
  0xDB /* DATA72                    */,\
  0x8E /* DATA73                    */,\
  0x51 /* DATA74                    */,\
  0x3A /* DATA75                    */,\
  0x77 /* DATA76                    */,\
  0x89 /* DATA77                    */,\
  0xA4 /* DATA78                    */,\
  0x16 /* DATA79                    */,\
  0xA7 /* DATA80                    */,\
  0x8E /* DATA81                    */,\
  0x5A /* DATA82                    */,\
  0x05 /* DATA83                    */,\
  0xC5 /* DATA84                    */,\
  0xAD /* DATA85                    */,\
  0xDA /* DATA86                    */,\
  0xC0 /* DATA87                    */,\
  0x51 /* DATA88                    */,\
  0x47 /* DATA89                    */,\
  0xDB /* DATA90                    */,\
  0xBC /* DATA91                    */,\
  0x5A /* DATA92                    */,\
  0x73 /* DATA93                    */,\
  0x56 /* DATA94                    */,\
  0x2A /* DATA95                    */,\
  0x00 /* DATA96                    */,\
  0xDB /* DATA97                    */,\
  0x6E /* DATA98                    */,\
  0x64 /* DATA99                    */,\
  0x6E /* DATA100                   */,\
  0xD1 /* DATA101                   */,\
  0x2C /* DATA102                   */,\
  0x93 /* DATA103                   */,\
  0x88 /* DATA104                   */,\
  0x38 /* DATA105                   */,\
  0x06 /* DATA106                   */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_1_LEN (107)


#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_NOP_1 { \
  0x00 /* CMD: Nop */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_NOP_1_LEN (1)


#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_2 { \
  0x66 /* CMD: Ezconfig array write */,\
  0x74 /* DATA0                     */,\
  0x20 /* DATA1                     */,\
  0x38 /* DATA3                     */,\
  0xE2 /* DATA4                     */,\
  0x2A /* DATA5                     */,\
  0xB8 /* DATA6                     */,\
  0x41 /* DATA7                     */,\
  0xF0 /* DATA8                     */,\
  0x5A /* DATA9                     */,\
  0x06 /* DATA10                    */,\
  0xDD /* DATA11                    */,\
  0x68 /* DATA12                    */\
}

#define RADIO_CONFIG_EZCONFIG_ARRAY_WRITE_2_LEN (13)


#define RADIO_CONFIG_EZCONFIG_CHECK { \
  0x19 /* CMD: Ezconfig check                  */,\
  0x62 /* CHECKSUM,CHECKSUM[7:0],CHECKSUM[7:0] */,\
  0x35 /*                                      */\
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
