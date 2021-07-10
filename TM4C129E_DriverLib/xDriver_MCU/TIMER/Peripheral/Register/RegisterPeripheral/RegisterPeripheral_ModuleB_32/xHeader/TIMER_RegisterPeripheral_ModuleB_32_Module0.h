/**
 *
 * @file TIMER_RegisterPeripheral_ModuleB_32_Module0.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_32_TIMER_REGISTERPERIPHERAL_MODULEB_32_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_32_TIMER_REGISTERPERIPHERAL_MODULEB_32_MODULE0_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleB_32.h>

#define GPWTM0_TB    (((GPWTM_TB_TypeDef*) (GPWTM0_BASE)))

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnMR    ((TB_GPTMMR_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnMR_OFFSET))
#define GPWTM0_TB_TnMR_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnMR_OFFSET)))

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnCTL    ((TB_GPTMCTL_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnCTL_OFFSET))
#define GPWTM0_TB_TnCTL_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnIMR    ((TB_GPTMIMR_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnIMR_OFFSET))
#define GPWTM0_TB_TnIMR_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnRIS    ((TB_GPTMRIS_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnRIS_OFFSET))
#define GPWTM0_TB_TnRIS_R    (*((volatile const uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnMIS    ((TB_GPTMMIS_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnMIS_OFFSET))
#define GPWTM0_TB_TnMIS_R    (*((volatile const uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnICR    ((TB_GPTMICR_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnICR_OFFSET))
#define GPWTM0_TB_TnICR_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnICR_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnILR    ((TB_GPWTMILR_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnILR_OFFSET))
#define GPWTM0_TB_TnILR_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnILR_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnMATCHR    ((TB_GPWTMMATCHR_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnMATCHR_OFFSET))
#define GPWTM0_TB_TnMATCHR_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnPR    ((TB_GPWTMPR_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnPR_OFFSET))
#define GPWTM0_TB_TnPR_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnPR_OFFSET)))

/******************************************************************************************
************************************ 17 TBPMR *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnPMR    ((TB_GPWTMPMR_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnPMR_OFFSET))
#define GPWTM0_TB_TnPMR_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnPMR_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnR    ((TB_GPTMR_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnR_OFFSET))
#define GPWTM0_TB_TnR_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnR_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnV    ((TB_GPTMV_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnV_OFFSET))
#define GPWTM0_TB_TnV_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnV_OFFSET)))

/******************************************************************************************
************************************ 24 TBPS *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnPS    ((TB_GPWTMPS_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnPS_OFFSET))
#define GPWTM0_TB_TnPS_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnPS_OFFSET)))

/******************************************************************************************
************************************ 26 TBPV *********************************************
******************************************************************************************/
#define GPWTM0_TB_TnPV    ((TB_GPWTMPV_TypeDef*) (GPWTM0_BASE + GPWTM_TB_TnPV_OFFSET))
#define GPWTM0_TB_TnPV_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_TnPV_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_32_TIMER_REGISTERPERIPHERAL_MODULEB_32_MODULE0_H_ */
