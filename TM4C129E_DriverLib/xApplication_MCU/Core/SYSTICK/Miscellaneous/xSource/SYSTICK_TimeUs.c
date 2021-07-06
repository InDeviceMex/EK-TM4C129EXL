/*
 * SYSTICK_TimeUs.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xApplication_MCU/Core/SYSTICK/Miscellaneous/xHeader/SYSTICK_TimeUs.h>

#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Current.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_FreeCount.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_TickPs.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_PsPeriod.h>

static uint64_t SYSTICK__u64GetTime(uint32_t u32Divisor);

static uint64_t SYSTICK__u64GetTime(uint32_t u32Divisor)
{
    uint64_t u64UsPeriod = SYSTICK__u64GetPsPeriod();
    uint64_t u64TickUs = (uint64_t) SYSTICK__u32GetTickPs();
    uint64_t u64Current = (uint64_t) SYSTICK__u32GetCurrent();
    uint32_t u32FreeCount = SYSTICK__u32GetFreeCount();
    u32FreeCount += 1UL;

    u64Current *= u64TickUs;
    u64UsPeriod *=  (uint64_t) u32FreeCount ;
    u64UsPeriod -= u64Current;

    u64UsPeriod /= u32Divisor;
    return (u64UsPeriod);
}

uint64_t SYSTICK__u64GetTimePs(void)
{
    uint64_t u64PsPeriod = SYSTICK__u64GetTime(1UL);
    return (u64PsPeriod);
}


uint64_t SYSTICK__u64GetTimeNs(void)
{
    uint64_t u64PsPeriod = SYSTICK__u64GetTime(1000UL);
    return (u64PsPeriod);
}


uint64_t SYSTICK__u64GetTimeUs(void)
{
    uint64_t u64PsPeriod = SYSTICK__u64GetTime(1000000UL);
    return (u64PsPeriod);
}


uint64_t SYSTICK__u64GetTimeMs(void)
{
    uint64_t u64PsPeriod = SYSTICK__u64GetTime(1000000000UL);
    return (u64PsPeriod);
}

