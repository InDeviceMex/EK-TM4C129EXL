/**
 *
 * @file ADC_Sample_Generic.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_GENERIC_H_
#define XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_GENERIC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetSampleGeneric(uint32_t u32Module, uint32_t  u32Sequencer, uint32_t u32OffsetRegister, uint32_t u32MuxInput, uint32_t u32Feature, uint32_t u32FeatureMask, uint32_t u32FeatureBitAdd);
uint32_t ADC__u32GetSampleGeneric(uint32_t u32Module, uint32_t  u32Sequencer, uint32_t u32OffsetRegister, uint32_t u32MuxInput, uint32_t u32FeatureMask, uint32_t u32FeatureBitAdd);

#endif /* XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_GENERIC_H_ */
