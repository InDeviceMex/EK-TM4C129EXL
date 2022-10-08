/**
 *
 * @file SYSCTL_RegisterPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SYSCTL/Peripheral/Register/RegisterDefines/SYSCTL_RegisterDefines.h>
#include <xDriver_MCU/SYSCTL/Peripheral/Register/xHeader/SYSCTL_RegisterAddress.h>
#include <xDriver_MCU/SYSCTL/Peripheral/Struct/xHeader/SYSCTL_StructPeripheral_Bitbanding.h>

#define SYSCTL_BITBANDING    ((SYSCTL_BITBANDING_t*) (SYSCTL_BITBANDING_BASE + SYSCTL_OFFSET * 32UL))

/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
#define SYSCTL_BITBANDING_DID0    ((BITBANDING_DID0_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DID0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DID1    ((BITBANDING_DID1_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DID1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 3 PTBOCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PTBOCTL    ((BITBANDING_PTBOCTL_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PTBOCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PTBOCTL_VDDA_UBOR_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PTBOCTL_OFFSET) * 32UL) + ((SYSCTL_PTBOCTL_R_VDDA_UBOR_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_PTBOCTL_VDDA_UBOR_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PTBOCTL_OFFSET) * 32UL) + ((SYSCTL_PTBOCTL_R_VDDA_UBOR_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_PTBOCTL_VDD_UBOR_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PTBOCTL_OFFSET) * 32UL) + ((SYSCTL_PTBOCTL_R_VDD_UBOR_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_PTBOCTL_VDD_UBOR_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PTBOCTL_OFFSET) * 32UL) + ((SYSCTL_PTBOCTL_R_VDD_UBOR_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RIS    ((BITBANDING_RIS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RIS_BORRIS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_BORRIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RIS_MOFRIS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_MOFRIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RIS_PLLLRIS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_PLLLRIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RIS_MOSCPUPRIS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_MOSCPUPRIS_BIT * 4UL))))

/******************************************************************************************
************************************ 5 IMC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_IMC    ((BITBANDING_IMC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_IMC_BORIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_BORIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_IMC_MOFIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_MOFIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_IMC_PLLLIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_PLLLIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_IMC_MOSCPUPIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_MOSCPUPIM_BIT * 4UL))))

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_MISC    ((BITBANDING_MISC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_MISC_BORMIS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_BORMIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_MISC_MOFMIS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_MOFMIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_MISC_PLLLMIS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_PLLLMIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_MISC_MOSCPUPMIS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_MOSCPUPMIS_BIT * 4UL))))

/******************************************************************************************
************************************ 7 RESC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RESC    ((BITBANDING_RESC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RESC_EXT    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_EXT_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_POR    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_POR_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_BOR    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_BOR_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_WDT0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_SW    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_SW_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_WDT1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_WDT1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_HSSR    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_HSSR_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_MOSCFAIL    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_MOSCFAIL_BIT * 4UL))))

/******************************************************************************************
************************************ 8 PWRTC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PWRTC    ((BITBANDING_PWRTC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PWRTC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PWRTC_VDD_UBOR    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PWRTC_OFFSET) * 32UL) + (SYSCTL_PWRTC_R_VDD_UBOR_BIT * 4UL))))
#define SYSCTL_BITBANDING_PWRTC_VDDA_UBOR    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PWRTC_OFFSET) * 32UL) + (SYSCTL_PWRTC_R_VDDA_UBOR_BIT * 4UL))))

/******************************************************************************************
************************************ 9 NMIC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_NMIC    ((BITBANDING_NMIC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NMIC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_NMIC_EXTERNAL    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NMIC_OFFSET) * 32UL) + (SYSCTL_NMIC_R_EXTERNAL_BIT * 4UL))))
#define SYSCTL_BITBANDING_NMIC_POWER    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NMIC_OFFSET) * 32UL) + (SYSCTL_NMIC_R_POWER_BIT * 4UL))))
#define SYSCTL_BITBANDING_NMIC_WDT0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NMIC_OFFSET) * 32UL) + (SYSCTL_NMIC_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_NMIC_WDT1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NMIC_OFFSET) * 32UL) + (SYSCTL_NMIC_R_WDT1_BIT * 4UL))))
#define SYSCTL_BITBANDING_NMIC_TAMPER    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NMIC_OFFSET) * 32UL) + (SYSCTL_NMIC_R_TAMPER_BIT * 4UL))))
#define SYSCTL_BITBANDING_NMIC_MOSCFAIL    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NMIC_OFFSET) * 32UL) + (SYSCTL_NMIC_R_MOSCFAIL_BIT * 4UL))))

/******************************************************************************************
************************************ 10 MOSCCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_MOSCCTL    ((BITBANDING_MOSCCTL_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_MOSCCTL_CVAL    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL) + (SYSCTL_MOSCCTL_R_CVAL_BIT * 4UL))))
#define SYSCTL_BITBANDING_MOSCCTL_MOSCIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL) + (SYSCTL_MOSCCTL_R_MOSCIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_MOSCCTL_NOXTAL    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL) + (SYSCTL_MOSCCTL_R_NOXTAL_BIT * 4UL))))
#define SYSCTL_BITBANDING_MOSCCTL_PWRDN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL) + (SYSCTL_MOSCCTL_R_PWRDN_BIT * 4UL))))
#define SYSCTL_BITBANDING_MOSCCTL_OSCRNG    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL) + (SYSCTL_MOSCCTL_R_OSCRNG_BIT * 4UL))))

/******************************************************************************************
************************************11 RSCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RSCLKCFG    ((BITBANDING_RSCLKCFG_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RSCLKCFG_OSCSRC_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_RSCLKCFG_R_OSCSRC_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_OSCSRC_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_RSCLKCFG_R_OSCSRC_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_OSCSRC_2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_RSCLKCFG_R_OSCSRC_BIT + 2UL) * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_OSCSRC_3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_RSCLKCFG_R_OSCSRC_BIT + 3UL) * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_PLLSRC_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_RSCLKCFG_R_PLLSRC_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_PLLSRC_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_RSCLKCFG_R_PLLSRC_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_PLLSRC_2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_RSCLKCFG_R_PLLSRC_BIT + 2UL) * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_PLLSRC_3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_RSCLKCFG_R_PLLSRC_BIT + 3UL) * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_USEPLL    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + (SYSCTL_RSCLKCFG_R_USEPLL_BIT * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_ACG    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + (SYSCTL_RSCLKCFG_R_ACG_BIT * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_NEWFREQ    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + (SYSCTL_RSCLKCFG_R_NEWFREQ_BIT * 4UL))))
#define SYSCTL_BITBANDING_RSCLKCFG_MEMTIMU    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RSCLKCFG_OFFSET) * 32UL) + (SYSCTL_RSCLKCFG_R_MEMTIMU_BIT * 4UL))))

/******************************************************************************************
************************************12 MEMTIM0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_MEMTIM0    ((BITBANDING_MEMTIM0_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_MEMTIM0_FWS_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_FWS_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_FWS_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_FWS_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_FWS_2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_FWS_BIT + 2UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_FWS_3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_FWS_BIT + 3UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_FBCE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + (SYSCTL_MEMTIM0_R_FBCE_BIT * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_FBCHT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_FBCHT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_FBCHT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_FBCHT_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_FBCHT_2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_FBCHT_BIT + 2UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_FBCHT_3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_FBCHT_BIT + 3UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_EWS_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_EWS_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_EWS_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_EWS_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_EWS_2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_EWS_BIT + 2UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_EWS_3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_EWS_BIT + 3UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_EBCE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + (SYSCTL_MEMTIM0_R_EBCE_BIT * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_EBCHT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_EBCHT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_EBCHT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_EBCHT_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_EBCHT_2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_EBCHT_BIT + 2UL) * 4UL))))
#define SYSCTL_BITBANDING_MEMTIM0_EBCHT_3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MEMTIM0_OFFSET) * 32UL) + ((SYSCTL_MEMTIM0_R_EBCHT_BIT + 3UL) * 4UL))))

/******************************************************************************************
************************************13 ALTCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_ALTCLKCFG    ((BITBANDING_ALTCLKCFG_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_ALTCLKCFG_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_ALTCLKCFG_ALTCLK_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_ALTCLKCFG_OFFSET) * 32UL) + ((SYSCTL_ALTCLKCFG_R_ALTCLK_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_ALTCLKCFG_ALTCLK_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_ALTCLKCFG_OFFSET) * 32UL) + ((SYSCTL_ALTCLKCFG_R_ALTCLK_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_ALTCLKCFG_ALTCLK_2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_ALTCLKCFG_OFFSET) * 32UL) + ((SYSCTL_ALTCLKCFG_R_ALTCLK_BIT + 2UL) * 4UL))))
#define SYSCTL_BITBANDING_ALTCLKCFG_ALTCLK_3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_ALTCLKCFG_OFFSET) * 32UL) + ((SYSCTL_ALTCLKCFG_R_ALTCLK_BIT + 3UL) * 4UL))))

/******************************************************************************************
************************************14 DSCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DSCLKCFG    ((BITBANDING_DSCLKCFG_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSCLKCFG_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DSCLKCFG_DSOSCSRC_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_DSCLKCFG_R_DSOSCSRC_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_DSCLKCFG_DSOSCSRC_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_DSCLKCFG_R_DSOSCSRC_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_DSCLKCFG_DSOSCSRC_2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_DSCLKCFG_R_DSOSCSRC_BIT + 2UL) * 4UL))))
#define SYSCTL_BITBANDING_DSCLKCFG_DSOSCSRC_3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSCLKCFG_OFFSET) * 32UL) + ((SYSCTL_DSCLKCFG_R_DSOSCSRC_BIT + 3UL) * 4UL))))
#define SYSCTL_BITBANDING_DSCLKCFG_MOSCDPD    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSCLKCFG_OFFSET) * 32UL) + (SYSCTL_DSCLKCFG_R_MOSCDPD_BIT * 4UL))))
#define SYSCTL_BITBANDING_DSCLKCFG_PIOSCPD    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSCLKCFG_OFFSET) * 32UL) + (SYSCTL_DSCLKCFG_R_PIOSCPD_BIT * 4UL))))

/******************************************************************************************
************************************15 DIVSCLK *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DIVSCLK    ((BITBANDING_DIVSCLK_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DIVSCLK_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DIVSCLK_SRC_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DIVSCLK_OFFSET) * 32UL) + ((SYSCTL_DIVSCLK_R_SRC_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_DIVSCLK_SRC_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DIVSCLK_OFFSET) * 32UL) + ((SYSCTL_DIVSCLK_R_SRC_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_DIVSCLK_EN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DIVSCLK_OFFSET) * 32UL) + (SYSCTL_DIVSCLK_R_EN_BIT * 4UL))))

/******************************************************************************************
************************************16 SYSPROP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SYSPROP    ((BITBANDING_SYSPROP_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SYSPROP_FPU    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_FPU_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_LDOSEQ    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_LDOSEQ_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_FLASHLPM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_FLASHLPM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_SRAMLPM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_SRAMLPM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_SRAMSM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_SRAMSM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_PIOSCPDE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_PIOSCPDE_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_TSPDE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_TSPDE_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_LDOSME    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_LDOSME_BIT * 4UL))))

/******************************************************************************************
************************************17 PIOSCCAL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PIOSCCAL    ((BITBANDING_PIOSCCAL_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCCAL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PIOSCCAL_UPDATE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCCAL_OFFSET) * 32UL) + (SYSCTL_PIOSCCAL_R_UPDATE_BIT * 4UL))))
#define SYSCTL_BITBANDING_PIOSCCAL_CAL    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCCAL_OFFSET) * 32UL) + (SYSCTL_PIOSCCAL_R_CAL_BIT * 4UL))))
#define SYSCTL_BITBANDING_PIOSCCAL_UTEN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCCAL_OFFSET) * 32UL) + (SYSCTL_PIOSCCAL_R_UTEN_BIT * 4UL))))

/******************************************************************************************
************************************18 PIOSCSTAT *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PIOSCSTAT    ((BITBANDING_PIOSCSTAT_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCSTAT_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PIOSCSTAT_RESULT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCSTAT_OFFSET) * 32UL) + ((SYSCTL_PIOSCSTAT_R_RESULT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_PIOSCSTAT_RESULT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCSTAT_OFFSET) * 32UL) + ((SYSCTL_PIOSCSTAT_R_RESULT_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************19 PLLFREQ0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PLLFREQ0    ((BITBANDING_PLLFREQ0_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PLLFREQ0_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PLLFREQ0_PLLPWR    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PLLFREQ0_OFFSET) * 32UL) + (SYSCTL_PLLFREQ0_R_PLLPWR_BIT * 4UL))))

/******************************************************************************************
************************************20 PLLFREQ1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PLLFREQ1    ((BITBANDING_PLLFREQ1_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PLLFREQ1_OFFSET) * 32UL)))

/******************************************************************************************
************************************21 PLLSTAT *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PLLSTAT    ((BITBANDING_PLLSTAT_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PLLSTAT_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PLLSTAT_LOCK    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PLLSTAT_OFFSET) * 32UL) + (SYSCTL_PLLSTAT_R_LOCK_BIT * 4UL))))

/******************************************************************************************
************************************22 SLPPWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SLPPWRCFG    ((BITBANDING_SLPPWRCFG_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SLPPWRCFG_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SLPPWRCFG_SRAMPM_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SLPPWRCFG_OFFSET) * 32UL) + ((SYSCTL_SLPPWRCFG_R_SRAMPM_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_SLPPWRCFG_SRAMPM_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SLPPWRCFG_OFFSET) * 32UL) + ((SYSCTL_SLPPWRCFG_R_SRAMPM_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_SLPPWRCFG_FLASHPM_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SLPPWRCFG_OFFSET) * 32UL) + ((SYSCTL_SLPPWRCFG_R_FLASHPM_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_SLPPWRCFG_FLASHPM_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SLPPWRCFG_OFFSET) * 32UL) + ((SYSCTL_SLPPWRCFG_R_FLASHPM_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************23 DSLPPWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DSLPPWRCFG    ((BITBANDING_DSLPPWRCFG_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLPPWRCFG_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DSLPPWRCFG_SRAMPM_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLPPWRCFG_OFFSET) * 32UL) + ((SYSCTL_DSLPPWRCFG_R_SRAMPM_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_DSLPPWRCFG_SRAMPM_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLPPWRCFG_OFFSET) * 32UL) + ((SYSCTL_DSLPPWRCFG_R_SRAMPM_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_DSLPPWRCFG_FLASHPM_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLPPWRCFG_OFFSET) * 32UL) + ((SYSCTL_DSLPPWRCFG_R_FLASHPM_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_DSLPPWRCFG_FLASHPM_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLPPWRCFG_OFFSET) * 32UL) + ((SYSCTL_DSLPPWRCFG_R_FLASHPM_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_DSLPPWRCFG_TSPD    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLPPWRCFG_OFFSET) * 32UL) + (SYSCTL_DSLPPWRCFG_R_TSPD_BIT * 4UL))))
#define SYSCTL_BITBANDING_DSLPPWRCFG_LDOSM    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLPPWRCFG_OFFSET) * 32UL) + (SYSCTL_DSLPPWRCFG_R_LDOSM_BIT * 4UL))))

/**********************************************************************************
************************************24 NVMSTAT *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_NVMSTAT    ((BITBANDING_NVMSTAT_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NVMSTAT_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_NVMSTAT_FWB    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NVMSTAT_OFFSET) * 32UL) + (SYSCTL_NVMSTAT_R_FWB_BIT * 4UL))))

/******************************************************************************************
************************************25 LDOSPCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_LDOSPCTL    ((BITBANDING_LDOSPCTL_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDOSPCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_LDOSPCTL_VADJEN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDOSPCTL_OFFSET) * 32UL) + (SYSCTL_LDOSPCTL_R_VADJEN_BIT * 4UL))))

/******************************************************************************************
************************************26 LDOSPCAL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_LDOSPCAL    ((BITBANDING_LDOSPCAL_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDOSPCAL_OFFSET) * 32UL)))

/******************************************************************************************
************************************27 LDODPCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_LDODPCTL    ((BITBANDING_LDODPCTL_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDODPCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_LDODPCTL_VADJEN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDODPCTL_OFFSET) * 32UL) + (SYSCTL_LDODPCTL_R_VADJEN_BIT * 4UL))))

/******************************************************************************************
************************************28 LDODPCAL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_LDODPCAL    ((BITBANDING_LDODPCAL_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDODPCAL_OFFSET) * 32UL)))

/******************************************************************************************
************************************29 SDPMST *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SDPMST    ((BITBANDING_SDPMST_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SDPMST_SPDERR    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_SPDERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_FPDERR    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_FPDERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_PPDERR    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_PPDERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LDMINERR    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LDMINERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LSMINERR    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LSMINERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LMAXERR    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LMAXERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_PPDW    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_PPDW_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_PRACT    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_PRACT_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LOWPWR    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LOWPWR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_FLASHLP    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_FLASHLP_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LDOUA    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LDOUA_BIT * 4UL))))

/******************************************************************************************
************************************30 RESBEHAVCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RESBEHAVCTL    ((BITBANDING_RESBEHAVCTL_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESBEHAVCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RESBEHAVCTL_EXTRES_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESBEHAVCTL_OFFSET) * 32UL) + ((SYSCTL_RESBEHAVCTL_R_EXTRES_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_RESBEHAVCTL_EXTRES_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESBEHAVCTL_OFFSET) * 32UL) + ((SYSCTL_RESBEHAVCTL_R_EXTRES_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_RESBEHAVCTL_BOR_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESBEHAVCTL_OFFSET) * 32UL) + ((SYSCTL_RESBEHAVCTL_R_BOR_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_RESBEHAVCTL_BOR_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESBEHAVCTL_OFFSET) * 32UL) + ((SYSCTL_RESBEHAVCTL_R_BOR_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_RESBEHAVCTL_WDOG0_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESBEHAVCTL_OFFSET) * 32UL) + ((SYSCTL_RESBEHAVCTL_R_WDOG0_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_RESBEHAVCTL_WDOG0_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESBEHAVCTL_OFFSET) * 32UL) + ((SYSCTL_RESBEHAVCTL_R_WDOG0_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_RESBEHAVCTL_WDOG1_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESBEHAVCTL_OFFSET) * 32UL) + ((SYSCTL_RESBEHAVCTL_R_WDOG1_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_RESBEHAVCTL_WDOG1_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESBEHAVCTL_OFFSET) * 32UL) + ((SYSCTL_RESBEHAVCTL_R_WDOG1_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************31 HSSR *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_HSSR    ((BITBANDING_HSSR_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_HSSR_OFFSET) * 32UL)))

/******************************************************************************************
************************************32 USBPDS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USBPDS    ((BITBANDING_USBPDS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USBPDS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_USBPDS_PWRSTAT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USBPDS_OFFSET) * 32UL) + ((SYSCTL_USBPDS_R_PWRSTAT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_USBPDS_PWRSTAT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USBPDS_OFFSET) * 32UL) + ((SYSCTL_USBPDS_R_PWRSTAT_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_USBPDS_MEMSTAT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USBPDS_OFFSET) * 32UL) + ((SYSCTL_USBPDS_R_MEMSTAT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_USBPDS_MEMSTAT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USBPDS_OFFSET) * 32UL) + ((SYSCTL_USBPDS_R_MEMSTAT_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************33 USBMPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USBMPC    ((BITBANDING_USBMPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USBMPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_USBMPC_PWRCTL_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USBMPC_OFFSET) * 32UL) + ((SYSCTL_USBMPC_R_PWRCTL_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_USBMPC_PWRCTL_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USBMPC_OFFSET) * 32UL) + ((SYSCTL_USBMPC_R_PWRCTL_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************34 EMACPDS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_EMACPDS    ((BITBANDING_EMACPDS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_EMACPDS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_EMACPDS_PWRSTAT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_EMACPDS_OFFSET) * 32UL) + ((SYSCTL_EMACPDS_R_PWRSTAT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_EMACPDS_PWRSTAT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_EMACPDS_OFFSET) * 32UL) + ((SYSCTL_EMACPDS_R_PWRSTAT_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_EMACPDS_MEMSTAT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_EMACPDS_OFFSET) * 32UL) + ((SYSCTL_EMACPDS_R_MEMSTAT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_EMACPDS_MEMSTAT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_EMACPDS_OFFSET) * 32UL) + ((SYSCTL_EMACPDS_R_MEMSTAT_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************35 EMACMPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_EMACMPC    ((BITBANDING_EMACMPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_EMACMPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_EMACMPC_PWRCTL_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_EMACMPC_OFFSET) * 32UL) + ((SYSCTL_EMACMPC_R_PWRCTL_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_EMACMPC_PWRCTL_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_EMACMPC_OFFSET) * 32UL) + ((SYSCTL_EMACMPC_R_PWRCTL_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************36 CAN0PDS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_CAN0PDS    ((BITBANDING_CAN0PDS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN0PDS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_CAN0PDS_PWRSTAT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN0PDS_OFFSET) * 32UL) + ((SYSCTL_CAN0PDS_R_PWRSTAT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_CAN0PDS_PWRSTAT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN0PDS_OFFSET) * 32UL) + ((SYSCTL_CAN0PDS_R_PWRSTAT_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_CAN0PDS_MEMSTAT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN0PDS_OFFSET) * 32UL) + ((SYSCTL_CAN0PDS_R_MEMSTAT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_CAN0PDS_MEMSTAT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN0PDS_OFFSET) * 32UL) + ((SYSCTL_CAN0PDS_R_MEMSTAT_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************37 CAN0MPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_CAN0MPC    ((BITBANDING_CAN0MPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN0MPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_CAN0MPC_PWRCTL_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN0MPC_OFFSET) * 32UL) + ((SYSCTL_CAN0MPC_R_PWRCTL_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_CAN0MPC_PWRCTL_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN0MPC_OFFSET) * 32UL) + ((SYSCTL_CAN0MPC_R_PWRCTL_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************38 CAN1PDS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_CAN1PDS    ((BITBANDING_CAN1PDS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN1PDS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_CAN1PDS_PWRSTAT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN1PDS_OFFSET) * 32UL) + ((SYSCTL_CAN1PDS_R_PWRSTAT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_CAN1PDS_PWRSTAT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN1PDS_OFFSET) * 32UL) + ((SYSCTL_CAN1PDS_R_PWRSTAT_BIT + 1UL) * 4UL))))
#define SYSCTL_BITBANDING_CAN1PDS_MEMSTAT_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN1PDS_OFFSET) * 32UL) + ((SYSCTL_CAN1PDS_R_MEMSTAT_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_CAN1PDS_MEMSTAT_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN1PDS_OFFSET) * 32UL) + ((SYSCTL_CAN1PDS_R_MEMSTAT_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************39 CAN1MPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_CAN1MPC    ((BITBANDING_CAN1MPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN1MPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_CAN1MPC_PWRCTL_0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN1MPC_OFFSET) * 32UL) + ((SYSCTL_CAN1MPC_R_PWRCTL_BIT + 0UL) * 4UL))))
#define SYSCTL_BITBANDING_CAN1MPC_PWRCTL_1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_CAN1MPC_OFFSET) * 32UL) + ((SYSCTL_CAN1MPC_R_PWRCTL_BIT + 1UL) * 4UL))))

/******************************************************************************************
************************************40 PPWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPWD    ((BITBANDING_PERIPHERAL_WD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPWD_WDT0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWD_OFFSET) * 32UL) + (SYSCTL_PPWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPWD_WDT1    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWD_OFFSET) * 32UL) + (SYSCTL_PPWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************41 PPTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPTIMER    ((BITBANDING_PERIPHERAL_TIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPTIMER_TIMER0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER1    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER2    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER3    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER4    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER5    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER6    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER7    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER7_BIT * 4UL))))

/******************************************************************************************
************************************42 PPGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOA    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOB    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOC    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOD    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOE    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOF    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOG    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOH    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOJ    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOK    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOL    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOM    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPION    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOP    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOQ    (*((volatile const UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************43 PPDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPDMA    ((BITBANDING_PERIPHERAL_DMA_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPDMA_UDMA    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPDMA_OFFSET) * 32UL) + (SYSCTL_PPDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************44 PPEPI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPEPI    ((BITBANDING_PERIPHERAL_EPI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEPI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPEPI_EPI0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEPI_OFFSET) * 32UL) + (SYSCTL_PPEPI_R_EPI0_BIT * 4UL))))

/******************************************************************************************
************************************45 PPHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPHIB    ((BITBANDING_PERIPHERAL_HIB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPHIB_HIB    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPHIB_OFFSET) * 32UL) + (SYSCTL_PPHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************46 PPUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPUART    ((BITBANDING_PERIPHERAL_UART_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPUART_UART0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART1    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART2    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART3    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART4    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART5    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART6    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART7    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************47 PPSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPSSI    ((BITBANDING_PERIPHERAL_SSI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPSSI_SSI0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL) + (SYSCTL_PPSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPSSI_SSI1    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL) + (SYSCTL_PPSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPSSI_SSI2    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL) + (SYSCTL_PPSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPSSI_SSI3    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL) + (SYSCTL_PPSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************48 PPI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPI2C    ((BITBANDING_PERIPHERAL_I2C_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPI2C_I2C0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C1    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C2    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C3    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C4    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C5    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C6    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C7    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C7_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C8    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C8_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C9    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C9_BIT * 4UL))))

/******************************************************************************************
************************************49 PPUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPUSB    ((BITBANDING_PERIPHERAL_USB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPUSB_USB    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUSB_OFFSET) * 32UL) + (SYSCTL_PPUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************50 PPEPHY *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPEPHY    ((BITBANDING_PERIPHERAL_EPHY_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEPHY_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPEPHY_EPHY    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEPHY_OFFSET) * 32UL) + (SYSCTL_PPEPHY_R_EPHY_BIT * 4UL))))

/******************************************************************************************
************************************51 PPCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPCAN    ((BITBANDING_PERIPHERAL_CAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPCAN_CAN0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPCAN_OFFSET) * 32UL) + (SYSCTL_PPCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPCAN_CAN1    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPCAN_OFFSET) * 32UL) + (SYSCTL_PPCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************52 PPADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPADC    ((BITBANDING_PERIPHERAL_ADC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPADC_ADC0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPADC_OFFSET) * 32UL) + (SYSCTL_PPADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPADC_ADC1    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPADC_OFFSET) * 32UL) + (SYSCTL_PPADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************53 PPACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPACMP    ((BITBANDING_PERIPHERAL_ACMP_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPACMP_ACMP    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPACMP_OFFSET) * 32UL) + (SYSCTL_PPACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************54 PPPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPPWM    ((BITBANDING_PERIPHERAL_PWM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPPWM_PWM0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPPWM_OFFSET) * 32UL) + (SYSCTL_PPPWM_R_PWM0_BIT * 4UL))))

/******************************************************************************************
************************************55 PPQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPQEI    ((BITBANDING_PERIPHERAL_QEI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPQEI_QEI0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPQEI_OFFSET) * 32UL) + (SYSCTL_PPQEI_R_QEI0_BIT * 4UL))))

/******************************************************************************************
************************************56 PPLPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPLPC    ((BITBANDING_PERIPHERAL_LPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPLPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPLPC_LPC    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPLPC_OFFSET) * 32UL) + (SYSCTL_PPLPC_R_LPC_BIT * 4UL))))

/******************************************************************************************
************************************57 PPPECI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPPECI    ((BITBANDING_PERIPHERAL_PECI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPPECI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPPECI_PECI    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPPECI_OFFSET) * 32UL) + (SYSCTL_PPPECI_R_PECI_BIT * 4UL))))

/******************************************************************************************
************************************58 PPFAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPFAN    ((BITBANDING_PERIPHERAL_FAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPFAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPFAN_FAN    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPFAN_OFFSET) * 32UL) + (SYSCTL_PPFAN_R_FAN_BIT * 4UL))))

/******************************************************************************************
************************************59 PPEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPEEPROM    ((BITBANDING_PERIPHERAL_EEPROM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPEEPROM_EEPROM    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEEPROM_OFFSET) * 32UL) + (SYSCTL_PPEEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************60 PPWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPWTIMER_WTIMER0    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWTIMER_OFFSET) * 32UL) + (SYSCTL_PPWTIMER_R_WTIMER0_BIT * 4UL))))

/**********************************************************************************
************************************61 PPRTS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPRTS    ((BITBANDING_PERIPHERAL_RTS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPRTS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPRTS_RTS    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPRTS_OFFSET) * 32UL) + (SYSCTL_PPRTS_R_RTS_BIT * 4UL))))

/**********************************************************************************
************************************62 PPCCM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPCCM    ((BITBANDING_PERIPHERAL_CCM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPCCM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPCCM_CCM    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPCCM_OFFSET) * 32UL) + (SYSCTL_PPCCM_R_CCM_BIT * 4UL))))

/**********************************************************************************
************************************63 PPLCD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPLCD    ((BITBANDING_PERIPHERAL_LCD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPLCD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPLCD_LCD    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPLCD_OFFSET) * 32UL) + (SYSCTL_PPLCD_R_LCD_BIT * 4UL))))

/**********************************************************************************
************************************64 PPOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPOWIRE    ((BITBANDING_PERIPHERAL_OWIRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPOWIRE_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPOWIRE_OWIRE    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPOWIRE_OFFSET) * 32UL) + (SYSCTL_PPOWIRE_R_OWIRE_BIT * 4UL))))

/**********************************************************************************
************************************65 PPEMAC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPEMAC    ((BITBANDING_PERIPHERAL_EMAC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEMAC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPEMAC_EMAC    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEMAC_OFFSET) * 32UL) + (SYSCTL_PPEMAC_R_EMAC_BIT * 4UL))))

/**********************************************************************************
************************************66 PPPRB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPPRB    ((BITBANDING_PERIPHERAL_PRB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPPRB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPPRB_PRB    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPPRB_OFFSET) * 32UL) + (SYSCTL_PPPRB_R_PRB_BIT * 4UL))))

/**********************************************************************************
************************************67 PPHIM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPHIM    ((BITBANDING_PERIPHERAL_HIM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPHIM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPHIM_HIM    (*((volatile const UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPHIM_OFFSET) * 32UL) + (SYSCTL_PPHIM_R_HIM_BIT * 4UL))))

/******************************************************************************************
************************************68 SRWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRWD    ((BITBANDING_PERIPHERAL_WD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRWD_WDT0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWD_OFFSET) * 32UL) + (SYSCTL_SRWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRWD_WDT1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWD_OFFSET) * 32UL) + (SYSCTL_SRWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************69 SRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRTIMER    ((BITBANDING_PERIPHERAL_TIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRTIMER_TIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER5_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER6_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER7_BIT * 4UL))))

/******************************************************************************************
************************************70 SRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOA    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOB    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOC    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOD    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOE    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOF    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOG    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOH    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOJ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOK    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOL    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOM    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPION    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOP    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOQ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************71 SRDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRDMA    ((BITBANDING_PERIPHERAL_DMA_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRDMA_UDMA    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRDMA_OFFSET) * 32UL) + (SYSCTL_SRDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************72 SREPI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SREPI    ((BITBANDING_PERIPHERAL_EPI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREPI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SREPI_EPI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREPI_OFFSET) * 32UL) + (SYSCTL_SREPI_R_EPI0_BIT * 4UL))))

/******************************************************************************************
************************************73 SRHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRHIB    ((BITBANDING_PERIPHERAL_HIB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRHIB_HIB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRHIB_OFFSET) * 32UL) + (SYSCTL_SRHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************74 SRUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRUART    ((BITBANDING_PERIPHERAL_UART_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRUART_UART0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************75 SRSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRSSI    ((BITBANDING_PERIPHERAL_SSI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRSSI_SSI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL) + (SYSCTL_SRSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRSSI_SSI1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL) + (SYSCTL_SRSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRSSI_SSI2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL) + (SYSCTL_SRSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRSSI_SSI3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL) + (SYSCTL_SRSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************76 SRI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRI2C    ((BITBANDING_PERIPHERAL_I2C_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRI2C_I2C0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C5_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C6_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C7_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C8    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C8_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C9    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C9_BIT * 4UL))))

/******************************************************************************************
************************************77 SRUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRUSB    ((BITBANDING_PERIPHERAL_USB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRUSB_USB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUSB_OFFSET) * 32UL) + (SYSCTL_SRUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************78 SREPHY *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SREPHY    ((BITBANDING_PERIPHERAL_EPHY_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREPHY_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SREPHY_EPHY    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREPHY_OFFSET) * 32UL) + (SYSCTL_SREPHY_R_EPHY_BIT * 4UL))))

/******************************************************************************************
************************************79 SRCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRCAN    ((BITBANDING_PERIPHERAL_CAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRCAN_CAN0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCAN_OFFSET) * 32UL) + (SYSCTL_SRCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCAN_CAN1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCAN_OFFSET) * 32UL) + (SYSCTL_SRCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************80 SRADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRADC    ((BITBANDING_PERIPHERAL_ADC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRADC_ADC0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRADC_OFFSET) * 32UL) + (SYSCTL_SRADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRADC_ADC1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRADC_OFFSET) * 32UL) + (SYSCTL_SRADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************81 SRACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRACMP    ((BITBANDING_PERIPHERAL_ACMP_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRACMP_ACMP    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRACMP_OFFSET) * 32UL) + (SYSCTL_SRACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************82 SRPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRPWM    ((BITBANDING_PERIPHERAL_PWM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRPWM_PWM0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRPWM_OFFSET) * 32UL) + (SYSCTL_SRPWM_R_PWM0_BIT * 4UL))))

/******************************************************************************************
************************************83 SRQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRQEI    ((BITBANDING_PERIPHERAL_QEI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRQEI_QEI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRQEI_OFFSET) * 32UL) + (SYSCTL_SRQEI_R_QEI0_BIT * 4UL))))

/******************************************************************************************
************************************84 SRLPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRLPC    ((BITBANDING_PERIPHERAL_LPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRLPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRLPC_LPC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRLPC_OFFSET) * 32UL) + (SYSCTL_SRLPC_R_LPC_BIT * 4UL))))

/******************************************************************************************
************************************85 SRPECI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRPECI    ((BITBANDING_PERIPHERAL_PECI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRPECI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRPECI_PECI    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRPECI_OFFSET) * 32UL) + (SYSCTL_SRPECI_R_PECI_BIT * 4UL))))

/******************************************************************************************
************************************86 SRFAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRFAN    ((BITBANDING_PERIPHERAL_FAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRFAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRFAN_FAN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRFAN_OFFSET) * 32UL) + (SYSCTL_SRFAN_R_FAN_BIT * 4UL))))

/******************************************************************************************
************************************87 SREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SREEPROM    ((BITBANDING_PERIPHERAL_EEPROM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SREEPROM_EEPROM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREEPROM_OFFSET) * 32UL) + (SYSCTL_SREEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************88 SRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRWTIMER_WTIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWTIMER_OFFSET) * 32UL) + (SYSCTL_SRWTIMER_R_WTIMER0_BIT * 4UL))))

/**********************************************************************************
************************************89 SRRTS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRRTS    ((BITBANDING_PERIPHERAL_RTS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRRTS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRRTS_RTS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRRTS_OFFSET) * 32UL) + (SYSCTL_SRRTS_R_RTS_BIT * 4UL))))

/**********************************************************************************
************************************90 SRCCM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRCCM    ((BITBANDING_PERIPHERAL_CCM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCCM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRCCM_CCM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCCM_OFFSET) * 32UL) + (SYSCTL_SRCCM_R_CCM_BIT * 4UL))))

/**********************************************************************************
************************************91 SRLCD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRLCD    ((BITBANDING_PERIPHERAL_LCD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRLCD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRLCD_LCD    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRLCD_OFFSET) * 32UL) + (SYSCTL_SRLCD_R_LCD_BIT * 4UL))))

/**********************************************************************************
************************************92 SROWIRE *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SROWIRE    ((BITBANDING_PERIPHERAL_OWIRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SROWIRE_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SROWIRE_OWIRE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SROWIRE_OFFSET) * 32UL) + (SYSCTL_SROWIRE_R_OWIRE_BIT * 4UL))))

/**********************************************************************************
************************************93 SREMAC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SREMAC    ((BITBANDING_PERIPHERAL_EMAC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREMAC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SREMAC_EMAC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREMAC_OFFSET) * 32UL) + (SYSCTL_SREMAC_R_EMAC_BIT * 4UL))))

/**********************************************************************************
************************************94 SRPRB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRPRB    ((BITBANDING_PERIPHERAL_PRB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRPRB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRPRB_PRB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRPRB_OFFSET) * 32UL) + (SYSCTL_SRPRB_R_PRB_BIT * 4UL))))

/**********************************************************************************
************************************95 SRHIM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRHIM    ((BITBANDING_PERIPHERAL_HIM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRHIM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRHIM_HIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRHIM_OFFSET) * 32UL) + (SYSCTL_SRHIM_R_HIM_BIT * 4UL))))

/******************************************************************************************
************************************96 RCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCWD    ((BITBANDING_PERIPHERAL_WD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCWD_WDT0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWD_OFFSET) * 32UL) + (SYSCTL_RCGCWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCWD_WDT1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWD_OFFSET) * 32UL) + (SYSCTL_RCGCWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************97 RCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCTIMER    ((BITBANDING_PERIPHERAL_TIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCTIMER_TIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER5_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER6_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER7_BIT * 4UL))))

/******************************************************************************************
************************************98 RCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOA    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOB    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOC    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOD    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOE    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOF    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOG    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOH    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOJ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOK    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOL    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOM    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPION    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOP    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOQ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************99 RCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCDMA    ((BITBANDING_PERIPHERAL_DMA_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCDMA_UDMA    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCDMA_OFFSET) * 32UL) + (SYSCTL_RCGCDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************100 RCGCEPI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCEPI    ((BITBANDING_PERIPHERAL_EPI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEPI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCEPI_EPI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEPI_OFFSET) * 32UL) + (SYSCTL_RCGCEPI_R_EPI0_BIT * 4UL))))

/******************************************************************************************
************************************101 RCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCHIB    ((BITBANDING_PERIPHERAL_HIB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCHIB_HIB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCHIB_OFFSET) * 32UL) + (SYSCTL_RCGCHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************102 RCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCUART    ((BITBANDING_PERIPHERAL_UART_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCUART_UART0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************103 RCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCSSI    ((BITBANDING_PERIPHERAL_SSI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCSSI_SSI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL) + (SYSCTL_RCGCSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCSSI_SSI1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL) + (SYSCTL_RCGCSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCSSI_SSI2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL) + (SYSCTL_RCGCSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCSSI_SSI3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL) + (SYSCTL_RCGCSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************104 RCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCI2C    ((BITBANDING_PERIPHERAL_I2C_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCI2C_I2C0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C5_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C6_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C7_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C8    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C8_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C9    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C9_BIT * 4UL))))

/******************************************************************************************
************************************105 RCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCUSB    ((BITBANDING_PERIPHERAL_USB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCUSB_USB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUSB_OFFSET) * 32UL) + (SYSCTL_RCGCUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************106 RCGCEPHY *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCEPHY    ((BITBANDING_PERIPHERAL_EPHY_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEPHY_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCEPHY_EPHY    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEPHY_OFFSET) * 32UL) + (SYSCTL_RCGCEPHY_R_EPHY_BIT * 4UL))))

/******************************************************************************************
************************************107 RCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCCAN    ((BITBANDING_PERIPHERAL_CAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCCAN_CAN0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCCAN_OFFSET) * 32UL) + (SYSCTL_RCGCCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCCAN_CAN1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCCAN_OFFSET) * 32UL) + (SYSCTL_RCGCCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************108 RCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCADC    ((BITBANDING_PERIPHERAL_ADC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCADC_ADC0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCADC_OFFSET) * 32UL) + (SYSCTL_RCGCADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCADC_ADC1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCADC_OFFSET) * 32UL) + (SYSCTL_RCGCADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************109 RCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCACMP    ((BITBANDING_PERIPHERAL_ACMP_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCACMP_ACMP    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCACMP_OFFSET) * 32UL) + (SYSCTL_RCGCACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************110 RCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCPWM    ((BITBANDING_PERIPHERAL_PWM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCPWM_PWM0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCPWM_OFFSET) * 32UL) + (SYSCTL_RCGCPWM_R_PWM0_BIT * 4UL))))

/******************************************************************************************
************************************111 RCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCQEI    ((BITBANDING_PERIPHERAL_QEI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCQEI_QEI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCQEI_OFFSET) * 32UL) + (SYSCTL_RCGCQEI_R_QEI0_BIT * 4UL))))

/******************************************************************************************
************************************112 RCGCLPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCLPC    ((BITBANDING_PERIPHERAL_LPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCLPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCLPC_LPC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCLPC_OFFSET) * 32UL) + (SYSCTL_RCGCLPC_R_LPC_BIT * 4UL))))

/******************************************************************************************
************************************113 RCGCPECI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCPECI    ((BITBANDING_PERIPHERAL_PECI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCPECI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCPECI_PECI    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCPECI_OFFSET) * 32UL) + (SYSCTL_RCGCPECI_R_PECI_BIT * 4UL))))

/******************************************************************************************
************************************114 RCGCFAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCFAN    ((BITBANDING_PERIPHERAL_FAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCFAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCFAN_FAN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCFAN_OFFSET) * 32UL) + (SYSCTL_RCGCFAN_R_FAN_BIT * 4UL))))

/******************************************************************************************
************************************115 RCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCEEPROM    ((BITBANDING_PERIPHERAL_EEPROM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCEEPROM_EEPROM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEEPROM_OFFSET) * 32UL) + (SYSCTL_RCGCEEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************116 RCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCWTIMER_R_WTIMER0_BIT * 4UL))))

/**********************************************************************************
************************************117 RCGCRTS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCRTS    ((BITBANDING_PERIPHERAL_RTS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCRTS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCRTS_RTS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCRTS_OFFSET) * 32UL) + (SYSCTL_RCGCRTS_R_RTS_BIT * 4UL))))

/**********************************************************************************
************************************118 RCGCCCM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCCCM    ((BITBANDING_PERIPHERAL_CCM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCCCM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCCCM_CCM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCCCM_OFFSET) * 32UL) + (SYSCTL_RCGCCCM_R_CCM_BIT * 4UL))))

/**********************************************************************************
************************************119 RCGCLCD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCLCD    ((BITBANDING_PERIPHERAL_LCD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCLCD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCLCD_LCD    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCLCD_OFFSET) * 32UL) + (SYSCTL_RCGCLCD_R_LCD_BIT * 4UL))))

/**********************************************************************************
************************************120 RCGCOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCOWIRE    ((BITBANDING_PERIPHERAL_OWIRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCOWIRE_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCOWIRE_OWIRE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCOWIRE_OFFSET) * 32UL) + (SYSCTL_RCGCOWIRE_R_OWIRE_BIT * 4UL))))

/**********************************************************************************
************************************121 RCGCEMAC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCEMAC    ((BITBANDING_PERIPHERAL_EMAC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEMAC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCEMAC_EMAC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEMAC_OFFSET) * 32UL) + (SYSCTL_RCGCEMAC_R_EMAC_BIT * 4UL))))

/**********************************************************************************
************************************122 RCGCPRB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCPRB    ((BITBANDING_PERIPHERAL_PRB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCPRB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCPRB_PRB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCPRB_OFFSET) * 32UL) + (SYSCTL_RCGCPRB_R_PRB_BIT * 4UL))))

/**********************************************************************************
************************************123 RCGCHIM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCHIM    ((BITBANDING_PERIPHERAL_HIM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCHIM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCHIM_HIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCHIM_OFFSET) * 32UL) + (SYSCTL_RCGCHIM_R_HIM_BIT * 4UL))))

/******************************************************************************************
************************************124 SCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCWD    ((BITBANDING_PERIPHERAL_WD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCWD_WDT0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWD_OFFSET) * 32UL) + (SYSCTL_SCGCWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCWD_WDT1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWD_OFFSET) * 32UL) + (SYSCTL_SCGCWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************125 SCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCTIMER    ((BITBANDING_PERIPHERAL_TIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCTIMER_TIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER5_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER6_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER7_BIT * 4UL))))

/******************************************************************************************
************************************126 SCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOA    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOB    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOC    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOD    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOE    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOF    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOG    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOH    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOJ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOK    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOL    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOM    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPION    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOP    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOQ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************127 SCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCDMA    ((BITBANDING_PERIPHERAL_DMA_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCDMA_UDMA    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCDMA_OFFSET) * 32UL) + (SYSCTL_SCGCDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************128 SCGCEPI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCEPI    ((BITBANDING_PERIPHERAL_EPI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEPI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCEPI_EPI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEPI_OFFSET) * 32UL) + (SYSCTL_SCGCEPI_R_EPI0_BIT * 4UL))))

/******************************************************************************************
************************************129 SCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCHIB    ((BITBANDING_PERIPHERAL_HIB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCHIB_HIB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCHIB_OFFSET) * 32UL) + (SYSCTL_SCGCHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************130 SCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCUART    ((BITBANDING_PERIPHERAL_UART_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCUART_UART0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************131 SCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCSSI    ((BITBANDING_PERIPHERAL_SSI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCSSI_SSI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL) + (SYSCTL_SCGCSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCSSI_SSI1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL) + (SYSCTL_SCGCSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCSSI_SSI2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL) + (SYSCTL_SCGCSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCSSI_SSI3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL) + (SYSCTL_SCGCSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************132 SCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCI2C    ((BITBANDING_PERIPHERAL_I2C_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCI2C_I2C0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C5_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C6_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C7_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C8    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C8_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C9    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C9_BIT * 4UL))))

/******************************************************************************************
************************************133 SCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCUSB    ((BITBANDING_PERIPHERAL_USB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCUSB_USB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUSB_OFFSET) * 32UL) + (SYSCTL_SCGCUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************134 SCGCEPHY *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCEPHY    ((BITBANDING_PERIPHERAL_EPHY_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEPHY_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCEPHY_EPHY    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEPHY_OFFSET) * 32UL) + (SYSCTL_SCGCEPHY_R_EPHY_BIT * 4UL))))

/******************************************************************************************
************************************135 SCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCCAN    ((BITBANDING_PERIPHERAL_CAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCCAN_CAN0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCCAN_OFFSET) * 32UL) + (SYSCTL_SCGCCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCCAN_CAN1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCCAN_OFFSET) * 32UL) + (SYSCTL_SCGCCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************136 SCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCADC    ((BITBANDING_PERIPHERAL_ADC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCADC_ADC0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCADC_OFFSET) * 32UL) + (SYSCTL_SCGCADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCADC_ADC1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCADC_OFFSET) * 32UL) + (SYSCTL_SCGCADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************137 SCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCACMP    ((BITBANDING_PERIPHERAL_ACMP_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCACMP_ACMP    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCACMP_OFFSET) * 32UL) + (SYSCTL_SCGCACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************138 SCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCPWM    ((BITBANDING_PERIPHERAL_PWM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCPWM_PWM0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCPWM_OFFSET) * 32UL) + (SYSCTL_SCGCPWM_R_PWM0_BIT * 4UL))))

/******************************************************************************************
************************************139 SCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCQEI    ((BITBANDING_PERIPHERAL_QEI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCQEI_QEI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCQEI_OFFSET) * 32UL) + (SYSCTL_SCGCQEI_R_QEI0_BIT * 4UL))))

/******************************************************************************************
************************************140 SCGCLPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCLPC    ((BITBANDING_PERIPHERAL_LPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCLPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCLPC_LPC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCLPC_OFFSET) * 32UL) + (SYSCTL_SCGCLPC_R_LPC_BIT * 4UL))))

/******************************************************************************************
************************************141 SCGCPECI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCPECI    ((BITBANDING_PERIPHERAL_PECI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCPECI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCPECI_PECI    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCPECI_OFFSET) * 32UL) + (SYSCTL_SCGCPECI_R_PECI_BIT * 4UL))))

/******************************************************************************************
************************************142 SCGCFAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCFAN    ((BITBANDING_PERIPHERAL_FAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCFAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCFAN_FAN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCFAN_OFFSET) * 32UL) + (SYSCTL_SCGCFAN_R_FAN_BIT * 4UL))))

/******************************************************************************************
************************************143 SCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCEEPROM    ((BITBANDING_PERIPHERAL_EEPROM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCEEPROM_EEPROM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEEPROM_OFFSET) * 32UL) + (SYSCTL_SCGCEEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************144 SCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCWTIMER_R_WTIMER0_BIT * 4UL))))

/**********************************************************************************
************************************145 SCGCRTS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCRTS    ((BITBANDING_PERIPHERAL_RTS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCRTS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCRTS_RTS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCRTS_OFFSET) * 32UL) + (SYSCTL_SCGCRTS_R_RTS_BIT * 4UL))))

/**********************************************************************************
************************************146 SCGCCCM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCCCM    ((BITBANDING_PERIPHERAL_CCM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCCCM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCCCM_CCM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCCCM_OFFSET) * 32UL) + (SYSCTL_SCGCCCM_R_CCM_BIT * 4UL))))

/**********************************************************************************
************************************147 SCGCLCD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCLCD    ((BITBANDING_PERIPHERAL_LCD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCLCD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCLCD_LCD    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCLCD_OFFSET) * 32UL) + (SYSCTL_SCGCLCD_R_LCD_BIT * 4UL))))

/**********************************************************************************
************************************148 SCGCOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCOWIRE    ((BITBANDING_PERIPHERAL_OWIRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCOWIRE_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCOWIRE_OWIRE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCOWIRE_OFFSET) * 32UL) + (SYSCTL_SCGCOWIRE_R_OWIRE_BIT * 4UL))))

/**********************************************************************************
************************************149 SCGCEMAC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCEMAC    ((BITBANDING_PERIPHERAL_EMAC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEMAC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCEMAC_EMAC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEMAC_OFFSET) * 32UL) + (SYSCTL_SCGCEMAC_R_EMAC_BIT * 4UL))))

/**********************************************************************************
************************************150 SCGCPRB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCPRB    ((BITBANDING_PERIPHERAL_PRB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCPRB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCPRB_PRB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCPRB_OFFSET) * 32UL) + (SYSCTL_SCGCPRB_R_PRB_BIT * 4UL))))

/**********************************************************************************
************************************151 SCGCHIM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCHIM    ((BITBANDING_PERIPHERAL_HIM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCHIM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCHIM_HIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCHIM_OFFSET) * 32UL) + (SYSCTL_SCGCHIM_R_HIM_BIT * 4UL))))

/******************************************************************************************
************************************152 DCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCWD    ((BITBANDING_PERIPHERAL_WD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCWD_WDT0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWD_OFFSET) * 32UL) + (SYSCTL_DCGCWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCWD_WDT1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWD_OFFSET) * 32UL) + (SYSCTL_DCGCWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************153 DCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCTIMER    ((BITBANDING_PERIPHERAL_TIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCTIMER_TIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER7_BIT * 4UL))))

/******************************************************************************************
************************************154 DCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOA    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOB    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOC    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOD    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOE    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOF    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOG    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOH    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOJ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOK    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOL    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOM    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPION    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOP    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOQ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************155 DCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCDMA    ((BITBANDING_PERIPHERAL_DMA_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCDMA_UDMA    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCDMA_OFFSET) * 32UL) + (SYSCTL_DCGCDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************156 DCGCEPI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCEPI    ((BITBANDING_PERIPHERAL_EPI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEPI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCEPI_EPI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEPI_OFFSET) * 32UL) + (SYSCTL_DCGCEPI_R_EPI0_BIT * 4UL))))

/******************************************************************************************
************************************157 DCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCHIB    ((BITBANDING_PERIPHERAL_HIB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCHIB_HIB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCHIB_OFFSET) * 32UL) + (SYSCTL_DCGCHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************158 DCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCUART    ((BITBANDING_PERIPHERAL_UART_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCUART_UART0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************159 DCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCSSI    ((BITBANDING_PERIPHERAL_SSI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCSSI_SSI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL) + (SYSCTL_DCGCSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCSSI_SSI1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL) + (SYSCTL_DCGCSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCSSI_SSI2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL) + (SYSCTL_DCGCSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCSSI_SSI3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL) + (SYSCTL_DCGCSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************160 DCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCI2C    ((BITBANDING_PERIPHERAL_I2C_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCI2C_I2C0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C7_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C8    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C8_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C9    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C9_BIT * 4UL))))

/******************************************************************************************
************************************161 DCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCUSB    ((BITBANDING_PERIPHERAL_USB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCUSB_USB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUSB_OFFSET) * 32UL) + (SYSCTL_DCGCUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************162 DCGCEPHY *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCEPHY    ((BITBANDING_PERIPHERAL_EPHY_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEPHY_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCEPHY_EPHY    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEPHY_OFFSET) * 32UL) + (SYSCTL_DCGCEPHY_R_EPHY_BIT * 4UL))))

/******************************************************************************************
************************************163 DCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCCAN    ((BITBANDING_PERIPHERAL_CAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCCAN_CAN0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCCAN_OFFSET) * 32UL) + (SYSCTL_DCGCCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCCAN_CAN1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCCAN_OFFSET) * 32UL) + (SYSCTL_DCGCCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************164 DCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCADC    ((BITBANDING_PERIPHERAL_ADC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCADC_ADC0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCADC_OFFSET) * 32UL) + (SYSCTL_DCGCADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCADC_ADC1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCADC_OFFSET) * 32UL) + (SYSCTL_DCGCADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************165 DCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCACMP    ((BITBANDING_PERIPHERAL_ACMP_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCACMP_ACMP    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCACMP_OFFSET) * 32UL) + (SYSCTL_DCGCACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************166 DCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCPWM    ((BITBANDING_PERIPHERAL_PWM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCPWM_PWM0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCPWM_OFFSET) * 32UL) + (SYSCTL_DCGCPWM_R_PWM0_BIT * 4UL))))

/******************************************************************************************
************************************167 DCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCQEI    ((BITBANDING_PERIPHERAL_QEI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCQEI_QEI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCQEI_OFFSET) * 32UL) + (SYSCTL_DCGCQEI_R_QEI0_BIT * 4UL))))

/******************************************************************************************
************************************168 DCGCLPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCLPC    ((BITBANDING_PERIPHERAL_LPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCLPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCLPC_LPC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCLPC_OFFSET) * 32UL) + (SYSCTL_DCGCLPC_R_LPC_BIT * 4UL))))

/******************************************************************************************
************************************169 DCGCPECI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCPECI    ((BITBANDING_PERIPHERAL_PECI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCPECI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCPECI_PECI    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCPECI_OFFSET) * 32UL) + (SYSCTL_DCGCPECI_R_PECI_BIT * 4UL))))

/******************************************************************************************
************************************170 DCGCFAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCFAN    ((BITBANDING_PERIPHERAL_FAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCFAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCFAN_FAN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCFAN_OFFSET) * 32UL) + (SYSCTL_DCGCFAN_R_FAN_BIT * 4UL))))

/******************************************************************************************
************************************171 DCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCEEPROM    ((BITBANDING_PERIPHERAL_EEPROM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCEEPROM_EEPROM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEEPROM_OFFSET) * 32UL) + (SYSCTL_DCGCEEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************172 DCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCWTIMER_R_WTIMER0_BIT * 4UL))))

/**********************************************************************************
************************************173 DCGCRTS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCRTS    ((BITBANDING_PERIPHERAL_RTS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCRTS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCRTS_RTS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCRTS_OFFSET) * 32UL) + (SYSCTL_DCGCRTS_R_RTS_BIT * 4UL))))

/**********************************************************************************
************************************174 DCGCCCM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCCCM    ((BITBANDING_PERIPHERAL_CCM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCCCM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCCCM_CCM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCCCM_OFFSET) * 32UL) + (SYSCTL_DCGCCCM_R_CCM_BIT * 4UL))))

/**********************************************************************************
************************************175 DCGCLCD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCLCD    ((BITBANDING_PERIPHERAL_LCD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCLCD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCLCD_LCD    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCLCD_OFFSET) * 32UL) + (SYSCTL_DCGCLCD_R_LCD_BIT * 4UL))))

/**********************************************************************************
************************************176 DCGCOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCOWIRE    ((BITBANDING_PERIPHERAL_OWIRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCOWIRE_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCOWIRE_OWIRE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCOWIRE_OFFSET) * 32UL) + (SYSCTL_DCGCOWIRE_R_OWIRE_BIT * 4UL))))

/**********************************************************************************
************************************177 DCGCEMAC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCEMAC    ((BITBANDING_PERIPHERAL_EMAC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEMAC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCEMAC_EMAC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEMAC_OFFSET) * 32UL) + (SYSCTL_DCGCEMAC_R_EMAC_BIT * 4UL))))

/**********************************************************************************
************************************178 DCGCPRB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCPRB    ((BITBANDING_PERIPHERAL_PRB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCPRB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCPRB_PRB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCPRB_OFFSET) * 32UL) + (SYSCTL_DCGCPRB_R_PRB_BIT * 4UL))))

/**********************************************************************************
************************************179 DCGCHIM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCHIM    ((BITBANDING_PERIPHERAL_HIM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCHIM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCHIM_HIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCHIM_OFFSET) * 32UL) + (SYSCTL_DCGCHIM_R_HIM_BIT * 4UL))))

/******************************************************************************************
************************************180 PCWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCWD    ((BITBANDING_PERIPHERAL_WD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCWD_WDT0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCWD_OFFSET) * 32UL) + (SYSCTL_PCWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCWD_WDT1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCWD_OFFSET) * 32UL) + (SYSCTL_PCWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************181 PCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCTIMER    ((BITBANDING_PERIPHERAL_TIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCTIMER_TIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCTIMER_OFFSET) * 32UL) + (SYSCTL_PCTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCTIMER_TIMER1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCTIMER_OFFSET) * 32UL) + (SYSCTL_PCTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCTIMER_TIMER2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCTIMER_OFFSET) * 32UL) + (SYSCTL_PCTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCTIMER_TIMER3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCTIMER_OFFSET) * 32UL) + (SYSCTL_PCTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCTIMER_TIMER4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCTIMER_OFFSET) * 32UL) + (SYSCTL_PCTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCTIMER_TIMER5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCTIMER_OFFSET) * 32UL) + (SYSCTL_PCTIMER_R_TIMER5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCTIMER_TIMER6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCTIMER_OFFSET) * 32UL) + (SYSCTL_PCTIMER_R_TIMER6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCTIMER_TIMER7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCTIMER_OFFSET) * 32UL) + (SYSCTL_PCTIMER_R_TIMER7_BIT * 4UL))))

/******************************************************************************************
************************************182 PCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOA    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOB    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOC    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOD    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOE    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOF    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOG    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOH    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOJ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOK    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOL    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOM    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPION    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOP    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCGPIO_BITBANDING_GPIOQ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PCGPIO_OFFSET) * 32UL) + (SYSCTL_PCGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************183 PCDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCDMA    ((BITBANDING_PERIPHERAL_DMA_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCDMA_UDMA    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCDMA_OFFSET) * 32UL) + (SYSCTL_PCDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************184 PCEPI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCEPI    ((BITBANDING_PERIPHERAL_EPI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCEPI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCEPI_EPI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCEPI_OFFSET) * 32UL) + (SYSCTL_PCEPI_R_EPI0_BIT * 4UL))))

/******************************************************************************************
************************************185 PCHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCHIB    ((BITBANDING_PERIPHERAL_HIB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCHIB_HIB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCHIB_OFFSET) * 32UL) + (SYSCTL_PCHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************186 PCUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCUART    ((BITBANDING_PERIPHERAL_UART_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCUART_UART0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUART_OFFSET) * 32UL) + (SYSCTL_PCUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCUART_UART1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUART_OFFSET) * 32UL) + (SYSCTL_PCUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCUART_UART2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUART_OFFSET) * 32UL) + (SYSCTL_PCUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCUART_UART3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUART_OFFSET) * 32UL) + (SYSCTL_PCUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCUART_UART4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUART_OFFSET) * 32UL) + (SYSCTL_PCUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCUART_UART5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUART_OFFSET) * 32UL) + (SYSCTL_PCUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCUART_UART6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUART_OFFSET) * 32UL) + (SYSCTL_PCUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCUART_UART7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUART_OFFSET) * 32UL) + (SYSCTL_PCUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************187 PCSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCSSI    ((BITBANDING_PERIPHERAL_SSI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCSSI_SSI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCSSI_OFFSET) * 32UL) + (SYSCTL_PCSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCSSI_SSI1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCSSI_OFFSET) * 32UL) + (SYSCTL_PCSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCSSI_SSI2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCSSI_OFFSET) * 32UL) + (SYSCTL_PCSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCSSI_SSI3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCSSI_OFFSET) * 32UL) + (SYSCTL_PCSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************188 PCI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCI2C    ((BITBANDING_PERIPHERAL_I2C_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCI2C_I2C0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCI2C_I2C1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCI2C_I2C2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCI2C_I2C3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCI2C_I2C4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCI2C_I2C5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCI2C_I2C6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCI2C_I2C7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C7_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCI2C_I2C8    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C8_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCI2C_I2C9    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCI2C_OFFSET) * 32UL) + (SYSCTL_PCI2C_R_I2C9_BIT * 4UL))))

/******************************************************************************************
************************************189 PCUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCUSB    ((BITBANDING_PERIPHERAL_USB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCUSB_USB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCUSB_OFFSET) * 32UL) + (SYSCTL_PCUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************190 PCEPHY *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCEPHY    ((BITBANDING_PERIPHERAL_EPHY_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCEPHY_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCEPHY_EPHY    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCEPHY_OFFSET) * 32UL) + (SYSCTL_PCEPHY_R_EPHY_BIT * 4UL))))

/******************************************************************************************
************************************191 PCCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCCAN    ((BITBANDING_PERIPHERAL_CAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCCAN_CAN0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCCAN_OFFSET) * 32UL) + (SYSCTL_PCCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCCAN_CAN1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCCAN_OFFSET) * 32UL) + (SYSCTL_PCCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************192 PCADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCADC    ((BITBANDING_PERIPHERAL_ADC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCADC_ADC0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCADC_OFFSET) * 32UL) + (SYSCTL_PCADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PCADC_ADC1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCADC_OFFSET) * 32UL) + (SYSCTL_PCADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************193 PCACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCACMP    ((BITBANDING_PERIPHERAL_ACMP_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCACMP_ACMP    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCACMP_OFFSET) * 32UL) + (SYSCTL_PCACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************194 PCPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCPWM    ((BITBANDING_PERIPHERAL_PWM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCPWM_PWM0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCPWM_OFFSET) * 32UL) + (SYSCTL_PCPWM_R_PWM0_BIT * 4UL))))

/******************************************************************************************
************************************195 PCQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCQEI    ((BITBANDING_PERIPHERAL_QEI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCQEI_QEI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCQEI_OFFSET) * 32UL) + (SYSCTL_PCQEI_R_QEI0_BIT * 4UL))))

/******************************************************************************************
************************************196 PCLPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCLPC    ((BITBANDING_PERIPHERAL_LPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCLPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCLPC_LPC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCLPC_OFFSET) * 32UL) + (SYSCTL_PCLPC_R_LPC_BIT * 4UL))))

/******************************************************************************************
************************************197 PCPECI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCPECI    ((BITBANDING_PERIPHERAL_PECI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCPECI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCPECI_PECI    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCPECI_OFFSET) * 32UL) + (SYSCTL_PCPECI_R_PECI_BIT * 4UL))))

/******************************************************************************************
************************************198 PCFAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCFAN    ((BITBANDING_PERIPHERAL_FAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCFAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCFAN_FAN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCFAN_OFFSET) * 32UL) + (SYSCTL_PCFAN_R_FAN_BIT * 4UL))))

/******************************************************************************************
************************************199 PCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCEEPROM    ((BITBANDING_PERIPHERAL_EEPROM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCEEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCEEPROM_EEPROM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCEEPROM_OFFSET) * 32UL) + (SYSCTL_PCEEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************200 PCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCWTIMER_WTIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCWTIMER_OFFSET) * 32UL) + (SYSCTL_PCWTIMER_R_WTIMER0_BIT * 4UL))))

/**********************************************************************************
************************************201 PCRTS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCRTS    ((BITBANDING_PERIPHERAL_RTS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCRTS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCRTS_RTS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCRTS_OFFSET) * 32UL) + (SYSCTL_PCRTS_R_RTS_BIT * 4UL))))

/**********************************************************************************
************************************202 PCCCM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCCCM    ((BITBANDING_PERIPHERAL_CCM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCCCM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCCCM_CCM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCCCM_OFFSET) * 32UL) + (SYSCTL_PCCCM_R_CCM_BIT * 4UL))))

/**********************************************************************************
************************************203 PCLCD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCLCD    ((BITBANDING_PERIPHERAL_LCD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCLCD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCLCD_LCD    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCLCD_OFFSET) * 32UL) + (SYSCTL_PCLCD_R_LCD_BIT * 4UL))))

/**********************************************************************************
************************************204 PCOWIRE *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCOWIRE    ((BITBANDING_PERIPHERAL_OWIRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCOWIRE_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCOWIRE_OWIRE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCOWIRE_OFFSET) * 32UL) + (SYSCTL_PCOWIRE_R_OWIRE_BIT * 4UL))))

/**********************************************************************************
************************************205 PCEMAC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCEMAC    ((BITBANDING_PERIPHERAL_EMAC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCEMAC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCEMAC_EMAC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCEMAC_OFFSET) * 32UL) + (SYSCTL_PCEMAC_R_EMAC_BIT * 4UL))))

/**********************************************************************************
************************************206 PCPRB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCPRB    ((BITBANDING_PERIPHERAL_PRB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCPRB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCPRB_PRB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCPRB_OFFSET) * 32UL) + (SYSCTL_PCPRB_R_PRB_BIT * 4UL))))

/**********************************************************************************
************************************207 PCHIM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PCHIM    ((BITBANDING_PERIPHERAL_HIM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCHIM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PCHIM_HIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PCHIM_OFFSET) * 32UL) + (SYSCTL_PCHIM_R_HIM_BIT * 4UL))))


/******************************************************************************************
************************************208 PRWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRWD    ((BITBANDING_PERIPHERAL_WD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRWD_WDT0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWD_OFFSET) * 32UL) + (SYSCTL_PRWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRWD_WDT1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWD_OFFSET) * 32UL) + (SYSCTL_PRWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************209 PRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRTIMER    ((BITBANDING_PERIPHERAL_TIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRTIMER_TIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER7_BIT * 4UL))))

/******************************************************************************************
************************************210 PRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOA    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOB    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOC    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOD    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOE    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOF    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOG    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOH    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOJ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOK    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOL    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOM    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPION    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOP    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOQ    (*((volatile UBase_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************211 PRDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRDMA    ((BITBANDING_PERIPHERAL_DMA_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRDMA_UDMA    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRDMA_OFFSET) * 32UL) + (SYSCTL_PRDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************212 PREPI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PREPI    ((BITBANDING_PERIPHERAL_EPI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREPI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PREPI_EPI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREPI_OFFSET) * 32UL) + (SYSCTL_PREPI_R_EPI0_BIT * 4UL))))

/******************************************************************************************
************************************213 PRHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRHIB    ((BITBANDING_PERIPHERAL_HIB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRHIB_HIB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRHIB_OFFSET) * 32UL) + (SYSCTL_PRHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************214 PRUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRUART    ((BITBANDING_PERIPHERAL_UART_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRUART_UART0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************215 PRSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRSSI    ((BITBANDING_PERIPHERAL_SSI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRSSI_SSI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL) + (SYSCTL_PRSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRSSI_SSI1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL) + (SYSCTL_PRSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRSSI_SSI2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL) + (SYSCTL_PRSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRSSI_SSI3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL) + (SYSCTL_PRSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************216 PRI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRI2C    ((BITBANDING_PERIPHERAL_I2C_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRI2C_I2C0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C2    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C3    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C4    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C5    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C6    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C7    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C7_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C8    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C8_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C9    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C9_BIT * 4UL))))

/******************************************************************************************
************************************217 PRUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRUSB    ((BITBANDING_PERIPHERAL_USB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRUSB_USB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUSB_OFFSET) * 32UL) + (SYSCTL_PRUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************218 PREPHY *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PREPHY    ((BITBANDING_PERIPHERAL_EPHY_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREPHY_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PREPHY_EPHY    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREPHY_OFFSET) * 32UL) + (SYSCTL_PREPHY_R_EPHY_BIT * 4UL))))

/******************************************************************************************
************************************219 PRCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRCAN    ((BITBANDING_PERIPHERAL_CAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRCAN_CAN0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRCAN_OFFSET) * 32UL) + (SYSCTL_PRCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRCAN_CAN1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRCAN_OFFSET) * 32UL) + (SYSCTL_PRCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************220 PRADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRADC    ((BITBANDING_PERIPHERAL_ADC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRADC_ADC0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRADC_OFFSET) * 32UL) + (SYSCTL_PRADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRADC_ADC1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRADC_OFFSET) * 32UL) + (SYSCTL_PRADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************221 PRACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRACMP    ((BITBANDING_PERIPHERAL_ACMP_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRACMP_ACMP    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRACMP_OFFSET) * 32UL) + (SYSCTL_PRACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************222 PRPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRPWM    ((BITBANDING_PERIPHERAL_PWM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRPWM_PWM0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRPWM_OFFSET) * 32UL) + (SYSCTL_PRPWM_R_PWM0_BIT * 4UL))))

/******************************************************************************************
************************************223 PRQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRQEI    ((BITBANDING_PERIPHERAL_QEI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRQEI_QEI0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRQEI_OFFSET) * 32UL) + (SYSCTL_PRQEI_R_QEI0_BIT * 4UL))))

/******************************************************************************************
************************************224 PRLPC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRLPC    ((BITBANDING_PERIPHERAL_LPC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRLPC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRLPC_LPC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRLPC_OFFSET) * 32UL) + (SYSCTL_PRLPC_R_LPC_BIT * 4UL))))

/******************************************************************************************
************************************225 PRPECI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRPECI    ((BITBANDING_PERIPHERAL_PECI_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRPECI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRPECI_PECI    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRPECI_OFFSET) * 32UL) + (SYSCTL_PRPECI_R_PECI_BIT * 4UL))))

/******************************************************************************************
************************************226 PRFAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRFAN    ((BITBANDING_PERIPHERAL_FAN_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRFAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRFAN_FAN    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRFAN_OFFSET) * 32UL) + (SYSCTL_PRFAN_R_FAN_BIT * 4UL))))

/******************************************************************************************
************************************227 PREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PREEPROM    ((BITBANDING_PERIPHERAL_EEPROM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PREEPROM_EEPROM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREEPROM_OFFSET) * 32UL) + (SYSCTL_PREEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************228 PRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRWTIMER_WTIMER0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWTIMER_OFFSET) * 32UL) + (SYSCTL_PRWTIMER_R_WTIMER0_BIT * 4UL))))

/**********************************************************************************
************************************229 PRRTS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRRTS    ((BITBANDING_PERIPHERAL_RTS_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRRTS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRRTS_RTS    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRRTS_OFFSET) * 32UL) + (SYSCTL_PRRTS_R_RTS_BIT * 4UL))))

/**********************************************************************************
************************************230 PRCCM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRCCM    ((BITBANDING_PERIPHERAL_CCM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRCCM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRCCM_CCM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRCCM_OFFSET) * 32UL) + (SYSCTL_PRCCM_R_CCM_BIT * 4UL))))

/**********************************************************************************
************************************231 PRLCD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRLCD    ((BITBANDING_PERIPHERAL_LCD_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRLCD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRLCD_LCD    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRLCD_OFFSET) * 32UL) + (SYSCTL_PRLCD_R_LCD_BIT * 4UL))))

/**********************************************************************************
************************************232 PROWIRE *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PROWIRE    ((BITBANDING_PERIPHERAL_OWIRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PROWIRE_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PROWIRE_OWIRE    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PROWIRE_OFFSET) * 32UL) + (SYSCTL_PROWIRE_R_OWIRE_BIT * 4UL))))

/**********************************************************************************
************************************233 PREMAC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PREMAC    ((BITBANDING_PERIPHERAL_EMAC_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREMAC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PREMAC_EMAC    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREMAC_OFFSET) * 32UL) + (SYSCTL_PREMAC_R_EMAC_BIT * 4UL))))

/**********************************************************************************
************************************234 PRPRB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRPRB    ((BITBANDING_PERIPHERAL_PRB_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRPRB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRPRB_PRB    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRPRB_OFFSET) * 32UL) + (SYSCTL_PRPRB_R_PRB_BIT * 4UL))))

/**********************************************************************************
************************************235 PRHIM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRHIM    ((BITBANDING_PERIPHERAL_HIM_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRHIM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRHIM_HIM    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRHIM_OFFSET) * 32UL) + (SYSCTL_PRHIM_R_HIM_BIT * 4UL))))

/**********************************************************************************
************************************236 UNIQUEID0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_UNIQUEID0    ((BITBANDING_UNIQUEID_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_UNIQUEID0_OFFSET) * 32UL)))

/**********************************************************************************
************************************237 UNIQUEID1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_UNIQUEID1    ((BITBANDING_UNIQUEID_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_UNIQUEID1_OFFSET) * 32UL)))

/**********************************************************************************
************************************238 UNIQUEID2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_UNIQUEID2    ((BITBANDING_UNIQUEID_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_UNIQUEID2_OFFSET) * 32UL)))

/**********************************************************************************
************************************239 UNIQUEID3 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_UNIQUEID3    ((BITBANDING_UNIQUEID_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_UNIQUEID3_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 240-Flash RVP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RVP    ((BITBANDING_RVP_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RVP_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 241-Flash FMPRE0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE0    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 242-Flash FMPRE1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE1    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 243-Flash FMPRE2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE2    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 244-Flash FMPRE3 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE3    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE3_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 245-Flash FMPRE4 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE4    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE4_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 246-Flash FMPRE5 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE5    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE5_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 247-Flash FMPRE6 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE6    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE6_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 248-Flash FMPRE7 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE7    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE7_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 249-Flash FMPRE8 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE8    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE8_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 250-Flash FMPRE9 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE9    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE9_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 251-Flash FMPRE10 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE10    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE10_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 252-Flash FMPRE11 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE11    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE11_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 253-Flash FMPRE12 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE12    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE12_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 254-Flash FMPRE13 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE13    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE13_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 255-Flash FMPRE14 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE14    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE14_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 256-Flash FMPRE15 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE15    ((BITBANDING_FMPRE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE15_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 257-Flash FMPPE0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE0    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 258-Flash FMPPE1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE1    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 259-Flash FMPPE2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE2    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 260-Flash FMPPE3 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE3    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE3_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 261-Flash FMPPE4 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE4    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE4_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 262-Flash FMPPE5 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE5    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE5_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 263-Flash FMPPE6 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE6    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE6_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 264-Flash FMPPE7 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE7    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE7_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 265-Flash FMPPE8 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE8    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE8_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 266-Flash FMPPE9 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE9    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE9_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 267-Flash FMPPE10 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE10    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE10_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 268-Flash FMPPE11 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE11    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE11_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 269-Flash FMPPE12 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE12    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE12_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 270-Flash FMPPE13 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE13    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE13_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 271-Flash FMPPE14 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE14    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE14_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 272-Flash FMPPE15 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE15    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE15_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 273-Flash BOOTCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_BOOTCFG    ((BITBANDING_FMPPE_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_BOOTCFG_DBG0    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_DBG0_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_DBG1    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_DBG1_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_KEY    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_KEY_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_ENA    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_EN_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_POL    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_POL_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_NW    (*((volatile UBase_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_NW_BIT * 4UL))))

/******************************************************************************************
************************************ 274-Flash USER_REG0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USER_REG0    ((BITBANDING_USER_REG_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USER_REG0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 275-Flash USER_REG1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USER_REG1    ((BITBANDING_USER_REG_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USER_REG1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 276-Flash USER_REG2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USER_REG2    ((BITBANDING_USER_REG_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USER_REG2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 277-Flash USER_REG3 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USER_REG3    ((BITBANDING_USER_REG_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USER_REG3_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_BITBANDING_H_ */
