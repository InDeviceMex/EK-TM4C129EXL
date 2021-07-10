/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32_Module1.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE1_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE1_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPTM1    (((GPTM_TypeDef*) (GPTM1_BASE)))

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/
#define GPTM1_CFG    ((GPTMCFG_TypeDef*) (GPTM1_BASE + GPTM_CFG_OFFSET))
#define GPTM1_CFG_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_CFG_OFFSET)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPTM1_TAMR    ((GPTMTAMR_TypeDef*) (GPTM1_BASE + GPTM_TAMR_OFFSET))
#define GPTM1_TAMR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TAMR_OFFSET)))

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/
#define GPTM1_TBMR    ((GPTMTBMR_TypeDef*) (GPTM1_BASE + GPTM_TBMR_OFFSET))
#define GPTM1_TBMR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TBMR_OFFSET)))


/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPTM1_GPTMCTL    ((GPTMCTL_TypeDef*) (GPTM1_BASE + GPTM_CTL_OFFSET))
#define GPTM1_GPTMCTL_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_CTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPTM1_IMR    ((GPTMIMR_TypeDef*) (GPTM1_BASE + GPTM_IMR_OFFSET))
#define GPTM1_IMR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_IMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPTM1_RIS    ((GPTMRIS_TypeDef*) (GPTM1_BASE + GPTM_RIS_OFFSET))
#define GPTM1_RIS_R    (*((volatile const uint32_t*) (GPTM1_BASE + GPTM_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPTM1_MIS    ((GPTMMIS_TypeDef*) (GPTM1_BASE + GPTM_MIS_OFFSET))
#define GPTM1_MIS_R    (*((volatile const uint32_t*) (GPTM1_BASE + GPTM_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPTM1_ICR    ((GPTMICR_TypeDef*) (GPTM1_BASE + GPTM_ICR_OFFSET))
#define GPTM1_ICR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPTM1_TAILR    ((GPTMTAILR_TypeDef*) (GPTM1_BASE + GPTM_TAILR_OFFSET))
#define GPTM1_TAILR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TAILR_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/
#define GPTM1_TBILR    ((GPTMTBILR_TypeDef*) (GPTM1_BASE + GPTM_TBILR_OFFSET))
#define GPTM1_TBILR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TBILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM1_TAMATCHR    ((GPTMTAMATCHR_TypeDef*) (GPTM1_BASE + GPTM_TAMATCHR_OFFSET))
#define GPTM1_TAMATCHR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPTM1_TBMATCHR    ((GPTMTBMATCHR_TypeDef*) (GPTM1_BASE + GPTM_TBMATCHR_OFFSET))
#define GPTM1_TBMATCHR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPTM1_TAPR    ((GPTMTAPR_TypeDef*) (GPTM1_BASE + GPTM_TAPR_OFFSET))
#define GPTM1_TAPR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TAPR_OFFSET)))

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/
#define GPTM1_TBPR    ((GPTMTBPR_TypeDef*) (GPTM1_BASE + GPTM_TBPR_OFFSET))
#define GPTM1_TBPR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TBPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPTM1_TAPMR    ((GPTMTAPMR_TypeDef*) (GPTM1_BASE + GPTM_TAPMR_OFFSET))
#define GPTM1_TAPMR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 TBPMR *********************************************
******************************************************************************************/
#define GPTM1_TBPMR    ((GPTMTBPMR_TypeDef*) (GPTM1_BASE + GPTM_TBPMR_OFFSET))
#define GPTM1_TBPMR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPTM1_TAR    ((GPTMTAR_TypeDef*) (GPTM1_BASE + GPTM_TAR_OFFSET))
#define GPTM1_TAR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TAR_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPTM1_TBR    ((GPTMTBR_TypeDef*) (GPTM1_BASE + GPTM_TBR_OFFSET))
#define GPTM1_TBR_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TBR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPTM1_TAV    ((GPTMTAV_TypeDef*) (GPTM1_BASE + GPTM_TAV_OFFSET))
#define GPTM1_TAV_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TAV_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPTM1_TBV    ((GPTMTBV_TypeDef*) (GPTM1_BASE + GPTM_TBV_OFFSET))
#define GPTM1_TBV_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TBV_OFFSET)))

/******************************************************************************************
************************************ 22 RTCPD *********************************************
******************************************************************************************/
#define GPTM1_RTCPD    ((GPTMRTCPD_TypeDef*) (GPTM1_BASE + GPTM_RTCPD_OFFSET))
#define GPTM1_RTCPD_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_RTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPTM1_TAPS    ((GPTMTAPS_TypeDef*) (GPTM1_BASE + GPTM_TAPS_OFFSET))
#define GPTM1_TAPS_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TAPS_OFFSET)))

/******************************************************************************************
************************************ 24 TBPS *********************************************
******************************************************************************************/
#define GPTM1_TBPS    ((GPTMTBPS_TypeDef*) (GPTM1_BASE + GPTM_TBPS_OFFSET))
#define GPTM1_TBPS_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TBPS_OFFSET)))

/******************************************************************************************
************************************ 25 TAPV *********************************************
******************************************************************************************/
#define GPTM1_TAPV    ((GPTMTAPV_TypeDef*) (GPTM1_BASE + GPTM_TAPV_OFFSET))
#define GPTM1_TAPV_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TAPV_OFFSET)))

/******************************************************************************************
************************************ 26 TBPV *********************************************
******************************************************************************************/
#define GPTM1_TBPV    ((GPTMTBPV_TypeDef*) (GPTM1_BASE + GPTM_TBPV_OFFSET))
#define GPTM1_TBPV_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_TBPV_OFFSET)))

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/
#define GPTM1_PP    ((GPTMPP_TypeDef*) (GPTM1_BASE + GPTM_PP_OFFSET))
#define GPTM1_PP_R    (*((volatile uint32_t*) (GPTM1_BASE + GPTM_PP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE1_H_ */
