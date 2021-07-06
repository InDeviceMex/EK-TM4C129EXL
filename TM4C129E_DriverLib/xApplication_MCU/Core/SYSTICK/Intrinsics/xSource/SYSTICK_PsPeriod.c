/**
 *
 * @file SYSTICK_PsPeriod.c
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
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_PsPeriod.h>

static uint64_t SYSTICK_u64PsPeriod = 0ULL;

void SYSTICK__vClearPsPeriod(void)
{
    SYSTICK_u64PsPeriod = 0ULL;
}

void SYSTICK__vSetPsPeriod(uint64_t u64PsPeriod)
{
    SYSTICK_u64PsPeriod = u64PsPeriod;
}

uint64_t SYSTICK__u64GetPsPeriod(void)
{
    return (SYSTICK_u64PsPeriod);
}



