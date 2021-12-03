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
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Ready.h>

#include <xOS/CoRoutine/Intrinsics/OS_CoRoutine_Intrinsics.h>
#include <xOS/Adapt/OS_Adapt.h>

void OS_CoRoutine__vAddToReadyList(OS_CoRoutine_CRCB_t* pstCRCBArg)
{
    OS_List_t* pstReadyCoRoutineList =  (OS_List_t*) 0UL;
    OS_ListItem_t* pstCRCBCoRoutine =  (OS_ListItem_t*) 0UL;
    OS_UBase_t uxCRCBPriority = 0UL;

    if(0UL != (OS_UBase_t) pstCRCBArg)
    {
        OS_CoRoutine__vSetTopReadyPriority_CRCB(pstCRCBArg);
        uxCRCBPriority = pstCRCBArg->uxPriorityCoRoutine;
        pstReadyCoRoutineList = OS_CoRoutine__pstGetReadyLists(uxCRCBPriority);
        if(0UL != (OS_UBase_t) pstReadyCoRoutineList)
        {
            pstCRCBCoRoutine = &(pstCRCBArg->stGenericListItem);
            OS_List__vInsertEnd(pstReadyCoRoutineList, pstCRCBCoRoutine);
        }
    }
}

void OS_CoRoutine__vAddToReadyQueue(OS_CoRoutine_CRCB_t* pstCRCBArg)
{
    OS_List_t* pstReadyCoRoutineList =  (OS_List_t*) 0UL;
    OS_UBase_t uxTopCoRoutineReadyPriority = 0UL;
    OS_ListItem_t* pstCRCBCoRoutine =  (OS_ListItem_t*) 0UL;
    OS_UBase_t uxCRCBPriority = 0UL;
    if(0UL != (OS_UBase_t) pstCRCBArg)
    {
        uxTopCoRoutineReadyPriority = OS_CoRoutine__uxGetTopReadyPriority();
        uxCRCBPriority = pstCRCBArg->uxPriorityCoRoutine;
        if(uxCRCBPriority > uxTopCoRoutineReadyPriority)
        {
            OS_CoRoutine__vSetTopReadyPriority(uxCRCBPriority);
        }
        pstReadyCoRoutineList = OS_CoRoutine__pstGetReadyLists(uxCRCBPriority);
        if(0UL != (OS_UBase_t) pstReadyCoRoutineList)
        {
            pstCRCBCoRoutine = &(pstCRCBArg->stGenericListItem);
            OS_List__vInsertEnd(pstReadyCoRoutineList, pstCRCBCoRoutine);
        }
    }
}

void OS_CoRoutine__vCheckPendingReadyList(void)
{

    OS_List_t* pstPendingReadyCoRoutineList = (OS_List_t*) 0UL;
    OS_Boolean_t boIsEmptyList = FALSE;
    /* Are there any co-routines waiting to get moved to the ready list?  These
    are co-routines that have been readied by an ISR.  The ISR cannot access
    the ready lists itself. */
    pstPendingReadyCoRoutineList = OS_CoRoutine__pstGetPendingReadyList();
    boIsEmptyList = OS_List__boIsEmpty(pstPendingReadyCoRoutineList);
    while(FALSE == boIsEmptyList)
    {
        OS_CoRoutine_CRCB_t* pstUnblockedCRCB = (OS_CoRoutine_CRCB_t*) 0UL;

        /* The pending ready list can be accessed by an ISR. */
        OS_Adapt__vDisableInterrupts();
        {
            pstUnblockedCRCB = (OS_CoRoutine_CRCB_t*) OS_List__pvGetOwnerOfHeadEntry(pstPendingReadyCoRoutineList);
            (void) OS_List__uxRemove(&(pstUnblockedCRCB->stEventListItem));
        }
        OS_Adapt__vEnableInterrupts();

        (void) OS_List__uxRemove(&(pstUnblockedCRCB->stGenericListItem));
        OS_CoRoutine__vAddToReadyList(pstUnblockedCRCB);
        boIsEmptyList = OS_List__boIsEmpty(pstPendingReadyCoRoutineList);
    }
}
