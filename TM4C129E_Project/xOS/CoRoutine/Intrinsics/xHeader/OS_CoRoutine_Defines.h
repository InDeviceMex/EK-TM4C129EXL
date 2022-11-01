/**
 *
 * @file OS_CoRoutine_Defines.h
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

#ifndef XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_DEFINES_H_
#define XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_DEFINES_H_

#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Enum.h>
#include <xOS/List/OS_List.h>
#include "xOS/Adapt/OS_Adapt.h"

#define OS_COROUTINE_MAX_PRIORITIES    (40UL)
#define OS_COROUTINE_INITIAL_STATE    (0UL)

#define CO_ROUTINE_START(pstCRCB)   switch(pstCRCB->uxState) { case 0UL:
#define CO_ROUTINE_SET_STATE0()  case (__LINE__ * 2UL):
#define CO_ROUTINE_SET_STATE1()  pstCRCB->uxState = ((__LINE__ * 2UL) + 1UL); return; case ((__LINE__ * 2UL) + 1UL):

#define CO_ROUTINE_END()    }

typedef void * OS_CoRoutine_Handle_t;
typedef void (*OS_CoRoutine_Function_t)(OS_CoRoutine_Handle_t pvfHandleArg, OS_UBase_t uxIndexArg);

typedef struct
{
    OS_CoRoutine_Function_t pvfCoRoutineFunction;

    OS_ListItem_t stGenericListItem;
    OS_ListItem_t stEventListItem;

    OS_UBase_t uxPriorityCoRoutine;
    OS_UBase_t uxIndex;        /*< Stores a number that increments each time a TCB is created.  It allows debuggers to determine when a task has been deleted and then recreated. */
    uint16_t u16State;       /*< Stores a number specifically for use by third party trace code. */
    uint16_t u16Reserved;
} OS_CoRoutine_CRCB_t;

#endif /* XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_DEFINES_H_ */
