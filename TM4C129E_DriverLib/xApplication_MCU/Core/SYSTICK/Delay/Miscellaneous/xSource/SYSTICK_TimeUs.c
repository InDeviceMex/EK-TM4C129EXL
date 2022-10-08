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

static uint64_t SYSTICK__u64GetTime(UBase_t uxDivisor);

static uint64_t SYSTICK__u64GetTime(UBase_t uxDivisor)
{
    uint64_t u64UsPeriod = SYSTICK__u64GetPsPeriod();
    uint64_t u64TickUs = (uint64_t) SYSTICK__uxGetTickPs();
    uint64_t u64Current;
    UBase_t uxCurrent;
    UBase_t uxFreeCount = SYSTICK__uxGetFreeCount();
    uxFreeCount += 1UL;
    uxCurrent = 0UL;
    SYSTICK__enGetCurrentValue(SYSTICK_enMODULE_0, &uxCurrent);

    u64Current = (uint64_t) uxCurrent;
    u64Current += 1ULL;
    u64Current *= u64TickUs;
    u64UsPeriod *=  (uint64_t) uxFreeCount ;
    u64UsPeriod -= u64Current;

    u64UsPeriod /= uxDivisor;
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
