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
#include <xApplication_MCU/Core/SYSTICK/Delay/Intrinsics/xHeader/SYSTICK_TickPeriod.h>

static volatile UBase_t SYSTICK_uxTickPeriod = 0UL;

void SYSTICK__vClearTickPeriod(void)
{
    SYSTICK_uxTickPeriod = 0UL;
}

void SYSTICK__vSetTickPeriod(UBase_t uxTickPeriod)
{
    SYSTICK_uxTickPeriod = uxTickPeriod;
}

UBase_t SYSTICK__uxGetTickPeriod(void)
{
    return (SYSTICK_uxTickPeriod);
}

