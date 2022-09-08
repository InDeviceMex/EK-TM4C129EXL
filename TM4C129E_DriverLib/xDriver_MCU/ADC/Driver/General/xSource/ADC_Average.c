/**
 *
 * @file ADC_Average.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Average.h>

#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC__enSetAverageSampling(ADC_nMODULE enModuleArg, ADC_nAVERAGE enAverageArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.u32Shift = ADC_SAC_R_AVG_BIT;
    stRegister.u32Mask = ADC_SAC_AVG_MASK;
    stRegister.uptrAddress = ADC_SAC_OFFSET;
    stRegister.u32Value = (uint32_t) enAverageArg;
    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}


ADC_nERROR ADC__enGetAverageSampling(ADC_nMODULE enModuleArg, ADC_nAVERAGE* penAverageArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penAverageArg)
    {
        stRegister.u32Shift = ADC_SAC_R_AVG_BIT;
        stRegister.u32Mask = ADC_SAC_AVG_MASK;
        stRegister.uptrAddress = ADC_SAC_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penAverageArg = (ADC_nAVERAGE) stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    return (enErrorReg);
}

