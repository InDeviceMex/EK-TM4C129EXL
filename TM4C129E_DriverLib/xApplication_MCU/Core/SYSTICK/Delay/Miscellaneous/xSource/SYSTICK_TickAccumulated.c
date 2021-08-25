/**
 *
 * @file SYSTICK_TickAccumulated.c
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
#include <xApplication_MCU/Core/SYSTICK/Delay/Miscellaneous/xHeader/SYSTICK_TickAccumulated.h>

#include <xApplication_MCU/Core/SYSTICK/Delay/Intrinsics/SYSTICK_Intrinsics.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Dependencies.h>

uint64_t SYSTICK__u64GetTickAccumulated(void)
{
    uint64_t u64CountTick = SYSTICK__u32GetTickPeriod();
    uint64_t u64FreeCount = SYSTICK__u32GetFreeCount();
    u64FreeCount += 1ULL;
    u64CountTick *= u64FreeCount;
    u64CountTick -= SYSTICK__u32GetCurrent();
    return (u64CountTick);
}
