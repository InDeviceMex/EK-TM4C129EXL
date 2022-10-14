/**
 *
 * @file OS_Task_Scheduler.c
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
 * @verbatim 16 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Scheduler.h>

#include <xOS/Adapt/xHeader/OS_Adapt_Scheduler.h>
#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

#include <xOS/External/OS_External.h>
#include <xOS/Task/xHeader/OS_Task_Create.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>
#include <xOS/Task/xHeader/OS_Task_Deleted.h>
#include <xOS/Task/xHeader/OS_Task_Suspended.h>


static OS_UBase_t OS_Task__uxGetExpectedIdleTime(void);
static void OS_Task__vIdle(void* pvParametersArg);

OS_UBase_t OS_Task__uxGetTickCount(void)
{
    OS_UBase_t uxTick;

    OS_Task__vEnterCritical();
    {
        uxTick = OS_Task__uxGetTickCount_NotSafe();
    }
    OS_Task__vExitCritical();
    return (uxTick);
}

OS_UBase_t OS_Task__uxGetTickCountFromISR(void)
{
    OS_UBase_t uxSavedInterruptStatus;
    OS_UBase_t uxReturn;

    uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
    {
        uxReturn = OS_Task__uxGetTickCount_NotSafe();
    }
    OS_Task__vClearInterruptMaskFromISR(uxSavedInterruptStatus);

    return (uxReturn);
}

void OS_Task__vSetStepTick(const OS_UBase_t uxTicksToJump)
{
    OS_UBase_t uxNextTaskUnblockTime;
    OS_UBase_t uxTickCount;
    OS_UBase_t uxTickNext;

    uxTickCount = OS_Task__uxGetTickCount_NotSafe();
    uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();

    uxTickNext = uxTickCount + uxTicksToJump;
    if(uxTickNext <= uxNextTaskUnblockTime)
    {
        OS_Task__vSetTickCount(uxTickNext);
    }
}

OS_Boolean_t OS_Task__boIncrementTick(void)
{
    OS_UBase_t uxSchedulerSuspended;
    OS_Boolean_t boSwitchRequired;
    OS_Boolean_t boYieldPending;

    boSwitchRequired = FALSE;
    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
    if(0UL == uxSchedulerSuspended)
    {
        OS_List_t* pstReadyList;
        OS_Task_TCB_t * pstCurrentTCB;
        OS_UBase_t uxListSize;
        OS_UBase_t uxPendedTicks;

        OS_Task__vIncreaseTickCount();
        {
            const OS_UBase_t uxConstTickCount = OS_Task__uxGetTickCount_NotSafe();
            OS_UBase_t uxNextTaskUnblockTime;

            if(0UL == uxConstTickCount)
            {
                OS_Task__vSwitchDelayedLists();
            }

            uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();
            if( uxConstTickCount >= uxNextTaskUnblockTime )
            {
                OS_List_t* pstDelayedTaskList;
                OS_Boolean_t boListIsEmpty;
                OS_List_t* pstOwnerList;
                OS_Task_TCB_t* pstTCB;
                OS_UBase_t uxItemValue;
                while(1UL)
                {

                    pstDelayedTaskList = OS_Task__pstGetDelayedTaskList();
                    boListIsEmpty = OS_List__boIsEmpty(pstDelayedTaskList);
                    if( FALSE != boListIsEmpty )
                    {
                        OS_Task__vSetNextTaskUnblockTime(OS_ADAPT_MAX_DELAY);
                        break;
                    }
                    else
                    {

                        pstTCB = (OS_Task_TCB_t *) OS_List__pvGetOwnerOfHeadEntry(pstDelayedTaskList);
                        uxItemValue = OS_List__uxGetItemValue(&( pstTCB->stGenericListItem));

                        if( uxConstTickCount < uxItemValue )
                        {
                            OS_Task__vSetNextTaskUnblockTime(uxItemValue);
                            break;
                        }
                        (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));

                        pstOwnerList = (OS_List_t*) OS_List__pvGetItemContainer(&(pstTCB->stEventListItem));
                        if(0UL != (OS_Pointer_t) pstOwnerList)
                        {
                            (void) OS_List__uxRemove(&(pstTCB->stEventListItem));
                        }

                        OS_Task__vAddTaskToReadyList(pstTCB);

                        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                        if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
                        {
                            boSwitchRequired = TRUE;
                        }
                    }
                }
            }
        }

        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        pstReadyList = OS_Task__pstGetReadyTasksLists(pstCurrentTCB->uxPriorityTask);
        uxListSize = OS_List__uxGetLength(pstReadyList);
        if( 1UL < uxListSize)
        {
            boSwitchRequired = TRUE;
        }

        uxPendedTicks = OS_Task__uxGetPendedTicks();
        if(0UL == uxPendedTicks)
        {
            OS_External__vApplicationTickHook();
        }
    }
    else
    {
        OS_Task__vIncreasePendedTicks();
        OS_External__vApplicationTickHook();
    }

    boYieldPending = OS_Task__boGetYieldPending();
    if(FALSE != boYieldPending)
    {
        boSwitchRequired = TRUE;
    }

    return (boSwitchRequired);
}


void OS_Task__vSwitchContext(void)
{
    OS_UBase_t uxSchedulerSuspended;

    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
    if(0UL != uxSchedulerSuspended)
    {
        OS_Task__vSetYieldPending(TRUE);
    }
    else
    {
        OS_Task__vSetYieldPending(FALSE);
        OS_Task__vCheckStackOverflow();
        OS_Task__vSelectHighestPriorityTask();
    }
}

static OS_UBase_t OS_Task__uxGetExpectedIdleTime(void)
{
    OS_List_t* pstList;
    OS_Task_TCB_t*  pstCurrentTCB;
    OS_UBase_t uxListSize;
    OS_UBase_t uxReturn;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    pstList = OS_Task__pstGetReadyTasksLists(OS_TASK_IDLE_PRIORITY);
    uxListSize = OS_List__uxGetLength(pstList);
    if(OS_TASK_IDLE_PRIORITY < pstCurrentTCB->uxPriorityTask)
    {
        uxReturn = 0UL;
    }
    else if(1UL < uxListSize)
    {
        uxReturn = 0UL;
    }
    else
    {
        OS_UBase_t uxTickCount;
        OS_UBase_t uxNextTaskUnblockTime;

        uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();
        uxTickCount = OS_Task__uxGetTickCount_NotSafe();
        uxReturn = uxNextTaskUnblockTime - uxTickCount;
    }

    return (uxReturn);
}

static void OS_Task__vIdle(void* pvParametersArg)
{
    OS_List_t* pstReadyList;
    OS_UBase_t uxListSize;
    (void) pvParametersArg;

    while(1UL)
    {
        OS_Task__vCheckTasksWaitingTermination();

        pstReadyList = OS_Task__pstGetReadyTasksLists(OS_TASK_IDLE_PRIORITY);
        uxListSize = OS_List__uxGetLength(pstReadyList);

        if(1UL < uxListSize)
        {
            OS_Task__vYield();
        }
        OS_External__vApplicationIdleHook();

        OS_UBase_t uxExpectedIdleTime = 0UL;
        uxExpectedIdleTime = OS_Task__uxGetExpectedIdleTime();
        if( uxExpectedIdleTime >= OS_TASK_EXPECTED_IDLE_TIME_BEFORE_SLEEP )
        {
            OS_Task__vSuspendAll();
            {
                OS_UBase_t uxTickCount;
                OS_UBase_t uxNextTaskUnblockTime;

                uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();
                uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                if(uxNextTaskUnblockTime >= uxTickCount)
                {
                    uxExpectedIdleTime = OS_Task__uxGetExpectedIdleTime();
                    if(OS_TASK_EXPECTED_IDLE_TIME_BEFORE_SLEEP <= uxExpectedIdleTime)
                    {
                        /* portSUPPRESS_TICKS_AND_SLEEP( uxExpectedIdleTime );*/
                    }
                }
            }
            (void) OS_Task__boResumeAll();
        }
    }
}

void OS_Task__vStartScheduler(OS_UBase_t uxUsPeriod)
{
    OS_Task_Handle_t* pvIdleTaskHandle;
    OS_UBase_t uxReturn;

    pvIdleTaskHandle = OS_Task__pvGetIdleTaskHandle();
    uxReturn = OS_Task__uxGenericCreate(&OS_Task__vIdle,
                                            "IDLE",
                                            OS_TASK_IDLE_STACK_SIZE,
                                            (void *) 0UL,
                                            (OS_TASK_IDLE_PRIORITY),
                                            pvIdleTaskHandle, (OS_UBase_t*) 0UL);

    #if ( configUSE_TIMERS == 1 )
    {
        if(1UL == uxReturn)
        {
            uxReturn = xTimerCreateTimerTask();
        }
    }
    #endif /* configUSE_TIMERS */

    if(1UL == uxReturn)
    {
        OS_Task__vDisableInterrupts();

        OS_Task__vSetNextTaskUnblockTime(OS_ADAPT_MAX_DELAY);
        OS_Task__vSetSchedulerRunning(TRUE);
        OS_Task__vSetTickCount(0UL);
        /* portCONFIGURE_TIMER_FOR_RUN_TIME_STATS(); */

        (void) OS_Adapt__vStartScheduler(uxUsPeriod);
    }
    else
    {
        if(0UL == uxReturn)
        {
            OS_Task__vDisableInterrupts();
            while(1UL);
        }
    }
}

void OS_Task__vEndScheduler( void )
{
    OS_Task__vDisableInterrupts();
    OS_Task__vSetSchedulerRunning(FALSE);
    OS_Adapt__vEndScheduler();
}
