/*
 * SYSTICK_TickAcumulated.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xApplication_MCU/Core/SYSTICK/Miscellaneous/xHeader/SYSTICK_TickAccumulated.h>

#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Current.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_FreeCount.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_TickPeriod.h>

uint64_t SYSTICK__u64GetTickAccumulated(void)
{
    uint64_t u64CountTick = SYSTICK__u32GetTickPeriod();
    uint64_t u64FreeCount = SYSTICK__u32GetFreeCount();
    u64FreeCount += 1ULL;
    u64CountTick *= u64FreeCount;
    u64CountTick -= SYSTICK__u32GetCurrent();
    return (u64CountTick);
}
