/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32_Module3.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE3_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPTM3    (((GPTM_TypeDef*) (GPTM3_BASE)))

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/
#define GPTM3_CFG    ((GPTMCFG_TypeDef*) (GPTM3_BASE + GPTM_CFG_OFFSET))
#define GPTM3_CFG_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_CFG_OFFSET)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPTM3_TAMR    ((GPTMTAMR_TypeDef*) (GPTM3_BASE + GPTM_TAMR_OFFSET))
#define GPTM3_TAMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TAMR_OFFSET)))

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/
#define GPTM3_TBMR    ((GPTMTBMR_TypeDef*) (GPTM3_BASE + GPTM_TBMR_OFFSET))
#define GPTM3_TBMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TBMR_OFFSET)))


/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPTM3_GPTMCTL    ((GPTMCTL_TypeDef*) (GPTM3_BASE + GPTM_CTL_OFFSET))
#define GPTM3_GPTMCTL_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_CTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPTM3_IMR    ((GPTMIMR_TypeDef*) (GPTM3_BASE + GPTM_IMR_OFFSET))
#define GPTM3_IMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_IMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPTM3_RIS    ((GPTMRIS_TypeDef*) (GPTM3_BASE + GPTM_RIS_OFFSET))
#define GPTM3_RIS_R    (*((volatile const uint32_t*) (GPTM3_BASE + GPTM_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPTM3_MIS    ((GPTMMIS_TypeDef*) (GPTM3_BASE + GPTM_MIS_OFFSET))
#define GPTM3_MIS_R    (*((volatile const uint32_t*) (GPTM3_BASE + GPTM_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPTM3_ICR    ((GPTMICR_TypeDef*) (GPTM3_BASE + GPTM_ICR_OFFSET))
#define GPTM3_ICR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPTM3_TAILR    ((GPTMTAILR_TypeDef*) (GPTM3_BASE + GPTM_TAILR_OFFSET))
#define GPTM3_TAILR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TAILR_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/
#define GPTM3_TBILR    ((GPTMTBILR_TypeDef*) (GPTM3_BASE + GPTM_TBILR_OFFSET))
#define GPTM3_TBILR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TBILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM3_TAMATCHR    ((GPTMTAMATCHR_TypeDef*) (GPTM3_BASE + GPTM_TAMATCHR_OFFSET))
#define GPTM3_TAMATCHR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPTM3_TBMATCHR    ((GPTMTBMATCHR_TypeDef*) (GPTM3_BASE + GPTM_TBMATCHR_OFFSET))
#define GPTM3_TBMATCHR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPTM3_TAPR    ((GPTMTAPR_TypeDef*) (GPTM3_BASE + GPTM_TAPR_OFFSET))
#define GPTM3_TAPR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TAPR_OFFSET)))

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/
#define GPTM3_TBPR    ((GPTMTBPR_TypeDef*) (GPTM3_BASE + GPTM_TBPR_OFFSET))
#define GPTM3_TBPR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TBPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPTM3_TAPMR    ((GPTMTAPMR_TypeDef*) (GPTM3_BASE + GPTM_TAPMR_OFFSET))
#define GPTM3_TAPMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 TBPMR *********************************************
******************************************************************************************/
#define GPTM3_TBPMR    ((GPTMTBPMR_TypeDef*) (GPTM3_BASE + GPTM_TBPMR_OFFSET))
#define GPTM3_TBPMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPTM3_TAR    ((GPTMTAR_TypeDef*) (GPTM3_BASE + GPTM_TAR_OFFSET))
#define GPTM3_TAR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TAR_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPTM3_TBR    ((GPTMTBR_TypeDef*) (GPTM3_BASE + GPTM_TBR_OFFSET))
#define GPTM3_TBR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TBR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPTM3_TAV    ((GPTMTAV_TypeDef*) (GPTM3_BASE + GPTM_TAV_OFFSET))
#define GPTM3_TAV_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TAV_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPTM3_TBV    ((GPTMTBV_TypeDef*) (GPTM3_BASE + GPTM_TBV_OFFSET))
#define GPTM3_TBV_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TBV_OFFSET)))

/******************************************************************************************
************************************ 22 RTCPD *********************************************
******************************************************************************************/
#define GPTM3_RTCPD    ((GPTMRTCPD_TypeDef*) (GPTM3_BASE + GPTM_RTCPD_OFFSET))
#define GPTM3_RTCPD_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_RTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPTM3_TAPS    ((GPTMTAPS_TypeDef*) (GPTM3_BASE + GPTM_TAPS_OFFSET))
#define GPTM3_TAPS_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TAPS_OFFSET)))

/******************************************************************************************
************************************ 24 TBPS *********************************************
******************************************************************************************/
#define GPTM3_TBPS    ((GPTMTBPS_TypeDef*) (GPTM3_BASE + GPTM_TBPS_OFFSET))
#define GPTM3_TBPS_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TBPS_OFFSET)))

/******************************************************************************************
************************************ 25 TAPV *********************************************
******************************************************************************************/
#define GPTM3_TAPV    ((GPTMTAPV_TypeDef*) (GPTM3_BASE + GPTM_TAPV_OFFSET))
#define GPTM3_TAPV_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TAPV_OFFSET)))

/******************************************************************************************
************************************ 26 TBPV *********************************************
******************************************************************************************/
#define GPTM3_TBPV    ((GPTMTBPV_TypeDef*) (GPTM3_BASE + GPTM_TBPV_OFFSET))
#define GPTM3_TBPV_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_TBPV_OFFSET)))

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/
#define GPTM3_PP    ((GPTMPP_TypeDef*) (GPTM3_BASE + GPTM_PP_OFFSET))
#define GPTM3_PP_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_PP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE3_H_ */
