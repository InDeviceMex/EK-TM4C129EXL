/**
 *
 * @file ADC_InterruptRoutine.c
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
 * @verbatim 20 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/ADC_InterruptRoutine.h>

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>
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

