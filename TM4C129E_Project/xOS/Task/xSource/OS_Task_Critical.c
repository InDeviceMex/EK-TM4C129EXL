/**
 *
 * @file OS_Task_Critical.c
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
 * @verbatim 17 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Critical.h>

#include <xOS/Adapt/OS_Adapt.h>


void OS_Task__vEnterCritical(void)
{
    OS_Adapt__vEnterCritical();
}

void OS_Task__vEnterCriticalFromISR(void)
{
    OS_Adapt__vSetInterruptMaskFromISR();
}

void OS_Task__vExitCritical(void)
{
    OS_Adapt__vExitCritical();
}

void OS_Task__vExitCriticalFromISR(uint32_t u32Mask)
{
    OS_Adapt__vClearInterruptMaskFromISR(u32Mask);
}


