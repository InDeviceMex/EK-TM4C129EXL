/**
 *
 * @file OS_CoRoutine_Event.h
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
 * @verbatim 1 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_COROUTINE_XHEADER_OS_COROUTINE_EVENT_H_
#define XOS_COROUTINE_XHEADER_OS_COROUTINE_EVENT_H_

#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Defines.h>

OS_Boolean_t OS_CoRoutine__boRemoveFromEventList(const OS_List_t* pstEventList);

#endif /* XOS_COROUTINE_XHEADER_OS_COROUTINE_EVENT_H_ */
