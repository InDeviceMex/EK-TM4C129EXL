/**
 *
 * @file OS_CoRoutine_Tick.h
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

#ifndef XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_TICK_H_
#define XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_TICK_H_

#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Defines.h>

OS_UBase_t OS_CoRoutine__uxGetTickCount_NotSafe(void);
void OS_CoRoutine__vSetTickCount(OS_UBase_t uxValueArg);
void OS_CoRoutine__vIncreaseTickCount(void);

OS_UBase_t OS_CoRoutine__uxGetLastTickCount_NotSafe(void);
void OS_CoRoutine__vSetLastTickCount(OS_UBase_t uxValueArg);
void OS_CoRoutine__vIncreaseLastTickCount(void);

OS_UBase_t OS_CoRoutine__uxGetPassedTicks_NotSafe(void);
void OS_CoRoutine__vSetPassedTicks(OS_UBase_t uxValueArg);
void OS_CoRoutine__vIncreasePassedTicks(void);

#endif /* XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_TICK_H_ */
