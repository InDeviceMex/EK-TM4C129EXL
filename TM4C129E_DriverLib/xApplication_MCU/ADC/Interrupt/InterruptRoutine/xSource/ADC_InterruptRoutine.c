/**
 *
 * @file ADC_InterruptRoutine.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ADC/Interrupt/InterruptRoutine/ADC_InterruptRoutine.h>
#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Defines.h>

void (*ADC__pvIRQVectorHandler[(uint32_t)ADC_enMODULE_MAX][(uint32_t)ADC_enSEQ_MAX]) (void)=
{
 {&ADC0_SS0__vIRQVectorHandler,&ADC0_SS1__vIRQVectorHandler,
  &ADC0_SS2__vIRQVectorHandler,&ADC0_SS3__vIRQVectorHandler},

 {&ADC1_SS0__vIRQVectorHandler,&ADC1_SS1__vIRQVectorHandler,
  &ADC1_SS2__vIRQVectorHandler,&ADC1_SS3__vIRQVectorHandler},
};

void (*ADC__pvfGetIRQVectorHandler(ADC_nMODULE enADCModule, ADC_nSEQUENCER enADCSequencer))(void)
{
    return (ADC__pvIRQVectorHandler[(uint32_t) enADCModule][(uint32_t) enADCSequencer]);
}

void (**ADC__pvfGetIRQVectorHandlerPointer(ADC_nMODULE enADCModule, ADC_nSEQUENCER enADCSequencer))(void)
{
    return ((void(**)(void)) &ADC__pvIRQVectorHandler[(uint32_t) enADCModule][(uint32_t) enADCSequencer]);
}
