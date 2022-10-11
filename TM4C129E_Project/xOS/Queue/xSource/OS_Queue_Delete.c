/**
 *
 * @file OS_Queue_Delete.c
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
 * @verbatim 3 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/xHeader/OS_Queue_Delete.h>

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Registry.h>
#include <stdlib.h>

void OS_Queue__vDelete(OS_Queue_Handle_t pvQueue)
{

    if(0UL != (OS_UBase_t) pvQueue)
    {
        OS_Queue_t * pstQueueReg;
        pstQueueReg = (OS_Queue_t*) pvQueue;
        OS_Queue__vUnregisterQueue(pstQueueReg);
        free(pstQueueReg);
    }
}

