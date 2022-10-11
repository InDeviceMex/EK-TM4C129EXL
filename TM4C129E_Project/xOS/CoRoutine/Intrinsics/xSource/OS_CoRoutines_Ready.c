/**
 *
 * @file OS_CoRoutine_Ready.c
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
#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Ready.h>

static OS_List_t OS_CoRoutine_pstReadyLists[OS_COROUTINE_MAX_PRIORITIES];
static OS_List_t OS_CoRoutine_stPendingReadyList = (OS_List_t) {0UL};
static OS_UBase_t OS_CoRoutine_uxTopReadyPriority = 0UL;


OS_UBase_t OS_CoRoutine__uxGetTopReadyPriority(void)
{
    return (OS_CoRoutine_uxTopReadyPriority);
}

void OS_CoRoutine__vSetTopReadyPriority(OS_UBase_t uxValueArg)
{
    OS_CoRoutine_uxTopReadyPriority = uxValueArg;
}

void OS_CoRoutine__vSetTopReadyPriority_CRCB(const OS_CoRoutine_CRCB_t* pstCRCBArg)
{
    if(0UL != (OS_Pointer_t) pstCRCBArg)
    {
        OS_UBase_t uxPriorityCRCB;
        uxPriorityCRCB = pstCRCBArg->uxPriorityCoRoutine;
        if(uxPriorityCRCB >OS_CoRoutine_uxTopReadyPriority)
        {
            OS_CoRoutine_uxTopReadyPriority = uxPriorityCRCB;
        }
    }
}

OS_List_t* OS_CoRoutine__pstGetPendingReadyList(void)
{
    return (&OS_CoRoutine_stPendingReadyList);
}

OS_List_t* OS_CoRoutine__pstGetReadyLists(OS_UBase_t uxIndexArg)
{
    OS_List_t* pstReadyCoRoutineReg;

    pstReadyCoRoutineReg = (OS_List_t*) 0UL;
    if(OS_COROUTINE_MAX_PRIORITIES > uxIndexArg)
    {
        pstReadyCoRoutineReg = &OS_CoRoutine_pstReadyLists[uxIndexArg];
    }
    return (pstReadyCoRoutineReg);
}

void OS_CoRoutine__vInitialiseReadyLists(void)
{
    OS_UBase_t uxPriorityReg;

    for( uxPriorityReg = 0UL;
         uxPriorityReg < OS_COROUTINE_MAX_PRIORITIES;
         uxPriorityReg++ )
    {
        OS_List__vInit(&(OS_CoRoutine_pstReadyLists[uxPriorityReg]));
    }
    OS_List__vInit(&OS_CoRoutine_stPendingReadyList);
}



