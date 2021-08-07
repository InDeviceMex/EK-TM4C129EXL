/**
 *
 * @file ADC_Sequencer_Generic.h
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
 * @verbatim 23 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_GENERIC_H_
#define XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_GENERIC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetSequencerGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32Feature, uint32_t u32FeatureBit);
void ADC__vSetSequencerGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32Feature, uint32_t u32FeatureMask, uint32_t u32FeatureBitMult, uint32_t u32FeatureBitAdd);

uint32_t ADC__u32GetSequencerGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32FeatureBit);
uint32_t ADC__u32GetSequencerGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32FeatureMask, uint32_t u32FeatureBitMult, uint32_t u32FeatureBitAdd);

#endif /* XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_GENERIC_H_ */
