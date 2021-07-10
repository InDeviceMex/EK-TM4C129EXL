/**
 *
 * @file TIMER_RegisterPeripheral_Standard_64_Module5.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE5_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE5_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPWTM5    (((GPTM_TypeDef*) (GPWTM5_BASE)))

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/
#define GPWTM5_CFG    ((GPTMCFG_TypeDef*) (GPWTM5_BASE + GPWTM_CFG_OFFSET))
#define GPWTM5_CFG_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_CFG_OFFSET)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPWTM5_TAMR    ((GPTMTAMR_TypeDef*) (GPWTM5_BASE + GPWTM_TAMR_OFFSET))
#define GPWTM5_TAMR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TAMR_OFFSET)))

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/
#define GPWTM5_TBMR    ((GPTMTBMR_TypeDef*) (GPWTM5_BASE + GPWTM_TBMR_OFFSET))
#define GPWTM5_TBMR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TBMR_OFFSET)))


/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPWTM5_GPTMCTL    ((GPTMCTL_TypeDef*) (GPWTM5_BASE + GPWTM_CTL_OFFSET))
#define GPWTM5_GPTMCTL_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_CTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPWTM5_IMR    ((GPTMIMR_TypeDef*) (GPWTM5_BASE + GPWTM_IMR_OFFSET))
#define GPWTM5_IMR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_IMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPWTM5_RIS    ((GPTMRIS_TypeDef*) (GPWTM5_BASE + GPWTM_RIS_OFFSET))
#define GPWTM5_RIS_R    (*((volatile const uint32_t*) (GPWTM5_BASE + GPWTM_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPWTM5_MIS    ((GPTMMIS_TypeDef*) (GPWTM5_BASE + GPWTM_MIS_OFFSET))
#define GPWTM5_MIS_R    (*((volatile const uint32_t*) (GPWTM5_BASE + GPWTM_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPWTM5_ICR    ((GPTMICR_TypeDef*) (GPWTM5_BASE + GPWTM_ICR_OFFSET))
#define GPWTM5_ICR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPWTM5_TAILR    ((GPTMTAILR_TypeDef*) (GPWTM5_BASE + GPWTM_TAILR_OFFSET))
#define GPWTM5_TAILR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TAILR_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/
#define GPWTM5_TBILR    ((GPTMTBILR_TypeDef*) (GPWTM5_BASE + GPWTM_TBILR_OFFSET))
#define GPWTM5_TBILR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TBILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPWTM5_TAMATCHR    ((GPTMTAMATCHR_TypeDef*) (GPWTM5_BASE + GPWTM_TAMATCHR_OFFSET))
#define GPWTM5_TAMATCHR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPWTM5_TBMATCHR    ((GPTMTBMATCHR_TypeDef*) (GPWTM5_BASE + GPWTM_TBMATCHR_OFFSET))
#define GPWTM5_TBMATCHR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPWTM5_TAPR    ((GPTMTAPR_TypeDef*) (GPWTM5_BASE + GPWTM_TAPR_OFFSET))
#define GPWTM5_TAPR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TAPR_OFFSET)))

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/
#define GPWTM5_TBPR    ((GPTMTBPR_TypeDef*) (GPWTM5_BASE + GPWTM_TBPR_OFFSET))
#define GPWTM5_TBPR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TBPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPWTM5_TAPMR    ((GPTMTAPMR_TypeDef*) (GPWTM5_BASE + GPWTM_TAPMR_OFFSET))
#define GPWTM5_TAPMR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 TBPMR *********************************************
******************************************************************************************/
#define GPWTM5_TBPMR    ((GPTMTBPMR_TypeDef*) (GPWTM5_BASE + GPWTM_TBPMR_OFFSET))
#define GPWTM5_TBPMR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPWTM5_TAR    ((GPTMTAR_TypeDef*) (GPWTM5_BASE + GPWTM_TAR_OFFSET))
#define GPWTM5_TAR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TAR_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPWTM5_TBR    ((GPTMTBR_TypeDef*) (GPWTM5_BASE + GPWTM_TBR_OFFSET))
#define GPWTM5_TBR_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TBR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPWTM5_TAV    ((GPTMTAV_TypeDef*) (GPWTM5_BASE + GPWTM_TAV_OFFSET))
#define GPWTM5_TAV_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TAV_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPWTM5_TBV    ((GPTMTBV_TypeDef*) (GPWTM5_BASE + GPWTM_TBV_OFFSET))
#define GPWTM5_TBV_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TBV_OFFSET)))

/******************************************************************************************
************************************ 22 RTCPD *********************************************
******************************************************************************************/
#define GPWTM5_RTCPD    ((GPTMRTCPD_TypeDef*) (GPWTM5_BASE + GPWTM_RTCPD_OFFSET))
#define GPWTM5_RTCPD_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_RTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPWTM5_TAPS    ((GPTMTAPS_TypeDef*) (GPWTM5_BASE + GPWTM_TAPS_OFFSET))
#define GPWTM5_TAPS_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TAPS_OFFSET)))

/******************************************************************************************
************************************ 24 TBPS *********************************************
******************************************************************************************/
#define GPWTM5_TBPS    ((GPTMTBPS_TypeDef*) (GPWTM5_BASE + GPWTM_TBPS_OFFSET))
#define GPWTM5_TBPS_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TBPS_OFFSET)))

/******************************************************************************************
************************************ 25 TAPV *********************************************
******************************************************************************************/
#define GPWTM5_TAPV    ((GPTMTAPV_TypeDef*) (GPWTM5_BASE + GPWTM_TAPV_OFFSET))
#define GPWTM5_TAPV_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TAPV_OFFSET)))

/******************************************************************************************
************************************ 26 TBPV *********************************************
******************************************************************************************/
#define GPWTM5_TBPV    ((GPTMTBPV_TypeDef*) (GPWTM5_BASE + GPWTM_TBPV_OFFSET))
#define GPWTM5_TBPV_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_TBPV_OFFSET)))

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/
#define GPWTM5_PP    ((GPTMPP_TypeDef*) (GPWTM5_BASE + GPWTM_PP_OFFSET))
#define GPWTM5_PP_R    (*((volatile uint32_t*) (GPWTM5_BASE + GPWTM_PP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE5_H_ */
