/**
 *
 * @file TIMER_RegisterPeripheral_Standard_64_Module3.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE3_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPWTM3    (((GPTM_TypeDef*) (GPWTM3_BASE)))

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/
#define GPWTM3_CFG    ((GPTMCFG_TypeDef*) (GPWTM3_BASE + GPWTM_CFG_OFFSET))
#define GPWTM3_CFG_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_CFG_OFFSET)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPWTM3_TAMR    ((GPTMTAMR_TypeDef*) (GPWTM3_BASE + GPWTM_TAMR_OFFSET))
#define GPWTM3_TAMR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TAMR_OFFSET)))

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/
#define GPWTM3_TBMR    ((GPTMTBMR_TypeDef*) (GPWTM3_BASE + GPWTM_TBMR_OFFSET))
#define GPWTM3_TBMR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TBMR_OFFSET)))


/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPWTM3_GPTMCTL    ((GPTMCTL_TypeDef*) (GPWTM3_BASE + GPWTM_CTL_OFFSET))
#define GPWTM3_GPTMCTL_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_CTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPWTM3_IMR    ((GPTMIMR_TypeDef*) (GPWTM3_BASE + GPWTM_IMR_OFFSET))
#define GPWTM3_IMR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_IMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPWTM3_RIS    ((GPTMRIS_TypeDef*) (GPWTM3_BASE + GPWTM_RIS_OFFSET))
#define GPWTM3_RIS_R    (*((volatile const uint32_t*) (GPWTM3_BASE + GPWTM_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPWTM3_MIS    ((GPTMMIS_TypeDef*) (GPWTM3_BASE + GPWTM_MIS_OFFSET))
#define GPWTM3_MIS_R    (*((volatile const uint32_t*) (GPWTM3_BASE + GPWTM_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPWTM3_ICR    ((GPTMICR_TypeDef*) (GPWTM3_BASE + GPWTM_ICR_OFFSET))
#define GPWTM3_ICR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPWTM3_TAILR    ((GPTMTAILR_TypeDef*) (GPWTM3_BASE + GPWTM_TAILR_OFFSET))
#define GPWTM3_TAILR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TAILR_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/
#define GPWTM3_TBILR    ((GPTMTBILR_TypeDef*) (GPWTM3_BASE + GPWTM_TBILR_OFFSET))
#define GPWTM3_TBILR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TBILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPWTM3_TAMATCHR    ((GPTMTAMATCHR_TypeDef*) (GPWTM3_BASE + GPWTM_TAMATCHR_OFFSET))
#define GPWTM3_TAMATCHR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPWTM3_TBMATCHR    ((GPTMTBMATCHR_TypeDef*) (GPWTM3_BASE + GPWTM_TBMATCHR_OFFSET))
#define GPWTM3_TBMATCHR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPWTM3_TAPR    ((GPTMTAPR_TypeDef*) (GPWTM3_BASE + GPWTM_TAPR_OFFSET))
#define GPWTM3_TAPR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TAPR_OFFSET)))

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/
#define GPWTM3_TBPR    ((GPTMTBPR_TypeDef*) (GPWTM3_BASE + GPWTM_TBPR_OFFSET))
#define GPWTM3_TBPR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TBPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPWTM3_TAPMR    ((GPTMTAPMR_TypeDef*) (GPWTM3_BASE + GPWTM_TAPMR_OFFSET))
#define GPWTM3_TAPMR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 TBPMR *********************************************
******************************************************************************************/
#define GPWTM3_TBPMR    ((GPTMTBPMR_TypeDef*) (GPWTM3_BASE + GPWTM_TBPMR_OFFSET))
#define GPWTM3_TBPMR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPWTM3_TAR    ((GPTMTAR_TypeDef*) (GPWTM3_BASE + GPWTM_TAR_OFFSET))
#define GPWTM3_TAR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TAR_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPWTM3_TBR    ((GPTMTBR_TypeDef*) (GPWTM3_BASE + GPWTM_TBR_OFFSET))
#define GPWTM3_TBR_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TBR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPWTM3_TAV    ((GPTMTAV_TypeDef*) (GPWTM3_BASE + GPWTM_TAV_OFFSET))
#define GPWTM3_TAV_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TAV_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPWTM3_TBV    ((GPTMTBV_TypeDef*) (GPWTM3_BASE + GPWTM_TBV_OFFSET))
#define GPWTM3_TBV_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TBV_OFFSET)))

/******************************************************************************************
************************************ 22 RTCPD *********************************************
******************************************************************************************/
#define GPWTM3_RTCPD    ((GPTMRTCPD_TypeDef*) (GPWTM3_BASE + GPWTM_RTCPD_OFFSET))
#define GPWTM3_RTCPD_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_RTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPWTM3_TAPS    ((GPTMTAPS_TypeDef*) (GPWTM3_BASE + GPWTM_TAPS_OFFSET))
#define GPWTM3_TAPS_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TAPS_OFFSET)))

/******************************************************************************************
************************************ 24 TBPS *********************************************
******************************************************************************************/
#define GPWTM3_TBPS    ((GPTMTBPS_TypeDef*) (GPWTM3_BASE + GPWTM_TBPS_OFFSET))
#define GPWTM3_TBPS_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TBPS_OFFSET)))

/******************************************************************************************
************************************ 25 TAPV *********************************************
******************************************************************************************/
#define GPWTM3_TAPV    ((GPTMTAPV_TypeDef*) (GPWTM3_BASE + GPWTM_TAPV_OFFSET))
#define GPWTM3_TAPV_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TAPV_OFFSET)))

/******************************************************************************************
************************************ 26 TBPV *********************************************
******************************************************************************************/
#define GPWTM3_TBPV    ((GPTMTBPV_TypeDef*) (GPWTM3_BASE + GPWTM_TBPV_OFFSET))
#define GPWTM3_TBPV_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_TBPV_OFFSET)))

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/
#define GPWTM3_PP    ((GPTMPP_TypeDef*) (GPWTM3_BASE + GPWTM_PP_OFFSET))
#define GPWTM3_PP_R    (*((volatile uint32_t*) (GPWTM3_BASE + GPWTM_PP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE3_H_ */
