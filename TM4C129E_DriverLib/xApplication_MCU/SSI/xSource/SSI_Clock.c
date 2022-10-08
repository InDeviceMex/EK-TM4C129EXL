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

void SSI__vSetClock(SSI_nMODULE enModule, UBase_t uxClockArg)
{
    SSI_nCLOCK enSsiClock = SSI_enCLOCK_SYSCLK;
    SSI_nMS enSsiMode = SSI_enMS_MASTER;
    UBase_t uxCurrentClock = 0UL;
    UBase_t uxMaxClock = 0UL;
    UBase_t uxClockReg = 0UL;
    UBase_t uxEvenPrediver = 2UL;
    UBase_t uxDivisor = 0UL;
    UBase_t uxClock = uxClockArg;

    enSsiClock = SSI__enGetClockConfig(enModule);
    if(SSI_enCLOCK_SYSCLK == enSsiClock)
    {
        uxCurrentClock = SYSCTL__uxGetSystemClock();
    }
    else
    {
        uxCurrentClock = SYSCTL__uxGetAlternateClock();
    }

    enSsiMode = SSI__enGetMasterSlave(enModule);
    uxMaxClock = (UBase_t) uxCurrentClock;
    if(SSI_enMS_MASTER == enSsiMode)
    {
        uxMaxClock /= (UBase_t) 2UL;
        if(uxClock > uxMaxClock)
        {
            uxClock = uxMaxClock;
        }
        if(uxClock > SSI_MASTER_MAX_CLOCK)
        {
            uxClock = SSI_MASTER_MAX_CLOCK;
        }
    }
    else
    {
        uxMaxClock /= (UBase_t) 12UL;
        if(uxClock > uxMaxClock)
        {
            uxClock = uxMaxClock;
        }
        if(uxClock > SSI_SLAVE_MAX_CLOCK)
        {
            uxClock = SSI_SLAVE_MAX_CLOCK;
        }
    }

    do
    {
        if(256UL > uxDivisor)
        {
            uxDivisor++;
        }
        else
        {
            uxEvenPrediver += 2UL;
            uxDivisor = 1UL;
            if(uxEvenPrediver > 254UL)
            {
                break;
            }
        }
        uxClockReg = uxCurrentClock;
        uxClockReg /= uxDivisor;
        uxClockReg /= uxEvenPrediver;
    }while(uxClockReg > uxClock);

    uxDivisor --;
    SSI__vSetClockEvenPrescalerPart(enModule, uxEvenPrediver);
    SSI__vSetClockDivisorPart(enModule, uxDivisor);
}

UBase_t SSI__uxGetClock(SSI_nMODULE enModule)
{
    SSI_nCLOCK enSsiClock = SSI_enCLOCK_SYSCLK;
    UBase_t uxCurrentClock = 16000000UL;
    UBase_t uxEvenPrediver = 0UL;
    UBase_t uxDivisor = 1UL;

    enSsiClock = SSI__enGetClockConfig(enModule);
    if(SSI_enCLOCK_SYSCLK == enSsiClock)
    {
        uxCurrentClock = SYSCTL__uxGetSystemClock();
    }
    else
    {
        uxCurrentClock = SYSCTL__uxGetAlternateClock();
    }

    uxEvenPrediver = SSI__uxGetClockEvenPrescalerPart(enModule);
    uxDivisor = SSI__uxGetClockDivisorPart(enModule);
    uxDivisor++;
    uxCurrentClock /= uxDivisor;
    if(0UL != uxEvenPrediver)
    {
        uxCurrentClock /= uxEvenPrediver;
    }
    return (uxCurrentClock);
}
