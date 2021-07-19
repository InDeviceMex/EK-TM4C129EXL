/**
 *
 * @file OS_External_Callback.h
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

#ifndef XOS_EXTERNAL_XHEADER_OS_EXTERNAL_CALLBACK_H_
#define XOS_EXTERNAL_XHEADER_OS_EXTERNAL_CALLBACK_H_

#include <xOS/Task/xHeader/OS_Task_Defines.h>

void OS_External__vApplicationStackOverflowHook( OS_Task_Handle_TypeDef pvTaskArg, char *pcTaskNameArg );
void OS_External__vApplicationTickHook( void );


#endif /* XOS_EXTERNAL_XHEADER_OS_EXTERNAL_CALLBACK_H_ */
