/**
 *
 * @file SSI_Clock.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SSI/xHeader/SSI_Clock.h>

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

#define SSI_MASTER_MAX_CLOCK (60000000UL)
#define SSI_SLAVE_MAX_CLOCK (10000000UL)

void SSI__vSetClock(SSI_nMODULE enModule, uint32_t u32ClockArg)
{
    SSI_nCLOCK enSsiClock = SSI_enCLOCK_SYSCLK;
    SSI_nMS enSsiMode = SSI_enMS_MASTER;
    uint32_t u32CurrentClock = 0UL;
    uint32_t u32MaxClock = 0UL;
    uint32_t u32ClockReg = 0UL;
    uint32_t u32EvenPrediver = 2UL;
    uint32_t u32Divisor = 0UL;
    uint32_t u32Clock = u32ClockArg;

    enSsiClock = SSI__enGetClockConfig(enModule);
    if(SSI_enCLOCK_SYSCLK == enSsiClock)
    {
        u32CurrentClock = SYSCTL__u32GetSystemClock();
    }
    else
    {
        u32CurrentClock = SYSCTL__u32GetAlternateClock();
    }

    enSsiMode = SSI__enGetMasterSlave(enModule);
    u32MaxClock = (uint32_t) u32CurrentClock;
    if(SSI_enMS_MASTER == enSsiMode)
    {
        u32MaxClock /= (uint32_t) 2UL;
        if(u32Clock > u32MaxClock)
        {
            u32Clock = u32MaxClock;
        }
        if(u32Clock > SSI_MASTER_MAX_CLOCK)
        {
            u32Clock = SSI_MASTER_MAX_CLOCK;
        }
    }
    else
    {
        u32MaxClock /= (uint32_t) 12UL;
        if(u32Clock > u32MaxClock)
        {
            u32Clock = u32MaxClock;
        }
        if(u32Clock > SSI_SLAVE_MAX_CLOCK)
        {
            u32Clock = SSI_SLAVE_MAX_CLOCK;
        }
    }

    do
    {
        if(256UL > u32Divisor)
        {
            u32Divisor++;
        }
        else
        {
            u32EvenPrediver += 2UL;
            u32Divisor = 1UL;
            if(u32EvenPrediver > 254UL)
            {
                break;
            }
        }
        u32ClockReg = u32CurrentClock;
        u32ClockReg /= u32Divisor;
        u32ClockReg /= u32EvenPrediver;
    }while(u32ClockReg > u32Clock);

    u32Divisor --;
    SSI__vSetClockEvenPrescalerPart(enModule, u32EvenPrediver);
    SSI__vSetClockDivisorPart(enModule, u32Divisor);
}

uint32_t SSI__u32GetClock(SSI_nMODULE enModule)
{
    SSI_nCLOCK enSsiClock = SSI_enCLOCK_SYSCLK;
    uint32_t u32CurrentClock = 16000000UL;
    uint32_t u32EvenPrediver = 0UL;
    uint32_t u32Divisor = 1UL;

    enSsiClock = SSI__enGetClockConfig(enModule);
    if(SSI_enCLOCK_SYSCLK == enSsiClock)
    {
        u32CurrentClock = SYSCTL__u32GetSystemClock();
    }
    else
    {
        u32CurrentClock = SYSCTL__u32GetAlternateClock();
    }

    u32EvenPrediver = SSI__u32GetClockEvenPrescalerPart(enModule);
    u32Divisor = SSI__u32GetClockDivisorPart(enModule);
    u32Divisor++;
    u32CurrentClock /= u32Divisor;
    if(0UL != u32EvenPrediver)
    {
        u32CurrentClock /= u32EvenPrediver;
    }
    return (u32CurrentClock);
}
