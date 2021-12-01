/**
 *
 * @file OS_CoRoutine_Create.h
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

#ifndef XOS_COROUTINE_XHEADER_OS_COROUTINE_CREATE_H_
#define XOS_COROUTINE_XHEADER_OS_COROUTINE_CREATE_H_

#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Defines.h>

OS_UBase_t OS_CoRoutine__uxCreate( OS_CoRoutine_Function_t pvfCoRoutineCode, OS_UBase_t uxPriorityArg, OS_UBase_t uxIndexArg);


#endif /* XOS_COROUTINE_XHEADER_OS_COROUTINE_CREATE_H_ */
