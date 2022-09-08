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

    stRegister.u32Shift = ADC_CC_R_CS_BIT;
    stRegister.u32Mask = ADC_CC_CS_MASK;
    stRegister.uptrAddress = ADC_CC_OFFSET;
    stRegister.u32Value = (uint32_t) enClockSourceArg;
    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC__enGetClockSource(ADC_nMODULE enModuleArg, ADC_nCLOCK* penClockSourceArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penClockSourceArg)
    {
        stRegister.u32Shift = ADC_CC_R_CS_BIT;
        stRegister.u32Mask = ADC_CC_CS_MASK;
        stRegister.uptrAddress = ADC_CC_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penClockSourceArg = (ADC_nCLOCK) stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    return (enErrorReg);
}


ADC_nERROR ADC__enSetVCODivisor(ADC_nMODULE enModuleArg, uint32_t u32VCODivisorArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.u32Shift = ADC_CC_R_CLKDIV_BIT;
    stRegister.u32Mask = ADC_CC_CLKDIV_MASK;
    stRegister.uptrAddress = ADC_CC_OFFSET;
    stRegister.u32Value = u32VCODivisorArg;
    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC__enGetVCODivisor(ADC_nMODULE enModuleArg, uint32_t* pu32VCODivisorArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32VCODivisorArg)
    {
        stRegister.u32Shift = ADC_CC_R_CLKDIV_BIT;
        stRegister.u32Mask = ADC_CC_CLKDIV_MASK;
        stRegister.uptrAddress = ADC_CC_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *pu32VCODivisorArg = stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    return (enErrorReg);
}

