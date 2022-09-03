/**
 *
 * @file SYSTICK_Delay.c
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
#include <xApplication_MCU/Core/SYSTICK/Delay/SYSTICK_Delay.h>

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
    u64CountMax = u64TimePs / u64PsTick;

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
