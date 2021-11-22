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

void OS_Task__vSetTimeOutState(OS_Task_TimeOut_t * const pstTimeOut)
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

OS_Boolean_t OS_Task__boCheckForTimeOut(OS_Task_TimeOut_t * const pstTimeOut,
                                        OS_UBase_t * const puxTicksToWait)
{
    OS_UBase_t uxConstTickCountTemp = 0UL;
    OS_UBase_t uxNumOfOverflows = 0UL;
    OS_Boolean_t boReturn = FALSE;

    if((0UL != (OS_UBase_t) pstTimeOut) &&
       (0UL != (OS_UBase_t) puxTicksToWait) )
    {
        OS_Task__vEnterCritical();
        {
            const OS_UBase_t uxConstTickCount = OS_Task__uxGetTickCount_NotSafe();

            if(OS_ADAPT_MAX_DELAY == *puxTicksToWait)
            {
                boReturn = FALSE;
            }
            else
            {
                uxNumOfOverflows = OS_Task__uxGetNumOfOverflows();
                uxConstTickCountTemp = uxConstTickCount;
                uxConstTickCountTemp -= pstTimeOut->uxTimeOnEntering;
                if((uxNumOfOverflows != pstTimeOut->uxOverflowCount) &&
                   (uxConstTickCount >= pstTimeOut->uxTimeOnEntering))
                {
                    boReturn = TRUE;
                }
                else if((uxConstTickCountTemp) < *puxTicksToWait)
                {
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

