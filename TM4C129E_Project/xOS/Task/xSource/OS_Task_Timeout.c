/**
 *
 * @file OS_Task_Timeout.c
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
 * @verbatim 4 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Timeout.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

void OS_Task__vSetTimeOutState(OS_Task_TimeOut_TypeDef * const pstTimeOut)
{
    OS_UBase_t uxNumOfOverflows = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    if(0UL != (OS_UBase_t) pstTimeOut)
    {
        uxTickCount = OS_Task__uxGetTickCount_NotSafe();
        uxNumOfOverflows = OS_Task__uxGetNumOfOverflows();
        pstTimeOut->uxOverflowCount = uxNumOfOverflows;
        pstTimeOut->uxTimeOnEntering = uxTickCount;
    }
}

OS_Boolean_t OS_Task__boCheckForTimeOut(OS_Task_TimeOut_TypeDef * const pstTimeOut,
                                        OS_UBase_t * const puxTicksToWait)
{
    OS_UBase_t uxNumOfOverflows = 0UL;
    OS_UBase_t uxConstTickCountTemp = 0UL;
    OS_Boolean_t boReturn = FALSE;

    if((0UL != (OS_UBase_t) pstTimeOut) &&
       (0UL != (OS_UBase_t) puxTicksToWait) )
    {
        OS_Task__vEnterCritical();
        {
            /* Minor optimisation.  The tick count cannot change in this block. */
            const OS_UBase_t uxConstTickCount = OS_Task__uxGetTickCount_NotSafe();

            /* If INCLUDE_vTaskSuspend is set to 1 and the block time specified is
            the maximum block time then the task should block indefinitely, and
            therefore never time out. */
            if(OS_ADAPT_MAX_DELAY == *puxTicksToWait)
            {
                boReturn = FALSE;
            }
            else /* We are not blocking indefinitely, perform the checks below. */
            {
                uxNumOfOverflows = OS_Task__uxGetNumOfOverflows();
                uxConstTickCountTemp = uxConstTickCount;
                uxConstTickCountTemp -= pstTimeOut->uxTimeOnEntering;
                if((uxNumOfOverflows != pstTimeOut->uxOverflowCount) &&
                   (uxConstTickCount >= pstTimeOut->uxTimeOnEntering))
                {
                    /* The tick count is greater than the time at which vTaskSetTimeout()
                    was called, but has also overflowed since vTaskSetTimeOut() was called.
                    It must have wrapped all the way around and gone past us again. This
                    passed since vTaskSetTimeout() was called. */
                    boReturn = TRUE;
                }
                else if((uxConstTickCountTemp) < *puxTicksToWait)
                {
                    /* Not a genuine timeout. Adjust parameters for time remaining. */
                    *puxTicksToWait -= uxConstTickCountTemp;
                    OS_Task__vSetTimeOutState(pstTimeOut);
                    boReturn = FALSE;
                }
                else
                {
                    boReturn = FALSE;
                }
            }
        }
        OS_Task__vExitCritical();
    }
    return (boReturn);
}

