/**
 *
 * @file OS_Queue_Lock_.c
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
 * @verbatim 30 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Lock_.h>
#include <xOS/Adapt/OS_Adapt.h>

void OS_Queue__vLock(OS_Queue_t* pstQueue)
{
    OS_Adapt__vEnterCritical();
    {
        if(OS_QUEUE_UNLOCKED == (pstQueue)->xRxLock)
        {
            (pstQueue)->xRxLock = OS_QUEUE_LOCKED_UNMODIFIED;
        }
        if(OS_QUEUE_UNLOCKED == (pstQueue)->xTxLock)
        {
            (pstQueue)->xTxLock = OS_QUEUE_LOCKED_UNMODIFIED;
        }
    }
    OS_Adapt__vExitCritical();
}

