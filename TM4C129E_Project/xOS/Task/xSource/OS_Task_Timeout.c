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
    uint32_t u32NumOfOverflows = 0UL;
    uint32_t u32TickCount = 0UL;
    if(0UL != pstTimeOut)
    {
        u32TickCount = OS_Task__u32GetTickCount_NotSafe();
        u32NumOfOverflows = OS_Task__u32GetNumOfOverflows();
        pstTimeOut->u32OverflowCount = u32NumOfOverflows;
        pstTimeOut->u32TimeOnEntering = u32TickCount;
    }
}

uint32_t OS_Task__u32CheckForTimeOut( OS_Task_TimeOut_TypeDef * const pstTimeOut,
                               uint32_t * const pu32TicksToWait )
{
    uint32_t u32Return = 0UL;
    uint32_t u32NumOfOverflows = 0UL;
    uint32_t u32ConstTickCountTemp = 0UL;

    if((0UL != (uint32_t) pstTimeOut) &&
       (0UL != (uint32_t) pu32TicksToWait) )
    {
        OS_Task__vEnterCritical();
        {
            /* Minor optimisation.  The tick count cannot change in this block. */
            const uint32_t u32ConstTickCount = OS_Task__u32GetTickCount_NotSafe();

            /* If INCLUDE_vTaskSuspend is set to 1 and the block time specified is
            the maximum block time then the task should block indefinitely, and
            therefore never time out. */
            if(OS_ADAPT_MAX_DELAY == *pu32TicksToWait)
            {
                u32Return = 0UL;
            }
            else /* We are not blocking indefinitely, perform the checks below. */
            {
                u32NumOfOverflows = OS_Task__u32GetNumOfOverflows();
                u32ConstTickCountTemp = u32ConstTickCount;
                u32ConstTickCountTemp -= pstTimeOut->u32TimeOnEntering;
                if((u32NumOfOverflows != pstTimeOut->u32OverflowCount) &&
                   (u32ConstTickCount >= pstTimeOut->u32TimeOnEntering))
                {
                    /* The tick count is greater than the time at which vTaskSetTimeout()
                    was called, but has also overflowed since vTaskSetTimeOut() was called.
                    It must have wrapped all the way around and gone past us again. This
                    passed since vTaskSetTimeout() was called. */
                    u32Return = 1UL;
                }
                else if((u32ConstTickCountTemp) < *pu32TicksToWait)
                {
                    /* Not a genuine timeout. Adjust parameters for time remaining. */
                    *pu32TicksToWait -= u32ConstTickCountTemp;
                    OS_Task__vSetTimeOutState(pstTimeOut);
                    u32Return = 0UL;
                }
                else
                {
                    u32Return = 1UL;
                }
            }
        }
        OS_Task__vExitCritical();
    }
    return (u32Return);
}

