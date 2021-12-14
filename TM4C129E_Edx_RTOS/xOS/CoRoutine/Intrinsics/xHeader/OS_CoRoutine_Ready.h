/**
 *
 * @file OS_CoRoutine_Ready.h
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
 * @verbatim 27 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_READY_H_
#define XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_READY_H_

#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Defines.h>

OS_UBase_t OS_CoRoutine__uxGetTopReadyPriority(void);
void OS_CoRoutine__vSetTopReadyPriority(OS_UBase_t uxValueArg);
void OS_CoRoutine__vSetTopReadyPriority_CRCB(const OS_CoRoutine_CRCB_t* pstCRCBArg);
OS_List_t* OS_CoRoutine__pstGetPendingReadyList(void);
OS_List_t* OS_CoRoutine__pstGetReadyLists(OS_UBase_t uxIndexArg);
void OS_CoRoutine__vInitialiseReadyLists(void);

#endif /* XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_READY_H_ */
