/**
 *
 * @file PWM_Period.c
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
 * @verbatim 25 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/PWM/xHeader/PWM_Period.h>

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

PWM_nERROR PWM_Generator__enSetPeriod_us(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                             UBase_t uxPeriodArg)
{
    PWM_nERROR enErrorReg;
    UBase_t uxDivisor;
    UBase_t uxSysClk;
    uint64_t u64LoadValue;
    UBase_t uxLoadValue;
    PWM_nDIRECTION enDirectionReg;


    enDirectionReg = PWM_enDIRECTION_DOWN;
    u64LoadValue = 0ULL;
    uxLoadValue = 0UL;
    uxSysClk = 0UL;
    uxDivisor = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == uxPeriodArg)
    {
        enErrorReg = PWM_enERROR_VALUE;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM__enGetClockDivisorInteger(enModuleArg, &uxDivisor);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM_Generator__enGetDirectionByNumber(enModuleArg, enGeneratorArg, &enDirectionReg);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) SYSCTL__enGetSystemClockFrequency(SYSCTL_enMODULE_0, &uxSysClk);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {

        u64LoadValue =  (uint64_t) uxSysClk;
        u64LoadValue *= uxPeriodArg;
        u64LoadValue /= uxDivisor;
        u64LoadValue /= 1000000UL;

        uxLoadValue = (UBase_t) u64LoadValue;
        if(PWM_enDIRECTION_DOWN == enDirectionReg)
        {
            uxLoadValue -= 1UL;
        }
        else
        {
            uxLoadValue /= 2UL;
        }
        if(0xFFFFUL < uxLoadValue)
        {
            enErrorReg = PWM_enERROR_VALUE;
        }
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM_Generator__enSetLoadValueByNumber(enModuleArg, enGeneratorArg, uxLoadValue);
    }

    return (enErrorReg);

}

PWM_nERROR PWM_Generator__enGetPeriod_us(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t* puxPeriodArg)
{
    PWM_nDIRECTION enDirectionReg;
    PWM_nERROR enErrorReg;
    UBase_t uxSysClk;
    uint64_t u64PeriodValue;
    UBase_t uxPeriodValue;
    UBase_t uxLoadValue;
    UBase_t uxDivisor;


    enDirectionReg = PWM_enDIRECTION_DOWN;
    uxDivisor = 0UL;
    uxPeriodValue = 0UL;
    u64PeriodValue = 0ULL;
    uxLoadValue = 0UL;
    uxSysClk = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) puxPeriodArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM__enGetClockDivisorInteger(enModuleArg, &uxDivisor);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM_Generator__enGetLoadValueByNumber(enModuleArg, enGeneratorArg, &uxLoadValue);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM_Generator__enGetDirectionByNumber(enModuleArg, enGeneratorArg, &enDirectionReg);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) SYSCTL__enGetSystemClockFrequency(SYSCTL_enMODULE_0, &uxSysClk);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(PWM_enDIRECTION_DOWN == enDirectionReg)
        {
            uxLoadValue += 1UL;
        }
        else
        {
            uxLoadValue *= 2UL;
        }
        u64PeriodValue =  (uint64_t) uxLoadValue;
        u64PeriodValue *= 1000000UL;
        u64PeriodValue *= uxDivisor;
        u64PeriodValue /= uxSysClk;

        uxPeriodValue = (UBase_t) u64PeriodValue;

    }

    if(PWM_enERROR_OK == enErrorReg)
    {
        *puxPeriodArg = uxPeriodValue;
    }
    return (enErrorReg);
}

