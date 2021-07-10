/**
 *
 * @file TIMER_RegisterPeripheral_ModuleA_16_Module4.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_16_TIMER_REGISTERPERIPHERAL_MODULEA_16_MODULE4_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_16_TIMER_REGISTERPERIPHERAL_MODULEA_16_MODULE4_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleA_16.h>

#define GPTM4_TA    (((GPTM_TA_TypeDef*) (GPTM4_BASE)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPTM4_TA_TnMR    ((TA_GPTMMR_TypeDef*) (GPTM4_BASE + GPTM_TA_TnMR_OFFSET))
#define GPTM4_TA_TnMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnMR_OFFSET)))

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPTM4_TA_TnCTL    ((TA_GPTMCTL_TypeDef*) (GPTM4_BASE + GPTM_TA_TnCTL_OFFSET))
#define GPTM4_TA_TnCTL_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPTM4_TA_TnIMR    ((TA_GPTMIMR_TypeDef*) (GPTM4_BASE + GPTM_TA_TnIMR_OFFSET))
#define GPTM4_TA_TnIMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPTM4_TA_TnRIS    ((TA_GPTMRIS_TypeDef*) (GPTM4_BASE + GPTM_TA_TnRIS_OFFSET))
#define GPTM4_TA_TnRIS_R    (*((volatile const uint32_t*) (GPTM4_BASE + GPTM_TA_TnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPTM4_TA_TnMIS    ((TA_GPTMMIS_TypeDef*) (GPTM4_BASE + GPTM_TA_TnMIS_OFFSET))
#define GPTM4_TA_TnMIS_R    (*((volatile const uint32_t*) (GPTM4_BASE + GPTM_TA_TnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPTM4_TA_TnICR    ((TA_GPTMICR_TypeDef*) (GPTM4_BASE + GPTM_TA_TnICR_OFFSET))
#define GPTM4_TA_TnICR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPTM4_TA_TnILR    ((TA_GPTMILR_TypeDef*) (GPTM4_BASE + GPTM_TA_TnILR_OFFSET))
#define GPTM4_TA_TnILR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM4_TA_TnMATCHR    ((TA_GPTMMATCHR_TypeDef*) (GPTM4_BASE + GPTM_TA_TnMATCHR_OFFSET))
#define GPTM4_TA_TnMATCHR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPTM4_TA_TnPR    ((TA_GPTMPR_TypeDef*) (GPTM4_BASE + GPTM_TA_TnPR_OFFSET))
#define GPTM4_TA_TnPR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPTM4_TA_TnPMR    ((TA_GPTMPMR_TypeDef*) (GPTM4_BASE + GPTM_TA_TnPMR_OFFSET))
#define GPTM4_TA_TnPMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPTM4_TA_TnR    ((TA_GPTMR_TypeDef*) (GPTM4_BASE + GPTM_TA_TnR_OFFSET))
#define GPTM4_TA_TnR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPTM4_TA_TnV    ((TA_GPTMV_TypeDef*) (GPTM4_BASE + GPTM_TA_TnV_OFFSET))
#define GPTM4_TA_TnV_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnV_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPTM4_TA_TnPS    ((TA_GPTMPS_TypeDef*) (GPTM4_BASE + GPTM_TA_TnPS_OFFSET))
#define GPTM4_TA_TnPS_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_TnPS_OFFSET)))

/******************************************************************************************
************************************ 25 DMAEV *********************************************
******************************************************************************************/
#define GPTM4_TA_DMAEV    ((TA_GPTMDMAEV_TypeDef*) (GPTM4_BASE + GPTM_TA_DMAEV_OFFSET))
#define GPTM4_TA_DMAEV_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_DMAEV_OFFSET)))

/******************************************************************************************
************************************ 26 ADCEV *********************************************
******************************************************************************************/
#define GPTM4_TA_ADCEV    ((TA_GPTMADCEV_TypeDef*) (GPTM4_BASE + GPTM_TA_ADCEV_OFFSET))
#define GPTM4_TA_ADCEV_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TA_ADCEV_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_16_TIMER_REGISTERPERIPHERAL_MODULEA_16_MODULE4_H_ */
