/**
 *
 * @file ADC_Vref.c
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
 * @verbatim 6 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Vref.h>

#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC__enSetVoltageReference(ADC_nMODULE enModuleArg, ADC_nVREF enVoltageReferenceArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.u32Shift = ADC_CTL_R_VREF_BIT;
    stRegister.u32Mask = ADC_CTL_VREF_MASK;
    stRegister.uptrAddress = ADC_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enVoltageReferenceArg;
    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC__enGetVoltageReference(ADC_nMODULE enModuleArg, ADC_nVREF* penVoltageReferenceArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penVoltageReferenceArg)
    {
        stRegister.u32Shift = ADC_CTL_R_VREF_BIT;
        stRegister.u32Mask = ADC_CTL_VREF_MASK;
        stRegister.uptrAddress = ADC_CTL_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penVoltageReferenceArg = (ADC_nVREF) stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    return (enErrorReg);
}
