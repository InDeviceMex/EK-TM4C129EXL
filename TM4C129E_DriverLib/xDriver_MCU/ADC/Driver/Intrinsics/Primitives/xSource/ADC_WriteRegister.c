/**
 *
 * @file ADC_WriteRegister.c
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/xHeader/ADC_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC__enWriteRegister(ADC_nMODULE enModuleArg, ADC_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    ADC_nERROR enErrorReg;
    if(0UL != (uint32_t) pstRegisterDataArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) ADC_enMODULE_MAX);
        if(ADC_enERROR_OK == enErrorReg)
        {
            uptrModuleBase = ADC__uptrBlockBaseAddress(enModuleArg);
            pstRegisterDataArg->uptrAddress += uptrModuleBase;
            enErrorReg = (ADC_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}
