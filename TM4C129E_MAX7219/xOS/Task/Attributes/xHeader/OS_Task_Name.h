/**
 *
 * @file OS_Task_Name.h
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
 * @verbatim 23 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_ATTRIBUTES_XHEADER_OS_TASK_NAME_H_
#define XOS_TASK_ATTRIBUTES_XHEADER_OS_TASK_NAME_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

char* OS_Task__pcGetTaskName(OS_Task_Handle_t pvTaskToQuery);

#endif /* XOS_TASK_ATTRIBUTES_XHEADER_OS_TASK_NAME_H_ */
