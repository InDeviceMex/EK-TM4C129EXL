/*
 * SYSTICK_Delay.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xApplication_MCU/Core/SYSTICK/xHeader/SYSTICK_Delay.h>

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_TickPs.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_TickPeriod.h>
#include <xApplication_MCU/Core/SYSTICK/Miscellaneous/xHeader/SYSTICK_TickAccumulated.h>
#include <xDriver_MCU/SYSCTL/SYSCTL.h>

 void SYSTICK__vDelayUs(uint32_t u32TimeUs)
{
    uint64_t u64TickAccumulatedInitial = SYSTICK__u64GetTickAccumulated();
    uint64_t u64PsTick = 0ULL;
    uint64_t u64TimePs = 0ULL;
    uint64_t u64TickAccumulatedDelta = 0ULL;
    uint64_t u64TickAccumulatedCurrent = 0ULL;
    uint64_t u64CountMax = 0ULL;
    uint64_t u64Count = 0ULL;



    u64PsTick = SYSTICK__u32GetTickPs();
    u64TimePs = (uint64_t) u32TimeUs * 1000000ULL;
    u64CountMax = u64TimePs /  u64PsTick;

    u64TickAccumulatedDelta = SYSTICK__u64GetTickAccumulated();
    u64TickAccumulatedDelta -= u64TickAccumulatedInitial;

    u64TickAccumulatedInitial -= u64TickAccumulatedDelta;
    u64TickAccumulatedCurrent = u64TickAccumulatedInitial;
    while(((uint64_t) u64Count < (uint64_t) u64CountMax))
    {
        u64TickAccumulatedCurrent = SYSTICK__u64GetTickAccumulated();
        if(u64TickAccumulatedCurrent >= u64TickAccumulatedInitial)
        {
            u64Count = (uint64_t) u64TickAccumulatedCurrent;
            u64Count -= (uint64_t) u64TickAccumulatedInitial;
        }
        else
        {
            u64Count = u64TickAccumulatedInitial;
            u64Count -= (uint64_t) u64TickAccumulatedCurrent;
        }
    }
}
