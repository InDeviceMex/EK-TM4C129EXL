
/**
 *
 * @file ADC_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_ADC_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_ADC_INTERRUPTREGISTERIRQSOURCE_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC_Sample__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                           ADC_nMODULE enModule,
                                           ADC_nSEQUENCER enSequencer,
                                           ADC_nINT_SOURCE enIntSourceArg);
void ADC_Comp__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                         ADC_nMODULE enModule,
                                         ADC_nSEQUENCER enSequence,
                                         ADC_nCOMPARATOR enSeqComparator);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_ADC_INTERRUPTREGISTERIRQSOURCE_H_ */
