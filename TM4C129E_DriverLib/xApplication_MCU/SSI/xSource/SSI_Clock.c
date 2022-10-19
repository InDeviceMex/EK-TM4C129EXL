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

SSI_nERROR SSI__enSetClockFrequency(SSI_nMODULE enModuleArg, UBase_t uxFrequencyArg)
{
    UBase_t uxEvenPrediver;
    UBase_t uxDivisor;
    UBase_t uxCurrentClock;
    SSI_nCLOCK enSsiClock;
    SSI_nOPERATION enSsiOperation;
    SSI_nERROR enErrorReg;

    uxEvenPrediver = 0UL;
    uxDivisor = 0UL;
    uxCurrentClock = 0UL;
    enSsiOperation = SSI_enOPERATION_MASTER;
    enSsiClock = SSI_enCLOCK_RSCLK;
    enErrorReg = SSI__enGetClockSource(enModuleArg, &enSsiClock);
    if(SSI_enERROR_OK == enErrorReg)
    {
        if(SSI_enCLOCK_RSCLK == enSsiClock)
        {
            uxCurrentClock = SYSCTL__uxGetSystemClock();
        }
        else
        {
            uxCurrentClock = SYSCTL__uxGetAlternateClock();
        }
    }

    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetOperation(enModuleArg, &enSsiOperation);
    }

    if(SSI_enERROR_OK == enErrorReg)
    {
        UBase_t uxMaxClock;

        uxMaxClock = uxCurrentClock;
        if(SSI_enOPERATION_MASTER == enSsiOperation)
        {
            uxMaxClock /= 2UL;
        }
        else
        {
            uxMaxClock /= 12UL;
        }

        if(uxFrequencyArg > uxMaxClock)
        {
            enErrorReg = SSI_enERROR_VALUE;
        }
    }

    if(SSI_enERROR_OK == enErrorReg)
    {
        UBase_t uxFrequencyArgReg;

        uxDivisor = 0UL;
        uxEvenPrediver = 2UL;
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
                if(254UL < uxEvenPrediver)
                {
                    enErrorReg = SSI_enERROR_VALUE;
                    break;
                }
            }
            uxFrequencyArgReg = uxCurrentClock;
            uxFrequencyArgReg /= uxEvenPrediver;
            uxFrequencyArgReg /= uxDivisor;
        }while(uxFrequencyArgReg > uxFrequencyArg);
    }

    if(SSI_enERROR_OK == enErrorReg)
    {
        uxDivisor --;
        enErrorReg = SSI__enSetSerialClockRate(enModuleArg, uxDivisor);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetClockPrescaler(enModuleArg, uxEvenPrediver);
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetClockFrequency(SSI_nMODULE enModuleArg, UBase_t* puxFrequency)
{
    UBase_t uxSystemFrequency;
    UBase_t uxEvenPrediver;
    UBase_t uxDivisor;
    SSI_nCLOCK enSsiClock = SSI_enCLOCK_RSCLK;
    SSI_nERROR enErrorReg;

    uxDivisor = 0UL;
    uxEvenPrediver = 0UL;
    uxSystemFrequency = 0UL;
    enSsiClock = SSI_enCLOCK_RSCLK;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) puxFrequency)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetClockSource(enModuleArg, &enSsiClock);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI__enGetClockPrescaler(enModuleArg, &uxEvenPrediver);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI__enGetSerialClockRate(enModuleArg, &uxDivisor);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        if(SSI_enCLOCK_RSCLK == enSsiClock)
        {
            uxSystemFrequency = SYSCTL__uxGetSystemClock();
        }
        else
        {
            uxSystemFrequency = SYSCTL__uxGetAlternateClock();
        }
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uxDivisor += 1UL;
        if(0UL != uxEvenPrediver)
        {
            uxSystemFrequency /= uxEvenPrediver;
        }
        uxSystemFrequency /= uxDivisor;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *puxFrequency = (UBase_t) uxSystemFrequency;
    }
    return (enErrorReg);
}
