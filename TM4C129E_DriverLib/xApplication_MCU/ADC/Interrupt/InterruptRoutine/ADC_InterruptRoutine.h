/**
 *
 * @file ADC_InterruptRoutine.h
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

#ifndef XAPPLICATION_MCU_ADC_INTERRUPT_INTERRUPTROUTINE_ADC_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_ADC_INTERRUPT_INTERRUPTROUTINE_ADC_INTERRUPTROUTINE_H_

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Defines.h>
#include <xApplication_MCU/ADC/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/ADC_InterruptRoutine_Vector_Module0.h>
#include <xApplication_MCU/ADC/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module1/ADC_InterruptRoutine_Vector_Module1.h>

ADC_pvfIRQVectorHandler_t ADC__pvfGetIRQVectorHandler(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg);
ADC_pvfIRQVectorHandler_t* ADC__pvfGetIRQVectorHandlerPointer(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg);

#endif /* XAPPLICATION_MCU_ADC_INTERRUPT_INTERRUPTROUTINE_ADC_INTERRUPTROUTINE_H_ */
