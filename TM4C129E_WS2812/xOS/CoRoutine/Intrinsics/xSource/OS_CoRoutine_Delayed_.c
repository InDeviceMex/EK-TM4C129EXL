/**
 *
 * @file OS_CoRoutine_Delayed_.c
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
 * @verbatim 30 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Delayed_.h>

static OS_List_t* volatile OS_CoRoutine_pstDelayedCoRoutineList = (OS_List_t*) 0UL;
static OS_List_t* volatile OS_CoRoutine_pstOverflowDelayedCoRoutineList = (OS_List_t*) 0UL;


OS_List_t* OS_CoRoutine__pstGetOverflowDelayedList(void)
{
    return (OS_CoRoutine_pstOverflowDelayedCoRoutineList);
}

OS_List_t* OS_CoRoutine__pstGetDelayedList(void)
{
    return (OS_CoRoutine_pstDelayedCoRoutineList);
}

void OS_CoRoutine__vSetOverflowDelayedList(OS_List_t* NewListArg)
{
    OS_CoRoutine_pstOverflowDelayedCoRoutineList = NewListArg;
}

void OS_CoRoutine__vSetDelayedList(OS_List_t* NewListArg)
{
    OS_CoRoutine_pstDelayedCoRoutineList = NewListArg;
}

void OS_CoRoutine__vInitialiseDelayedLists(void)
{
    static OS_List_t OS_CoRoutine_stDelayedCoRoutineList1 = (OS_List_t) {0UL};
    static OS_List_t OS_CoRoutine_stDelayedCoRoutineList2 = (OS_List_t) {0UL};

    OS_List__vInit(&OS_CoRoutine_stDelayedCoRoutineList1);
    OS_List__vInit(&OS_CoRoutine_stDelayedCoRoutineList2);

    OS_CoRoutine_pstDelayedCoRoutineList = &OS_CoRoutine_stDelayedCoRoutineList1;
    OS_CoRoutine_pstOverflowDelayedCoRoutineList = &OS_CoRoutine_stDelayedCoRoutineList2;
}

