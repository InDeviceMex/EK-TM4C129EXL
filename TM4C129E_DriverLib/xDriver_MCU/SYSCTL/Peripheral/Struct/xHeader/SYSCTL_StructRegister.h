/**
 *
 * @file SYSCTL_Struct.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

typedef volatile struct
{
    volatile const uint32_t MINOR :8;
    volatile const uint32_t MAJOR :8;
    volatile const uint32_t CLASS :8;
    const uint32_t reserved :4;
    volatile const uint32_t VER :3;
    const uint32_t reserved1 :1;
}DID0_t;

typedef volatile struct
{
    volatile const uint32_t QUAL :2;
    volatile const uint32_t ROHS :1;
    volatile const uint32_t PKG :2;
    volatile const uint32_t TEMP :3;
    const uint32_t reserved :5;
    volatile const uint32_t PINCOUNT :3;
    volatile const uint32_t PARTNO :8;
    volatile const uint32_t FAM :4;
    volatile const uint32_t VER :4;
}DID1_t;

typedef volatile struct
{
    volatile uint32_t VDD_UBOR :2;
    const uint32_t reserved :6;
    volatile uint32_t VDDA_UBOR :2;
    const uint32_t reserved1 :22;
}PTBOCTL_t;

typedef volatile struct
{
    const uint32_t reserved :1;
    volatile const uint32_t BORRIS :1;
    const uint32_t reserved1 :1;
    volatile const uint32_t MOFRIS :1;
    const uint32_t reserved2 :2;
    volatile const uint32_t PLLLRIS :1;
    volatile const uint32_t reserved3 :1;
    volatile const uint32_t MOSCPUPRIS :1;
    const uint32_t reserved4 :23;
}RIS_t;

typedef volatile struct
{
    const uint32_t reserved :1;
    volatile uint32_t BORIM :1;
    const uint32_t reserved1 :1;
    volatile uint32_t MOFIM :1;
    const uint32_t reserved2 :2;
    volatile uint32_t PLLLIM :1;
    volatile uint32_t reserved3 :1;
    volatile uint32_t MOSCPUPIM :1;
    const uint32_t reserved4 :23;
}IMC_t;

typedef volatile struct
{
    const uint32_t reserved :1;
    volatile uint32_t BORMIS :1;
    const uint32_t reserved1 :1;
    volatile uint32_t MOFMIS :1;
    const uint32_t reserved2 :2;
    volatile uint32_t PLLLMIS :1;
    volatile uint32_t reserved3 :1;
    volatile uint32_t MOSCPUPMIS :1;
    const uint32_t reserved4 :23;
}MISC_t;

typedef volatile struct
{
    volatile uint32_t EXT :1;
    volatile uint32_t POR :1;
    volatile uint32_t BOR :1;
    volatile uint32_t WDT0_ :1;
    volatile uint32_t SW :1;
    volatile uint32_t WDT1_ :1;
    const uint32_t reserved :6;
    volatile uint32_t HSSR :1;
    const uint32_t reserved1 :3;
    volatile uint32_t MOSCFAIL :1;
    const uint32_t reserved2:15;
}RESC_t;

typedef volatile struct
{
    volatile uint32_t VDD_UBOR :1;
    const uint32_t reserved :3;
    volatile uint32_t VDDA_UBOR :1;
    const uint32_t reserved1 :27;
}PWRTC_t;

typedef volatile struct
{
    volatile uint32_t EXTERNAL :1;
    const uint32_t reserved :1;
    volatile uint32_t POWER :1;
    volatile uint32_t WDT0_ :1;
    const uint32_t reserved1 :1;
    volatile uint32_t WDT1_ :1;
    const uint32_t reserved2 :3;
    volatile uint32_t TAMPER :1;
    const uint32_t reserved3 :6;
    volatile uint32_t MOSCFAIL :1;
    const uint32_t reserved4:15;
}NMIC_t;

typedef volatile struct
{
    volatile uint32_t CVAL :1;
    volatile uint32_t MOSCIM :1;
    volatile uint32_t NOXTAL :1;
    volatile uint32_t PWRDN :1;
    volatile uint32_t OSCRNG :1;
    const uint32_t reserved :27;
}MOSCCTL_t;

typedef volatile struct
{
    volatile const uint32_t RVP :32;
}RVP_t;

typedef volatile struct
{
    volatile uint32_t READ_ENABLE0 :1;
    volatile uint32_t READ_ENABLE1 :1;
    volatile uint32_t READ_ENABLE2 :1;
    volatile uint32_t READ_ENABLE3 :1;
    volatile uint32_t READ_ENABLE4 :1;
    volatile uint32_t READ_ENABLE5 :1;
    volatile uint32_t READ_ENABLE6 :1;
    volatile uint32_t READ_ENABLE7 :1;
    volatile uint32_t READ_ENABLE8 :1;
    volatile uint32_t READ_ENABLE9 :1;
    volatile uint32_t READ_ENABLE10 :1;
    volatile uint32_t READ_ENABLE11 :1;
    volatile uint32_t READ_ENABLE12 :1;
    volatile uint32_t READ_ENABLE13 :1;
    volatile uint32_t READ_ENABLE14 :1;
    volatile uint32_t READ_ENABLE15 :1;
    volatile uint32_t READ_ENABLE16 :1;
    volatile uint32_t READ_ENABLE17 :1;
    volatile uint32_t READ_ENABLE18 :1;
    volatile uint32_t READ_ENABLE19 :1;
    volatile uint32_t READ_ENABLE20 :1;
    volatile uint32_t READ_ENABLE21 :1;
    volatile uint32_t READ_ENABLE22 :1;
    volatile uint32_t READ_ENABLE23 :1;
    volatile uint32_t READ_ENABLE24 :1;
    volatile uint32_t READ_ENABLE25 :1;
    volatile uint32_t READ_ENABLE26 :1;
    volatile uint32_t READ_ENABLE27 :1;
    volatile uint32_t READ_ENABLE28 :1;
    volatile uint32_t READ_ENABLE29 :1;
    volatile uint32_t READ_ENABLE30 :1;
    volatile uint32_t READ_ENABLE31 :1;
}FMPRE_t;

typedef volatile struct
{
    volatile uint32_t PROG_ENABLE0 :1;
    volatile uint32_t PROG_ENABLE1 :1;
    volatile uint32_t PROG_ENABLE2 :1;
    volatile uint32_t PROG_ENABLE3 :1;
    volatile uint32_t PROG_ENABLE4 :1;
    volatile uint32_t PROG_ENABLE5 :1;
    volatile uint32_t PROG_ENABLE6 :1;
    volatile uint32_t PROG_ENABLE7 :1;
    volatile uint32_t PROG_ENABLE8 :1;
    volatile uint32_t PROG_ENABLE9 :1;
    volatile uint32_t PROG_ENABLE10 :1;
    volatile uint32_t PROG_ENABLE11 :1;
    volatile uint32_t PROG_ENABLE12 :1;
    volatile uint32_t PROG_ENABLE13 :1;
    volatile uint32_t PROG_ENABLE14 :1;
    volatile uint32_t PROG_ENABLE15 :1;
    volatile uint32_t PROG_ENABLE16 :1;
    volatile uint32_t PROG_ENABLE17 :1;
    volatile uint32_t PROG_ENABLE18 :1;
    volatile uint32_t PROG_ENABLE19 :1;
    volatile uint32_t PROG_ENABLE20 :1;
    volatile uint32_t PROG_ENABLE21 :1;
    volatile uint32_t PROG_ENABLE22 :1;
    volatile uint32_t PROG_ENABLE23 :1;
    volatile uint32_t PROG_ENABLE24 :1;
    volatile uint32_t PROG_ENABLE25 :1;
    volatile uint32_t PROG_ENABLE26 :1;
    volatile uint32_t PROG_ENABLE27 :1;
    volatile uint32_t PROG_ENABLE28 :1;
    volatile uint32_t PROG_ENABLE29 :1;
    volatile uint32_t PROG_ENABLE30 :1;
    volatile uint32_t PROG_ENABLE31 :1;
}FMPPE_t;

typedef volatile struct
{
    volatile uint32_t PSYSDIV :10;
    volatile uint32_t OSYSDIV :10;
    volatile uint32_t OSCSRC :4;
    volatile uint32_t PLLSRC :4;
    volatile uint32_t USEPLL :1;
    volatile uint32_t ACG :1;
    volatile uint32_t NEWFREQ :1;
    volatile uint32_t MEMTIMU :1;
}RSCLKCFG_t;

typedef volatile struct
{
    volatile uint32_t FWS :4;
    const uint32_t reserved :1;
    volatile uint32_t FBCE :1;
    volatile uint32_t FBCHT :4;
    const uint32_t reserved1 :6;
    volatile uint32_t EWS :4;
    const uint32_t reserved2 :1;
    volatile uint32_t EBCE :1;
    volatile uint32_t EBCHT :4;
    const uint32_t reserved3 :6;
}MEMTIM0_t;

typedef volatile struct
{
    volatile uint32_t ALTCLK :4;
    const uint32_t reserved :28;
}ALTCLKCFG_t;

typedef volatile struct
{
    volatile uint32_t DSSYSDIV :10;
    const uint32_t reserved :10;
    volatile uint32_t DSOSCSRC :4;
    const uint32_t reserved1 :6;
    volatile uint32_t MOSCDPD :1;
    volatile uint32_t PIOSCPD :1;
}DSCLKCFG_t;

typedef volatile struct
{
    volatile uint32_t DIV :8;
    const uint32_t reserved :8;
    volatile uint32_t SRC :2;
    const uint32_t reserved1 :13;
    volatile uint32_t EN :1;
}DIVSCLK_t;

typedef volatile struct
{
    volatile const uint32_t FPU_ :1;
    const uint32_t reserved :4;
    volatile const uint32_t LDOSEQ :1;
    const uint32_t reserved1 :2;
    volatile const uint32_t FLASHLPM :1;
    const uint32_t reserved2 :1;
    volatile const uint32_t SRAMLPM :1;
    volatile const uint32_t SRAMSM :1;
    volatile const uint32_t PIOSCPDE :1;
    const uint32_t reserved3 :3;
    volatile const uint32_t TSPDE :1;
    volatile const uint32_t LDOSME :1;
    const uint32_t reserved4 :14;
}SYSPROP_t;

typedef volatile struct
{
    volatile uint32_t UT :7;
    const uint32_t reserved :1;
    volatile uint32_t UPDATE :1;
    volatile uint32_t CAL :1;
    const uint32_t reserved1 :21;
    volatile uint32_t UTEN :1;
}PIOSCCAL_t;

typedef volatile struct
{
    volatile const uint32_t CT :7;
    const uint32_t reserved :1;
    volatile const uint32_t RESULT :2;
    const uint32_t reserved1 :6;
    volatile const uint32_t DT :7;
    const uint32_t reserved2 :9;
}PIOSCSTAT_t;

typedef volatile struct
{
    volatile const uint32_t MINT :10;
    volatile const uint32_t MFRAC :10;
    const uint32_t reserved :3;
    volatile const uint32_t PLLPWR :1;
    const uint32_t reserved1 :8;
}PLLFREQ0_t;

typedef volatile struct
{
    volatile uint32_t N :5;
    const uint32_t reserved :3;
    volatile uint32_t Q :5;
    const uint32_t reserved1 :19;
}PLLFREQ1_t;

typedef volatile struct
{
    volatile const uint32_t LOCK :1;
    const uint32_t reserved :31;
}PLLSTAT_t;

typedef volatile struct
{
    volatile uint32_t SRAMPM :2;
    const uint32_t reserved :2;
    volatile uint32_t FLASHPM :2;
    const uint32_t reserved1 :26;
}SLPPWRCFG_t;

typedef volatile struct
{
    volatile uint32_t SRAMPM :2;
    const uint32_t reserved :2;
    volatile uint32_t FLASHPM :2;
    const uint32_t reserved1 :2;
    volatile uint32_t TSPD :1;
    volatile uint32_t LDOSM :1;
    const uint32_t reserved2 :22;
}DSLPPWRCFG_t;

typedef volatile struct
{
    volatile const uint32_t FWB :1;
    const uint32_t reserved :31;
}NVMSTAT_t;

typedef volatile struct
{
    volatile uint32_t VLDO :8;
    const uint32_t reserved :23;
    volatile uint32_t VADJEN :1;
}LDOSPCTL_t;

typedef volatile struct
{
    volatile const uint32_t NOPLL :8;
    volatile const uint32_t WITHPLL :8;
    const uint32_t reserved :16;
}LDOSPCAL_t;

typedef volatile struct
{
    volatile uint32_t VLDO :8;
    const uint32_t reserved :23;
    volatile uint32_t VADJEN :1;
}LDODPCTL_t;

typedef volatile struct
{
    volatile const uint32_t KHZ30 :8;
    volatile const uint32_t WITHPLL :8;
    const uint32_t reserved :16;
}LDODPCAL_t;

typedef volatile struct
{
    volatile const uint32_t SPDERR :1;
    volatile const uint32_t FPDERR :1;
    volatile const uint32_t PPDERR :1;
    volatile const uint32_t LDMINERR :1;
    volatile const uint32_t LSMINERR :1;
    const uint32_t reserved :1;
    volatile const uint32_t LMAXERR :1;
    volatile const uint32_t PPDW :1;
    const uint32_t reserved1:8;
    volatile const uint32_t PRACT :1;
    volatile const uint32_t LOWPWR :1;
    volatile const uint32_t FLASHLP :1;
    volatile const uint32_t LDOUA :1;
    const uint32_t reserved2:12;
}SDPMST_t;

typedef volatile struct
{
    volatile uint32_t EXTRES :2;
    volatile uint32_t BOR :2;
    volatile uint32_t WDOG0 :2;
    volatile uint32_t WDOG1 :2;
    const uint32_t reserved :24;
}RESBEHAVCTL_t;

typedef volatile struct
{
    volatile uint32_t CDOFF :24;
    volatile uint32_t KEY :8;
}HSSR_t;

typedef volatile struct
{
    volatile const uint32_t PWRSTAT :2;
    volatile const uint32_t MEMSTAT :2;
    const uint32_t reserved :28;
}USBPDS_t;

typedef volatile struct
{
    volatile uint32_t PWRCTL :2;
    const uint32_t reserved :30;
}USBMPC_t;

typedef volatile struct
{
    volatile const uint32_t PWRSTAT :2;
    volatile const uint32_t MEMSTAT :2;
    const uint32_t reserved :28;
}EMACPDS_t;

typedef volatile struct
{
    volatile uint32_t PWRCTL :2;
    const uint32_t reserved :30;
}EMACMPC_t;

typedef volatile struct
{
    volatile const uint32_t PWRSTAT :2;
    volatile const uint32_t MEMSTAT :2;
    const uint32_t reserved :28;
}CAN0PDS_t;

typedef volatile struct
{
    volatile uint32_t PWRCTL :2;
    const uint32_t reserved :30;
}CAN0MPC_t;

typedef volatile struct
{
    volatile const uint32_t PWRSTAT :2;
    volatile const uint32_t MEMSTAT :2;
    const uint32_t reserved :28;
}CAN1PDS_t;

typedef volatile struct
{
    volatile uint32_t PWRCTL :2;
    const uint32_t reserved :30;
}CAN1MPC_t;

typedef volatile struct
{
    volatile const uint32_t DBG0 :1;
    volatile const uint32_t DBG1 :1;
    const uint32_t reserved :2;
    volatile const uint32_t KEY :1;
    const uint32_t reserved1 :3;
    volatile const uint32_t EN :1;
    volatile const uint32_t POL :1;
    volatile const uint32_t PIN :3;
    volatile const uint32_t PORT :3;
    const uint32_t reserved2 :15;
    volatile const uint32_t NW :1;
}BOOTCFG_t;

typedef volatile struct
{
    volatile const uint32_t DATA :32;
}USER_REG_t;

typedef volatile struct
{
    volatile uint32_t P0 :1;
    volatile uint32_t P1 :1;
    volatile uint32_t P2 :1;
    volatile uint32_t P3 :1;
    volatile uint32_t P4 :1;
    volatile uint32_t P5 :1;
    volatile uint32_t P6 :1;
    volatile uint32_t P7 :1;
    volatile uint32_t P8 :1;
    volatile uint32_t P9 :1;
    volatile uint32_t P10 :1;
    volatile uint32_t P11 :1;
    volatile uint32_t P12 :1;
    volatile uint32_t P13 :1;
    volatile uint32_t P14 :1;
    volatile uint32_t P15 :1;
    volatile uint32_t P16 :1;
    volatile uint32_t P17 :1;
    volatile uint32_t P18 :1;
    volatile uint32_t P19 :1;
    volatile uint32_t P20 :1;
    volatile uint32_t P21 :1;
    volatile uint32_t P22 :1;
    volatile uint32_t P23 :1;
    volatile uint32_t P24 :1;
    volatile uint32_t P25 :1;
    volatile uint32_t P26 :1;
    volatile uint32_t P27 :1;
    volatile uint32_t P28 :1;
    volatile uint32_t P29 :1;
    volatile uint32_t P30 :1;
    volatile uint32_t P31 :1;
}PERIPHERAL_t;

typedef volatile struct
{
    volatile uint32_t WDT0_ :1;
    volatile uint32_t WDT1_ :1;
    const uint32_t reserved:30;
}PERIPHERAL_WD_t;

typedef volatile struct
{
    volatile uint32_t TIMER0_ :1;
    volatile uint32_t TIMER1_ :1;
    volatile uint32_t TIMER2_ :1;
    volatile uint32_t TIMER3_ :1;
    volatile uint32_t TIMER4_ :1;
    volatile uint32_t TIMER5_ :1;
    volatile uint32_t TIMER6_ :1;
    volatile uint32_t TIMER7_ :1;
    const uint32_t reserved :24;
}PERIPHERAL_TIMER_t;

typedef volatile struct
{
    volatile uint32_t GPIOA_ :1;
    volatile uint32_t GPIOB_ :1;
    volatile uint32_t GPIOC_ :1;
    volatile uint32_t GPIOD_ :1;
    volatile uint32_t GPIOE_ :1;
    volatile uint32_t GPIOF_ :1;
    volatile uint32_t GPIOG_ :1;
    volatile uint32_t GPIOH_ :1;
    volatile uint32_t GPIOJ_ :1;
    volatile uint32_t GPIOK_ :1;
    volatile uint32_t GPIOL_ :1;
    volatile uint32_t GPIOM_ :1;
    volatile uint32_t GPION_ :1;
    volatile uint32_t GPIOP_ :1;
    volatile uint32_t GPIOQ_ :1;
    const uint32_t reserved :17;
}PERIPHERAL_GPIO_t;

typedef volatile struct
{
    volatile uint32_t UDMA_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_DMA_t;

typedef volatile struct
{
    volatile uint32_t EPI0_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_EPI_t;

typedef volatile struct
{
    volatile uint32_t HIB_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_HIB_t;

typedef volatile struct
{
    volatile uint32_t UART0_ :1;
    volatile uint32_t UART1_ :1;
    volatile uint32_t UART2_ :1;
    volatile uint32_t UART3_ :1;
    volatile uint32_t UART4_ :1;
    volatile uint32_t UART5_ :1;
    volatile uint32_t UART6_ :1;
    volatile uint32_t UART7_ :1;
    const uint32_t reserved :24;
}PERIPHERAL_UART_t;

typedef volatile struct
{
    volatile uint32_t SSI0_ :1;
    volatile uint32_t SSI1_ :1;
    volatile uint32_t SSI2_ :1;
    volatile uint32_t SSI3_ :1;
    const uint32_t reserved :28;
}PERIPHERAL_SSI_t;

typedef volatile struct
{
    volatile uint32_t I2C0_ :1;
    volatile uint32_t I2C1_ :1;
    volatile uint32_t I2C2_ :1;
    volatile uint32_t I2C3_ :1;
    volatile uint32_t I2C4_ :1;
    volatile uint32_t I2C5_ :1;
    volatile uint32_t I2C6_ :1;
    volatile uint32_t I2C7_ :1;
    volatile uint32_t I2C8_ :1;
    volatile uint32_t I2C9_ :1;
    const uint32_t reserved :22;
}PERIPHERAL_I2C_t;

typedef volatile struct
{
    volatile uint32_t USB_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_USB_t;

typedef volatile struct
{
    volatile uint32_t EPHY_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_EPHY_t;

typedef volatile struct
{
    volatile uint32_t CAN0_ :1;
    volatile uint32_t CAN1_ :1;
    const uint32_t reserved :30;
}PERIPHERAL_CAN_t;

typedef volatile struct
{
    volatile uint32_t ADC0_ :1;
    volatile uint32_t ADC1_ :1;
    const uint32_t reserved:30;
}PERIPHERAL_ADC_t;

typedef volatile struct
{
    volatile uint32_t ACMP_ :1;
    const uint32_t reserved:31;
}PERIPHERAL_ACMP_t;

typedef volatile struct
{
    volatile uint32_t PWM0_ :1;
    const uint32_t reserved:31;
}PERIPHERAL_PWM_t;

typedef volatile struct
{
    volatile uint32_t QEI0_ :1;
    const uint32_t reserved:31;
}PERIPHERAL_QEI_t;

typedef volatile struct
{
    volatile uint32_t LPC_ :1;
    const uint32_t reserved:31;
}PERIPHERAL_LPC_t;

typedef volatile struct
{
    volatile uint32_t PECI_ :1;
    const uint32_t reserved:31;
}PERIPHERAL_PECI_t;

typedef volatile struct
{
    volatile uint32_t FAN_ :1;
    const uint32_t reserved:31;
}PERIPHERAL_FAN_t;

typedef volatile struct
{
    volatile uint32_t EEPROM_ :1;
    const uint32_t reserved:31;
}PERIPHERAL_EEPROM_t;

typedef volatile struct
{
    volatile uint32_t WTIMER0_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_WTIMER_t;

typedef volatile struct
{
    volatile uint32_t RTS_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_RTS_t;

typedef volatile struct
{
    volatile uint32_t CCM_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_CCM_t;

typedef volatile struct
{
    volatile uint32_t LCD_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_LCD_t;

typedef volatile struct
{
    volatile uint32_t OWIRE_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_OWIRE_t;

typedef volatile struct
{
    volatile uint32_t EMAC_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_EMAC_t;

typedef volatile struct
{
    volatile uint32_t PRB_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_PRB_t;

typedef volatile struct
{
    volatile uint32_t HIM_ :1;
    const uint32_t reserved :31;
}PERIPHERAL_HIM_t;

typedef volatile struct
{
    volatile const uint32_t ID :32;
}UNIQUEID_t;/*0x00000008*/

typedef volatile struct
{
    volatile uint32_t SHACFG :1;
    volatile uint32_t AESCFG :1;
    volatile uint32_t DESCFG :1;
    const uint32_t reserved :29;
}CCMCGREQ_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_H_ */
