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

#include <xApplication_MCU/ADC/Interrupt/InterruptRegister/ADC_InterruptRegister.h>
#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

void ADC__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = ADC__pvfGetIRQVectorHandler(ADC_enMODULE_0, ADC_enSEQ_0);
    ADC__vRegisterIRQVectorHandler( pfIrqVectorHandler, ADC_enMODULE_0, ADC_enSEQ_0);

    pfIrqVectorHandler = ADC__pvfGetIRQVectorHandler(ADC_enMODULE_0, ADC_enSEQ_1);
    ADC__vRegisterIRQVectorHandler( pfIrqVectorHandler, ADC_enMODULE_0, ADC_enSEQ_1);

    pfIrqVectorHandler = ADC__pvfGetIRQVectorHandler(ADC_enMODULE_0, ADC_enSEQ_2);
    ADC__vRegisterIRQVectorHandler( pfIrqVectorHandler, ADC_enMODULE_0, ADC_enSEQ_2);

    pfIrqVectorHandler = ADC__pvfGetIRQVectorHandler(ADC_enMODULE_0, ADC_enSEQ_3);
    ADC__vRegisterIRQVectorHandler( pfIrqVectorHandler, ADC_enMODULE_0, ADC_enSEQ_3);

    pfIrqVectorHandler = ADC__pvfGetIRQVectorHandler(ADC_enMODULE_1, ADC_enSEQ_0);
    ADC__vRegisterIRQVectorHandler( pfIrqVectorHandler, ADC_enMODULE_1, ADC_enSEQ_0);

    pfIrqVectorHandler = ADC__pvfGetIRQVectorHandler(ADC_enMODULE_1, ADC_enSEQ_1);
    ADC__vRegisterIRQVectorHandler( pfIrqVectorHandler, ADC_enMODULE_1, ADC_enSEQ_1);

    pfIrqVectorHandler = ADC__pvfGetIRQVectorHandler(ADC_enMODULE_1, ADC_enSEQ_2);
    ADC__vRegisterIRQVectorHandler( pfIrqVectorHandler, ADC_enMODULE_1, ADC_enSEQ_2);

    pfIrqVectorHandler = ADC__pvfGetIRQVectorHandler(ADC_enMODULE_1, ADC_enSEQ_3);
    ADC__vRegisterIRQVectorHandler( pfIrqVectorHandler, ADC_enMODULE_1, ADC_enSEQ_3);
}



