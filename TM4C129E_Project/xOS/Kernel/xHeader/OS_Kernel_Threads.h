/**
 *
 * @file OS_Kernel_Threads.h
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XOS_KERNEL_XHEADER_OS_KERNEL_THREADS_H_
#define XOS_KERNEL_XHEADER_OS_KERNEL_THREADS_H_

#include <xOS/TCB/xHeader/OS_TCB_Defines.h>

typedef void(*OS_ThreadFunction_TypeDef)(void * pvParameters) ;

OS_TCB_Element_TypeDef* OS_Kernel__CreateThread(OS_ThreadFunction_TypeDef pfvThread,const char* pcNameArg, uint32_t u32StackSizeArg, void *pvParameters, uint32_t u32PriorityArg);

OS_TCB_Element_TypeDef* OS_Kernel__u32GetNextTask(void);
void OS_Kernel__vSetNextTask(OS_TCB_Element_TypeDef* pstNextTask);

void OS_Kernel__vDestroyElement(void *pvDataContainerArg);

#endif /* XOS_KERNEL_XHEADER_OS_KERNEL_THREADS_H_ */
