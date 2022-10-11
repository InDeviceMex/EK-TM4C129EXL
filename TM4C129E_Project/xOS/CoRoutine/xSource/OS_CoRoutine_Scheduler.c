/**
 *
 * @file OS_CoRoutine_Scheduler.c
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
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Scheduler.h>

#include <xOS/CoRoutine/Intrinsics/OS_CoRoutine_Intrinsics.h>
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Ready.h>
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Delayed.h>

void OS_CoRoutine__vSchedule(void)
{
    OS_Boolean_t boIsEmptyList;
    OS_Boolean_t boBreak;
    OS_UBase_t uxTopReadyPriorityReg;
    OS_List_t* pstReadyListReg;
    /* See if any co-routines readied by events need moving to the ready lists. */
    OS_CoRoutine__vCheckPendingReadyList();

    /* See if any delayed co-routines have timed out. */
    OS_CoRoutine__vCheckDelayedList();

    /* Find the highest priority queue that contains ready co-routines. */
    uxTopReadyPriorityReg = OS_CoRoutine__uxGetTopReadyPriority();
    pstReadyListReg = OS_CoRoutine__pstGetReadyLists(uxTopReadyPriorityReg);
    boIsEmptyList = OS_List__boIsEmpty(pstReadyListReg);
    boBreak = FALSE;
    while( FALSE !=  boIsEmptyList)
    {
        if(0UL == uxTopReadyPriorityReg)
        {
            /* No more co-routines to check. */
            boBreak = TRUE;
            break;
        }
        uxTopReadyPriorityReg--;
        OS_CoRoutine__vSetTopReadyPriority(uxTopReadyPriorityReg);
        pstReadyListReg = OS_CoRoutine__pstGetReadyLists(uxTopReadyPriorityReg);
        boIsEmptyList = OS_List__boIsEmpty(pstReadyListReg);
    }

    if(FALSE == boBreak)
    {
        OS_UBase_t uxIndexReg;
        OS_CoRoutine_CRCB_t* pstCurrentCoRoutine;
        OS_CoRoutine_Function_t pvfCoRoutineFunctionReg;
        /* listGET_OWNER_OF_NEXT_ENTRY walks through the list, so the co-routines
         of the same priority get an equal share of the processor time. */
        pstReadyListReg = OS_CoRoutine__pstGetReadyLists(uxTopReadyPriorityReg);
        pstCurrentCoRoutine = (OS_CoRoutine_CRCB_t*) OS_List__pvGetOwnerOfNextEntry(pstReadyListReg);
        OS_CoRoutine__vSetCurrentCRCB(pstCurrentCoRoutine);

        /* Call the co-routine. */
        uxIndexReg = pstCurrentCoRoutine->uxIndex;
        pvfCoRoutineFunctionReg = pstCurrentCoRoutine->pvfCoRoutineFunction;
        (pvfCoRoutineFunctionReg)(pstCurrentCoRoutine, uxIndexReg);
    }
}


