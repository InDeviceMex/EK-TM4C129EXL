/**
 *
 * @file TIMER_RegisterPeripheral_ModuleW_32_Module4.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_32_TIMER_REGISTERPERIPHERAL_MODULEW_32_MODULE4_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_32_TIMER_REGISTERPERIPHERAL_MODULEW_32_MODULE4_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleW_32.h>

#define GPTM4_TW    (((GPTM_TW_TypeDef*) (GPTM4_BASE)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPTM4_TW_TnMR    ((TW_GPTMMR_TypeDef*) (GPTM4_BASE + GPTM_TW_TnMR_OFFSET))
#define GPTM4_TW_TnMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TW_TnMR_OFFSET)))

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPTM4_TW_TnCTL    ((TW_GPTMCTL_TypeDef*) (GPTM4_BASE + GPTM_TW_TnCTL_OFFSET))
#define GPTM4_TW_TnCTL_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TW_TnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPTM4_TW_TnIMR    ((TW_GPTMIMR_TypeDef*) (GPTM4_BASE + GPTM_TW_TnIMR_OFFSET))
#define GPTM4_TW_TnIMR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TW_TnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPTM4_TW_TnRIS    ((TW_GPTMRIS_TypeDef*) (GPTM4_BASE + GPTM_TW_TnRIS_OFFSET))
#define GPTM4_TW_TnRIS_R    (*((volatile const uint32_t*) (GPTM4_BASE + GPTM_TW_TnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPTM4_TW_TnMIS    ((TW_GPTMMIS_TypeDef*) (GPTM4_BASE + GPTM_TW_TnMIS_OFFSET))
#define GPTM4_TW_TnMIS_R    (*((volatile const uint32_t*) (GPTM4_BASE + GPTM_TW_TnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPTM4_TW_TnICR    ((TW_GPTMICR_TypeDef*) (GPTM4_BASE + GPTM_TW_TnICR_OFFSET))
#define GPTM4_TW_TnICR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TW_TnICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPTM4_TW_TnILR    ((TW_GPTMILR_TypeDef*) (GPTM4_BASE + GPTM_TW_TnILR_OFFSET))
#define GPTM4_TW_TnILR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TW_TnILR_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM4_TW_TnMATCHR    ((TW_GPTMMATCHR_TypeDef*) (GPTM4_BASE + GPTM_TW_TnMATCHR_OFFSET))
#define GPTM4_TW_TnMATCHR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TW_TnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPTM4_TW_TnR    ((TW_GPTMR_TypeDef*) (GPTM4_BASE + GPTM_TW_TnR_OFFSET))
#define GPTM4_TW_TnR_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TW_TnR_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPTM4_TW_TnV    ((TW_GPTMV_TypeDef*) (GPTM4_BASE + GPTM_TW_TnV_OFFSET))
#define GPTM4_TW_TnV_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TW_TnV_OFFSET)))

/******************************************************************************************
************************************ 22 RTCPD *********************************************
******************************************************************************************/
#define GPTM4_TW_RTCPD    ((TW_GPTMRTCPD_TypeDef*) (GPTM4_BASE + GPTM_TW_RTCPD_OFFSET))
#define GPTM4_TW_RTCPD_R    (*((volatile uint32_t*) (GPTM4_BASE + GPTM_TW_RTCPD_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_32_TIMER_REGISTERPERIPHERAL_MODULEW_32_MODULE4_H_ */
