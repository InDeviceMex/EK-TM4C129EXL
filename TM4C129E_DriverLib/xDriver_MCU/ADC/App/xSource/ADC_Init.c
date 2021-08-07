/**
 *
 * @file ADC_Init.c
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
 * @verbatim 21 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/App/xHeader/ADC_Init.h>

#include <xDriver_MCU/ADC/Driver/ADC_Driver.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vInit(void)
{
    ADC__vRegisterIRQVectorHandler( &ADC0_SS0__vIRQVectorHandler, ADC_enMODULE_0, ADC_enSEQ_0);
    ADC__vRegisterIRQVectorHandler( &ADC0_SS1__vIRQVectorHandler, ADC_enMODULE_0, ADC_enSEQ_1);
    ADC__vRegisterIRQVectorHandler( &ADC0_SS2__vIRQVectorHandler, ADC_enMODULE_0, ADC_enSEQ_2);
    ADC__vRegisterIRQVectorHandler( &ADC0_SS3__vIRQVectorHandler, ADC_enMODULE_0, ADC_enSEQ_3);

    ADC__vRegisterIRQVectorHandler( &ADC1_SS0__vIRQVectorHandler, ADC_enMODULE_1, ADC_enSEQ_0);
    ADC__vRegisterIRQVectorHandler( &ADC1_SS1__vIRQVectorHandler, ADC_enMODULE_1, ADC_enSEQ_1);
    ADC__vRegisterIRQVectorHandler( &ADC1_SS2__vIRQVectorHandler, ADC_enMODULE_1, ADC_enSEQ_2);
    ADC__vRegisterIRQVectorHandler( &ADC1_SS3__vIRQVectorHandler, ADC_enMODULE_1, ADC_enSEQ_3);
}
