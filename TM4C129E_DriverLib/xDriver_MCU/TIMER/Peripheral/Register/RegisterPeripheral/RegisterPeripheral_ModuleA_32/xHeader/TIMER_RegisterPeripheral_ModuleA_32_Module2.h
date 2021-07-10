/**
 *
 * @file TIMER_RegisterPeripheral_ModuleA_32_Module2.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_32_TIMER_REGISTERPERIPHERAL_MODULEA_32_MODULE2_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_32_TIMER_REGISTERPERIPHERAL_MODULEA_32_MODULE2_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleA_32.h>

#define GPWTM2_TA    (((GPWTM_TA_TypeDef*) (GPWTM2_BASE)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnMR    (((TA_GPTMMR_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnMR_OFFSET )))
#define GPWTM2_TA_TnMR_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnMR_OFFSET)))

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnCTL    (((TA_GPTMCTL_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnCTL_OFFSET )))
#define GPWTM2_TA_TnCTL_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnIMR    (((TA_GPTMIMR_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnIMR_OFFSET )))
#define GPWTM2_TA_TnIMR_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnIMR_OFFSET)))


/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnRIS    (((TA_GPTMRIS_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnRIS_OFFSET )))
#define GPWTM2_TA_TnRIS_R    (*((volatile const uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnMIS    (((TA_GPTMMIS_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnMIS_OFFSET )))
#define GPWTM2_TA_TnMIS_R    (*((volatile const uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnICR    (((TA_GPTMICR_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnICR_OFFSET )))
#define GPWTM2_TA_TnICR_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnILR    (((TA_GPWTMILR_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnILR_OFFSET )))
#define GPWTM2_TA_TnILR_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnMATCHR    (((TA_GPWTMMATCHR_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnMATCHR_OFFSET )))
#define GPWTM2_TA_TnMATCHR_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 TAPR *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnPR    (((TA_GPWTMPR_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnPR_OFFSET )))
#define GPWTM2_TA_TnPR_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnPR_OFFSET)))

/******************************************************************************************
************************************ 16 TAPMR *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnPMR    (((TA_GPWTMPMR_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnPMR_OFFSET )))
#define GPWTM2_TA_TnPMR_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnPMR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnR    (((TA_GPTMR_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnR_OFFSET )))
#define GPWTM2_TA_TnR_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnV    (((TA_GPTMV_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnV_OFFSET )))
#define GPWTM2_TA_TnV_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnV_OFFSET)))

/******************************************************************************************
************************************ 23 TAPS *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnPS    (((TA_GPWTMPS_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnPS_OFFSET )))
#define GPWTM2_TA_TnPS_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnPS_OFFSET)))

/******************************************************************************************
************************************ 25 TAPV *********************************************
******************************************************************************************/
#define GPWTM2_TA_TnPV    (((TA_GPWTMPV_TypeDef*) (GPWTM2_BASE + GPWTM_TA_TnPV_OFFSET )))
#define GPWTM2_TA_TnPV_R    (*((volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_TnPV_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_32_TIMER_REGISTERPERIPHERAL_MODULEA_32_MODULE2_H_ */
