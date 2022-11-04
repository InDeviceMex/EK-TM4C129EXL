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

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Ready.h>
#include <xApplication_MCU/ADC/Interrupt/ADC_Interrupt.h>
#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

ADC_nERROR ADC__enInit(ADC_nMODULE enModuleArg)
{
    ADC_nERROR enErrorReg;
    UBase_t uxSequencerReg;
    ADC_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    uxSequencerReg = 0UL;
    enErrorReg = ADC__enSetReadyOnRunMode(enModuleArg);
    while((uxSequencerReg < (UBase_t) ADC_enSEQ_MAX) && (ADC_enERROR_OK == enErrorReg))
    {
        pfIrqVectorHandlerReg = ADC__pvfGetIRQVectorHandler(enModuleArg, (ADC_nSEQUENCER) uxSequencerReg);
        enErrorReg = ADC__enRegisterIRQVectorHandler(enModuleArg, (ADC_nSEQUENCER) uxSequencerReg, pfIrqVectorHandlerReg);
        uxSequencerReg++;
    }

    return (enErrorReg);
}

