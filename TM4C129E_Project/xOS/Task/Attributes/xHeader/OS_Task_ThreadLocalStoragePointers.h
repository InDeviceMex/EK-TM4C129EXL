/**
 *
 * @file OS_Task_ThreadLocalStoragePointers.h
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
 * @verbatim 29 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_ATTRIBUTES_XHEADER_OS_TASK_THREADLOCALSTORAGEPOINTERS_H_
#define XOS_TASK_ATTRIBUTES_XHEADER_OS_TASK_THREADLOCALSTORAGEPOINTERS_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

void OS_Task__vSetThreadLocalStoragePointer(OS_Task_Handle_TypeDef pvTaskToSet,
                                            OS_UBase_t uxIndex,
                                            void *pvValueArg);
void* OS_Task__pvGetThreadLocalStoragePointer(OS_Task_Handle_TypeDef pvTaskToQuery,
                                              OS_UBase_t uxIndex);

#endif /* XOS_TASK_ATTRIBUTES_XHEADER_OS_TASK_THREADLOCALSTORAGEPOINTERS_H_ */
