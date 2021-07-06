/**
 *
 * @file DMA_CH_ControlGeneric.h
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_CONTROLGENERIC_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_CONTROLGENERIC_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimaryControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);
void DMA_CH__vSetAlternateControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);
void DMA_CH__vSetControlGeneric(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

uint32_t DMA_CH__u32GetPrimaryControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32MaskFeature, uint32_t u32BitFeature);
uint32_t DMA_CH__u32GetAlternateControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32MaskFeature, uint32_t u32BitFeature);
uint32_t DMA_CH__u32GetControlGeneric(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_CONTROLGENERIC_H_ */
