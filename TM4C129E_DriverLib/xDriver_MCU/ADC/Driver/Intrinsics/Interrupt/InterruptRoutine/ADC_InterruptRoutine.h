/**
 *
 * @file ADC_InterruptRoutine.h
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
 * @verbatim 19 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_ADC_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_ADC_INTERRUPTROUTINE_H_

#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/ADC_InterruptRoutine_Vector_Module0.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module1/ADC_InterruptRoutine_Vector_Module1.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>

void (*ADC__pvfGetIRQVectorHandler(ADC_nMODULE enADCModule, ADC_nSEQUENCER enADCSequencer))(void);
void (**ADC__pvfGetIRQVectorHandlerPointer(ADC_nMODULE enADCModule, ADC_nSEQUENCER enADCSequencer))(void);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_ADC_INTERRUPTROUTINE_H_ */
