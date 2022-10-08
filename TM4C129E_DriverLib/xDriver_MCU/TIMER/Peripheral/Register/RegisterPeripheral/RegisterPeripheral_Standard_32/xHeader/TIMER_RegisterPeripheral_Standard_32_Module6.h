/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32_Module6.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_STANDARD_32_XHEADER_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE6_H_
#define XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_STANDARD_32_XHEADER_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE6_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPTM6    (((GPTM_t*) (GPTM6_BASE)))

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/
#define GPTM6_CFG    ((GPTMCFG_t*) (GPTM6_BASE + GPTM_CFG_OFFSET))
#define GPTM6_CFG_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_CFG_OFFSET)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPTM6_TAMR    ((GPTMTAMR_t*) (GPTM6_BASE + GPTM_TAMR_OFFSET))
#define GPTM6_TAMR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TAMR_OFFSET)))

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/
#define GPTM6_TBMR    ((GPTMTBMR_t*) (GPTM6_BASE + GPTM_TBMR_OFFSET))
#define GPTM6_TBMR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TBMR_OFFSET)))


/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPTM6_GPTMCTL    ((GPTMCTL_t*) (GPTM6_BASE + GPTM_CTL_OFFSET))
#define GPTM6_GPTMCTL_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_CTL_OFFSET)))

/******************************************************************************************
************************************ 5 SYNC *********************************************
******************************************************************************************/
#define GPTM6_SYNC    ((GPTMSYNC_t*) (GPTM6_BASE + GPTM_SYNC_OFFSET))
#define GPTM6_SYNC_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_SYNC_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPTM6_IMR    ((GPTMIMR_t*) (GPTM6_BASE + GPTM_IMR_OFFSET))
#define GPTM6_IMR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_IMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPTM6_RIS    ((GPTMRIS_t*) (GPTM6_BASE + GPTM_RIS_OFFSET))
#define GPTM6_RIS_R    (*((volatile const UBase_t*) (GPTM6_BASE + GPTM_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPTM6_MIS    ((GPTMMIS_t*) (GPTM6_BASE + GPTM_MIS_OFFSET))
#define GPTM6_MIS_R    (*((volatile const UBase_t*) (GPTM6_BASE + GPTM_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPTM6_ICR    ((GPTMICR_t*) (GPTM6_BASE + GPTM_ICR_OFFSET))
#define GPTM6_ICR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPTM6_TAILR    ((GPTMTAILR_t*) (GPTM6_BASE + GPTM_TAILR_OFFSET))
#define GPTM6_TAILR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TAILR_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/
#define GPTM6_TBILR    ((GPTMTBILR_t*) (GPTM6_BASE + GPTM_TBILR_OFFSET))
#define GPTM6_TBILR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TBILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM6_TAMATCHR    ((GPTMTAMATCHR_t*) (GPTM6_BASE + GPTM_TAMATCHR_OFFSET))
#define GPTM6_TAMATCHR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPTM6_TBMATCHR    ((GPTMTBMATCHR_t*) (GPTM6_BASE + GPTM_TBMATCHR_OFFSET))
#define GPTM6_TBMATCHR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPTM6_TAPR    ((GPTMTAPR_t*) (GPTM6_BASE + GPTM_TAPR_OFFSET))
#define GPTM6_TAPR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TAPR_OFFSET)))

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/
#define GPTM6_TBPR    ((GPTMTBPR_t*) (GPTM6_BASE + GPTM_TBPR_OFFSET))
#define GPTM6_TBPR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TBPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPTM6_TAPMR    ((GPTMTAPMR_t*) (GPTM6_BASE + GPTM_TAPMR_OFFSET))
#define GPTM6_TAPMR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 TBPMR *********************************************
******************************************************************************************/
#define GPTM6_TBPMR    ((GPTMTBPMR_t*) (GPTM6_BASE + GPTM_TBPMR_OFFSET))
#define GPTM6_TBPMR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPTM6_TAR    ((GPTMTAR_t*) (GPTM6_BASE + GPTM_TAR_OFFSET))
#define GPTM6_TAR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TAR_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPTM6_TBR    ((GPTMTBR_t*) (GPTM6_BASE + GPTM_TBR_OFFSET))
#define GPTM6_TBR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TBR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPTM6_TAV    ((GPTMTAV_t*) (GPTM6_BASE + GPTM_TAV_OFFSET))
#define GPTM6_TAV_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TAV_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPTM6_TBV    ((GPTMTBV_t*) (GPTM6_BASE + GPTM_TBV_OFFSET))
#define GPTM6_TBV_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TBV_OFFSET)))

/******************************************************************************************
************************************ 22 RTCPD *********************************************
******************************************************************************************/
#define GPTM6_RTCPD    ((GPTMRTCPD_t*) (GPTM6_BASE + GPTM_RTCPD_OFFSET))
#define GPTM6_RTCPD_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_RTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPTM6_TAPS    ((GPTMTAPS_t*) (GPTM6_BASE + GPTM_TAPS_OFFSET))
#define GPTM6_TAPS_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TAPS_OFFSET)))

/******************************************************************************************
************************************ 24 TBPS *********************************************
******************************************************************************************/
#define GPTM6_TBPS    ((GPTMTBPS_t*) (GPTM6_BASE + GPTM_TBPS_OFFSET))
#define GPTM6_TBPS_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TBPS_OFFSET)))

/******************************************************************************************
************************************ 25 DMAEV *********************************************
******************************************************************************************/
#define GPTM6_DMAEV    ((GPTMDMAEV_t*) (GPTM6_BASE + GPTM_DMAEV_OFFSET))
#define GPTM6_DMAEV_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_DMAEV_OFFSET)))

/******************************************************************************************
************************************ 26 ADCEV *********************************************
******************************************************************************************/
#define GPTM6_ADCEV    ((GPTMADCEV_t*) (GPTM6_BASE + GPTM_ADCEV_OFFSET))
#define GPTM6_ADCEV_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_ADCEV_OFFSET)))

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/
#define GPTM6_PP    ((GPTMPP_t*) (GPTM6_BASE + GPTM_PP_OFFSET))
#define GPTM6_PP_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_PP_OFFSET)))

/******************************************************************************************
************************************ 28 CC *********************************************
******************************************************************************************/
#define GPTM6_CC    ((GPTMCC_t*) (GPTM6_BASE + GPTM_CC_OFFSET))
#define GPTM6_CC_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_CC_OFFSET)))

#endif /* XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_STANDARD_32_XHEADER_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE6_H_ */
