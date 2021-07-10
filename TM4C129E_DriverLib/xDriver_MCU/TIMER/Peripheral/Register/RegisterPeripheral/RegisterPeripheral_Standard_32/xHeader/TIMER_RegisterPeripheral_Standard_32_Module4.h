/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32_Module4.h
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
 * Date           Author     Version     Description
 * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE4_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE4_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPTM4    (((GPTM_TypeDef*) (GPTM4_BASE)))

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/
#define GPTM4_CFG    ((GPTMCFG_TypeDef*) (GPTM4_BASE + GPTM_CFG_OFFSET))
#define GPTM4_CFG_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_CFG_OFFSET)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPTM4_TAMR    ((GPTMTAMR_TypeDef*) (GPTM4_BASE + GPTM_TAMR_OFFSET))
#define GPTM4_TAMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TAMR_OFFSET)))

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/
#define GPTM4_TBMR    ((GPTMTBMR_TypeDef*) (GPTM4_BASE + GPTM_TBMR_OFFSET))
#define GPTM4_TBMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TBMR_OFFSET)))


/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPTM4_GPTMCTL    ((GPTMCTL_TypeDef*) (GPTM4_BASE + GPTM_CTL_OFFSET))
#define GPTM4_GPTMCTL_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_CTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPTM4_IMR    ((GPTMIMR_TypeDef*) (GPTM4_BASE + GPTM_IMR_OFFSET))
#define GPTM4_IMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_IMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPTM4_RIS    ((GPTMRIS_TypeDef*) (GPTM4_BASE + GPTM_RIS_OFFSET))
#define GPTM4_RIS_R    (*((volatile const uint32_t*) (GPTM4_BASE + GPTM_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPTM4_MIS    ((GPTMMIS_TypeDef*) (GPTM4_BASE + GPTM_MIS_OFFSET))
#define GPTM4_MIS_R    (*((volatile const uint32_t*) (GPTM4_BASE + GPTM_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPTM4_ICR    ((GPTMICR_TypeDef*) (GPTM4_BASE + GPTM_ICR_OFFSET))
#define GPTM4_ICR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPTM4_TAILR    ((GPTMTAILR_TypeDef*) (GPTM4_BASE + GPTM_TAILR_OFFSET))
#define GPTM4_TAILR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TAILR_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/
#define GPTM4_TBILR    ((GPTMTBILR_TypeDef*) (GPTM4_BASE + GPTM_TBILR_OFFSET))
#define GPTM4_TBILR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TBILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM4_TAMATCHR    ((GPTMTAMATCHR_TypeDef*) (GPTM4_BASE + GPTM_TAMATCHR_OFFSET))
#define GPTM4_TAMATCHR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPTM4_TBMATCHR    ((GPTMTBMATCHR_TypeDef*) (GPTM4_BASE + GPTM_TBMATCHR_OFFSET))
#define GPTM4_TBMATCHR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPTM4_TAPR    ((GPTMTAPR_TypeDef*) (GPTM4_BASE + GPTM_TAPR_OFFSET))
#define GPTM4_TAPR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TAPR_OFFSET)))

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/
#define GPTM4_TBPR    ((GPTMTBPR_TypeDef*) (GPTM4_BASE + GPTM_TBPR_OFFSET))
#define GPTM4_TBPR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TBPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPTM4_TAPMR    ((GPTMTAPMR_TypeDef*) (GPTM4_BASE + GPTM_TAPMR_OFFSET))
#define GPTM4_TAPMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 TBPMR *********************************************
******************************************************************************************/
#define GPTM4_TBPMR    ((GPTMTBPMR_TypeDef*) (GPTM4_BASE + GPTM_TBPMR_OFFSET))
#define GPTM4_TBPMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPTM4_TAR    ((GPTMTAR_TypeDef*) (GPTM4_BASE + GPTM_TAR_OFFSET))
#define GPTM4_TAR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TAR_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPTM4_TBR    ((GPTMTBR_TypeDef*) (GPTM4_BASE + GPTM_TBR_OFFSET))
#define GPTM4_TBR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TBR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPTM4_TAV    ((GPTMTAV_TypeDef*) (GPTM4_BASE + GPTM_TAV_OFFSET))
#define GPTM4_TAV_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TAV_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPTM4_TBV    ((GPTMTBV_TypeDef*) (GPTM4_BASE + GPTM_TBV_OFFSET))
#define GPTM4_TBV_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TBV_OFFSET)))

/******************************************************************************************
************************************ 22 RTCPD *********************************************
******************************************************************************************/
#define GPTM4_RTCPD    ((GPTMRTCPD_TypeDef*) (GPTM4_BASE + GPTM_RTCPD_OFFSET))
#define GPTM4_RTCPD_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_RTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPTM4_TAPS    ((GPTMTAPS_TypeDef*) (GPTM4_BASE + GPTM_TAPS_OFFSET))
#define GPTM4_TAPS_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TAPS_OFFSET)))

/******************************************************************************************
************************************ 24 TBPS *********************************************
******************************************************************************************/
#define GPTM4_TBPS    ((GPTMTBPS_TypeDef*) (GPTM4_BASE + GPTM_TBPS_OFFSET))
#define GPTM4_TBPS_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TBPS_OFFSET)))

/******************************************************************************************
************************************ 25 TAPV *********************************************
******************************************************************************************/
#define GPTM4_TAPV    ((GPTMTAPV_TypeDef*) (GPTM4_BASE + GPTM_TAPV_OFFSET))
#define GPTM4_TAPV_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TAPV_OFFSET)))

/******************************************************************************************
************************************ 26 TBPV *********************************************
******************************************************************************************/
#define GPTM4_TBPV    ((GPTMTBPV_TypeDef*) (GPTM4_BASE + GPTM_TBPV_OFFSET))
#define GPTM4_TBPV_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TBPV_OFFSET)))

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/
#define GPTM4_PP    ((GPTMPP_TypeDef*) (GPTM4_BASE + GPTM_PP_OFFSET))
#define GPTM4_PP_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_PP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE4_H_ */
