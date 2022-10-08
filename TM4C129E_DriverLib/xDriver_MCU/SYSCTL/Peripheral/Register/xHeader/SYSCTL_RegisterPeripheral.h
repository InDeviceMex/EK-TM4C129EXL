/**
 *
 * @file SYSCTL_RegisterPeripheral.h
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
 * @verbatim 23 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/SYSCTL/Peripheral/Register/xHeader/SYSCTL_RegisterAddress.h>
#include <xDriver_MCU/SYSCTL/Peripheral/Struct/xHeader/SYSCTL_StructPeripheral.h>

#define SYSCTL    ((SYSCTL_t*) (SYSCTL_BASE))

/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
#define SYSCTL_DID0    ((DID0_t*) (SYSCTL_BASE + SYSCTL_DID0_OFFSET))
#define SYSCTL_DID0_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_DID0_OFFSET)))

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
#define SYSCTL_DID1    ((DID1_t*) (SYSCTL_BASE + SYSCTL_DID1_OFFSET))
#define SYSCTL_DID1_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_DID1_OFFSET)))

/******************************************************************************************
************************************ 3 PTBOCTL *********************************************
******************************************************************************************/
#define SYSCTL_PTBOCTL    ((PTBOCTL_t*) (SYSCTL_BASE + SYSCTL_PTBOCTL_OFFSET))
#define SYSCTL_PTBOCTL_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PTBOCTL_OFFSET)))

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
#define SYSCTL_RIS    ((RIS_t*) (SYSCTL_BASE + SYSCTL_RIS_OFFSET))
#define SYSCTL_RIS_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_RIS_OFFSET)))

/******************************************************************************************
************************************ 5 IMC *********************************************
******************************************************************************************/
#define SYSCTL_IMC    ((IMC_t*) (SYSCTL_BASE + SYSCTL_IMC_OFFSET))
#define SYSCTL_IMC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_IMC_OFFSET)))

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
#define SYSCTL_MISC    ((MISC_t*) (SYSCTL_BASE + SYSCTL_MISC_OFFSET))
#define SYSCTL_MISC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_MISC_OFFSET)))

/******************************************************************************************
************************************ 7 RESC *********************************************
******************************************************************************************/
#define SYSCTL_RESC    ((RESC_t*) (SYSCTL_BASE + SYSCTL_RESC_OFFSET))
#define SYSCTL_RESC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RESC_OFFSET)))

/******************************************************************************************
************************************ 8 PWRTC *********************************************
******************************************************************************************/
#define SYSCTL_PWRTC    ((PWRTC_t*) (SYSCTL_BASE + SYSCTL_PWRTC_OFFSET))
#define SYSCTL_PWRTC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PWRTC_OFFSET)))

/******************************************************************************************
************************************ 9 NMIC *********************************************
******************************************************************************************/
#define SYSCTL_NMIC    ((NMIC_t*) (SYSCTL_BASE + SYSCTL_NMIC_OFFSET))
#define SYSCTL_NMIC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_NMIC_OFFSET)))

/******************************************************************************************
************************************ 10 MOSCCTL *********************************************
******************************************************************************************/
#define SYSCTL_MOSCCTL    ((MOSCCTL_t*) (SYSCTL_BASE + SYSCTL_MOSCCTL_OFFSET))
#define SYSCTL_MOSCCTL_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_MOSCCTL_OFFSET)))

/******************************************************************************************
************************************ 11 RSCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_RSCLKCFG    ((RSCLKCFG_t*) (SYSCTL_BASE + SYSCTL_RSCLKCFG_OFFSET))
#define SYSCTL_RSCLKCFG_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RSCLKCFG_OFFSET)))

/******************************************************************************************
************************************ 12 MEMTIM0 *********************************************
******************************************************************************************/
#define SYSCTL_MEMTIM0    ((MEMTIM0_t*) (SYSCTL_BASE + SYSCTL_MEMTIM0_OFFSET))
#define SYSCTL_MEMTIM0_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_MEMTIM0_OFFSET)))

/******************************************************************************************
************************************ 13 ALTCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_ALTCLKCFG    ((ALTCLKCFG_t*) (SYSCTL_BASE + SYSCTL_ALTCLKCFG_OFFSET))
#define SYSCTL_ALTCLKCFG_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_ALTCLKCFG_OFFSET)))

/******************************************************************************************
************************************14 DSCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_DSCLKCFG    ((DSCLKCFG_t*) (SYSCTL_BASE + SYSCTL_DSCLKCFG_OFFSET))
#define SYSCTL_DSCLKCFG_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DSCLKCFG_OFFSET)))

/******************************************************************************************
************************************15 DIVSCLK *********************************************
******************************************************************************************/
#define SYSCTL_DIVSCLK    ((DIVSCLK_t*) (SYSCTL_BASE + SYSCTL_DIVSCLK_OFFSET))
#define SYSCTL_DIVSCLK_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DIVSCLK_OFFSET)))

/******************************************************************************************
************************************16 SYSPROP *********************************************
******************************************************************************************/
#define SYSCTL_SYSPROP    ((SYSPROP_t*) (SYSCTL_BASE + SYSCTL_SYSPROP_OFFSET))
#define SYSCTL_SYSPROP_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_SYSPROP_OFFSET)))

/******************************************************************************************
************************************17 PIOSCCAL *********************************************
******************************************************************************************/
#define SYSCTL_PIOSCCAL    ((PIOSCCAL_t*) (SYSCTL_BASE + SYSCTL_PIOSCCAL_OFFSET))
#define SYSCTL_PIOSCCAL_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PIOSCCAL_OFFSET)))

/******************************************************************************************
************************************18 PIOSCSTAT *********************************************
******************************************************************************************/
#define SYSCTL_PIOSCSTAT    ((PIOSCSTAT_t*) (SYSCTL_BASE + SYSCTL_PIOSCSTAT_OFFSET))
#define SYSCTL_PIOSCSTAT_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PIOSCSTAT_OFFSET)))

/******************************************************************************************
************************************19 PLLFREQ0 *********************************************
******************************************************************************************/
#define SYSCTL_PLLFREQ0    ((PLLFREQ0_t*) (SYSCTL_BASE + SYSCTL_PLLFREQ0_OFFSET))
#define SYSCTL_PLLFREQ0_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PLLFREQ0_OFFSET)))

/******************************************************************************************
************************************20 PLLFREQ1 *********************************************
******************************************************************************************/
#define SYSCTL_PLLFREQ1    ((PLLFREQ1_t*) (SYSCTL_BASE + SYSCTL_PLLFREQ1_OFFSET))
#define SYSCTL_PLLFREQ1_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PLLFREQ1_OFFSET)))

/******************************************************************************************
************************************21 PLLSTAT *********************************************
******************************************************************************************/
#define SYSCTL_PLLSTAT    ((PLLSTAT_t*) (SYSCTL_BASE + SYSCTL_PLLSTAT_OFFSET))
#define SYSCTL_PLLSTAT_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PLLSTAT_OFFSET)))

/******************************************************************************************
************************************22 SLPPWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_SLPPWRCFG    ((SLPPWRCFG_t*) (SYSCTL_BASE + SYSCTL_SLPPWRCFG_OFFSET))
#define SYSCTL_SLPPWRCFG_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SLPPWRCFG_OFFSET)))

/******************************************************************************************
************************************23 DSLPPWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_DSLPPWRCFG    ((DSLPPWRCFG_t*) (SYSCTL_BASE + SYSCTL_DSLPPWRCFG_OFFSET))
#define SYSCTL_DSLPPWRCFG_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DSLPPWRCFG_OFFSET)))

/**********************************************************************************
************************************24 NVMSTAT *********************************************
******************************************************************************************/
#define SYSCTL_NVMSTAT    ((NVMSTAT_t*) (SYSCTL_BASE + SYSCTL_NVMSTAT_OFFSET))
#define SYSCTL_NVMSTAT_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_NVMSTAT_OFFSET)))

/******************************************************************************************
************************************25 LDOSPCTL *********************************************
******************************************************************************************/
#define SYSCTL_LDOSPCTL    ((LDOSPCTL_t*) (SYSCTL_BASE + SYSCTL_LDOSPCTL_OFFSET))
#define SYSCTL_LDOSPCTL_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_LDOSPCTL_OFFSET)))

/******************************************************************************************
************************************26 LDOSPCAL *********************************************
******************************************************************************************/
#define SYSCTL_LDOSPCAL    ((LDOSPCAL_t*) (SYSCTL_BASE + SYSCTL_LDOSPCAL_OFFSET))
#define SYSCTL_LDOSPCAL_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_LDOSPCAL_OFFSET)))

/******************************************************************************************
************************************27 LDODPCTL *********************************************
******************************************************************************************/
#define SYSCTL_LDODPCTL    ((LDODPCTL_t*) (SYSCTL_BASE + SYSCTL_LDODPCTL_OFFSET))
#define SYSCTL_LDODPCTL_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_LDODPCTL_OFFSET)))

/******************************************************************************************
************************************28 LDODPCAL *********************************************
******************************************************************************************/
#define SYSCTL_LDODPCAL    ((LDODPCAL_t*) (SYSCTL_BASE + SYSCTL_LDODPCAL_OFFSET))
#define SYSCTL_LDODPCAL_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_LDODPCAL_OFFSET)))

/******************************************************************************************
************************************29 SDPMST *********************************************
******************************************************************************************/
#define SYSCTL_SDPMST    ((SDPMST_t*) (SYSCTL_BASE + SYSCTL_SDPMSTL_OFFSET))
#define SYSCTL_SDPMST_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_SDPMST_OFFSET)))

/******************************************************************************************
************************************30 RESBEHAVCTL *********************************************
******************************************************************************************/
#define SYSCTL_RESBEHAVCTL    ((RESBEHAVCTL_t*) (SYSCTL_BASE + SYSCTL_RESBEHAVCTLL_OFFSET))
#define SYSCTL_RESBEHAVCTL_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_RESBEHAVCTL_OFFSET)))

/******************************************************************************************
************************************31 HSSR *********************************************
******************************************************************************************/
#define SYSCTL_HSSR    ((HSSR_t*) (SYSCTL_BASE + SYSCTL_HSSRL_OFFSET))
#define SYSCTL_HSSR_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_HSSR_OFFSET)))

/******************************************************************************************
************************************32 USBPDS *********************************************
******************************************************************************************/
#define SYSCTL_USBPDS    ((USBPDS_t*) (SYSCTL_BASE + SYSCTL_USBPDSL_OFFSET))
#define SYSCTL_USBPDS_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_USBPDS_OFFSET)))

/******************************************************************************************
************************************33 USBMPC *********************************************
******************************************************************************************/
#define SYSCTL_USBMPC    ((USBMPC_t*) (SYSCTL_BASE + SYSCTL_USBMPCL_OFFSET))
#define SYSCTL_USBMPC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_USBMPC_OFFSET)))

/******************************************************************************************
************************************34 EMACPDS *********************************************
******************************************************************************************/
#define SYSCTL_EMACPDS    ((EMACPDS_t*) (SYSCTL_BASE + SYSCTL_EMACPDSL_OFFSET))
#define SYSCTL_EMACPDS_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_EMACPDS_OFFSET)))

/******************************************************************************************
************************************35 EMACMPC *********************************************
******************************************************************************************/
#define SYSCTL_EMACMPC    ((EMACMPC_t*) (SYSCTL_BASE + SYSCTL_EMACMPCL_OFFSET))
#define SYSCTL_EMACMPC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_EMACMPC_OFFSET)))

/******************************************************************************************
************************************36 CAN0PDS *********************************************
******************************************************************************************/
#define SYSCTL_CAN0PDS    ((CAN0PDS_t*) (SYSCTL_BASE + SYSCTL_CAN0PDSL_OFFSET))
#define SYSCTL_CAN0PDS_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_CAN0PDS_OFFSET)))

/******************************************************************************************
************************************37 CAN0MPC *********************************************
******************************************************************************************/
#define SYSCTL_CAN0MPC    ((CAN0MPC_t*) (SYSCTL_BASE + SYSCTL_CAN0MPCL_OFFSET))
#define SYSCTL_CAN0MPC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_CAN0MPC_OFFSET)))

/******************************************************************************************
************************************38 CAN1PDS *********************************************
******************************************************************************************/
#define SYSCTL_CAN1PDS    ((CAN1PDS_t*) (SYSCTL_BASE + SYSCTL_CAN1PDSL_OFFSET))
#define SYSCTL_CAN1PDS_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_CAN1PDS_OFFSET)))

/******************************************************************************************
************************************39 CAN1MPC *********************************************
******************************************************************************************/
#define SYSCTL_CAN1MPC    ((CAN1MPC_t*) (SYSCTL_BASE + SYSCTL_CAN1MPCL_OFFSET))
#define SYSCTL_CAN1MPC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_CAN1MPC_OFFSET)))




/******************************************************************************************
************************************40 PPWD *********************************************
******************************************************************************************/
#define SYSCTL_PPWD    ((PERIPHERAL_WD_t*) (SYSCTL_BASE + SYSCTL_PPWD_OFFSET))
#define SYSCTL_PPWD_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPWD_OFFSET)))

/******************************************************************************************
************************************41 PPTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PPTIMER    ((PERIPHERAL_TIMER_t*) (SYSCTL_BASE + SYSCTL_PPTIMER_OFFSET))
#define SYSCTL_PPTIMER_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPTIMER_OFFSET)))

/******************************************************************************************
************************************42 PPGPIO *********************************************
******************************************************************************************/
#define SYSCTL_PPGPIO    ((PERIPHERAL_GPIO_t*) (SYSCTL_BASE + SYSCTL_PPGPIO_OFFSET))
#define SYSCTL_PPGPIO_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPGPIO_OFFSET)))

/******************************************************************************************
************************************43 PPDMA *********************************************
******************************************************************************************/
#define SYSCTL_PPDMA    ((PERIPHERAL_DMA_t*) (SYSCTL_BASE + SYSCTL_PPDMA_OFFSET))
#define SYSCTL_PPDMA_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPDMA_OFFSET)))

/******************************************************************************************
************************************44 PPEPI *********************************************
******************************************************************************************/
#define SYSCTL_PPEPI    ((PERIPHERAL_EPI_t*) (SYSCTL_BASE + SYSCTL_PPEPI_OFFSET))
#define SYSCTL_PPEPI_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPEPI_OFFSET)))

/******************************************************************************************
************************************45 PPHIB *********************************************
******************************************************************************************/
#define SYSCTL_PPHIB    ((PERIPHERAL_HIB_t*) (SYSCTL_BASE + SYSCTL_PPHIB_OFFSET))
#define SYSCTL_PPHIB_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPHIB_OFFSET)))

/******************************************************************************************
************************************46 PPUART *********************************************
******************************************************************************************/
#define SYSCTL_PPUART    ((PERIPHERAL_UART_t*) (SYSCTL_BASE + SYSCTL_PPUART_OFFSET))
#define SYSCTL_PPUART_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PPUART_OFFSET)))

/******************************************************************************************
************************************47 PPSSI *********************************************
******************************************************************************************/
#define SYSCTL_PPSSI    ((PERIPHERAL_SSI_t*) (SYSCTL_BASE + SYSCTL_PPSSI_OFFSET))
#define SYSCTL_PPSSI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PPSSI_OFFSET)))

/******************************************************************************************
************************************48 PPI2C *********************************************
******************************************************************************************/
#define SYSCTL_PPI2C    ((PERIPHERAL_I2C_t*) (SYSCTL_BASE + SYSCTL_PPI2C_OFFSET))
#define SYSCTL_PPI2C_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PPI2C_OFFSET)))

/******************************************************************************************
************************************49 PPUSB *********************************************
******************************************************************************************/
#define SYSCTL_PPUSB    ((PERIPHERAL_USB_t*) (SYSCTL_BASE + SYSCTL_PPUSB_OFFSET))
#define SYSCTL_PPUSB_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPUSB_OFFSET)))

/******************************************************************************************
************************************50 PPEPHY *********************************************
******************************************************************************************/
#define SYSCTL_PPEPHY    ((PERIPHERAL_EPHY_t*) (SYSCTL_BASE + SYSCTL_PPEPHY_OFFSET))
#define SYSCTL_PPEPHY_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPEPHY_OFFSET)))

/******************************************************************************************
************************************51 PPCAN *********************************************
******************************************************************************************/
#define SYSCTL_PPCAN    ((PERIPHERAL_CAN_t*) (SYSCTL_BASE + SYSCTL_PPCAN_OFFSET))
#define SYSCTL_PPCAN_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPCAN_OFFSET)))

/******************************************************************************************
************************************52 PPADC *********************************************
******************************************************************************************/
#define SYSCTL_PPADC    ((PERIPHERAL_ADC_t*) (SYSCTL_BASE + SYSCTL_PPADC_OFFSET))
#define SYSCTL_PPADC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPADC_OFFSET)))

/******************************************************************************************
************************************53 PPACMP *********************************************
******************************************************************************************/
#define SYSCTL_PPACMP    ((PERIPHERAL_ACMP_t*) (SYSCTL_BASE + SYSCTL_PPACMP_OFFSET))
#define SYSCTL_PPACMP_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPACMP_OFFSET)))

/****************************************************************************************
************************************54 PPPWM *********************************************
******************************************************************************************/
#define SYSCTL_PPPWM    ((PERIPHERAL_PWM_t*) (SYSCTL_BASE + SYSCTL_PPPWM_OFFSET))
#define SYSCTL_PPPWM_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPPWM_OFFSET)))

/******************************************************************************************
************************************55 PPQEI *********************************************
******************************************************************************************/
#define SYSCTL_PPQEI    ((PERIPHERAL_QEI_t*) (SYSCTL_BASE + SYSCTL_PPQEI_OFFSET))
#define SYSCTL_PPQEI_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPQEI_OFFSET)))

/******************************************************************************************
************************************56 PPLPC *********************************************
******************************************************************************************/
#define SYSCTL_PPLPC    ((PERIPHERAL_LPC_t*) (SYSCTL_BASE + SYSCTL_PPLPC_OFFSET))
#define SYSCTL_PPLPC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPLPC_OFFSET)))

/******************************************************************************************
************************************57 PPPECI *********************************************
******************************************************************************************/
#define SYSCTL_PPPECI    ((PERIPHERAL_PECI_t*) (SYSCTL_BASE + SYSCTL_PPPECI_OFFSET))
#define SYSCTL_PPPECI_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPPECI_OFFSET)))

/******************************************************************************************
************************************58 PPFAN *********************************************
******************************************************************************************/
#define SYSCTL_PPFAN    ((PERIPHERAL_FAN_t*) (SYSCTL_BASE + SYSCTL_PPFAN_OFFSET))
#define SYSCTL_PPFAN_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPFAN_OFFSET)))

/******************************************************************************************
************************************59 PPEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_PPEEPROM    ((PERIPHERAL_EEPROM_t*) (SYSCTL_BASE + SYSCTL_PPEEPROM_OFFSET))
#define SYSCTL_PPEEPROM_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPEEPROM_OFFSET)))

/**********************************************************************************
************************************60 PPWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PPWTIMER    ((PERIPHERAL_WTIMER_t*) (SYSCTL_BASE + SYSCTL_PPWTIMER_OFFSET))
#define SYSCTL_PPWTIMER_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPWTIMER_OFFSET)))

/**********************************************************************************
************************************61 PPRTS *********************************************
******************************************************************************************/
#define SYSCTL_PPRTS    ((PERIPHERAL_RTS_t*) (SYSCTL_BASE + SYSCTL_PPRTS_OFFSET))
#define SYSCTL_PPRTS_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPRTS_OFFSET)))

/**********************************************************************************
************************************62 PPCCM *********************************************
******************************************************************************************/
#define SYSCTL_PPCCM    ((PERIPHERAL_CCM_t*) (SYSCTL_BASE + SYSCTL_PPCCM_OFFSET))
#define SYSCTL_PPCCM_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPCCM_OFFSET)))

/**********************************************************************************
************************************63 PPLCD *********************************************
******************************************************************************************/
#define SYSCTL_PPLCD    ((PERIPHERAL_LCD_t*) (SYSCTL_BASE + SYSCTL_PPLCD_OFFSET))
#define SYSCTL_PPLCD_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPLCD_OFFSET)))

/**********************************************************************************
************************************64 PPOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_PPOWIRE    ((PERIPHERAL_OWIRE_t*) (SYSCTL_BASE + SYSCTL_PPOWIRE_OFFSET))
#define SYSCTL_PPOWIRE_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPOWIRE_OFFSET)))

/**********************************************************************************
************************************65 PPEMAC *********************************************
******************************************************************************************/
#define SYSCTL_PPEMAC    ((PERIPHERAL_EMAC_t*) (SYSCTL_BASE + SYSCTL_PPEMAC_OFFSET))
#define SYSCTL_PPEMAC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPEMAC_OFFSET)))

/**********************************************************************************
************************************66 PPPRB *********************************************
******************************************************************************************/
#define SYSCTL_PPPRB    ((PERIPHERAL_PRB_t*) (SYSCTL_BASE + SYSCTL_PPPRB_OFFSET))
#define SYSCTL_PPPRB_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPPRB_OFFSET)))

/**********************************************************************************
************************************67 PPHIM *********************************************
******************************************************************************************/
#define SYSCTL_PPHIM    ((PERIPHERAL_HIM_t*) (SYSCTL_BASE + SYSCTL_PPHIM_OFFSET))
#define SYSCTL_PPHIM_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PPHIM_OFFSET)))



/******************************************************************************************
************************************68 SRWD *********************************************
******************************************************************************************/
#define SYSCTL_SRWD    ((PERIPHERAL_WD_t*) (SYSCTL_BASE + SYSCTL_SRWD_OFFSET))
#define SYSCTL_SRWD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRWD_OFFSET)))

/******************************************************************************************
************************************69 SRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SRTIMER    ((PERIPHERAL_TIMER_t*) (SYSCTL_BASE + SYSCTL_SRTIMER_OFFSET))
#define SYSCTL_SRTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRTIMER_OFFSET)))

/******************************************************************************************
************************************70 SRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_SRGPIO    ((PERIPHERAL_GPIO_t*) (SYSCTL_BASE + SYSCTL_SRGPIO_OFFSET))
#define SYSCTL_SRGPIO_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRGPIO_OFFSET)))

/******************************************************************************************
************************************71 SRDMA *********************************************
******************************************************************************************/
#define SYSCTL_SRDMA    ((PERIPHERAL_DMA_t*) (SYSCTL_BASE + SYSCTL_SRDMA_OFFSET))
#define SYSCTL_SRDMA_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRDMA_OFFSET)))

/******************************************************************************************
************************************72 SREPI *********************************************
******************************************************************************************/
#define SYSCTL_SREPI    ((PERIPHERAL_EPI_t*) (SYSCTL_BASE + SYSCTL_SREPI_OFFSET))
#define SYSCTL_SREPI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SREPI_OFFSET)))

/******************************************************************************************
************************************73 SRHIB *********************************************
******************************************************************************************/
#define SYSCTL_SRHIB    ((PERIPHERAL_HIB_t*) (SYSCTL_BASE + SYSCTL_SRHIB_OFFSET))
#define SYSCTL_SRHIB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRHIB_OFFSET)))

/******************************************************************************************
************************************74 SRUART *********************************************
******************************************************************************************/
#define SYSCTL_SRUART    ((PERIPHERAL_UART_t*) (SYSCTL_BASE + SYSCTL_SRUART_OFFSET))
#define SYSCTL_SRUART_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRUART_OFFSET)))

/******************************************************************************************
************************************75 SRSSI *********************************************
******************************************************************************************/
#define SYSCTL_SRSSI    ((PERIPHERAL_SSI_t*) (SYSCTL_BASE + SYSCTL_SRSSI_OFFSET))
#define SYSCTL_SRSSI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRSSI_OFFSET)))

/******************************************************************************************
************************************76 SRI2C *********************************************
******************************************************************************************/
#define SYSCTL_SRI2C    ((PERIPHERAL_I2C_t*) (SYSCTL_BASE + SYSCTL_SRI2C_OFFSET))
#define SYSCTL_SRI2C_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRI2C_OFFSET)))

/******************************************************************************************
************************************77 SRUSB *********************************************
******************************************************************************************/
#define SYSCTL_SRUSB    ((PERIPHERAL_USB_t*) (SYSCTL_BASE + SYSCTL_SRUSB_OFFSET))
#define SYSCTL_SRUSB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRUSB_OFFSET)))

/******************************************************************************************
************************************78 SREPHY *********************************************
******************************************************************************************/
#define SYSCTL_SREPHY    ((PERIPHERAL_EPHY_t*) (SYSCTL_BASE + SYSCTL_SREPHY_OFFSET))
#define SYSCTL_SREPHY_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SREPHY_OFFSET)))

/******************************************************************************************
************************************79 SRCAN *********************************************
******************************************************************************************/
#define SYSCTL_SRCAN    ((PERIPHERAL_CAN_t*) (SYSCTL_BASE + SYSCTL_SRCAN_OFFSET))
#define SYSCTL_SRCAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRCAN_OFFSET)))

/******************************************************************************************
************************************80 SRADC *********************************************
******************************************************************************************/
#define SYSCTL_SRADC    ((PERIPHERAL_ADC_t*) (SYSCTL_BASE + SYSCTL_SRADC_OFFSET))
#define SYSCTL_SRADC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRADC_OFFSET)))

/******************************************************************************************
************************************81 SRACMP *********************************************
******************************************************************************************/
#define SYSCTL_SRACMP    ((PERIPHERAL_ACMP_t*) (SYSCTL_BASE + SYSCTL_SRACMP_OFFSET))
#define SYSCTL_SRACMP_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRACMP_OFFSET)))

/****************************************************************************************
************************************82 SRPWM *********************************************
******************************************************************************************/
#define SYSCTL_SRPWM    ((PERIPHERAL_PWM_t*) (SYSCTL_BASE + SYSCTL_SRPWM_OFFSET))
#define SYSCTL_SRPWM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRPWM_OFFSET)))

/******************************************************************************************
************************************83 SRQEI *********************************************
******************************************************************************************/
#define SYSCTL_SRQEI    ((PERIPHERAL_QEI_t*) (SYSCTL_BASE + SYSCTL_SRQEI_OFFSET))
#define SYSCTL_SRQEI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRQEI_OFFSET)))

/******************************************************************************************
************************************84 SRLPC *********************************************
******************************************************************************************/
#define SYSCTL_SRLPC    ((PERIPHERAL_LPC_t*) (SYSCTL_BASE + SYSCTL_SRLPC_OFFSET))
#define SYSCTL_SRLPC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRLPC_OFFSET)))

/******************************************************************************************
************************************85 SRPECI *********************************************
******************************************************************************************/
#define SYSCTL_SRPECI    ((PERIPHERAL_PECI_t*) (SYSCTL_BASE + SYSCTL_SRPECI_OFFSET))
#define SYSCTL_SRPECI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRPECI_OFFSET)))

/******************************************************************************************
************************************86 SRFAN *********************************************
******************************************************************************************/
#define SYSCTL_SRFAN    ((PERIPHERAL_FAN_t*) (SYSCTL_BASE + SYSCTL_SRFAN_OFFSET))
#define SYSCTL_SRFAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRFAN_OFFSET)))

/******************************************************************************************
************************************87 SREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_SREEPROM    ((PERIPHERAL_EEPROM_t*) (SYSCTL_BASE + SYSCTL_SREEPROM_OFFSET))
#define SYSCTL_SREEPROM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SREEPROM_OFFSET)))

/**********************************************************************************
************************************88 SRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SRWTIMER    ((PERIPHERAL_WTIMER_t*) (SYSCTL_BASE + SYSCTL_SRWTIMER_OFFSET))
#define SYSCTL_SRWTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRWTIMER_OFFSET)))

/**********************************************************************************
************************************89 SRRTS *********************************************
******************************************************************************************/
#define SYSCTL_SRRTS    ((PERIPHERAL_RTS_t*) (SYSCTL_BASE + SYSCTL_SRRTS_OFFSET))
#define SYSCTL_SRRTS_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRRTS_OFFSET)))

/**********************************************************************************
************************************90 SRCCM *********************************************
******************************************************************************************/
#define SYSCTL_SRCCM    ((PERIPHERAL_CCM_t*) (SYSCTL_BASE + SYSCTL_SRCCM_OFFSET))
#define SYSCTL_SRCCM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRCCM_OFFSET)))

/**********************************************************************************
************************************91 SRLCD *********************************************
******************************************************************************************/
#define SYSCTL_SRLCD    ((PERIPHERAL_LCD_t*) (SYSCTL_BASE + SYSCTL_SRLCD_OFFSET))
#define SYSCTL_SRLCD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRLCD_OFFSET)))

/**********************************************************************************
************************************92 SROWIRE *********************************************
******************************************************************************************/
#define SYSCTL_SROWIRE    ((PERIPHERAL_OWIRE_t*) (SYSCTL_BASE + SYSCTL_SROWIRE_OFFSET))
#define SYSCTL_SROWIRE_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SROWIRE_OFFSET)))

/**********************************************************************************
************************************93 SREMAC *********************************************
******************************************************************************************/
#define SYSCTL_SREMAC    ((PERIPHERAL_EMAC_t*) (SYSCTL_BASE + SYSCTL_SREMAC_OFFSET))
#define SYSCTL_SREMAC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SREMAC_OFFSET)))

/**********************************************************************************
************************************94 SRPRB *********************************************
******************************************************************************************/
#define SYSCTL_SRPRB    ((PERIPHERAL_PRB_t*) (SYSCTL_BASE + SYSCTL_SRPRB_OFFSET))
#define SYSCTL_SRPRB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRPRB_OFFSET)))

/**********************************************************************************
************************************95 SRHIM *********************************************
******************************************************************************************/
#define SYSCTL_SRHIM    ((PERIPHERAL_HIM_t*) (SYSCTL_BASE + SYSCTL_SRHIM_OFFSET))
#define SYSCTL_SRHIM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SRHIM_OFFSET)))



/******************************************************************************************
************************************96 RCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_RCGCWD    ((PERIPHERAL_WD_t*) (SYSCTL_BASE + SYSCTL_RCGCWD_OFFSET))
#define SYSCTL_RCGCWD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCWD_OFFSET)))

/******************************************************************************************
************************************97 RCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_RCGCTIMER    ((PERIPHERAL_TIMER_t*) (SYSCTL_BASE + SYSCTL_RCGCTIMER_OFFSET))
#define SYSCTL_RCGCTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCTIMER_OFFSET)))

/******************************************************************************************
************************************98 RCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_RCGCGPIO    ((PERIPHERAL_GPIO_t*) (SYSCTL_BASE + SYSCTL_RCGCGPIO_OFFSET))
#define SYSCTL_RCGCGPIO_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCGPIO_OFFSET)))

/******************************************************************************************
************************************99 RCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_RCGCDMA    ((PERIPHERAL_DMA_t*) (SYSCTL_BASE + SYSCTL_RCGCDMA_OFFSET))
#define SYSCTL_RCGCDMA_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCDMA_OFFSET)))

/******************************************************************************************
************************************100 RCGCEPI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCEPI    ((PERIPHERAL_EPI_t*) (SYSCTL_BASE + SYSCTL_RCGCEPI_OFFSET))
#define SYSCTL_RCGCEPI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCEPI_OFFSET)))

/******************************************************************************************
************************************101 RCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_RCGCHIB    ((PERIPHERAL_HIB_t*) (SYSCTL_BASE + SYSCTL_RCGCHIB_OFFSET))
#define SYSCTL_RCGCHIB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCHIB_OFFSET)))

/******************************************************************************************
************************************102 RCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_RCGCUART    ((PERIPHERAL_UART_t*) (SYSCTL_BASE + SYSCTL_RCGCUART_OFFSET))
#define SYSCTL_RCGCUART_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCUART_OFFSET)))

/******************************************************************************************
************************************103 RCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCSSI    ((PERIPHERAL_SSI_t*) (SYSCTL_BASE + SYSCTL_RCGCSSI_OFFSET))
#define SYSCTL_RCGCSSI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCSSI_OFFSET)))

/******************************************************************************************
************************************104 RCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_RCGCI2C    ((PERIPHERAL_I2C_t*) (SYSCTL_BASE + SYSCTL_RCGCI2C_OFFSET))
#define SYSCTL_RCGCI2C_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCI2C_OFFSET)))

/******************************************************************************************
************************************105 RCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_RCGCUSB    ((PERIPHERAL_USB_t*) (SYSCTL_BASE + SYSCTL_RCGCUSB_OFFSET))
#define SYSCTL_RCGCUSB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCUSB_OFFSET)))

/******************************************************************************************
************************************106 RCGCEPHY *********************************************
******************************************************************************************/
#define SYSCTL_RCGCEPHY    ((PERIPHERAL_EPHY_t*) (SYSCTL_BASE + SYSCTL_RCGCEPHY_OFFSET))
#define SYSCTL_RCGCEPHY_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCEPHY_OFFSET)))

/******************************************************************************************
************************************107 RCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_RCGCCAN    ((PERIPHERAL_CAN_t*) (SYSCTL_BASE + SYSCTL_RCGCCAN_OFFSET))
#define SYSCTL_RCGCCAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCCAN_OFFSET)))

/******************************************************************************************
************************************108 RCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_RCGCADC    ((PERIPHERAL_ADC_t*) (SYSCTL_BASE + SYSCTL_RCGCADC_OFFSET))
#define SYSCTL_RCGCADC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCADC_OFFSET)))

/******************************************************************************************
************************************109 RCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_RCGCACMP    ((PERIPHERAL_ACMP_t*) (SYSCTL_BASE + SYSCTL_RCGCACMP_OFFSET))
#define SYSCTL_RCGCACMP_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCACMP_OFFSET)))

/****************************************************************************************
************************************110 RCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCPWM    ((PERIPHERAL_PWM_t*) (SYSCTL_BASE + SYSCTL_RCGCPWM_OFFSET))
#define SYSCTL_RCGCPWM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCPWM_OFFSET)))

/******************************************************************************************
************************************111 RCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCQEI    ((PERIPHERAL_QEI_t*) (SYSCTL_BASE + SYSCTL_RCGCQEI_OFFSET))
#define SYSCTL_RCGCQEI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCQEI_OFFSET)))

/******************************************************************************************
************************************112 RCGCLPC *********************************************
******************************************************************************************/
#define SYSCTL_RCGCLPC    ((PERIPHERAL_LPC_t*) (SYSCTL_BASE + SYSCTL_RCGCLPC_OFFSET))
#define SYSCTL_RCGCLPC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCLPC_OFFSET)))

/******************************************************************************************
************************************113 RCGCPECI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCPECI    ((PERIPHERAL_PECI_t*) (SYSCTL_BASE + SYSCTL_RCGCPECI_OFFSET))
#define SYSCTL_RCGCPECI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCPECI_OFFSET)))

/******************************************************************************************
************************************114 RCGCFAN *********************************************
******************************************************************************************/
#define SYSCTL_RCGCFAN    ((PERIPHERAL_FAN_t*) (SYSCTL_BASE + SYSCTL_RCGCFAN_OFFSET))
#define SYSCTL_RCGCFAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCFAN_OFFSET)))

/******************************************************************************************
************************************115 RCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCEEPROM    ((PERIPHERAL_EEPROM_t*) (SYSCTL_BASE + SYSCTL_RCGCEEPROM_OFFSET))
#define SYSCTL_RCGCEEPROM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCEEPROM_OFFSET)))

/**********************************************************************************
************************************116 RCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_RCGCWTIMER    ((PERIPHERAL_WTIMER_t*) (SYSCTL_BASE + SYSCTL_RCGCWTIMER_OFFSET))
#define SYSCTL_RCGCWTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCWTIMER_OFFSET)))

/**********************************************************************************
************************************117 RCGCRTS *********************************************
******************************************************************************************/
#define SYSCTL_RCGCRTS    ((PERIPHERAL_RTS_t*) (SYSCTL_BASE + SYSCTL_RCGCRTS_OFFSET))
#define SYSCTL_RCGCRTS_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCRTS_OFFSET)))

/**********************************************************************************
************************************118 RCGCCCM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCCCM    ((PERIPHERAL_CCM_t*) (SYSCTL_BASE + SYSCTL_RCGCCCM_OFFSET))
#define SYSCTL_RCGCCCM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCCCM_OFFSET)))

/**********************************************************************************
************************************119 RCGCLCD *********************************************
******************************************************************************************/
#define SYSCTL_RCGCLCD    ((PERIPHERAL_LCD_t*) (SYSCTL_BASE + SYSCTL_RCGCLCD_OFFSET))
#define SYSCTL_RCGCLCD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCLCD_OFFSET)))

/**********************************************************************************
************************************120 RCGCOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_RCGCOWIRE    ((PERIPHERAL_OWIRE_t*) (SYSCTL_BASE + SYSCTL_RCGCOWIRE_OFFSET))
#define SYSCTL_RCGCOWIRE_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCOWIRE_OFFSET)))

/**********************************************************************************
************************************121 RCGCEMAC *********************************************
******************************************************************************************/
#define SYSCTL_RCGCEMAC    ((PERIPHERAL_EMAC_t*) (SYSCTL_BASE + SYSCTL_RCGCEMAC_OFFSET))
#define SYSCTL_RCGCEMAC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCEMAC_OFFSET)))

/**********************************************************************************
************************************122 RCGCPRB *********************************************
******************************************************************************************/
#define SYSCTL_RCGCPRB    ((PERIPHERAL_PRB_t*) (SYSCTL_BASE + SYSCTL_RCGCPRB_OFFSET))
#define SYSCTL_RCGCPRB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCPRB_OFFSET)))

/**********************************************************************************
************************************123 RCGCHIM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCHIM    ((PERIPHERAL_HIM_t*) (SYSCTL_BASE + SYSCTL_RCGCHIM_OFFSET))
#define SYSCTL_RCGCHIM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RCGCHIM_OFFSET)))




/******************************************************************************************
************************************124 SCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_SCGCWD    ((PERIPHERAL_WD_t*) (SYSCTL_BASE + SYSCTL_SCGCWD_OFFSET))
#define SYSCTL_SCGCWD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCWD_OFFSET)))

/******************************************************************************************
************************************125 SCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SCGCTIMER    ((PERIPHERAL_TIMER_t*) (SYSCTL_BASE + SYSCTL_SCGCTIMER_OFFSET))
#define SYSCTL_SCGCTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCTIMER_OFFSET)))

/******************************************************************************************
************************************126 SCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_SCGCGPIO    ((PERIPHERAL_GPIO_t*) (SYSCTL_BASE + SYSCTL_SCGCGPIO_OFFSET))
#define SYSCTL_SCGCGPIO_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCGPIO_OFFSET)))

/******************************************************************************************
************************************127 SCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_SCGCDMA    ((PERIPHERAL_DMA_t*) (SYSCTL_BASE + SYSCTL_SCGCDMA_OFFSET))
#define SYSCTL_SCGCDMA_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCDMA_OFFSET)))

/******************************************************************************************
************************************128 SCGCEPI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCEPI    ((PERIPHERAL_EPI_t*) (SYSCTL_BASE + SYSCTL_SCGCEPI_OFFSET))
#define SYSCTL_SCGCEPI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCEPI_OFFSET)))

/******************************************************************************************
************************************129 SCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_SCGCHIB    ((PERIPHERAL_HIB_t*) (SYSCTL_BASE + SYSCTL_SCGCHIB_OFFSET))
#define SYSCTL_SCGCHIB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCHIB_OFFSET)))

/******************************************************************************************
************************************130 SCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_SCGCUART    ((PERIPHERAL_UART_t*) (SYSCTL_BASE + SYSCTL_SCGCUART_OFFSET))
#define SYSCTL_SCGCUART_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCUART_OFFSET)))

/******************************************************************************************
************************************131 SCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCSSI    ((PERIPHERAL_SSI_t*) (SYSCTL_BASE + SYSCTL_SCGCSSI_OFFSET))
#define SYSCTL_SCGCSSI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCSSI_OFFSET)))

/******************************************************************************************
************************************132 SCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_SCGCI2C    ((PERIPHERAL_I2C_t*) (SYSCTL_BASE + SYSCTL_SCGCI2C_OFFSET))
#define SYSCTL_SCGCI2C_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCI2C_OFFSET)))

/******************************************************************************************
************************************133 SCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_SCGCUSB    ((PERIPHERAL_USB_t*) (SYSCTL_BASE + SYSCTL_SCGCUSB_OFFSET))
#define SYSCTL_SCGCUSB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCUSB_OFFSET)))

/******************************************************************************************
************************************134 SCGCEPHY *********************************************
******************************************************************************************/
#define SYSCTL_SCGCEPHY    ((PERIPHERAL_EPHY_t*) (SYSCTL_BASE + SYSCTL_SCGCEPHY_OFFSET))
#define SYSCTL_SCGCEPHY_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCEPHY_OFFSET)))

/******************************************************************************************
************************************135 SCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_SCGCCAN    ((PERIPHERAL_CAN_t*) (SYSCTL_BASE + SYSCTL_SCGCCAN_OFFSET))
#define SYSCTL_SCGCCAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCCAN_OFFSET)))

/******************************************************************************************
************************************136 SCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_SCGCADC    ((PERIPHERAL_ADC_t*) (SYSCTL_BASE + SYSCTL_SCGCADC_OFFSET))
#define SYSCTL_SCGCADC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCADC_OFFSET)))

/******************************************************************************************
************************************137 SCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_SCGCACMP    ((PERIPHERAL_ACMP_t*) (SYSCTL_BASE + SYSCTL_SCGCACMP_OFFSET))
#define SYSCTL_SCGCACMP_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCACMP_OFFSET)))

/****************************************************************************************
************************************138 SCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCPWM    ((PERIPHERAL_PWM_t*) (SYSCTL_BASE + SYSCTL_SCGCPWM_OFFSET))
#define SYSCTL_SCGCPWM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCPWM_OFFSET)))

/******************************************************************************************
************************************139 SCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCQEI    ((PERIPHERAL_QEI_t*) (SYSCTL_BASE + SYSCTL_SCGCQEI_OFFSET))
#define SYSCTL_SCGCQEI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCQEI_OFFSET)))

/******************************************************************************************
************************************140 SCGCLPC *********************************************
******************************************************************************************/
#define SYSCTL_SCGCLPC    ((PERIPHERAL_LPC_t*) (SYSCTL_BASE + SYSCTL_SCGCLPC_OFFSET))
#define SYSCTL_SCGCLPC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCLPC_OFFSET)))

/******************************************************************************************
************************************141 SCGCPECI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCPECI    ((PERIPHERAL_PECI_t*) (SYSCTL_BASE + SYSCTL_SCGCPECI_OFFSET))
#define SYSCTL_SCGCPECI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCPECI_OFFSET)))

/******************************************************************************************
************************************142 SCGCFAN *********************************************
******************************************************************************************/
#define SYSCTL_SCGCFAN    ((PERIPHERAL_FAN_t*) (SYSCTL_BASE + SYSCTL_SCGCFAN_OFFSET))
#define SYSCTL_SCGCFAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCFAN_OFFSET)))

/******************************************************************************************
************************************143 SCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCEEPROM    ((PERIPHERAL_EEPROM_t*) (SYSCTL_BASE + SYSCTL_SCGCEEPROM_OFFSET))
#define SYSCTL_SCGCEEPROM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCEEPROM_OFFSET)))

/**********************************************************************************
************************************144 SCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SCGCWTIMER    ((PERIPHERAL_WTIMER_t*) (SYSCTL_BASE + SYSCTL_SCGCWTIMER_OFFSET))
#define SYSCTL_SCGCWTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCWTIMER_OFFSET)))

/**********************************************************************************
************************************145 SCGCRTS *********************************************
******************************************************************************************/
#define SYSCTL_SCGCRTS    ((PERIPHERAL_RTS_t*) (SYSCTL_BASE + SYSCTL_SCGCRTS_OFFSET))
#define SYSCTL_SCGCRTS_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCRTS_OFFSET)))

/**********************************************************************************
************************************146 SCGCCCM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCCCM    ((PERIPHERAL_CCM_t*) (SYSCTL_BASE + SYSCTL_SCGCCCM_OFFSET))
#define SYSCTL_SCGCCCM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCCCM_OFFSET)))

/**********************************************************************************
************************************147 SCGCLCD *********************************************
******************************************************************************************/
#define SYSCTL_SCGCLCD    ((PERIPHERAL_LCD_t*) (SYSCTL_BASE + SYSCTL_SCGCLCD_OFFSET))
#define SYSCTL_SCGCLCD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCLCD_OFFSET)))

/**********************************************************************************
************************************148 SCGCOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_SCGCOWIRE    ((PERIPHERAL_OWIRE_t*) (SYSCTL_BASE + SYSCTL_SCGCOWIRE_OFFSET))
#define SYSCTL_SCGCOWIRE_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCOWIRE_OFFSET)))

/**********************************************************************************
************************************149 SCGCEMAC *********************************************
******************************************************************************************/
#define SYSCTL_SCGCEMAC    ((PERIPHERAL_EMAC_t*) (SYSCTL_BASE + SYSCTL_SCGCEMAC_OFFSET))
#define SYSCTL_SCGCEMAC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCEMAC_OFFSET)))

/**********************************************************************************
************************************150 SCGCPRB *********************************************
******************************************************************************************/
#define SYSCTL_SCGCPRB    ((PERIPHERAL_PRB_t*) (SYSCTL_BASE + SYSCTL_SCGCPRB_OFFSET))
#define SYSCTL_SCGCPRB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCPRB_OFFSET)))

/**********************************************************************************
************************************151 SCGCHIM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCHIM    ((PERIPHERAL_HIM_t*) (SYSCTL_BASE + SYSCTL_SCGCHIM_OFFSET))
#define SYSCTL_SCGCHIM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SCGCHIM_OFFSET)))




/******************************************************************************************
************************************152 DCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_DCGCWD    ((PERIPHERAL_WD_t*) (SYSCTL_BASE + SYSCTL_DCGCWD_OFFSET))
#define SYSCTL_DCGCWD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCWD_OFFSET)))

/******************************************************************************************
************************************153 DCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_DCGCTIMER    ((PERIPHERAL_TIMER_t*) (SYSCTL_BASE + SYSCTL_DCGCTIMER_OFFSET))
#define SYSCTL_DCGCTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCTIMER_OFFSET)))

/******************************************************************************************
************************************154 DCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_DCGCGPIO    ((PERIPHERAL_GPIO_t*) (SYSCTL_BASE + SYSCTL_DCGCGPIO_OFFSET))
#define SYSCTL_DCGCGPIO_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCGPIO_OFFSET)))

/******************************************************************************************
************************************155 DCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_DCGCDMA    ((PERIPHERAL_DMA_t*) (SYSCTL_BASE + SYSCTL_DCGCDMA_OFFSET))
#define SYSCTL_DCGCDMA_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCDMA_OFFSET)))

/******************************************************************************************
************************************156 DCGCEPI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCEPI    ((PERIPHERAL_EPI_t*) (SYSCTL_BASE + SYSCTL_DCGCEPI_OFFSET))
#define SYSCTL_DCGCEPI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCEPI_OFFSET)))

/******************************************************************************************
************************************157 DCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_DCGCHIB    ((PERIPHERAL_HIB_t*) (SYSCTL_BASE + SYSCTL_DCGCHIB_OFFSET))
#define SYSCTL_DCGCHIB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCHIB_OFFSET)))

/******************************************************************************************
************************************158 DCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_DCGCUART    ((PERIPHERAL_UART_t*) (SYSCTL_BASE + SYSCTL_DCGCUART_OFFSET))
#define SYSCTL_DCGCUART_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCUART_OFFSET)))

/******************************************************************************************
************************************159 DCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCSSI    ((PERIPHERAL_SSI_t*) (SYSCTL_BASE + SYSCTL_DCGCSSI_OFFSET))
#define SYSCTL_DCGCSSI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCSSI_OFFSET)))

/******************************************************************************************
************************************160 DCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_DCGCI2C    ((PERIPHERAL_I2C_t*) (SYSCTL_BASE + SYSCTL_DCGCI2C_OFFSET))
#define SYSCTL_DCGCI2C_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCI2C_OFFSET)))

/******************************************************************************************
************************************161 DCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_DCGCUSB    ((PERIPHERAL_USB_t*) (SYSCTL_BASE + SYSCTL_DCGCUSB_OFFSET))
#define SYSCTL_DCGCUSB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCUSB_OFFSET)))

/******************************************************************************************
************************************162 DCGCEPHY *********************************************
******************************************************************************************/
#define SYSCTL_DCGCEPHY    ((PERIPHERAL_EPHY_t*) (SYSCTL_BASE + SYSCTL_DCGCEPHY_OFFSET))
#define SYSCTL_DCGCEPHY_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCEPHY_OFFSET)))

/******************************************************************************************
************************************163 DCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_DCGCCAN    ((PERIPHERAL_CAN_t*) (SYSCTL_BASE + SYSCTL_DCGCCAN_OFFSET))
#define SYSCTL_DCGCCAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCCAN_OFFSET)))

/******************************************************************************************
************************************164 DCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_DCGCADC    ((PERIPHERAL_ADC_t*) (SYSCTL_BASE + SYSCTL_DCGCADC_OFFSET))
#define SYSCTL_DCGCADC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCADC_OFFSET)))

/******************************************************************************************
************************************165 DCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_DCGCACMP    ((PERIPHERAL_ACMP_t*) (SYSCTL_BASE + SYSCTL_DCGCACMP_OFFSET))
#define SYSCTL_DCGCACMP_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCACMP_OFFSET)))

/****************************************************************************************
************************************166 DCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCPWM    ((PERIPHERAL_PWM_t*) (SYSCTL_BASE + SYSCTL_DCGCPWM_OFFSET))
#define SYSCTL_DCGCPWM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCPWM_OFFSET)))

/******************************************************************************************
************************************167 DCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCQEI    ((PERIPHERAL_QEI_t*) (SYSCTL_BASE + SYSCTL_DCGCQEI_OFFSET))
#define SYSCTL_DCGCQEI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCQEI_OFFSET)))

/******************************************************************************************
************************************168 DCGCLPC *********************************************
******************************************************************************************/
#define SYSCTL_DCGCLPC    ((PERIPHERAL_LPC_t*) (SYSCTL_BASE + SYSCTL_DCGCLPC_OFFSET))
#define SYSCTL_DCGCLPC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCLPC_OFFSET)))

/******************************************************************************************
************************************169 DCGCPECI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCPECI    ((PERIPHERAL_PECI_t*) (SYSCTL_BASE + SYSCTL_DCGCPECI_OFFSET))
#define SYSCTL_DCGCPECI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCPECI_OFFSET)))

/******************************************************************************************
************************************170 DCGCFAN *********************************************
******************************************************************************************/
#define SYSCTL_DCGCFAN    ((PERIPHERAL_FAN_t*) (SYSCTL_BASE + SYSCTL_DCGCFAN_OFFSET))
#define SYSCTL_DCGCFAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCFAN_OFFSET)))

/******************************************************************************************
************************************171 DCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCEEPROM    ((PERIPHERAL_EEPROM_t*) (SYSCTL_BASE + SYSCTL_DCGCEEPROM_OFFSET))
#define SYSCTL_DCGCEEPROM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCEEPROM_OFFSET)))

/**********************************************************************************
************************************172 DCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_DCGCWTIMER    ((PERIPHERAL_WTIMER_t*) (SYSCTL_BASE + SYSCTL_DCGCWTIMER_OFFSET))
#define SYSCTL_DCGCWTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCWTIMER_OFFSET)))

/**********************************************************************************
************************************173 DCGCRTS *********************************************
******************************************************************************************/
#define SYSCTL_DCGCRTS    ((PERIPHERAL_RTS_t*) (SYSCTL_BASE + SYSCTL_DCGCRTS_OFFSET))
#define SYSCTL_DCGCRTS_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCRTS_OFFSET)))

/**********************************************************************************
************************************174 DCGCCCM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCCCM    ((PERIPHERAL_CCM_t*) (SYSCTL_BASE + SYSCTL_DCGCCCM_OFFSET))
#define SYSCTL_DCGCCCM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCCCM_OFFSET)))

/**********************************************************************************
************************************175 DCGCLCD *********************************************
******************************************************************************************/
#define SYSCTL_DCGCLCD    ((PERIPHERAL_LCD_t*) (SYSCTL_BASE + SYSCTL_DCGCLCD_OFFSET))
#define SYSCTL_DCGCLCD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCLCD_OFFSET)))

/**********************************************************************************
************************************176 DCGCOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_DCGCOWIRE    ((PERIPHERAL_OWIRE_t*) (SYSCTL_BASE + SYSCTL_DCGCOWIRE_OFFSET))
#define SYSCTL_DCGCOWIRE_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCOWIRE_OFFSET)))

/**********************************************************************************
************************************177 DCGCEMAC *********************************************
******************************************************************************************/
#define SYSCTL_DCGCEMAC    ((PERIPHERAL_EMAC_t*) (SYSCTL_BASE + SYSCTL_DCGCEMAC_OFFSET))
#define SYSCTL_DCGCEMAC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCEMAC_OFFSET)))

/**********************************************************************************
************************************178 DCGCPRB *********************************************
******************************************************************************************/
#define SYSCTL_DCGCPRB    ((PERIPHERAL_PRB_t*) (SYSCTL_BASE + SYSCTL_DCGCPRB_OFFSET))
#define SYSCTL_DCGCPRB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCPRB_OFFSET)))

/**********************************************************************************
************************************179 DCGCHIM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCHIM    ((PERIPHERAL_HIM_t*) (SYSCTL_BASE + SYSCTL_DCGCHIM_OFFSET))
#define SYSCTL_DCGCHIM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_DCGCHIM_OFFSET)))




/******************************************************************************************
************************************180 PCWD *********************************************
******************************************************************************************/
#define SYSCTL_PCWD    ((PERIPHERAL_WD_t*) (SYSCTL_BASE + SYSCTL_PCWD_OFFSET))
#define SYSCTL_PCWD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCWD_OFFSET)))

/******************************************************************************************
************************************181 PCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PCTIMER    ((PERIPHERAL_TIMER_t*) (SYSCTL_BASE + SYSCTL_PCTIMER_OFFSET))
#define SYSCTL_PCTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCTIMER_OFFSET)))

/******************************************************************************************
************************************182 PCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_PCGPIO    ((PERIPHERAL_GPIO_t*) (SYSCTL_BASE + SYSCTL_PCGPIO_OFFSET))
#define SYSCTL_PCGPIO_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCGPIO_OFFSET)))

/******************************************************************************************
************************************183 PCDMA *********************************************
******************************************************************************************/
#define SYSCTL_PCDMA    ((PERIPHERAL_DMA_t*) (SYSCTL_BASE + SYSCTL_PCDMA_OFFSET))
#define SYSCTL_PCDMA_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCDMA_OFFSET)))

/******************************************************************************************
************************************184 PCEPI *********************************************
******************************************************************************************/
#define SYSCTL_PCEPI    ((PERIPHERAL_EPI_t*) (SYSCTL_BASE + SYSCTL_PCEPI_OFFSET))
#define SYSCTL_PCEPI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCEPI_OFFSET)))

/******************************************************************************************
************************************185 PCHIB *********************************************
******************************************************************************************/
#define SYSCTL_PCHIB    ((PERIPHERAL_HIB_t*) (SYSCTL_BASE + SYSCTL_PCHIB_OFFSET))
#define SYSCTL_PCHIB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCHIB_OFFSET)))

/******************************************************************************************
************************************186 PCUART *********************************************
******************************************************************************************/
#define SYSCTL_PCUART    ((PERIPHERAL_UART_t*) (SYSCTL_BASE + SYSCTL_PCUART_OFFSET))
#define SYSCTL_PCUART_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCUART_OFFSET)))

/******************************************************************************************
************************************187 PCSSI *********************************************
******************************************************************************************/
#define SYSCTL_PCSSI    ((PERIPHERAL_SSI_t*) (SYSCTL_BASE + SYSCTL_PCSSI_OFFSET))
#define SYSCTL_PCSSI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCSSI_OFFSET)))

/******************************************************************************************
************************************188 PCI2C *********************************************
******************************************************************************************/
#define SYSCTL_PCI2C    ((PERIPHERAL_I2C_t*) (SYSCTL_BASE + SYSCTL_PCI2C_OFFSET))
#define SYSCTL_PCI2C_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCI2C_OFFSET)))

/******************************************************************************************
************************************189 PCUSB *********************************************
******************************************************************************************/
#define SYSCTL_PCUSB    ((PERIPHERAL_USB_t*) (SYSCTL_BASE + SYSCTL_PCUSB_OFFSET))
#define SYSCTL_PCUSB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCUSB_OFFSET)))

/******************************************************************************************
************************************190 PCEPHY *********************************************
******************************************************************************************/
#define SYSCTL_PCEPHY    ((PERIPHERAL_EPHY_t*) (SYSCTL_BASE + SYSCTL_PCEPHY_OFFSET))
#define SYSCTL_PCEPHY_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCEPHY_OFFSET)))

/******************************************************************************************
************************************191 PCCAN *********************************************
******************************************************************************************/
#define SYSCTL_PCCAN    ((PERIPHERAL_CAN_t*) (SYSCTL_BASE + SYSCTL_PCCAN_OFFSET))
#define SYSCTL_PCCAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCCAN_OFFSET)))

/******************************************************************************************
************************************192 PCADC *********************************************
******************************************************************************************/
#define SYSCTL_PCADC    ((PERIPHERAL_ADC_t*) (SYSCTL_BASE + SYSCTL_PCADC_OFFSET))
#define SYSCTL_PCADC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCADC_OFFSET)))

/******************************************************************************************
************************************193 PCACMP *********************************************
******************************************************************************************/
#define SYSCTL_PCACMP    ((PERIPHERAL_ACMP_t*) (SYSCTL_BASE + SYSCTL_PCACMP_OFFSET))
#define SYSCTL_PCACMP_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCACMP_OFFSET)))

/****************************************************************************************
************************************194 PCPWM *********************************************
******************************************************************************************/
#define SYSCTL_PCPWM    ((PERIPHERAL_PWM_t*) (SYSCTL_BASE + SYSCTL_PCPWM_OFFSET))
#define SYSCTL_PCPWM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCPWM_OFFSET)))

/******************************************************************************************
************************************195 PCQEI *********************************************
******************************************************************************************/
#define SYSCTL_PCQEI    ((PERIPHERAL_QEI_t*) (SYSCTL_BASE + SYSCTL_PCQEI_OFFSET))
#define SYSCTL_PCQEI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCQEI_OFFSET)))

/******************************************************************************************
************************************196 PCLPC *********************************************
******************************************************************************************/
#define SYSCTL_PCLPC    ((PERIPHERAL_LPC_t*) (SYSCTL_BASE + SYSCTL_PCLPC_OFFSET))
#define SYSCTL_PCLPC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCLPC_OFFSET)))

/******************************************************************************************
************************************197 PCPECI *********************************************
******************************************************************************************/
#define SYSCTL_PCPECI    ((PERIPHERAL_PECI_t*) (SYSCTL_BASE + SYSCTL_PCPECI_OFFSET))
#define SYSCTL_PCPECI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCPECI_OFFSET)))

/******************************************************************************************
************************************198 PCFAN *********************************************
******************************************************************************************/
#define SYSCTL_PCFAN    ((PERIPHERAL_FAN_t*) (SYSCTL_BASE + SYSCTL_PCFAN_OFFSET))
#define SYSCTL_PCFAN_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCFAN_OFFSET)))

/******************************************************************************************
************************************199 PCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_PCEEPROM    ((PERIPHERAL_EEPROM_t*) (SYSCTL_BASE + SYSCTL_PCEEPROM_OFFSET))
#define SYSCTL_PCEEPROM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCEEPROM_OFFSET)))

/**********************************************************************************
************************************200 PCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PCWTIMER    ((PERIPHERAL_WTIMER_t*) (SYSCTL_BASE + SYSCTL_PCWTIMER_OFFSET))
#define SYSCTL_PCWTIMER_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCWTIMER_OFFSET)))

/**********************************************************************************
************************************201 PCRTS *********************************************
******************************************************************************************/
#define SYSCTL_PCRTS    ((PERIPHERAL_RTS_t*) (SYSCTL_BASE + SYSCTL_PCRTS_OFFSET))
#define SYSCTL_PCRTS_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCRTS_OFFSET)))

/**********************************************************************************
************************************202 PCCCM *********************************************
******************************************************************************************/
#define SYSCTL_PCCCM    ((PERIPHERAL_CCM_t*) (SYSCTL_BASE + SYSCTL_PCCCM_OFFSET))
#define SYSCTL_PCCCM_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCCCM_OFFSET)))

/**********************************************************************************
************************************203 PCLCD *********************************************
******************************************************************************************/
#define SYSCTL_PCLCD    ((PERIPHERAL_LCD_t*) (SYSCTL_BASE + SYSCTL_PCLCD_OFFSET))
#define SYSCTL_PCLCD_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCLCD_OFFSET)))

/**********************************************************************************
************************************204 PCOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_PCOWIRE    ((PERIPHERAL_OWIRE_t*) (SYSCTL_BASE + SYSCTL_PCOWIRE_OFFSET))
#define SYSCTL_PCOWIRE_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCOWIRE_OFFSET)))

/**********************************************************************************
************************************205 PCEMAC *********************************************
******************************************************************************************/
#define SYSCTL_PCEMAC    ((PERIPHERAL_EMAC_t*) (SYSCTL_BASE + SYSCTL_PCEMAC_OFFSET))
#define SYSCTL_PCEMAC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCEMAC_OFFSET)))

/**********************************************************************************
************************************206 PCPRB *********************************************
******************************************************************************************/
#define SYSCTL_PCPRB    ((PERIPHERAL_PRB_t*) (SYSCTL_BASE + SYSCTL_PCPRB_OFFSET))
#define SYSCTL_PCPRB_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PCPRB_OFFSET)))

/**********************************************************************************
************************************207 PCHIM *********************************************
******************************************************************************************/
#define SYSCTL_PCHIM    ((PERIPHERAL_HIM_t*) (SYSCTL_BASE + SYSCTL_PCHIM_OFFSET))
#define SYSCTL_PCHIM_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PCHIM_OFFSET)))




/******************************************************************************************
************************************208 PRWD *********************************************
******************************************************************************************/
#define SYSCTL_PRWD    ((PERIPHERAL_WD_t*) (SYSCTL_BASE + SYSCTL_PRWD_OFFSET))
#define SYSCTL_PRWD_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRWD_OFFSET)))

/******************************************************************************************
************************************209 PRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PRTIMER    ((PERIPHERAL_TIMER_t*) (SYSCTL_BASE + SYSCTL_PRTIMER_OFFSET))
#define SYSCTL_PRTIMER_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRTIMER_OFFSET)))

/******************************************************************************************
************************************210 PRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_PRGPIO    ((PERIPHERAL_GPIO_t*) (SYSCTL_BASE + SYSCTL_PRGPIO_OFFSET))
#define SYSCTL_PRGPIO_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRGPIO_OFFSET)))

/******************************************************************************************
************************************211 PRDMA *********************************************
******************************************************************************************/
#define SYSCTL_PRDMA    ((PERIPHERAL_DMA_t*) (SYSCTL_BASE + SYSCTL_PRDMA_OFFSET))
#define SYSCTL_PRDMA_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRDMA_OFFSET)))

/******************************************************************************************
************************************212 PREPI *********************************************
******************************************************************************************/
#define SYSCTL_PREPI    ((PERIPHERAL_EPI_t*) (SYSCTL_BASE + SYSCTL_PREPI_OFFSET))
#define SYSCTL_PREPI_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PREPI_OFFSET)))

/******************************************************************************************
************************************213 PRHIB *********************************************
******************************************************************************************/
#define SYSCTL_PRHIB    ((PERIPHERAL_HIB_t*) (SYSCTL_BASE + SYSCTL_PRHIB_OFFSET))
#define SYSCTL_PRHIB_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRHIB_OFFSET)))

/******************************************************************************************
************************************214 PRUART *********************************************
******************************************************************************************/
#define SYSCTL_PRUART    ((PERIPHERAL_UART_t*) (SYSCTL_BASE + SYSCTL_PRUART_OFFSET))
#define SYSCTL_PRUART_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PRUART_OFFSET)))

/******************************************************************************************
************************************215 PRSSI *********************************************
******************************************************************************************/
#define SYSCTL_PRSSI    ((PERIPHERAL_SSI_t*) (SYSCTL_BASE + SYSCTL_PRSSI_OFFSET))
#define SYSCTL_PRSSI_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PRSSI_OFFSET)))

/******************************************************************************************
************************************216 PRI2C *********************************************
******************************************************************************************/
#define SYSCTL_PRI2C    ((PERIPHERAL_I2C_t*) (SYSCTL_BASE + SYSCTL_PRI2C_OFFSET))
#define SYSCTL_PRI2C_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_PRI2C_OFFSET)))

/******************************************************************************************
************************************217 PRUSB *********************************************
******************************************************************************************/
#define SYSCTL_PRUSB    ((PERIPHERAL_USB_t*) (SYSCTL_BASE + SYSCTL_PRUSB_OFFSET))
#define SYSCTL_PRUSB_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRUSB_OFFSET)))

/******************************************************************************************
************************************218 PREPHY *********************************************
******************************************************************************************/
#define SYSCTL_PREPHY    ((PERIPHERAL_EPHY_t*) (SYSCTL_BASE + SYSCTL_PREPHY_OFFSET))
#define SYSCTL_PREPHY_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PREPHY_OFFSET)))

/******************************************************************************************
************************************219 PRCAN *********************************************
******************************************************************************************/
#define SYSCTL_PRCAN    ((PERIPHERAL_CAN_t*) (SYSCTL_BASE + SYSCTL_PRCAN_OFFSET))
#define SYSCTL_PRCAN_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRCAN_OFFSET)))

/******************************************************************************************
************************************220 PRADC *********************************************
******************************************************************************************/
#define SYSCTL_PRADC    ((PERIPHERAL_ADC_t*) (SYSCTL_BASE + SYSCTL_PRADC_OFFSET))
#define SYSCTL_PRADC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRADC_OFFSET)))

/******************************************************************************************
************************************221 PRACMP *********************************************
******************************************************************************************/
#define SYSCTL_PRACMP    ((PERIPHERAL_ACMP_t*) (SYSCTL_BASE + SYSCTL_PRACMP_OFFSET))
#define SYSCTL_PRACMP_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRACMP_OFFSET)))

/****************************************************************************************
************************************222 PRPWM *********************************************
******************************************************************************************/
#define SYSCTL_PRPWM    ((PERIPHERAL_PWM_t*) (SYSCTL_BASE + SYSCTL_PRPWM_OFFSET))
#define SYSCTL_PRPWM_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRPWM_OFFSET)))

/******************************************************************************************
************************************223 PRQEI *********************************************
******************************************************************************************/
#define SYSCTL_PRQEI    ((PERIPHERAL_QEI_t*) (SYSCTL_BASE + SYSCTL_PRQEI_OFFSET))
#define SYSCTL_PRQEI_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRQEI_OFFSET)))

/******************************************************************************************
************************************224 PRLPC *********************************************
******************************************************************************************/
#define SYSCTL_PRLPC    ((PERIPHERAL_LPC_t*) (SYSCTL_BASE + SYSCTL_PRLPC_OFFSET))
#define SYSCTL_PRLPC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRLPC_OFFSET)))

/******************************************************************************************
************************************225 PRPECI *********************************************
******************************************************************************************/
#define SYSCTL_PRPECI    ((PERIPHERAL_PECI_t*) (SYSCTL_BASE + SYSCTL_PRPECI_OFFSET))
#define SYSCTL_PRPECI_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRPECI_OFFSET)))

/******************************************************************************************
************************************226 PRFAN *********************************************
******************************************************************************************/
#define SYSCTL_PRFAN    ((PERIPHERAL_FAN_t*) (SYSCTL_BASE + SYSCTL_PRFAN_OFFSET))
#define SYSCTL_PRFAN_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRFAN_OFFSET)))

/******************************************************************************************
************************************227 PREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_PREEPROM    ((PERIPHERAL_EEPROM_t*) (SYSCTL_BASE + SYSCTL_PREEPROM_OFFSET))
#define SYSCTL_PREEPROM_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PREEPROM_OFFSET)))

/**********************************************************************************
************************************228 PRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PRWTIMER    ((PERIPHERAL_WTIMER_t*) (SYSCTL_BASE + SYSCTL_PRWTIMER_OFFSET))
#define SYSCTL_PRWTIMER_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRWTIMER_OFFSET)))

/**********************************************************************************
************************************229 PRRTS *********************************************
******************************************************************************************/
#define SYSCTL_PRRTS    ((PERIPHERAL_RTS_t*) (SYSCTL_BASE + SYSCTL_PRRTS_OFFSET))
#define SYSCTL_PRRTS_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRRTS_OFFSET)))

/**********************************************************************************
************************************230 PRCCM *********************************************
******************************************************************************************/
#define SYSCTL_PRCCM    ((PERIPHERAL_CCM_t*) (SYSCTL_BASE + SYSCTL_PRCCM_OFFSET))
#define SYSCTL_PRCCM_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRCCM_OFFSET)))

/**********************************************************************************
************************************231 PRLCD *********************************************
******************************************************************************************/
#define SYSCTL_PRLCD    ((PERIPHERAL_LCD_t*) (SYSCTL_BASE + SYSCTL_PRLCD_OFFSET))
#define SYSCTL_PRLCD_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRLCD_OFFSET)))

/**********************************************************************************
************************************232 PROWIRE *********************************************
******************************************************************************************/
#define SYSCTL_PROWIRE    ((PERIPHERAL_OWIRE_t*) (SYSCTL_BASE + SYSCTL_PROWIRE_OFFSET))
#define SYSCTL_PROWIRE_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PROWIRE_OFFSET)))

/**********************************************************************************
************************************233 PREMAC *********************************************
******************************************************************************************/
#define SYSCTL_PREMAC    ((PERIPHERAL_EMAC_t*) (SYSCTL_BASE + SYSCTL_PREMAC_OFFSET))
#define SYSCTL_PREMAC_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PREMAC_OFFSET)))

/**********************************************************************************
************************************234 PRPRB *********************************************
******************************************************************************************/
#define SYSCTL_PRPRB    ((PERIPHERAL_PRB_t*) (SYSCTL_BASE + SYSCTL_PRPRB_OFFSET))
#define SYSCTL_PRPRB_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRPRB_OFFSET)))

/**********************************************************************************
************************************235 PRHIM *********************************************
******************************************************************************************/
#define SYSCTL_PRHIM    ((PERIPHERAL_HIM_t*) (SYSCTL_BASE + SYSCTL_PRHIM_OFFSET))
#define SYSCTL_PRHIM_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_PRHIM_OFFSET)))


/**********************************************************************************
************************************236 UNIQUEID0 *********************************************
******************************************************************************************/
#define SYSCTL_UNIQUEID0    ((UNIQUEID_t*) (SYSCTL_BASE + SYSCTL_UNIQUEID0_OFFSET))
#define SYSCTL_UNIQUEID0_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_UNIQUEID0_OFFSET)))


/**********************************************************************************
************************************237 UNIQUEID1 *********************************************
******************************************************************************************/
#define SYSCTL_UNIQUEID1    ((UNIQUEID_t*) (SYSCTL_BASE + SYSCTL_UNIQUEID1_OFFSET))
#define SYSCTL_UNIQUEID1_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_UNIQUEID1_OFFSET)))


/**********************************************************************************
************************************238 UNIQUEID2 *********************************************
******************************************************************************************/
#define SYSCTL_UNIQUEID2    ((UNIQUEID_t*) (SYSCTL_BASE + SYSCTL_UNIQUEID2_OFFSET))
#define SYSCTL_UNIQUEID2_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_UNIQUEID2_OFFSET)))


/**********************************************************************************
************************************239 UNIQUEID3 *********************************************
******************************************************************************************/
#define SYSCTL_UNIQUEID3    ((UNIQUEID_t*) (SYSCTL_BASE + SYSCTL_UNIQUEID3_OFFSET))
#define SYSCTL_UNIQUEID3_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_UNIQUEID3_OFFSET)))



/******************************************************************************************
************************************ 240-Flash RVP *********************************************
******************************************************************************************/
#define SYSCTL_RVP    ((RVP_t*) (SYSCTL_BASE + SYSCTL_RVP_OFFSET))
#define SYSCTL_RVP_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RVP_OFFSET)))

/******************************************************************************************
************************************ 241-Flash FMPRE0 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE0    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE0_OFFSET))
#define SYSCTL_FMPRE0_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE0_OFFSET)))

/******************************************************************************************
************************************ 242-Flash FMPRE1 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE1    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE1_OFFSET))
#define SYSCTL_FMPRE1_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE1_OFFSET)))

/******************************************************************************************
************************************ 243-Flash FMPRE2 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE2    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE2_OFFSET))
#define SYSCTL_FMPRE2_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE2_OFFSET)))

/******************************************************************************************
************************************ 244-Flash FMPRE3 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE3    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE3_OFFSET))
#define SYSCTL_FMPRE3_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE3_OFFSET)))

/******************************************************************************************
************************************ 245-Flash FMPRE4 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE4    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE4_OFFSET))
#define SYSCTL_FMPRE4_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE4_OFFSET)))

/******************************************************************************************
************************************ 246-Flash FMPRE5 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE5    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE5_OFFSET))
#define SYSCTL_FMPRE5_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE5_OFFSET)))

/******************************************************************************************
************************************ 247-Flash FMPRE6 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE6    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE6_OFFSET))
#define SYSCTL_FMPRE6_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE6_OFFSET)))

/******************************************************************************************
************************************ 248-Flash FMPRE7 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE7    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE7_OFFSET))
#define SYSCTL_FMPRE7_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE7_OFFSET)))

/******************************************************************************************
************************************ 249-Flash FMPRE8 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE8    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE8_OFFSET))
#define SYSCTL_FMPRE8_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE8_OFFSET)))

/******************************************************************************************
************************************ 250-Flash FMPRE9 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE9    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE9_OFFSET))
#define SYSCTL_FMPRE9_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE9_OFFSET)))

/******************************************************************************************
************************************ 251-Flash FMPRE10 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE10    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE10_OFFSET))
#define SYSCTL_FMPRE10_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE10_OFFSET)))

/******************************************************************************************
************************************ 252-Flash FMPRE11 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE11    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE11_OFFSET))
#define SYSCTL_FMPRE11_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE11_OFFSET)))

/******************************************************************************************
************************************ 253-Flash FMPRE12 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE12    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE12_OFFSET))
#define SYSCTL_FMPRE12_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE12_OFFSET)))

/******************************************************************************************
************************************ 254-Flash FMPRE13 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE13    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE13_OFFSET))
#define SYSCTL_FMPRE13_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE13_OFFSET)))

/******************************************************************************************
************************************ 255-Flash FMPRE14 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE14    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE14_OFFSET))
#define SYSCTL_FMPRE14_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE14_OFFSET)))

/******************************************************************************************
************************************ 256-Flash FMPRE15 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE15    ((FMPRE_t*) (SYSCTL_BASE + SYSCTL_FMPRE15_OFFSET))
#define SYSCTL_FMPRE15_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPRE15_OFFSET)))

/******************************************************************************************
************************************ 257-Flash FMPPE0 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE0    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE0_OFFSET))
#define SYSCTL_FMPPE0_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE0_OFFSET)))

/******************************************************************************************
************************************ 258-Flash FMPPE1 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE1    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE1_OFFSET))
#define SYSCTL_FMPPE1_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE1_OFFSET)))

/******************************************************************************************
************************************ 259-Flash FMPPE2 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE2    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE2_OFFSET))
#define SYSCTL_FMPPE2_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE2_OFFSET)))

/******************************************************************************************
************************************ 260-Flash FMPPE3 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE3    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE3_OFFSET))
#define SYSCTL_FMPPE3_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE3_OFFSET)))

/******************************************************************************************
************************************ 261-Flash FMPPE4 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE4    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE4_OFFSET))
#define SYSCTL_FMPPE4_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE4_OFFSET)))

/******************************************************************************************
************************************ 262-Flash FMPPE5 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE5    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE5_OFFSET))
#define SYSCTL_FMPPE5_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE5_OFFSET)))

/******************************************************************************************
************************************ 263-Flash FMPPE6 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE6    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE6_OFFSET))
#define SYSCTL_FMPPE6_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE6_OFFSET)))

/******************************************************************************************
************************************ 264-Flash FMPPE7 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE7    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE7_OFFSET))
#define SYSCTL_FMPPE7_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE7_OFFSET)))

/******************************************************************************************
************************************ 265-Flash FMPPE8 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE8    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE8_OFFSET))
#define SYSCTL_FMPPE8_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE8_OFFSET)))

/******************************************************************************************
************************************ 266-Flash FMPPE9 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE9    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE9_OFFSET))
#define SYSCTL_FMPPE9_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE9_OFFSET)))

/******************************************************************************************
************************************ 267-Flash FMPPE10 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE10    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE10_OFFSET))
#define SYSCTL_FMPPE10_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE10_OFFSET)))

/******************************************************************************************
************************************ 268-Flash FMPPE11 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE11    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE11_OFFSET))
#define SYSCTL_FMPPE11_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE11_OFFSET)))

/******************************************************************************************
************************************ 269-Flash FMPPE12 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE12    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE12_OFFSET))
#define SYSCTL_FMPPE12_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE12_OFFSET)))

/******************************************************************************************
************************************ 270-Flash FMPPE13 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE13    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE13_OFFSET))
#define SYSCTL_FMPPE13_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE13_OFFSET)))

/******************************************************************************************
************************************ 271-Flash FMPPE14 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE14    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE14_OFFSET))
#define SYSCTL_FMPPE14_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE14_OFFSET)))

/******************************************************************************************
************************************ 272-Flash FMPPE15 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE15    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_FMPPE15_OFFSET))
#define SYSCTL_FMPPE15_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_FMPPE15_OFFSET)))

/******************************************************************************************
************************************ 273-Flash BOOTCFG *********************************************
******************************************************************************************/
#define SYSCTL_BOOTCFG    ((FMPPE_t*) (SYSCTL_BASE + SYSCTL_BOOTCFG_OFFSET))
#define SYSCTL_BOOTCFG_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_BOOTCFG_OFFSET)))

/******************************************************************************************
************************************ 274-Flash USER_REG0 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG0    ((USER_REG_t*) (SYSCTL_BASE + SYSCTL_USER_REG0_OFFSET))
#define SYSCTL_USER_REG0_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_USER_REG0_OFFSET)))

/******************************************************************************************
************************************ 275-Flash USER_REG1 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG1    ((USER_REG_t*) (SYSCTL_BASE + SYSCTL_USER_REG1_OFFSET))
#define SYSCTL_USER_REG1_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_USER_REG1_OFFSET)))

/******************************************************************************************
************************************ 276-Flash USER_REG2 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG2    ((USER_REG_t*) (SYSCTL_BASE + SYSCTL_USER_REG2_OFFSET))
#define SYSCTL_USER_REG2_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_USER_REG2_OFFSET)))

/******************************************************************************************
************************************ 277-Flash USER_REG3 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG3    ((USER_REG_t*) (SYSCTL_BASE + SYSCTL_USER_REG3_OFFSET))
#define SYSCTL_USER_REG3_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_USER_REG3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_H_ */
