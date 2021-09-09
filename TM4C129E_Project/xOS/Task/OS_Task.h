/**
 *
 * @file OS_Task.h
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

#ifndef XOS_TASK_OS_TASK_H_
#define XOS_TASK_OS_TASK_H_

/**
 * TODO:
 * 1.- Create PASS, FAIL enumeration
 * 1.- Create TRUE, FALSE enumeration
 * 2.- Redefine variables to be able to use in other architectures
 * 3.- Create LIST folder with the adaptation of linked list
 * 4.- check dependencies of every file
 * 5.- encapsulate repetitive code
 */

#include <xOS/Task/Adapt/OS_Task_Adapt.h>
#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>
#include <xOS/Task/xHeader/OS_Task_Notify.h>
#include <xOS/Task/xHeader/OS_Task_Create.h>
#include <xOS/Task/xHeader/OS_Task_Scheduler.h>
#include <xOS/Task/xHeader/OS_Task_Delayed.h>

#endif /* XOS_TASK_OS_TASK_H_ */
