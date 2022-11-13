/**
 *
 * @file OS_Queue_Interrupt.c
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
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Interrupt.h>
#include <xOS/Adapt/OS_Adapt.h>

void OS_Queue__vYieldWithinAPI(void)
{
    OS_Adapt__vYieldWithinAPI();
}

void OS_Queue__vYieldIfUsingPreemption(void)
{
    OS_Queue__vYieldWithinAPI();
}
