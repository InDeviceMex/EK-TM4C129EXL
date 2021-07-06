/**
 *
 * @file SYSTICK_TickPeriod.c
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
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_TickPeriod.h>

static volatile uint32_t SYSTICK_u32TickPeriod = 0UL;

void SYSTICK__vClearTickPeriod(void)
{
    SYSTICK_u32TickPeriod = 0UL;
}

void SYSTICK__vSetTickPeriod(uint32_t u32TickPeriod)
{
    SYSTICK_u32TickPeriod = u32TickPeriod;
}

uint32_t SYSTICK__u32GetTickPeriod(void)
{
    return (SYSTICK_u32TickPeriod);
}




