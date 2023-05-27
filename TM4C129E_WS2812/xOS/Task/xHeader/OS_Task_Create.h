/**
 *
 * @file OS_Task_Create.h
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
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_XHEADER_OS_TASK_CREATE_H_
#define XOS_TASK_XHEADER_OS_TASK_CREATE_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_UBase_t OS_Task__uxGenericCreate(OS_Task_Function_t pvfTaskCodeArg,
                                        const char * const pcNameArg,
                                        OS_UBase_t uxStackDepthArg,
                                        void * const pvParametersArg,
                                        OS_UBase_t uxPriorityArg,
                                        OS_Task_Handle_t * const pvCreatedTask,
                                        const OS_UBase_t* const puxStaticStackBuffer);
OS_UBase_t OS_Task__uxCreate(OS_Task_Function_t pvfTaskCodeArg,
                                        const char * const pcNameArg,
                                        OS_UBase_t uxStackDepthArg,
                                        void * const pvParametersArg,
                                        OS_UBase_t uxPriorityArg,
                                        OS_Task_Handle_t * const pvCreatedTask);

OS_UBase_t OS_Task__uxCreateRestricted(OS_Task_Parameters_t* pstTaskParametersArg, OS_Task_Handle_t* const pxCreatedTask);

#endif /* XOS_TASK_XHEADER_OS_TASK_CREATE_H_ */
