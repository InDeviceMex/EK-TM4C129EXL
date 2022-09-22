/**
 *
 * @file ADC_Init.c
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ADC/xHeader/ADC_Init.h>

#include <xApplication_MCU/ADC/Interrupt/ADC_Interrupt.h>
#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

ADC_nERROR ADC__enInit(ADC_nMODULE enModuleArg)
{
    ADC_nERROR enErrorReg;
    uint32_t u32SequencerReg;
    ADC_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    u32SequencerReg = 0UL;
    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) ADC_enMODULE_MAX);
    while((u32SequencerReg < (uint32_t) ADC_enSEQ_MAX) && (ADC_enERROR_OK == enErrorReg))
    {
        pfIrqVectorHandlerReg = ADC__pvfGetIRQVectorHandler(enModuleArg, (ADC_nSEQUENCER) u32SequencerReg);
        enErrorReg = ADC__enRegisterIRQVectorHandler(enModuleArg, (ADC_nSEQUENCER) u32SequencerReg, pfIrqVectorHandlerReg);
        u32SequencerReg++;
    }

    return (enErrorReg);
}

