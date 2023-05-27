/**
 *
 * @file OS_Task_Priority_.h
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

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_PRIORITY__H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_PRIORITY__H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_UBase_t OS_Task__uxGetTopReadyPriority(void);
void OS_Task__vRecordReadyPriority(OS_UBase_t uxPriorityArg);
void OS_Task__vAdaptResetReadyPriority(OS_UBase_t uxPriorityArg);
OS_UBase_t OS_Task__uxGetHighestPriority(void);

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_PRIORITY__H_ */
