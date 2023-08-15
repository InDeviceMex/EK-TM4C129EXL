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
    /* See if any co-routines readied by events need moving to the ready lists. */
    OS_CoRoutine__vCheckPendingReadyList();

    /* See if any delayed co-routines have timed out. */
    OS_CoRoutine__vCheckDelayedList();

    /* Find the highest priority queue that contains ready co-routines. */
    OS_UBase_t uxTopReadyPriorityReg;
    uxTopReadyPriorityReg = OS_CoRoutine__uxGetTopReadyPriority();
    OS_List_t* pstReadyListReg;
    pstReadyListReg = OS_CoRoutine__pstGetReadyLists(uxTopReadyPriorityReg);
    OS_Boolean_t boIsEmptyList;
    boIsEmptyList = OS_List__boIsEmpty(pstReadyListReg);
    OS_Boolean_t boBreak;
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
        /* listGET_OWNER_OF_NEXT_ENTRY walks through the list, so the co-routines
         of the same priority get an equal share of the processor time. */
        pstReadyListReg = OS_CoRoutine__pstGetReadyLists(uxTopReadyPriorityReg);
        OS_CoRoutine_CRCB_t* pstCurrentCoRoutine = (OS_CoRoutine_CRCB_t*) OS_List__pvGetOwnerOfNextEntry(pstReadyListReg);
        OS_CoRoutine__vSetCurrentCRCB(pstCurrentCoRoutine);

        /* Call the co-routine. */
        OS_UBase_t uxIndexReg = pstCurrentCoRoutine->uxIndex;
        OS_CoRoutine_Function_t pvfCoRoutineFunctionReg = pstCurrentCoRoutine->pvfCoRoutineFunction;
        (pvfCoRoutineFunctionReg)(pstCurrentCoRoutine, uxIndexReg);
    }
}
