/**
 *
 * @file OS_Task_Suspended_.h
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

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_SUSPENDED__H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_SUSPENDED__H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_Boolean_t OS_Task__boGetYieldPending(void);
void OS_Task__vSetYieldPending(OS_Boolean_t boValueArg);
void OS_Task__vMissedYield(void);

OS_List_t* OS_Task__pstGetPendingReadyList(void);
OS_List_t* OS_Task__pstGetSuspendedTaskList(void);

OS_Boolean_t OS_Task__boIsTaskSuspended(const OS_Task_Handle_t pvTask);

void OS_Task__vInitialiseSuspendedTaskLists(void);

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_SUSPENDED__H_ */
