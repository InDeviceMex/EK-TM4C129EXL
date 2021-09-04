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
#if 0
BaseType_t xTaskCheckForTimeOut( TimeOut_t * const pxTimeOut, TickType_t * const pxTicksToWait )
{
BaseType_t xReturn;

    configASSERT( pxTimeOut );
    configASSERT( pxTicksToWait );

    taskENTER_CRITICAL();
    {
        /* Minor optimisation.  The tick count cannot change in this block. */
        const TickType_t xConstTickCount = xTickCount;

        #if ( INCLUDE_vTaskSuspend == 1 )
            /* If INCLUDE_vTaskSuspend is set to 1 and the block time specified is
            the maximum block time then the task should block indefinitely, and
            therefore never time out. */
            if( *pxTicksToWait == portMAX_DELAY )
            {
                xReturn = pdFALSE;
            }
            else /* We are not blocking indefinitely, perform the checks below. */
        #endif

        if( ( xNumOfOverflows != pxTimeOut->xOverflowCount ) && ( xConstTickCount >= pxTimeOut->xTimeOnEntering ) ) /*lint !e525 Indentation preferred as is to make code within pre-processor directives clearer. */
        {
            /* The tick count is greater than the time at which vTaskSetTimeout()
            was called, but has also overflowed since vTaskSetTimeOut() was called.
            It must have wrapped all the way around and gone past us again. This
            passed since vTaskSetTimeout() was called. */
            xReturn = pdTRUE;
        }
        else if( ( xConstTickCount - pxTimeOut->xTimeOnEntering ) < *pxTicksToWait )
        {
            /* Not a genuine timeout. Adjust parameters for time remaining. */
            *pxTicksToWait -= ( xConstTickCount -  pxTimeOut->xTimeOnEntering );
            vTaskSetTimeOutState( pxTimeOut );
            xReturn = pdFALSE;
        }
        else
        {
            xReturn = pdTRUE;
        }
    }
    taskEXIT_CRITICAL();

    return xReturn;
}
#endif
