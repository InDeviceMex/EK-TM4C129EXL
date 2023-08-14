/**
 *
 * @file PWM_Clock.c
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/General/xHeader/PWM_Clock.h>

#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM__enSetClockSource(PWM_nMODULE enModuleArg, PWM_nCLOCK enClockArg)
{
    PWM_Register_t stRegister;
    stRegister.uxShift = PWM_CC_R_USEPWM_BIT;
    stRegister.uxMask = PWM_CC_USEPWM_MASK;
    stRegister.uptrAddress = PWM_CC_OFFSET;
    stRegister.uxValue = (UBase_t) enClockArg;

    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

PWM_nERROR PWM__enGetClockSource(PWM_nMODULE enModuleArg, PWM_nCLOCK* penClockArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penClockArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_CC_R_USEPWM_BIT;
        stRegister.uxMask = PWM_CC_USEPWM_MASK;
        stRegister.uptrAddress = PWM_CC_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penClockArg = (PWM_nCLOCK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enSetClockDivisor(PWM_nMODULE enModuleArg, PWM_nCLOCK_DIV enDivisorArg)
{
    PWM_Register_t stRegister;
    stRegister.uxShift = PWM_CC_R_PWMDIV_BIT;
    stRegister.uxMask = PWM_CC_PWMDIV_MASK;
    stRegister.uptrAddress = PWM_CC_OFFSET;
    stRegister.uxValue = (UBase_t) enDivisorArg;

    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

PWM_nERROR PWM__enGetClockDivisor(PWM_nMODULE enModuleArg, PWM_nCLOCK_DIV* penDivisorArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penDivisorArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_CC_R_PWMDIV_BIT;
        stRegister.uxMask = PWM_CC_PWMDIV_MASK;
        stRegister.uptrAddress = PWM_CC_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penDivisorArg = (PWM_nCLOCK_DIV) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enSetClockDivisorInteger(PWM_nMODULE enModuleArg, UBase_t uxDivisorArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = ((0UL == uxDivisorArg) || (64UL < uxDivisorArg)) ? PWM_enERROR_VALUE : PWM_enERROR_OK;
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (1UL == uxDivisorArg) ?
                PWM__enSetClockSource(enModuleArg, PWM_enCLOCK_SYSCLK) :
                PWM__enSetClockSource(enModuleArg, PWM_enCLOCK_DIVIDER);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = PWM_enCLOCK_DIV_2;
        if(1UL != uxDivisorArg)
        {
            UBase_t uxCountReg = 0UL;
            UBase_t uxDivisorReg = uxDivisorArg;
            do
            {
                uxDivisorReg >>= 1UL;
                if(1UL & uxDivisorReg)
                {
                    uxValueReg = uxCountReg;
                }
                uxCountReg++;
            }while(0UL != uxDivisorReg);
        }
        enErrorReg = PWM__enSetClockDivisor(enModuleArg, (PWM_nCLOCK_DIV) uxValueReg);
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enGetClockDivisorInteger(PWM_nMODULE enModuleArg, UBase_t* puxDivisorArg)
{

    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxDivisorArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

    PWM_nCLOCK enClockReg;
    enClockReg = PWM_enCLOCK_SYSCLK;
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM__enGetClockSource(enModuleArg, &enClockReg);
    }

    PWM_nCLOCK_DIV enClockDividerReg;
    enClockDividerReg = PWM_enCLOCK_DIV_2;
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM__enGetClockDivisor(enModuleArg, &enClockDividerReg);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxDivisorReg = 1UL;
        if(PWM_enCLOCK_SYSCLK != enClockReg)
        {
            uxDivisorReg = 2UL;
            uxDivisorReg <<= (UBase_t) enClockDividerReg;
        }
        *puxDivisorArg = (UBase_t) uxDivisorReg;
    }
    return (enErrorReg);
}
