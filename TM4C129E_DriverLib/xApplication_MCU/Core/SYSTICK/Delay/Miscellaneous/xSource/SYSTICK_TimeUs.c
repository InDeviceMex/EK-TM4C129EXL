/**
 *
 * @file SYSTICK_TimeUs.c
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
#include <xApplication_MCU/Core/SYSTICK/Delay/Miscellaneous/xHeader/SYSTICK_TimeUs.h>

#include <xApplication_MCU/Core/SYSTICK/Delay/Intrinsics/SYSTICK_Intrinsics.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Dependencies.h>

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
