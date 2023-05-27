/**
 *
 * @file OS_Semaphore_Delete.c
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
 * @verbatim 20 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Semaphore/xHeader/OS_Semaphore_Delete.h>

#include <xOS/Queue/OS_Queue.h>

void OS_Semaphore__vDelete(OS_Semaphore_Handle_t pvSemaphoreArg)
{
    OS_Queue__vDelete(pvSemaphoreArg);
}



