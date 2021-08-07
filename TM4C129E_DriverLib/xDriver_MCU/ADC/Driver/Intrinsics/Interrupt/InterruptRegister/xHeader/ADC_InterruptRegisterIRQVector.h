/**
 *
 * @file ADC_InterruptRegisterIRQVector.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_ADC_INTERRUPTREGISTERIRQVECTOR_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_ADC_INTERRUPTREGISTERIRQVECTOR_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),ADC_nMODULE enModule, ADC_nSEQUENCER enSequence);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_ADC_INTERRUPTREGISTERIRQVECTOR_H_ */
