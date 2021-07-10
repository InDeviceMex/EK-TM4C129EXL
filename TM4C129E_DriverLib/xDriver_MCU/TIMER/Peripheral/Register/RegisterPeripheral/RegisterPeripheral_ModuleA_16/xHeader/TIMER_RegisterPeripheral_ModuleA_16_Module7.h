/**
 *
 * @file TIMER_RegisterPeripheral_ModuleA_16_Module7.h
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

#ifndef XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_MODULEA_16_XHEADER_TIMER_REGISTERPERIPHERAL_MODULEA_16_MODULE7_H_
#define XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_MODULEA_16_XHEADER_TIMER_REGISTERPERIPHERAL_MODULEA_16_MODULE7_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleA_16.h>

#define GPTM7_TA    (((GPTM_TA_TypeDef*) (GPTM7_BASE)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPTM7_TA_TnMR    ((TA_GPTMMR_TypeDef*) (GPTM7_BASE + GPTM_TA_TnMR_OFFSET))
#define GPTM7_TA_TnMR_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnMR_OFFSET)))

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPTM7_TA_TnCTL    ((TA_GPTMCTL_TypeDef*) (GPTM7_BASE + GPTM_TA_TnCTL_OFFSET))
#define GPTM7_TA_TnCTL_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPTM7_TA_TnIMR    ((TA_GPTMIMR_TypeDef*) (GPTM7_BASE + GPTM_TA_TnIMR_OFFSET))
#define GPTM7_TA_TnIMR_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPTM7_TA_TnRIS    ((TA_GPTMRIS_TypeDef*) (GPTM7_BASE + GPTM_TA_TnRIS_OFFSET))
#define GPTM7_TA_TnRIS_R    (*((volatile const uint32_t*) (GPTM7_BASE + GPTM_TA_TnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPTM7_TA_TnMIS    ((TA_GPTMMIS_TypeDef*) (GPTM7_BASE + GPTM_TA_TnMIS_OFFSET))
#define GPTM7_TA_TnMIS_R    (*((volatile const uint32_t*) (GPTM7_BASE + GPTM_TA_TnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPTM7_TA_TnICR    ((TA_GPTMICR_TypeDef*) (GPTM7_BASE + GPTM_TA_TnICR_OFFSET))
#define GPTM7_TA_TnICR_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPTM7_TA_TnILR    ((TA_GPTMILR_TypeDef*) (GPTM7_BASE + GPTM_TA_TnILR_OFFSET))
#define GPTM7_TA_TnILR_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM7_TA_TnMATCHR    ((TA_GPTMMATCHR_TypeDef*) (GPTM7_BASE + GPTM_TA_TnMATCHR_OFFSET))
#define GPTM7_TA_TnMATCHR_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPTM7_TA_TnPR    ((TA_GPTMPR_TypeDef*) (GPTM7_BASE + GPTM_TA_TnPR_OFFSET))
#define GPTM7_TA_TnPR_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPTM7_TA_TnPMR    ((TA_GPTMPMR_TypeDef*) (GPTM7_BASE + GPTM_TA_TnPMR_OFFSET))
#define GPTM7_TA_TnPMR_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPTM7_TA_TnR    ((TA_GPTMR_TypeDef*) (GPTM7_BASE + GPTM_TA_TnR_OFFSET))
#define GPTM7_TA_TnR_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPTM7_TA_TnV    ((TA_GPTMV_TypeDef*) (GPTM7_BASE + GPTM_TA_TnV_OFFSET))
#define GPTM7_TA_TnV_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnV_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPTM7_TA_TnPS    ((TA_GPTMPS_TypeDef*) (GPTM7_BASE + GPTM_TA_TnPS_OFFSET))
#define GPTM7_TA_TnPS_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_TnPS_OFFSET)))

/******************************************************************************************
************************************ 25 DMAEV *********************************************
******************************************************************************************/
#define GPTM7_TA_DMAEV    ((TA_GPTMDMAEV_TypeDef*) (GPTM7_BASE + GPTM_TA_DMAEV_OFFSET))
#define GPTM7_TA_DMAEV_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_DMAEV_OFFSET)))

/******************************************************************************************
************************************ 26 ADCEV *********************************************
******************************************************************************************/
#define GPTM7_TA_ADCEV    ((TA_GPTMADCEV_TypeDef*) (GPTM7_BASE + GPTM_TA_ADCEV_OFFSET))
#define GPTM7_TA_ADCEV_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_TA_ADCEV_OFFSET)))

#endif /* XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_MODULEA_16_XHEADER_TIMER_REGISTERPERIPHERAL_MODULEA_16_MODULE7_H_ */
