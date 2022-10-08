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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SYSTICK/Delay/Intrinsics/xHeader/SYSTICK_TickPs.h>

static UBase_t SYSTICK_uxPsTick = 1UL;

void SYSTICK__vClearTickPs(void)
{
    SYSTICK_uxPsTick = 1UL;
}

void SYSTICK__vSetTickPs(UBase_t uxTick)
{
    SYSTICK_uxPsTick = uxTick;
}

UBase_t SYSTICK__uxGetTickPs(void)
{
    return (SYSTICK_uxPsTick);
}
