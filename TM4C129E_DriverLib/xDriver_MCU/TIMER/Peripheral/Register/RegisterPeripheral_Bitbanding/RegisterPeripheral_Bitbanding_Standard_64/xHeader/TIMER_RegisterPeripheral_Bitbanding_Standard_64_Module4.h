/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Standard_64_Module4.h
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
 * @verbatim 9 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_MODULE4_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_MODULE4_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Standard.h>

#define GPWTM4_BITBANDING    ((GPTM_TypeDef_BITBANDING*) (GPWTM_BASE_BITBANDING + (GPWTM4_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 CFG *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_CFG    ((BITBANDING_GPTMCFG_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CFG_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 2 TAMR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TAMR    ((BITBANDING_GPTMTAMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL)))

#define GPWTM4_BITBANDING_TAMR_TACMR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TACMR_BIT * 4UL))))
#define GPWTM4_BITBANDING_TAMR_TAAMS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TAAMS_BIT * 4UL))))
#define GPWTM4_BITBANDING_TAMR_TACDIR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TACDIR_BIT * 4UL))))
#define GPWTM4_BITBANDING_TAMR_TAMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TAMIE_BIT * 4UL))))
#define GPWTM4_BITBANDING_TAMR_TAWOT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TAWOT_BIT * 4UL))))
#define GPWTM4_BITBANDING_TAMR_TASNAPS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TASNAPS_BIT * 4UL))))
#define GPWTM4_BITBANDING_TAMR_TAILD    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TAILD_BIT * 4UL))))
#define GPWTM4_BITBANDING_TAMR_TAPWMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TAPWMIE_BIT * 4UL))))
#define GPWTM4_BITBANDING_TAMR_TAMRSU    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TAMRSU_BIT * 4UL))))
#define GPWTM4_BITBANDING_TAMR_TAPLO    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMR_OFFSET) * 32UL) + (GPWTM_TAMR_R_TAPLO_BIT * 4UL))))

/******************************************************************************************
*********************************** * 3 TBMR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TBMR    ((BITBANDING_GPTMTBMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL)))

#define GPWTM4_BITBANDING_TBMR_TBCMR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBCMR_BIT * 4UL))))
#define GPWTM4_BITBANDING_TBMR_TBAMS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBAMS_BIT * 4UL))))
#define GPWTM4_BITBANDING_TBMR_TBCDIR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBCDIR_BIT * 4UL))))
#define GPWTM4_BITBANDING_TBMR_TBMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBMIE_BIT * 4UL))))
#define GPWTM4_BITBANDING_TBMR_TBWOT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBWOT_BIT * 4UL))))
#define GPWTM4_BITBANDING_TBMR_TBSNAPS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBSNAPS_BIT * 4UL))))
#define GPWTM4_BITBANDING_TBMR_TBILD    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBILD_BIT * 4UL))))
#define GPWTM4_BITBANDING_TBMR_TBPWMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBPWMIE_BIT * 4UL))))
#define GPWTM4_BITBANDING_TBMR_TBMRSU    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBMRSU_BIT * 4UL))))
#define GPWTM4_BITBANDING_TBMR_TBPLO    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMR_OFFSET) * 32UL) + (GPWTM_TBMR_R_TBPLO_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 CTL *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_CTL    ((BITBANDING_GPTMCTL_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL)))

#define GPWTM4_BITBANDING_CTL_TAEN    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL) + (GPWTM_CTL_R_TAEN_BIT * 4UL))))
#define GPWTM4_BITBANDING_CTL_TASTALL    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL) + (GPWTM_CTL_R_TASTALL_BIT * 4UL))))
#define GPWTM4_BITBANDING_CTL_RTCEN    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL) + (GPWTM_CTL_R_RTCEN_BIT * 4UL))))
#define GPWTM4_BITBANDING_CTL_TAOTE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL) + (GPWTM_CTL_R_TAOTE_BIT * 4UL))))
#define GPWTM4_BITBANDING_CTL_TAPWML    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL) + (GPWTM_CTL_R_TAPWML_BIT * 4UL))))
#define GPWTM4_BITBANDING_CTL_TBEN    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL) + (GPWTM_CTL_R_TBEN_BIT * 4UL))))
#define GPWTM4_BITBANDING_CTL_TBSTALL    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL) + (GPWTM_CTL_R_TBSTALL_BIT * 4UL))))
#define GPWTM4_BITBANDING_CTL_TBOTE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL) + (GPWTM_CTL_R_TBOTE_BIT * 4UL))))
#define GPWTM4_BITBANDING_CTL_TBPWML    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_CTL_OFFSET) * 32UL) + (GPWTM_CTL_R_TBPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 IMR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_IMR    ((BITBANDING_GPTMIMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL)))

#define GPWTM4_BITBANDING_IMR_TATOIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_TATOIM_BIT * 4UL))))
#define GPWTM4_BITBANDING_IMR_CAMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_CAMIM_BIT * 4UL))))
#define GPWTM4_BITBANDING_IMR_CAEIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_CAEIM_BIT * 4UL))))
#define GPWTM4_BITBANDING_IMR_RTCIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_RTCIM_BIT * 4UL))))
#define GPWTM4_BITBANDING_IMR_TAMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_TAMIM_BIT * 4UL))))
#define GPWTM4_BITBANDING_IMR_TBTOIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_TBTOIM_BIT * 4UL))))
#define GPWTM4_BITBANDING_IMR_CBMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_CBMIM_BIT * 4UL))))
#define GPWTM4_BITBANDING_IMR_CBEIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_CBEIM_BIT * 4UL))))
#define GPWTM4_BITBANDING_IMR_TBMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_TBMIM_BIT * 4UL))))
#define GPWTM4_BITBANDING_IMR_WUEIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_IMR_OFFSET) * 32UL) + (GPWTM_IMR_R_WUEIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 RIS *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_RIS    ((BITBANDING_GPTMRIS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL)))

#define GPWTM4_BITBANDING_RIS_TATORIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_TATORIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_RIS_CAMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_CAMRIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_RIS_CAERIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_CAERIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_RIS_RTCRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_RTCRIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_RIS_TAMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_TAMRIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_RIS_TBTORIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_TBTORIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_RIS_CBMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_CBMRIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_RIS_CBERIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_CBERIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_RIS_TBMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_TBMRIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_RIS_WUERIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RIS_OFFSET) * 32UL) + (GPWTM_RIS_R_WUERIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 MIS *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_MIS    ((BITBANDING_GPTMMIS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL)))

#define GPWTM4_BITBANDING_MIS_TATOMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_TATOMIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_MIS_CAMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_CAMMIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_MIS_CAEMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_CAEMIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_MIS_RTCMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_RTCMIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_MIS_TAMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_TAMMIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_MIS_TBTOMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_TBTOMIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_MIS_CBMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_CBMMIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_MIS_CBEMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_CBEMIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_MIS_TBMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_TBMMIS_BIT * 4UL))))
#define GPWTM4_BITBANDING_MIS_WUEMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_MIS_OFFSET) * 32UL) + (GPWTM_MIS_R_WUEMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 ICR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_ICR    ((BITBANDING_GPTMICR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL)))

#define GPWTM4_BITBANDING_ICR_TATOCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_TATOCINT_BIT * 4UL))))
#define GPWTM4_BITBANDING_ICR_CAMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_CAMCINT_BIT * 4UL))))
#define GPWTM4_BITBANDING_ICR_CAECINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_CAECINT_BIT * 4UL))))
#define GPWTM4_BITBANDING_ICR_RTCCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_RTCCINT_BIT * 4UL))))
#define GPWTM4_BITBANDING_ICR_TAMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_TAMCINT_BIT * 4UL))))
#define GPWTM4_BITBANDING_ICR_TBTOCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_TBTOCINT_BIT * 4UL))))
#define GPWTM4_BITBANDING_ICR_CBMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_CBMCINT_BIT * 4UL))))
#define GPWTM4_BITBANDING_ICR_CBECINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_CBECINT_BIT * 4UL))))
#define GPWTM4_BITBANDING_ICR_TBMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_TBMCINT_BIT * 4UL))))
#define GPWTM4_BITBANDING_ICR_WUECINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_ICR_OFFSET) * 32UL) + (GPWTM_ICR_R_WUECINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 TAILR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TAILR    ((BITBANDING_GPTMTAILR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 11 TBILR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TBILR    ((BITBANDING_GPTMTBILR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TAMATCHR    ((BITBANDING_GPTMTAMATCHR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TBMATCHR    ((BITBANDING_GPTMTBMATCHR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 14 TAPR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TAPR    ((BITBANDING_GPTMTAPR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAPR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 15 TBPR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TBPR    ((BITBANDING_GPTMTBPR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBPR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 16 TAPMR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TAPMR    ((BITBANDING_GPTMTAPMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAPMR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 17 TBPMR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TBPMR    ((BITBANDING_GPTMTBPMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBPMR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 TAR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TAR    ((BITBANDING_GPTMTAR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 19 TBR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TBR    ((BITBANDING_GPTMTBR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 20 TAV *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TAV    ((BITBANDING_GPTMTAV_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 21 TBV *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TBV    ((BITBANDING_GPTMTBV_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 22 RTCPD *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_RTCPD    ((BITBANDING_GPTMRTCPD_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_RTCPD_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 23 TAPS *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TAPS    ((BITBANDING_GPTMTAPS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAPS_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 24 TBPS *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TBPS    ((BITBANDING_GPTMTBPS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBPS_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 25 TAPV *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TAPV    ((BITBANDING_GPTMTAPV_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TAPV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 26 TBPV *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TBPV    ((BITBANDING_GPTMTBPV_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_TBPV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 27 PP *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_PP    ((BITBANDING_GPTMPP_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM4_OFFSET + GPWTM_PP_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_MODULE4_H_ */
