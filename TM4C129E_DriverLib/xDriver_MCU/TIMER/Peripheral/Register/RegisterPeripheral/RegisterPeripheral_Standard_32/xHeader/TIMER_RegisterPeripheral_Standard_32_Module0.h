/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32_Module0.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE0_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPTM0    (((GPTM_TypeDef*) (GPTM0_BASE)))

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/
#define GPTM0_CFG    ((GPTMCFG_TypeDef*) (GPTM0_BASE + GPTM_CFG_OFFSET))
#define GPTM0_CFG_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_CFG_OFFSET)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPTM0_TAMR    ((GPTMTAMR_TypeDef*) (GPTM0_BASE + GPTM_TAMR_OFFSET))
#define GPTM0_TAMR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TAMR_OFFSET)))

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/
#define GPTM0_TBMR    ((GPTMTBMR_TypeDef*) (GPTM0_BASE + GPTM_TBMR_OFFSET))
#define GPTM0_TBMR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TBMR_OFFSET)))


/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPTM0_GPTMCTL    ((GPTMCTL_TypeDef*) (GPTM0_BASE + GPTM_CTL_OFFSET))
#define GPTM0_GPTMCTL_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_CTL_OFFSET)))

/******************************************************************************************
************************************ 5 SYNC *********************************************
******************************************************************************************/
#define GPTM0_SYNC    ((GPTMSYNC_TypeDef*) (GPTM0_BASE + GPTM_SYNC_OFFSET))
#define GPTM0_SYNC_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_SYNC_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPTM0_IMR    ((GPTMIMR_TypeDef*) (GPTM0_BASE + GPTM_IMR_OFFSET))
#define GPTM0_IMR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_IMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPTM0_RIS    ((GPTMRIS_TypeDef*) (GPTM0_BASE + GPTM_RIS_OFFSET))
#define GPTM0_RIS_R    (*((volatile const uint32_t*) (GPTM0_BASE + GPTM_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPTM0_MIS    ((GPTMMIS_TypeDef*) (GPTM0_BASE + GPTM_MIS_OFFSET))
#define GPTM0_MIS_R    (*((volatile const uint32_t*) (GPTM0_BASE + GPTM_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPTM0_ICR    ((GPTMICR_TypeDef*) (GPTM0_BASE + GPTM_ICR_OFFSET))
#define GPTM0_ICR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPTM0_TAILR    ((GPTMTAILR_TypeDef*) (GPTM0_BASE + GPTM_TAILR_OFFSET))
#define GPTM0_TAILR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TAILR_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/
#define GPTM0_TBILR    ((GPTMTBILR_TypeDef*) (GPTM0_BASE + GPTM_TBILR_OFFSET))
#define GPTM0_TBILR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TBILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM0_TAMATCHR    ((GPTMTAMATCHR_TypeDef*) (GPTM0_BASE + GPTM_TAMATCHR_OFFSET))
#define GPTM0_TAMATCHR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPTM0_TBMATCHR    ((GPTMTBMATCHR_TypeDef*) (GPTM0_BASE + GPTM_TBMATCHR_OFFSET))
#define GPTM0_TBMATCHR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPTM0_TAPR    ((GPTMTAPR_TypeDef*) (GPTM0_BASE + GPTM_TAPR_OFFSET))
#define GPTM0_TAPR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TAPR_OFFSET)))

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/
#define GPTM0_TBPR    ((GPTMTBPR_TypeDef*) (GPTM0_BASE + GPTM_TBPR_OFFSET))
#define GPTM0_TBPR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TBPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPTM0_TAPMR    ((GPTMTAPMR_TypeDef*) (GPTM0_BASE + GPTM_TAPMR_OFFSET))
#define GPTM0_TAPMR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 TBPMR *********************************************
******************************************************************************************/
#define GPTM0_TBPMR    ((GPTMTBPMR_TypeDef*) (GPTM0_BASE + GPTM_TBPMR_OFFSET))
#define GPTM0_TBPMR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPTM0_TAR    ((GPTMTAR_TypeDef*) (GPTM0_BASE + GPTM_TAR_OFFSET))
#define GPTM0_TAR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TAR_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPTM0_TBR    ((GPTMTBR_TypeDef*) (GPTM0_BASE + GPTM_TBR_OFFSET))
#define GPTM0_TBR_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TBR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPTM0_TAV    ((GPTMTAV_TypeDef*) (GPTM0_BASE + GPTM_TAV_OFFSET))
#define GPTM0_TAV_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TAV_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPTM0_TBV    ((GPTMTBV_TypeDef*) (GPTM0_BASE + GPTM_TBV_OFFSET))
#define GPTM0_TBV_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TBV_OFFSET)))

/******************************************************************************************
************************************ 22 RTCPD *********************************************
******************************************************************************************/
#define GPTM0_RTCPD    ((GPTMRTCPD_TypeDef*) (GPTM0_BASE + GPTM_RTCPD_OFFSET))
#define GPTM0_RTCPD_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_RTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPTM0_TAPS    ((GPTMTAPS_TypeDef*) (GPTM0_BASE + GPTM_TAPS_OFFSET))
#define GPTM0_TAPS_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TAPS_OFFSET)))

/******************************************************************************************
************************************ 24 TBPS *********************************************
******************************************************************************************/
#define GPTM0_TBPS    ((GPTMTBPS_TypeDef*) (GPTM0_BASE + GPTM_TBPS_OFFSET))
#define GPTM0_TBPS_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TBPS_OFFSET)))

/******************************************************************************************
************************************ 25 TAPV *********************************************
******************************************************************************************/
#define GPTM0_TAPV    ((GPTMTAPV_TypeDef*) (GPTM0_BASE + GPTM_TAPV_OFFSET))
#define GPTM0_TAPV_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TAPV_OFFSET)))

/******************************************************************************************
************************************ 26 TBPV *********************************************
******************************************************************************************/
#define GPTM0_TBPV    ((GPTMTBPV_TypeDef*) (GPTM0_BASE + GPTM_TBPV_OFFSET))
#define GPTM0_TBPV_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_TBPV_OFFSET)))

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/
#define GPTM0_PP    ((GPTMPP_TypeDef*) (GPTM0_BASE + GPTM_PP_OFFSET))
#define GPTM0_PP_R    (*((volatile uint32_t*) (GPTM0_BASE + GPTM_PP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE0_H_ */
