/**
 *
 * @file ADC_Phase.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Phase.h>

#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC__enSetPhaseLag(ADC_nMODULE enModuleArg, ADC_nPHASE enPhaseArg)
{
    ADC_Register_t stRegister;
    stRegister.uxShift = ADC_SPC_R_PHASE_BIT;
    stRegister.uxMask = ADC_SPC_PHASE_MASK;
    stRegister.uptrAddress = ADC_SPC_OFFSET;
    stRegister.uxValue = (UBase_t) enPhaseArg;

    ADC_nERROR enErrorReg;
    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

ADC_nERROR ADC__enGetPhaseLag(ADC_nMODULE enModuleArg, ADC_nPHASE* penPhaseArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penPhaseArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;

    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = ADC_SPC_R_PHASE_BIT;
        stRegister.uxMask = ADC_SPC_PHASE_MASK;
        stRegister.uptrAddress = ADC_SPC_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penPhaseArg = (ADC_nPHASE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
