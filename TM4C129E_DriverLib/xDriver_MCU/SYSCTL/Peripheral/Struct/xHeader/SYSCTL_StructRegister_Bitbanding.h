/**
 *
 * @file SYSCTL_StructRegister_Bitbanding.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 20 jun. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

typedef volatile struct
{
    volatile const UBase_t MINOR [8];
    volatile const UBase_t MAJOR [8];
    volatile const UBase_t CLASS [8];
    const UBase_t reserved [4];
    volatile const UBase_t VER [3];
    const UBase_t reserved1;
}BITBANDING_DID0_t;

typedef volatile struct
{
    volatile const UBase_t QUAL [2];
    volatile const UBase_t ROHS;
    volatile const UBase_t PKG [2];
    volatile const UBase_t TEMP [3];
    const UBase_t reserved [5];
    volatile const UBase_t PINCOUNT [3];
    volatile const UBase_t PARTNO [8];
    volatile const UBase_t FAM [4];
    volatile const UBase_t VER [4];
}BITBANDING_DID1_t;

typedef volatile struct
{
    volatile UBase_t VDD_UBOR [2];
    const UBase_t reserved [6];
    volatile UBase_t VDDA_UBOR [2];
    const UBase_t reserved1 [22];
}BITBANDING_PTBOCTL_t;

typedef volatile struct
{
    const UBase_t reserved;
    volatile const UBase_t BORRIS;
    const UBase_t reserved1;
    volatile const UBase_t MOFRIS;
    const UBase_t reserved2 [2];
    volatile const UBase_t PLLLRIS;
    volatile const UBase_t reserved3;
    volatile const UBase_t MOSCPUPRIS;
    const UBase_t reserved4 [23];
}BITBANDING_RIS_t;

typedef volatile struct
{
    const UBase_t reserved;
    volatile UBase_t BORIM;
    const UBase_t reserved1;
    volatile UBase_t MOFIM;
    const UBase_t reserved2 [2];
    volatile UBase_t PLLLIM;
    volatile UBase_t reserved3;
    volatile UBase_t MOSCPUPIM;
    const UBase_t reserved4 [23];
}BITBANDING_IMC_t;

typedef volatile struct
{
    const UBase_t reserved;
    volatile UBase_t BORMIS;
    const UBase_t reserved1;
    volatile UBase_t MOFMIS;
    const UBase_t reserved2 [2];
    volatile UBase_t PLLLMIS;
    volatile UBase_t reserved3;
    volatile UBase_t MOSCPUPMIS;
    const UBase_t reserved4 [23];
}BITBANDING_MISC_t;

typedef volatile struct
{
    volatile UBase_t EXT;
    volatile UBase_t POR;
    volatile UBase_t BOR;
    volatile UBase_t WDT0_;
    volatile UBase_t SW;
    volatile UBase_t WDT1_;
    const UBase_t reserved [6];
    volatile UBase_t HSSR;
    const UBase_t reserved1 [3];
    volatile UBase_t MOSCFAIL;
    const UBase_t reserved2:15;
}BITBANDING_RESC_t;

typedef volatile struct
{
    volatile UBase_t VDD_UBOR;
    const UBase_t reserved [3];
    volatile UBase_t VDDA_UBOR;
    const UBase_t reserved1 [27];
}BITBANDING_PWRTC_t;

typedef volatile struct
{
    volatile UBase_t EXTERNAL;
    const UBase_t reserved;
    volatile UBase_t POWER;
    volatile UBase_t WDT0_;
    const UBase_t reserved1;
    volatile UBase_t WDT1_;
    const UBase_t reserved2 [3];
    volatile UBase_t TAMPER;
    const UBase_t reserved3 [6];
    volatile UBase_t MOSCFAIL;
    const UBase_t reserved4:15;
}BITBANDING_NMIC_t;

typedef volatile struct
{
    volatile UBase_t CVAL;
    volatile UBase_t MOSCIM;
    volatile UBase_t NOXTAL;
    volatile UBase_t PWRDN;
    volatile UBase_t OSCRNG;
    const UBase_t reserved [27];
}BITBANDING_MOSCCTL_t;

typedef volatile struct
{
    volatile const UBase_t RVP [32];
}BITBANDING_RVP_t;

typedef volatile struct
{
    volatile UBase_t READ_ENABLE0;
    volatile UBase_t READ_ENABLE1;
    volatile UBase_t READ_ENABLE2;
    volatile UBase_t READ_ENABLE3;
    volatile UBase_t READ_ENABLE4;
    volatile UBase_t READ_ENABLE5;
    volatile UBase_t READ_ENABLE6;
    volatile UBase_t READ_ENABLE7;
    volatile UBase_t READ_ENABLE8;
    volatile UBase_t READ_ENABLE9;
    volatile UBase_t READ_ENABLE10;
    volatile UBase_t READ_ENABLE11;
    volatile UBase_t READ_ENABLE12;
    volatile UBase_t READ_ENABLE13;
    volatile UBase_t READ_ENABLE14;
    volatile UBase_t READ_ENABLE15;
    volatile UBase_t READ_ENABLE16;
    volatile UBase_t READ_ENABLE17;
    volatile UBase_t READ_ENABLE18;
    volatile UBase_t READ_ENABLE19;
    volatile UBase_t READ_ENABLE20;
    volatile UBase_t READ_ENABLE21;
    volatile UBase_t READ_ENABLE22;
    volatile UBase_t READ_ENABLE23;
    volatile UBase_t READ_ENABLE24;
    volatile UBase_t READ_ENABLE25;
    volatile UBase_t READ_ENABLE26;
    volatile UBase_t READ_ENABLE27;
    volatile UBase_t READ_ENABLE28;
    volatile UBase_t READ_ENABLE29;
    volatile UBase_t READ_ENABLE30;
    volatile UBase_t READ_ENABLE31;
}BITBANDING_FMPRE_t;

typedef volatile struct
{
    volatile UBase_t PROG_ENABLE0;
    volatile UBase_t PROG_ENABLE1;
    volatile UBase_t PROG_ENABLE2;
    volatile UBase_t PROG_ENABLE3;
    volatile UBase_t PROG_ENABLE4;
    volatile UBase_t PROG_ENABLE5;
    volatile UBase_t PROG_ENABLE6;
    volatile UBase_t PROG_ENABLE7;
    volatile UBase_t PROG_ENABLE8;
    volatile UBase_t PROG_ENABLE9;
    volatile UBase_t PROG_ENABLE10;
    volatile UBase_t PROG_ENABLE11;
    volatile UBase_t PROG_ENABLE12;
    volatile UBase_t PROG_ENABLE13;
    volatile UBase_t PROG_ENABLE14;
    volatile UBase_t PROG_ENABLE15;
    volatile UBase_t PROG_ENABLE16;
    volatile UBase_t PROG_ENABLE17;
    volatile UBase_t PROG_ENABLE18;
    volatile UBase_t PROG_ENABLE19;
    volatile UBase_t PROG_ENABLE20;
    volatile UBase_t PROG_ENABLE21;
    volatile UBase_t PROG_ENABLE22;
    volatile UBase_t PROG_ENABLE23;
    volatile UBase_t PROG_ENABLE24;
    volatile UBase_t PROG_ENABLE25;
    volatile UBase_t PROG_ENABLE26;
    volatile UBase_t PROG_ENABLE27;
    volatile UBase_t PROG_ENABLE28;
    volatile UBase_t PROG_ENABLE29;
    volatile UBase_t PROG_ENABLE30;
    volatile UBase_t PROG_ENABLE31;
}BITBANDING_FMPPE_t;

typedef volatile struct
{
    volatile UBase_t PSYSDIV [10];
    volatile UBase_t OSYSDIV [10];
    volatile UBase_t OSCSRC [4];
    volatile UBase_t PLLSRC [4];
    volatile UBase_t USEPLL;
    volatile UBase_t ACG;
    volatile UBase_t NEWFREQ;
    volatile UBase_t MEMTIMU;
}BITBANDING_RSCLKCFG_t;

typedef volatile struct
{
    volatile UBase_t FWS [4];
    const UBase_t reserved;
    volatile UBase_t FBCE;
    volatile UBase_t FBCHT [4];
    const UBase_t reserved1 [6];
    volatile UBase_t EWS [4];
    const UBase_t reserved2;
    volatile UBase_t EBCE;
    volatile UBase_t EBCHT [4];
    const UBase_t reserved3 [6];
}BITBANDING_MEMTIM0_t;

typedef volatile struct
{
    volatile UBase_t ALTCLK [4];
    const UBase_t reserved [28];
}BITBANDING_ALTCLKCFG_t;

typedef volatile struct
{
    volatile UBase_t DSSYSDIV [10];
    const UBase_t reserved [10];
    volatile UBase_t DSOSCSRC [4];
    const UBase_t reserved1 [6];
    volatile UBase_t MOSCDPD;
    volatile UBase_t PIOSCPD;
}BITBANDING_DSCLKCFG_t;

typedef volatile struct
{
    volatile UBase_t DIV [8];
    const UBase_t reserved [8];
    volatile UBase_t SRC [2];
    const UBase_t reserved1 [13];
    volatile UBase_t EN;
}BITBANDING_DIVSCLK_t;

typedef volatile struct
{
    volatile const UBase_t FPU_;
    const UBase_t reserved [4];
    volatile const UBase_t LDOSEQ;
    const UBase_t reserved1 [2];
    volatile const UBase_t FLASHLPM;
    const UBase_t reserved2;
    volatile const UBase_t SRAMLPM;
    volatile const UBase_t SRAMSM;
    volatile const UBase_t PIOSCPDE;
    const UBase_t reserved3 [3];
    volatile const UBase_t TSPDE;
    volatile const UBase_t LDOSME;
    const UBase_t reserved4 [14];
}BITBANDING_SYSPROP_t;

typedef volatile struct
{
    volatile UBase_t UT [7];
    const UBase_t reserved;
    volatile UBase_t UPDATE;
    volatile UBase_t CAL;
    const UBase_t reserved1 [21];
    volatile UBase_t UTEN;
}BITBANDING_PIOSCCAL_t;

typedef volatile struct
{
    volatile const UBase_t CT [7];
    const UBase_t reserved;
    volatile const UBase_t RESULT [2];
    const UBase_t reserved1 [6];
    volatile const UBase_t DT [7];
    const UBase_t reserved2 [9];
}BITBANDING_PIOSCSTAT_t;

typedef volatile struct
{
    volatile const UBase_t MINT [10];
    volatile const UBase_t MFRAC [10];
    const UBase_t reserved [3];
    volatile const UBase_t PLLPWR;
    const UBase_t reserved1 [8];
}BITBANDING_PLLFREQ0_t;

typedef volatile struct
{
    volatile UBase_t N [5];
    const UBase_t reserved [3];
    volatile UBase_t Q [5];
    const UBase_t reserved1 [19];
}BITBANDING_PLLFREQ1_t;

typedef volatile struct
{
    volatile const UBase_t LOCK;
    const UBase_t reserved [31];
}BITBANDING_PLLSTAT_t;

typedef volatile struct
{
    volatile UBase_t SRAMPM [2];
    const UBase_t reserved [2];
    volatile UBase_t FLASHPM [2];
    const UBase_t reserved1 [26];
}BITBANDING_SLPPWRCFG_t;

typedef volatile struct
{
    volatile UBase_t SRAMPM [2];
    const UBase_t reserved [2];
    volatile UBase_t FLASHPM [2];
    const UBase_t reserved1 [2];
    volatile UBase_t TSPD;
    volatile UBase_t LDOSM;
    const UBase_t reserved2 [22];
}BITBANDING_DSLPPWRCFG_t;

typedef volatile struct
{
    volatile const UBase_t FWB;
    const UBase_t reserved [31];
}BITBANDING_NVMSTAT_t;

typedef volatile struct
{
    volatile UBase_t VLDO [8];
    const UBase_t reserved [23];
    volatile UBase_t VADJEN;
}BITBANDING_LDOSPCTL_t;

typedef volatile struct
{
    volatile const UBase_t NOPLL [8];
    volatile const UBase_t WITHPLL [8];
    const UBase_t reserved [16];
}BITBANDING_LDOSPCAL_t;

typedef volatile struct
{
    volatile UBase_t VLDO [8];
    const UBase_t reserved [23];
    volatile UBase_t VADJEN;
}BITBANDING_LDODPCTL_t;

typedef volatile struct
{
    volatile const UBase_t KHZ30 [8];
    volatile const UBase_t WITHPLL [8];
    const UBase_t reserved [16];
}BITBANDING_LDODPCAL_t;

typedef volatile struct
{
    volatile const UBase_t SPDERR;
    volatile const UBase_t FPDERR;
    volatile const UBase_t PPDERR;
    volatile const UBase_t LDMINERR;
    volatile const UBase_t LSMINERR;
    const UBase_t reserved;
    volatile const UBase_t LMAXERR;
    volatile const UBase_t PPDW;
    const UBase_t reserved1:8;
    volatile const UBase_t PRACT;
    volatile const UBase_t LOWPWR;
    volatile const UBase_t FLASHLP;
    volatile const UBase_t LDOUA;
    const UBase_t reserved2:12;
}BITBANDING_SDPMST_t;

typedef volatile struct
{
    volatile UBase_t EXTRES [2];
    volatile UBase_t BOR [2];
    volatile UBase_t WDOG0 [2];
    volatile UBase_t WDOG1 [2];
    const UBase_t reserved [24];
}BITBANDING_RESBEHAVCTL_t;

typedef volatile struct
{
    volatile UBase_t CDOFF [24];
    volatile UBase_t KEY [8];
}BITBANDING_HSSR_t;

typedef volatile struct
{
    volatile const UBase_t PWRSTAT [2];
    volatile const UBase_t MEMSTAT [2];
    const UBase_t reserved [28];
}BITBANDING_USBPDS_t;

typedef volatile struct
{
    volatile UBase_t PWRCTL [2];
    const UBase_t reserved [30];
}BITBANDING_USBMPC_t;

typedef volatile struct
{
    volatile const UBase_t PWRSTAT [2];
    volatile const UBase_t MEMSTAT [2];
    const UBase_t reserved [28];
}BITBANDING_EMACPDS_t;

typedef volatile struct
{
    volatile UBase_t PWRCTL [2];
    const UBase_t reserved [30];
}BITBANDING_EMACMPC_t;

typedef volatile struct
{
    volatile const UBase_t PWRSTAT [2];
    volatile const UBase_t MEMSTAT [2];
    const UBase_t reserved [28];
}BITBANDING_CAN0PDS_t;

typedef volatile struct
{
    volatile UBase_t PWRCTL [2];
    const UBase_t reserved [30];
}BITBANDING_CAN0MPC_t;

typedef volatile struct
{
    volatile const UBase_t PWRSTAT [2];
    volatile const UBase_t MEMSTAT [2];
    const UBase_t reserved [28];
}BITBANDING_CAN1PDS_t;

typedef volatile struct
{
    volatile UBase_t PWRCTL [2];
    const UBase_t reserved [30];
}BITBANDING_CAN1MPC_t;

typedef volatile struct
{
    volatile const UBase_t DBG0;
    volatile const UBase_t DBG1;
    const UBase_t reserved [2];
    volatile const UBase_t KEY;
    const UBase_t reserved1 [3];
    volatile const UBase_t EN;
    volatile const UBase_t POL;
    volatile const UBase_t PIN [3];
    volatile const UBase_t PORT [3];
    const UBase_t reserved2 [15];
    volatile const UBase_t NW;
}BITBANDING_BOOTCFG_t;

typedef volatile struct
{
    volatile const UBase_t DATA [32];
}BITBANDING_USER_REG_t;

typedef volatile struct
{
    volatile UBase_t P0;
    volatile UBase_t P1;
    volatile UBase_t P2;
    volatile UBase_t P3;
    volatile UBase_t P4;
    volatile UBase_t P5;
    volatile UBase_t P6;
    volatile UBase_t P7;
    volatile UBase_t P8;
    volatile UBase_t P9;
    volatile UBase_t P10;
    volatile UBase_t P11;
    volatile UBase_t P12;
    volatile UBase_t P13;
    volatile UBase_t P14;
    volatile UBase_t P15;
    volatile UBase_t P16;
    volatile UBase_t P17;
    volatile UBase_t P18;
    volatile UBase_t P19;
    volatile UBase_t P20;
    volatile UBase_t P21;
    volatile UBase_t P22;
    volatile UBase_t P23;
    volatile UBase_t P24;
    volatile UBase_t P25;
    volatile UBase_t P26;
    volatile UBase_t P27;
    volatile UBase_t P28;
    volatile UBase_t P29;
    volatile UBase_t P30;
    volatile UBase_t P31;
}BITBANDING_PERIPHERAL_t;

typedef volatile struct
{
    volatile UBase_t WDT0_;
    volatile UBase_t WDT1_;
    const UBase_t reserved:30;
}BITBANDING_PERIPHERAL_WD_t;

typedef volatile struct
{
    volatile UBase_t TIMER0_;
    volatile UBase_t TIMER1_;
    volatile UBase_t TIMER2_;
    volatile UBase_t TIMER3_;
    volatile UBase_t TIMER4_;
    volatile UBase_t TIMER5_;
    volatile UBase_t TIMER6_;
    volatile UBase_t TIMER7_;
    const UBase_t reserved [24];
}BITBANDING_PERIPHERAL_TIMER_t;

typedef volatile struct
{
    volatile UBase_t GPIOA_;
    volatile UBase_t GPIOB_;
    volatile UBase_t GPIOC_;
    volatile UBase_t GPIOD_;
    volatile UBase_t GPIOE_;
    volatile UBase_t GPIOF_;
    volatile UBase_t GPIOG_;
    volatile UBase_t GPIOH_;
    volatile UBase_t GPIOJ_;
    volatile UBase_t GPIOK_;
    volatile UBase_t GPIOL_;
    volatile UBase_t GPIOM_;
    volatile UBase_t GPION_;
    volatile UBase_t GPIOP_;
    volatile UBase_t GPIOQ_;
    const UBase_t reserved [17];
}BITBANDING_PERIPHERAL_GPIO_t;

typedef volatile struct
{
    volatile UBase_t UDMA_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_DMA_t;

typedef volatile struct
{
    volatile UBase_t EPI0_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_EPI_t;

typedef volatile struct
{
    volatile UBase_t HIB_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_HIB_t;

typedef volatile struct
{
    volatile UBase_t UART0_;
    volatile UBase_t UART1_;
    volatile UBase_t UART2_;
    volatile UBase_t UART3_;
    volatile UBase_t UART4_;
    volatile UBase_t UART5_;
    volatile UBase_t UART6_;
    volatile UBase_t UART7_;
    const UBase_t reserved [24];
}BITBANDING_PERIPHERAL_UART_t;

typedef volatile struct
{
    volatile UBase_t SSI0_;
    volatile UBase_t SSI1_;
    volatile UBase_t SSI2_;
    volatile UBase_t SSI3_;
    const UBase_t reserved [28];
}BITBANDING_PERIPHERAL_SSI_t;

typedef volatile struct
{
    volatile UBase_t I2C0_;
    volatile UBase_t I2C1_;
    volatile UBase_t I2C2_;
    volatile UBase_t I2C3_;
    volatile UBase_t I2C4_;
    volatile UBase_t I2C5_;
    volatile UBase_t I2C6_;
    volatile UBase_t I2C7_;
    volatile UBase_t I2C8_;
    volatile UBase_t I2C9_;
    const UBase_t reserved [22];
}BITBANDING_PERIPHERAL_I2C_t;

typedef volatile struct
{
    volatile UBase_t USB_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_USB_t;

typedef volatile struct
{
    volatile UBase_t EPHY_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_EPHY_t;

typedef volatile struct
{
    volatile UBase_t CAN0_;
    volatile UBase_t CAN1_;
    const UBase_t reserved [30];
}BITBANDING_PERIPHERAL_CAN_t;

typedef volatile struct
{
    volatile UBase_t ADC0_;
    volatile UBase_t ADC1_;
    const UBase_t reserved:30;
}BITBANDING_PERIPHERAL_ADC_t;

typedef volatile struct
{
    volatile UBase_t ACMP_;
    const UBase_t reserved:31;
}BITBANDING_PERIPHERAL_ACMP_t;

typedef volatile struct
{
    volatile UBase_t PWM0_;
    const UBase_t reserved:31;
}BITBANDING_PERIPHERAL_PWM_t;

typedef volatile struct
{
    volatile UBase_t QEI0_;
    const UBase_t reserved:31;
}BITBANDING_PERIPHERAL_QEI_t;

typedef volatile struct
{
    volatile UBase_t LPC_;
    const UBase_t reserved:31;
}BITBANDING_PERIPHERAL_LPC_t;

typedef volatile struct
{
    volatile UBase_t PECI_;
    const UBase_t reserved:31;
}BITBANDING_PERIPHERAL_PECI_t;

typedef volatile struct
{
    volatile UBase_t FAN_;
    const UBase_t reserved:31;
}BITBANDING_PERIPHERAL_FAN_t;

typedef volatile struct
{
    volatile UBase_t EEPROM_;
    const UBase_t reserved:31;
}BITBANDING_PERIPHERAL_EEPROM_t;

typedef volatile struct
{
    volatile UBase_t WTIMER0_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_WTIMER_t;

typedef volatile struct
{
    volatile UBase_t RTS_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_RTS_t;

typedef volatile struct
{
    volatile UBase_t CCM_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_CCM_t;

typedef volatile struct
{
    volatile UBase_t LCD_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_LCD_t;

typedef volatile struct
{
    volatile UBase_t OWIRE_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_OWIRE_t;

typedef volatile struct
{
    volatile UBase_t EMAC_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_EMAC_t;

typedef volatile struct
{
    volatile UBase_t PRB_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_PRB_t;

typedef volatile struct
{
    volatile UBase_t HIM_;
    const UBase_t reserved [31];
}BITBANDING_PERIPHERAL_HIM_t;

typedef volatile struct
{
    volatile const UBase_t ID [32];
}BITBANDING_UNIQUEID_t;/*0x00000008*/

typedef volatile struct
{
    volatile UBase_t SHACFG;
    volatile UBase_t AESCFG;
    volatile UBase_t DESCFG;
    const UBase_t reserved [29];
}BITBANDING_CCMCGREQ_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_BITBANDING_H_ */
