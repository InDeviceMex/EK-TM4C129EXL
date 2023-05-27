/**
 *
 * @file OS_Task_TCB_.h
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
 * @verbatim 30 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_TCB__H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_TCB__H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

void OS_Task__vInitialiseTCBVariables(OS_Task_TCB_t* const pstTCB,
                                      const char* pcTaskNameArg,
                                      OS_UBase_t uxPriorityArg);

OS_Task_TCB_t *volatile * OS_Task__pstGetCurrentTCBAddress(void);
OS_Task_TCB_t* OS_Task__pstAllocateTCBAndStack(const OS_UBase_t uxStackDepthArg,
                                                     const OS_UBase_t* const puxStaticStackBuffer);
OS_Task_TCB_t* OS_Task__pstGetCurrentTCB(void);
OS_Task_TCB_t* OS_Task__pstGetTCBFromHandle(OS_Task_Handle_t pxHandle);

OS_Task_Handle_t OS_Task__pvGetCurrentTaskHandle(void);

void OS_Task__vSetCurrentTCB(OS_Task_TCB_t* pstNewTCB);
void OS_Task__vCheckStackOverflow(void);

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_TCB__H_ */
