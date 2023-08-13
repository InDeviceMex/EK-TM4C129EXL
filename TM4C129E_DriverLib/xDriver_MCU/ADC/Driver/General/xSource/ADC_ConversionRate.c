/**
 *
 * @file ADC_ConversionRate.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_ConversionRate.h>

#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC__enSetConversionRate(ADC_nMODULE enModuleArg, ADC_nCONVERSION_RATE enConversionRateArg)
{
    ADC_Register_t stRegister;
    stRegister.uxShift = ADC_PC_R_MCR_BIT;
    stRegister.uxMask = ADC_PC_MCR_MASK;
    stRegister.uptrAddress = ADC_PC_OFFSET;
    stRegister.uxValue = (UBase_t) enConversionRateArg;

    ADC_nERROR enErrorReg;
    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

ADC_nERROR ADC__enGetConversionRate(ADC_nMODULE enModuleArg, ADC_nCONVERSION_RATE* penConversionRateArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penConversionRateArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;

    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = ADC_PC_R_MCR_BIT;
        stRegister.uxMask = ADC_PC_MCR_MASK;
        stRegister.uptrAddress = ADC_PC_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penConversionRateArg = (ADC_nCONVERSION_RATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
