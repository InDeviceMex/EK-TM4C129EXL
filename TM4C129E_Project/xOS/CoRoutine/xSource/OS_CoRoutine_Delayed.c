/**
 *
 * @file OS_CoRoutine_Delayed.c
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
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Delayed.h>

#include <xOS/CoRoutine/Intrinsics/OS_CoRoutine_Intrinsics.h>
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Ready.h>
#include <xOS/Task/xHeader/OS_Task_Scheduler.h>
#include <xOS/Adapt/OS_Adapt.h>

void OS_CoRoutine__vAddToDelayedList(OS_UBase_t uxTimeToDelay, OS_List_t* pstEventListArg)
{

    OS_UBase_t uxTimeToWake;
    uxTimeToWake = uxTimeToDelay;
    OS_UBase_t uxCoRoutineTickCount;
    uxCoRoutineTickCount = OS_CoRoutine__uxGetTickCount_NotSafe();
    uxTimeToWake += uxCoRoutineTickCount;
    OS_CoRoutine_CRCB_t* pstCurrentCRCB;
    pstCurrentCRCB = OS_CoRoutine__pstGetCurrentCRCB();
    (void) OS_List__uxRemove(&(pstCurrentCRCB->stGenericListItem));
    OS_List__vSetItemValue(&(pstCurrentCRCB->stGenericListItem), uxTimeToWake);

    if( uxTimeToWake < uxCoRoutineTickCount )
    {
        OS_List_t* pstOverflowDelayedCoRoutineList = OS_CoRoutine__pstGetOverflowDelayedList();
        OS_List__vInsert(pstOverflowDelayedCoRoutineList,
                         &(pstCurrentCRCB->stGenericListItem));
    }
    else
    {
        OS_List_t* pstDelayedCoRoutineList = OS_CoRoutine__pstGetDelayedList();
        OS_List__vInsert(pstDelayedCoRoutineList,
                         &(pstCurrentCRCB->stGenericListItem));
    }

    if(0UL != (OS_Pointer_t) pstEventListArg)
    {
        OS_List__vInsert(pstEventListArg,
                         &(pstCurrentCRCB->stEventListItem));
    }
}

void OS_CoRoutine__vCheckDelayedList(void)
{
    OS_CoRoutine_CRCB_t* pstCRCB;
    void* pvDataCointainer;
    OS_List_t* pstDelayedCoRoutineList;
    OS_Boolean_t boIsEmptyList;
    OS_UBase_t uxItemValue;
    OS_UBase_t uxPassedTicks;
    OS_UBase_t uxLastTickCount;
    OS_UBase_t uxCoRoutineTickCount;

    uxLastTickCount = OS_CoRoutine__uxGetLastTickCount_NotSafe();
    uxCoRoutineTickCount = OS_CoRoutine__uxGetTickCount_NotSafe();
    uxPassedTicks = OS_Task__uxGetTickCount();

    uxPassedTicks -= uxLastTickCount;
    OS_CoRoutine__vSetPassedTicks(uxPassedTicks);
    while(0UL != uxPassedTicks)
    {
        uxCoRoutineTickCount++;
        OS_CoRoutine__vSetTickCount(uxCoRoutineTickCount);
        uxPassedTicks--;
        OS_CoRoutine__vSetPassedTicks(uxPassedTicks);

        /* If the tick count has overflowed we need to swap the ready lists. */
        if(0UL == uxCoRoutineTickCount)
        {
            OS_List_t* pstTemp;
            OS_List_t* pstOverflowDelayedCoRoutineList;

            /* Tick count has overflowed so we need to swap the delay lists.  If there are
            any items in pstDelayedCoRoutineList here then there is an error! */
            pstDelayedCoRoutineList = OS_CoRoutine__pstGetDelayedList();
            pstOverflowDelayedCoRoutineList = OS_CoRoutine__pstGetOverflowDelayedList();
            pstTemp = pstDelayedCoRoutineList;
            OS_CoRoutine__vSetDelayedList(pstOverflowDelayedCoRoutineList);
            OS_CoRoutine__vSetOverflowDelayedList(pstTemp);
        }

        pstDelayedCoRoutineList = OS_CoRoutine__pstGetDelayedList();
        boIsEmptyList = OS_List__boIsEmpty(pstDelayedCoRoutineList);
        /* See if this tick has made a timeout expire. */
        while(FALSE == boIsEmptyList)
        {
            pstCRCB = (OS_CoRoutine_CRCB_t*) OS_List__pvGetOwnerOfHeadEntry(pstDelayedCoRoutineList);
            uxItemValue = OS_List__uxGetItemValue(&(pstCRCB->stGenericListItem));
            if(uxCoRoutineTickCount < uxItemValue)
            {
                /* Timeout not yet expired. */
                break;
            }

            OS_Adapt__vDisableInterrupts();
            {
                /* The event could have occurred just before this critical
                section.  If this is the case then the generic list item will
                have been moved to the pending ready list and the following
                line is still valid.  Also the pvContainer parameter will have
                been set to NULL so the following lines are also valid. */
                (void) OS_List__uxRemove(&(pstCRCB->stGenericListItem));

                /* Is the co-routine waiting on an event also? */
                pvDataCointainer = pstCRCB->stEventListItem.pvDataContainer;
                if(0UL !=  (OS_Pointer_t) pvDataCointainer)
                {
                    (void) OS_List__uxRemove(&(pstCRCB->stEventListItem));
                }
            }
            OS_Adapt__vEnableInterrupts();
            OS_CoRoutine__vAddToReadyQueue(pstCRCB);
            boIsEmptyList = OS_List__boIsEmpty(pstDelayedCoRoutineList);
        }
    }
    OS_CoRoutine__vSetLastTickCount(uxCoRoutineTickCount);
}

#if 0
void OS_CoRoutine__vDelay(OS_CoRoutine_CRCB_t* pstCRCB, OS_UBase_t uxTicksToDelay)
{
    if(0UL < uxTicksToDelay)
    {
        vCoRoutineAddToDelayedList( ( xTicksToDelay ), NULL );
    }
}
#endif
