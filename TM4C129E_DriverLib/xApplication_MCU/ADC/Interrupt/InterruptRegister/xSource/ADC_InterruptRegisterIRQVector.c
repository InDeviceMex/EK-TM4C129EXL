/**
 *
 * @file ADC_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/ADC/Interrupt/InterruptRegister/xHeader/ADC_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/ADC/Interrupt/InterruptRoutine/ADC_InterruptRoutine.h>
#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

void ADC__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),ADC_nMODULE enModule,
                                    ADC_nSEQUENCER enSequence)
{
    SCB_nVECISR enVector = SCB_enVECISR_ADC0SEQ0;
    uint32_t u32Module = 0UL;
    uint32_t u32Sequencer = 0UL;

    const SCB_nVECISR SCB_enVECISR_ADC[(uint32_t)ADC_enMODULE_MAX][(uint32_t)ADC_enSEQ_MAX] =
    {
        { SCB_enVECISR_ADC0SEQ0, SCB_enVECISR_ADC0SEQ1,
          SCB_enVECISR_ADC0SEQ2, SCB_enVECISR_ADC0SEQ3},
        { SCB_enVECISR_ADC1SEQ0, SCB_enVECISR_ADC1SEQ1,
          SCB_enVECISR_ADC1SEQ2, SCB_enVECISR_ADC1SEQ3}
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
        u32Sequencer = MCU__u32CheckParams((uint32_t) enSequence, (uint32_t) ADC_enSEQ_MAX);
        enVector = SCB_enVECISR_ADC[u32Module][u32Sequencer];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler,
           ADC__pvfGetIRQVectorHandlerPointer((ADC_nMODULE) u32Module,
                                              (ADC_nSEQUENCER) u32Sequencer),
            enVector);
    }
}
