/**
 *
 * @file OS_Queue_Empty.c
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
 * @verbatim 4 oct. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 oct. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Empty.h>
#include <xOS/Task/OS_Task.h>

OS_Boolean_t OS_Queue__boIsQueueEmpty(const OS_Queue_TypeDef* pstQueue)
{
    OS_Boolean_t boReturn = TRUE;

    if(0UL != (OS_UBase_t) pstQueue)
    {
        OS_Task__vEnterCritical();
        {
            if(0UL == pstQueue->uxMessagesWaiting)
            {
                boReturn = TRUE;
            }
            else
            {
                boReturn = FALSE;
            }
        }
        OS_Task__vExitCritical();
    }
    return (boReturn);
}

OS_Boolean_t OS_Queue__boIsQueueEmptyFromISR(const OS_Queue_Handle_TypeDef* pstQueue)
{
    OS_Boolean_t boReturn = TRUE;

    if(0UL != (OS_UBase_t) pstQueue)
    {
        if(0UL == ((OS_Queue_TypeDef*) pstQueue)->uxMessagesWaiting)
        {
            boReturn = TRUE;
        }
        else
        {
            boReturn = FALSE;
        }
    }
    return (boReturn);
}
