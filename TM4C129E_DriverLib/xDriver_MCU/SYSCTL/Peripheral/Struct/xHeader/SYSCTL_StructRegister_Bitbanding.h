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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
    volatile const uint32_t MINOR [8];
    volatile const uint32_t MAJOR [8];
    volatile const uint32_t CLASS [8];
    const uint32_t reserved [4];
    volatile const uint32_t VER [3];
    const uint32_t reserved1;
}BITBANDING_DID0_t;

typedef volatile struct
{
    volatile const uint32_t QUAL [2];
    volatile const uint32_t ROHS;
    volatile const uint32_t PKG [2];
    volatile const uint32_t TEMP [3];
    const uint32_t reserved [5];
    volatile const uint32_t PINCOUNT [3];
    volatile const uint32_t PARTNO [8];
    volatile const uint32_t FAM [4];
    volatile const uint32_t VER [4];
}BITBANDING_DID1_t;

typedef volatile struct
{
    volatile uint32_t VDD_UBOR [2];
    const uint32_t reserved [6];
    volatile uint32_t VDDA_UBOR [2];
    const uint32_t reserved1 [22];
}BITBANDING_PTBOCTL_t;

typedef volatile struct
{
    const uint32_t reserved;
    volatile const uint32_t BORRIS;
    const uint32_t reserved1;
    volatile const uint32_t MOFRIS;
    const uint32_t reserved2 [2];
    volatile const uint32_t PLLLRIS;
    volatile const uint32_t reserved3;
    volatile const uint32_t MOSCPUPRIS;
    const uint32_t reserved4 [23];
}BITBANDING_RIS_t;

typedef volatile struct
{
    const uint32_t reserved;
    volatile uint32_t BORIM;
    const uint32_t reserved1;
    volatile uint32_t MOFIM;
    const uint32_t reserved2 [2];
    volatile uint32_t PLLLIM;
    volatile uint32_t reserved3;
    volatile uint32_t MOSCPUPIM;
    const uint32_t reserved4 [23];
}BITBANDING_IMC_t;

typedef volatile struct
{
    const uint32_t reserved;
    volatile uint32_t BORMIS;
    const uint32_t reserved1;
    volatile uint32_t MOFMIS;
    const uint32_t reserved2 [2];
    volatile uint32_t PLLLMIS;
    volatile uint32_t reserved3;
    volatile uint32_t MOSCPUPMIS;
    const uint32_t reserved4 [23];
}BITBANDING_MISC_t;

typedef volatile struct
{
    volatile uint32_t EXT;
    volatile uint32_t POR;
    volatile uint32_t BOR;
    volatile uint32_t WDT0_;
    volatile uint32_t SW;
    volatile uint32_t WDT1_;
    const uint32_t reserved [6];
    volatile uint32_t HSSR;
    const uint32_t reserved1 [3];
    volatile uint32_t MOSCFAIL;
    const uint32_t reserved2:15;
}BITBANDING_RESC_t;

typedef volatile struct
{
    volatile uint32_t VDD_UBOR;
    const uint32_t reserved [3];
    volatile uint32_t VDDA_UBOR;
    const uint32_t reserved1 [27];
}BITBANDING_PWRTC_t;

typedef volatile struct
{
    volatile uint32_t EXTERNAL;
    const uint32_t reserved;
    volatile uint32_t POWER;
    volatile uint32_t WDT0_;
    const uint32_t reserved1;
    volatile uint32_t WDT1_;
    const uint32_t reserved2 [3];
    volatile uint32_t TAMPER;
    const uint32_t reserved3 [6];
    volatile uint32_t MOSCFAIL;
    const uint32_t reserved4:15;
}BITBANDING_NMIC_t;

typedef volatile struct
{
    volatile uint32_t CVAL;
    volatile uint32_t MOSCIM;
    volatile uint32_t NOXTAL;
    volatile uint32_t PWRDN;
    volatile uint32_t OSCRNG;
    const uint32_t reserved [27];
}BITBANDING_MOSCCTL_t;

typedef volatile struct
{
    volatile const uint32_t RVP [32];
}BITBANDING_RVP_t;

typedef volatile struct
{
    volatile uint32_t READ_ENABLE0;
    volatile uint32_t READ_ENABLE1;
    volatile uint32_t READ_ENABLE2;
    volatile uint32_t READ_ENABLE3;
    volatile uint32_t READ_ENABLE4;
    volatile uint32_t READ_ENABLE5;
    volatile uint32_t READ_ENABLE6;
    volatile uint32_t READ_ENABLE7;
    volatile uint32_t READ_ENABLE8;
    volatile uint32_t READ_ENABLE9;
    volatile uint32_t READ_ENABLE10;
    volatile uint32_t READ_ENABLE11;
    volatile uint32_t READ_ENABLE12;
    volatile uint32_t READ_ENABLE13;
    volatile uint32_t READ_ENABLE14;
    volatile uint32_t READ_ENABLE15;
    volatile uint32_t READ_ENABLE16;
    volatile uint32_t READ_ENABLE17;
    volatile uint32_t READ_ENABLE18;
    volatile uint32_t READ_ENABLE19;
    volatile uint32_t READ_ENABLE20;
    volatile uint32_t READ_ENABLE21;
    volatile uint32_t READ_ENABLE22;
    volatile uint32_t READ_ENABLE23;
    volatile uint32_t READ_ENABLE24;
    volatile uint32_t READ_ENABLE25;
    volatile uint32_t READ_ENABLE26;
    volatile uint32_t READ_ENABLE27;
    volatile uint32_t READ_ENABLE28;
    volatile uint32_t READ_ENABLE29;
    volatile uint32_t READ_ENABLE30;
    volatile uint32_t READ_ENABLE31;
}BITBANDING_FMPRE_t;

typedef volatile struct
{
    volatile uint32_t PROG_ENABLE0;
    volatile uint32_t PROG_ENABLE1;
    volatile uint32_t PROG_ENABLE2;
    volatile uint32_t PROG_ENABLE3;
    volatile uint32_t PROG_ENABLE4;
    volatile uint32_t PROG_ENABLE5;
    volatile uint32_t PROG_ENABLE6;
    volatile uint32_t PROG_ENABLE7;
    volatile uint32_t PROG_ENABLE8;
    volatile uint32_t PROG_ENABLE9;
    volatile uint32_t PROG_ENABLE10;
    volatile uint32_t PROG_ENABLE11;
    volatile uint32_t PROG_ENABLE12;
    volatile uint32_t PROG_ENABLE13;
    volatile uint32_t PROG_ENABLE14;
    volatile uint32_t PROG_ENABLE15;
    volatile uint32_t PROG_ENABLE16;
    volatile uint32_t PROG_ENABLE17;
    volatile uint32_t PROG_ENABLE18;
    volatile uint32_t PROG_ENABLE19;
    volatile uint32_t PROG_ENABLE20;
    volatile uint32_t PROG_ENABLE21;
    volatile uint32_t PROG_ENABLE22;
    volatile uint32_t PROG_ENABLE23;
    volatile uint32_t PROG_ENABLE24;
    volatile uint32_t PROG_ENABLE25;
    volatile uint32_t PROG_ENABLE26;
    volatile uint32_t PROG_ENABLE27;
    volatile uint32_t PROG_ENABLE28;
    volatile uint32_t PROG_ENABLE29;
    volatile uint32_t PROG_ENABLE30;
    volatile uint32_t PROG_ENABLE31;
}BITBANDING_FMPPE_t;

typedef volatile struct
{
    volatile uint32_t PSYSDIV [10];
    volatile uint32_t OSYSDIV [10];
    volatile uint32_t OSCSRC [4];
    volatile uint32_t PLLSRC [4];
    volatile uint32_t USEPLL;
    volatile uint32_t ACG;
    volatile uint32_t NEWFREQ;
    volatile uint32_t MEMTIMU;
}BITBANDING_RSCLKCFG_t;

typedef volatile struct
{
    volatile uint32_t FWS [4];
    const uint32_t reserved;
    volatile uint32_t FBCE;
    volatile uint32_t FBCHT [4];
    const uint32_t reserved1 [6];
    volatile uint32_t EWS [4];
    const uint32_t reserved2;
    volatile uint32_t EBCE;
    volatile uint32_t EBCHT [4];
    const uint32_t reserved3 [6];
}BITBANDING_MEMTIM0_t;

typedef volatile struct
{
    volatile uint32_t ALTCLK [4];
    const uint32_t reserved [28];
}BITBANDING_ALTCLKCFG_t;

typedef volatile struct
{
    volatile uint32_t DSSYSDIV [10];
    const uint32_t reserved [10];
    volatile uint32_t DSOSCSRC [4];
    const uint32_t reserved1 [6];
    volatile uint32_t MOSCDPD;
    volatile uint32_t PIOSCPD;
}BITBANDING_DSCLKCFG_t;

typedef volatile struct
{
    volatile uint32_t DIV [8];
    const uint32_t reserved [8];
    volatile uint32_t SRC [2];
    const uint32_t reserved1 [13];
    volatile uint32_t EN;
}BITBANDING_DIVSCLK_t;

typedef volatile struct
{
    volatile const uint32_t FPU_;
    const uint32_t reserved [4];
    volatile const uint32_t LDOSEQ;
    const uint32_t reserved1 [2];
    volatile const uint32_t FLASHLPM;
    const uint32_t reserved2;
    volatile const uint32_t SRAMLPM;
    volatile const uint32_t SRAMSM;
    volatile const uint32_t PIOSCPDE;
    const uint32_t reserved3 [3];
    volatile const uint32_t TSPDE;
    volatile const uint32_t LDOSME;
    const uint32_t reserved4 [14];
}BITBANDING_SYSPROP_t;

typedef volatile struct
{
    volatile uint32_t UT [7];
    const uint32_t reserved;
    volatile uint32_t UPDATE;
    volatile uint32_t CAL;
    const uint32_t reserved1 [21];
    volatile uint32_t UTEN;
}BITBANDING_PIOSCCAL_t;

typedef volatile struct
{
    volatile const uint32_t CT [7];
    const uint32_t reserved;
    volatile const uint32_t RESULT [2];
    const uint32_t reserved1 [6];
    volatile const uint32_t DT [7];
    const uint32_t reserved2 [9];
}BITBANDING_PIOSCSTAT_t;

typedef volatile struct
{
    volatile const uint32_t MINT [10];
    volatile const uint32_t MFRAC [10];
    const uint32_t reserved [3];
    volatile const uint32_t PLLPWR;
    const uint32_t reserved1 [8];
}BITBANDING_PLLFREQ0_t;

typedef volatile struct
{
    volatile uint32_t N [5];
    const uint32_t reserved [3];
    volatile uint32_t Q [5];
    const uint32_t reserved1 [19];
}BITBANDING_PLLFREQ1_t;

typedef volatile struct
{
    volatile const uint32_t LOCK;
    const uint32_t reserved [31];
}BITBANDING_PLLSTAT_t;

typedef volatile struct
{
    volatile uint32_t SRAMPM [2];
    const uint32_t reserved [2];
    volatile uint32_t FLASHPM [2];
    const uint32_t reserved1 [26];
}BITBANDING_SLPPWRCFG_t;

typedef volatile struct
{
    volatile uint32_t SRAMPM [2];
    const uint32_t reserved [2];
    volatile uint32_t FLASHPM [2];
    const uint32_t reserved1 [2];
    volatile uint32_t TSPD;
    volatile uint32_t LDOSM;
    const uint32_t reserved2 [22];
}BITBANDING_DSLPPWRCFG_t;

typedef volatile struct
{
    volatile const uint32_t FWB;
    const uint32_t reserved [31];
}BITBANDING_NVMSTAT_t;

typedef volatile struct
{
    volatile uint32_t VLDO [8];
    const uint32_t reserved [23];
    volatile uint32_t VADJEN;
}BITBANDING_LDOSPCTL_t;

typedef volatile struct
{
    volatile const uint32_t NOPLL [8];
    volatile const uint32_t WITHPLL [8];
    const uint32_t reserved [16];
}BITBANDING_LDOSPCAL_t;

typedef volatile struct
{
    volatile uint32_t VLDO [8];
    const uint32_t reserved [23];
    volatile uint32_t VADJEN;
}BITBANDING_LDODPCTL_t;

typedef volatile struct
{
    volatile const uint32_t KHZ30 [8];
    volatile const uint32_t WITHPLL [8];
    const uint32_t reserved [16];
}BITBANDING_LDODPCAL_t;

typedef volatile struct
{
    volatile const uint32_t SPDERR;
    volatile const uint32_t FPDERR;
    volatile const uint32_t PPDERR;
    volatile const uint32_t LDMINERR;
    volatile const uint32_t LSMINERR;
    const uint32_t reserved;
    volatile const uint32_t LMAXERR;
    volatile const uint32_t PPDW;
    const uint32_t reserved1:8;
    volatile const uint32_t PRACT;
    volatile const uint32_t LOWPWR;
    volatile const uint32_t FLASHLP;
    volatile const uint32_t LDOUA;
    const uint32_t reserved2:12;
}BITBANDING_SDPMST_t;

typedef volatile struct
{
    volatile uint32_t EXTRES [2];
    volatile uint32_t BOR [2];
    volatile uint32_t WDOG0 [2];
    volatile uint32_t WDOG1 [2];
    const uint32_t reserved [24];
}BITBANDING_RESBEHAVCTL_t;

typedef volatile struct
{
    volatile uint32_t CDOFF [24];
    volatile uint32_t KEY [8];
}BITBANDING_HSSR_t;

typedef volatile struct
{
    volatile const uint32_t PWRSTAT [2];
    volatile const uint32_t MEMSTAT [2];
    const uint32_t reserved [28];
}BITBANDING_USBPDS_t;

typedef volatile struct
{
    volatile uint32_t PWRCTL [2];
    const uint32_t reserved [30];
}BITBANDING_USBMPC_t;

typedef volatile struct
{
    volatile const uint32_t PWRSTAT [2];
    volatile const uint32_t MEMSTAT [2];
    const uint32_t reserved [28];
}BITBANDING_EMACPDS_t;

typedef volatile struct
{
    volatile uint32_t PWRCTL [2];
    const uint32_t reserved [30];
}BITBANDING_EMACMPC_t;

typedef volatile struct
{
    volatile const uint32_t PWRSTAT [2];
    volatile const uint32_t MEMSTAT [2];
    const uint32_t reserved [28];
}BITBANDING_CAN0PDS_t;

typedef volatile struct
{
    volatile uint32_t PWRCTL [2];
    const uint32_t reserved [30];
}BITBANDING_CAN0MPC_t;

typedef volatile struct
{
    volatile const uint32_t PWRSTAT [2];
    volatile const uint32_t MEMSTAT [2];
    const uint32_t reserved [28];
}BITBANDING_CAN1PDS_t;

typedef volatile struct
{
    volatile uint32_t PWRCTL [2];
    const uint32_t reserved [30];
}BITBANDING_CAN1MPC_t;

typedef volatile struct
{
    volatile const uint32_t DBG0;
    volatile const uint32_t DBG1;
    const uint32_t reserved [2];
    volatile const uint32_t KEY;
    const uint32_t reserved1 [3];
    volatile const uint32_t EN;
    volatile const uint32_t POL;
    volatile const uint32_t PIN [3];
    volatile const uint32_t PORT [3];
    const uint32_t reserved2 [15];
    volatile const uint32_t NW;
}BITBANDING_BOOTCFG_t;

typedef volatile struct
{
    volatile const uint32_t DATA [32];
}BITBANDING_USER_REG_t;

typedef volatile struct
{
    volatile uint32_t P0;
    volatile uint32_t P1;
    volatile uint32_t P2;
    volatile uint32_t P3;
    volatile uint32_t P4;
    volatile uint32_t P5;
    volatile uint32_t P6;
    volatile uint32_t P7;
    volatile uint32_t P8;
    volatile uint32_t P9;
    volatile uint32_t P10;
    volatile uint32_t P11;
    volatile uint32_t P12;
    volatile uint32_t P13;
    volatile uint32_t P14;
    volatile uint32_t P15;
    volatile uint32_t P16;
    volatile uint32_t P17;
    volatile uint32_t P18;
    volatile uint32_t P19;
    volatile uint32_t P20;
    volatile uint32_t P21;
    volatile uint32_t P22;
    volatile uint32_t P23;
    volatile uint32_t P24;
    volatile uint32_t P25;
    volatile uint32_t P26;
    volatile uint32_t P27;
    volatile uint32_t P28;
    volatile uint32_t P29;
    volatile uint32_t P30;
    volatile uint32_t P31;
}BITBANDING_PERIPHERAL_t;

typedef volatile struct
{
    volatile uint32_t WDT0_;
    volatile uint32_t WDT1_;
    const uint32_t reserved:30;
}BITBANDING_PERIPHERAL_WD_t;

typedef volatile struct
{
    volatile uint32_t TIMER0_;
    volatile uint32_t TIMER1_;
    volatile uint32_t TIMER2_;
    volatile uint32_t TIMER3_;
    volatile uint32_t TIMER4_;
    volatile uint32_t TIMER5_;
    volatile uint32_t TIMER6_;
    volatile uint32_t TIMER7_;
    const uint32_t reserved [24];
}BITBANDING_PERIPHERAL_TIMER_t;

typedef volatile struct
{
    volatile uint32_t GPIOA_;
    volatile uint32_t GPIOB_;
    volatile uint32_t GPIOC_;
    volatile uint32_t GPIOD_;
    volatile uint32_t GPIOE_;
    volatile uint32_t GPIOF_;
    volatile uint32_t GPIOG_;
    volatile uint32_t GPIOH_;
    volatile uint32_t GPIOJ_;
    volatile uint32_t GPIOK_;
    volatile uint32_t GPIOL_;
    volatile uint32_t GPIOM_;
    volatile uint32_t GPION_;
    volatile uint32_t GPIOP_;
    volatile uint32_t GPIOQ_;
    const uint32_t reserved [17];
}BITBANDING_PERIPHERAL_GPIO_t;

typedef volatile struct
{
    volatile uint32_t UDMA_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_DMA_t;

typedef volatile struct
{
    volatile uint32_t EPI0_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_EPI_t;

typedef volatile struct
{
    volatile uint32_t HIB_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_HIB_t;

typedef volatile struct
{
    volatile uint32_t UART0_;
    volatile uint32_t UART1_;
    volatile uint32_t UART2_;
    volatile uint32_t UART3_;
    volatile uint32_t UART4_;
    volatile uint32_t UART5_;
    volatile uint32_t UART6_;
    volatile uint32_t UART7_;
    const uint32_t reserved [24];
}BITBANDING_PERIPHERAL_UART_t;

typedef volatile struct
{
    volatile uint32_t SSI0_;
    volatile uint32_t SSI1_;
    volatile uint32_t SSI2_;
    volatile uint32_t SSI3_;
    const uint32_t reserved [28];
}BITBANDING_PERIPHERAL_SSI_t;

typedef volatile struct
{
    volatile uint32_t I2C0_;
    volatile uint32_t I2C1_;
    volatile uint32_t I2C2_;
    volatile uint32_t I2C3_;
    volatile uint32_t I2C4_;
    volatile uint32_t I2C5_;
    volatile uint32_t I2C6_;
    volatile uint32_t I2C7_;
    volatile uint32_t I2C8_;
    volatile uint32_t I2C9_;
    const uint32_t reserved [22];
}BITBANDING_PERIPHERAL_I2C_t;

typedef volatile struct
{
    volatile uint32_t USB_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_USB_t;

typedef volatile struct
{
    volatile uint32_t EPHY_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_EPHY_t;

typedef volatile struct
{
    volatile uint32_t CAN0_;
    volatile uint32_t CAN1_;
    const uint32_t reserved [30];
}BITBANDING_PERIPHERAL_CAN_t;

typedef volatile struct
{
    volatile uint32_t ADC0_;
    volatile uint32_t ADC1_;
    const uint32_t reserved:30;
}BITBANDING_PERIPHERAL_ADC_t;

typedef volatile struct
{
    volatile uint32_t ACMP_;
    const uint32_t reserved:31;
}BITBANDING_PERIPHERAL_ACMP_t;

typedef volatile struct
{
    volatile uint32_t PWM0_;
    const uint32_t reserved:31;
}BITBANDING_PERIPHERAL_PWM_t;

typedef volatile struct
{
    volatile uint32_t QEI0_;
    const uint32_t reserved:31;
}BITBANDING_PERIPHERAL_QEI_t;

typedef volatile struct
{
    volatile uint32_t LPC_;
    const uint32_t reserved:31;
}BITBANDING_PERIPHERAL_LPC_t;

typedef volatile struct
{
    volatile uint32_t PECI_;
    const uint32_t reserved:31;
}BITBANDING_PERIPHERAL_PECI_t;

typedef volatile struct
{
    volatile uint32_t FAN_;
    const uint32_t reserved:31;
}BITBANDING_PERIPHERAL_FAN_t;

typedef volatile struct
{
    volatile uint32_t EEPROM_;
    const uint32_t reserved:31;
}BITBANDING_PERIPHERAL_EEPROM_t;

typedef volatile struct
{
    volatile uint32_t WTIMER0_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_WTIMER_t;

typedef volatile struct
{
    volatile uint32_t RTS_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_RTS_t;

typedef volatile struct
{
    volatile uint32_t CCM_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_CCM_t;

typedef volatile struct
{
    volatile uint32_t LCD_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_LCD_t;

typedef volatile struct
{
    volatile uint32_t OWIRE_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_OWIRE_t;

typedef volatile struct
{
    volatile uint32_t EMAC_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_EMAC_t;

typedef volatile struct
{
    volatile uint32_t PRB_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_PRB_t;

typedef volatile struct
{
    volatile uint32_t HIM_;
    const uint32_t reserved [31];
}BITBANDING_PERIPHERAL_HIM_t;

typedef volatile struct
{
    volatile const uint32_t ID [32];
}BITBANDING_UNIQUEID_t;/*0x00000008*/

typedef volatile struct
{
    volatile uint32_t SHACFG;
    volatile uint32_t AESCFG;
    volatile uint32_t DESCFG;
    const uint32_t reserved [29];
}BITBANDING_CCMCGREQ_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_BITBANDING_H_ */
