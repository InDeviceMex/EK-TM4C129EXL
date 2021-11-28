/**
 *
 * @file OS_CoRoutines_Defines.h
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

#ifndef XOS_COROUTINES_INTRINSICS_XHEADER_OS_COROUTINES_DEFINES_H_
#define XOS_COROUTINES_INTRINSICS_XHEADER_OS_COROUTINES_DEFINES_H_

#include <xOS/CoRoutines/Intrinsics/xHeader/OS_CoRoutines_Enum.h>
#include <xOS/List/OS_List.h>
#include "xOS/Adapt/OS_Adapt.h"

typedef void * OS_CoRoutines_Handle_t;
typedef void (*OS_CoRoutines_Function_t)(OS_CoRoutines_Handle_t, OS_UBase_t);

typedef struct
{
    OS_CoRoutines_Function_t pvfCoRoutineFunction;

    OS_ListItem_t stGenericListItem;
    OS_ListItem_t stEventListItem;

    OS_UBase_t uxPriorityCoRoutine;
    OS_UBase_t uxIndex;        /*< Stores a number that increments each time a TCB is created.  It allows debuggers to determine when a task has been deleted and then recreated. */
    uint16_t u16State;       /*< Stores a number specifically for use by third party trace code. */
} OS_CoRoutines_CRCB_t;




#endif /* XOS_COROUTINES_INTRINSICS_XHEADER_OS_COROUTINES_DEFINES_H_ */
