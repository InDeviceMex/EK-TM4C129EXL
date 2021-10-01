/**
 *
 * @file OS_Queue_Lock.c
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
 * @verbatim 15 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Lock.h>
#include <xOS/Adapt/OS_Adapt.h>


void OS_Queue_vLock(OS_Queue_TypeDef* pstQueue)
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
