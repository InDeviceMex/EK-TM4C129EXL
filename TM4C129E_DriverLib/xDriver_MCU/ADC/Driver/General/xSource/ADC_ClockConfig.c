/**
 *
 * @file ADC_ClockConfig.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_ClockConfig.h>

#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC__enSetClockSource(ADC_nMODULE enModuleArg, ADC_nCLOCK enClockSourceArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.uxShift = ADC_CC_R_CS_BIT;
    stRegister.uxMask = ADC_CC_CS_MASK;
    stRegister.uptrAddress = ADC_CC_OFFSET;
    stRegister.uxValue = (UBase_t) enClockSourceArg;
    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC__enGetClockSource(ADC_nMODULE enModuleArg, ADC_nCLOCK* penClockSourceArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penClockSourceArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = ADC_CC_R_CS_BIT;
        stRegister.uxMask = ADC_CC_CS_MASK;
        stRegister.uptrAddress = ADC_CC_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *penClockSourceArg = (ADC_nCLOCK) stRegister.uxValue;
    }
    return (enErrorReg);
}


ADC_nERROR ADC__enSetVCODivisor(ADC_nMODULE enModuleArg, UBase_t uxVCODivisorArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.uxShift = ADC_CC_R_CLKDIV_BIT;
    stRegister.uxMask = ADC_CC_CLKDIV_MASK;
    stRegister.uptrAddress = ADC_CC_OFFSET;
    stRegister.uxValue = uxVCODivisorArg;
    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC__enGetVCODivisor(ADC_nMODULE enModuleArg, UBase_t* puxVCODivisorArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) puxVCODivisorArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = ADC_CC_R_CLKDIV_BIT;
        stRegister.uxMask = ADC_CC_CLKDIV_MASK;
        stRegister.uptrAddress = ADC_CC_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *puxVCODivisorArg = stRegister.uxValue;
    }
    return (enErrorReg);
}

