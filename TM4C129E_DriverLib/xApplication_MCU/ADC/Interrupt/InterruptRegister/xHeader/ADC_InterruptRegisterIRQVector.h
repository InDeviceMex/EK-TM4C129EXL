/**
 *
 * @file ADC_InterruptRegisterIRQVector.h
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

#ifndef XAPPLICATION_MCU_ADC_INTERRUPT_INTERRUPTREGISTER_XHEADER_ADC_INTERRUPTREGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_ADC_INTERRUPT_INTERRUPTREGISTER_XHEADER_ADC_INTERRUPTREGISTERIRQVECTOR_H_

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Defines.h>

void ADC__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),ADC_nMODULE enModule, ADC_nSEQUENCER enSequence);

#endif /* XAPPLICATION_MCU_ADC_INTERRUPT_INTERRUPTREGISTER_XHEADER_ADC_INTERRUPTREGISTERIRQVECTOR_H_ */
