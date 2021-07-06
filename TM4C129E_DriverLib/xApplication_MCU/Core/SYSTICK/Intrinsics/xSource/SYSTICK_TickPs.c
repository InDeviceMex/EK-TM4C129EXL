/**
 *
 * @file SYSTICK_TickPs.c
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
 * @verbatim 21 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_TickPs.h>

static uint32_t SYSTICK_u32PsTick = 1UL;

void SYSTICK__vClearTickPs(void)
{
    SYSTICK_u32PsTick = 1UL;
}

void SYSTICK__vSetTickPs(uint32_t u32Tick)
{
    SYSTICK_u32PsTick = u32Tick;
}

uint32_t SYSTICK__u32GetTickPs(void)
{
    return (SYSTICK_u32PsTick);
}




