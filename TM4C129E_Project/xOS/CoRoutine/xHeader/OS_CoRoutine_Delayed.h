/**
 *
 * @file OS_CoRoutine_Delayed.h
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
 * @verbatim 28 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_COROUTINE_XHEADER_OS_COROUTINE_DELAYED_H_
#define XOS_COROUTINE_XHEADER_OS_COROUTINE_DELAYED_H_

#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Defines.h>

void OS_CoRoutine__vAddToDelayedList(OS_UBase_t uxTimeToDelay, OS_List_t* pstEventListArg);
void OS_CoRoutine__vCheckDelayedList(void);

#endif /* XOS_COROUTINE_XHEADER_OS_COROUTINE_DELAYED_H_ */
