/**
 *
 * @file DMA_CH_ControlGeneric.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>

#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA_CH__vSetPrimaryControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    DMA_CH__vWriteRegister( (uint32_t) DMACH_BASE, (uint32_t) enChannel, DMACH_CHCTL_OFFSET, u32FeatureValue, u32MaskFeature, u32BitFeature);
}

void DMA_CH__vSetAlternateControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    DMA_CH__vWriteRegister( (uint32_t) DMAALTCH_BASE, (uint32_t) enChannel, DMACH_CHCTL_OFFSET, u32FeatureValue, u32MaskFeature, u32BitFeature);
}

void DMA_CH__vSetControlGeneric(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    if(DMA_enCH_CTL_PRIMARY == enChannelStructure)
    {
        DMA_CH__vSetPrimaryControlGeneric(enChannel, u32FeatureValue, u32MaskFeature, u32BitFeature);
    }
    else
    {
        DMA_CH__vSetAlternateControlGeneric(enChannel, u32FeatureValue, u32MaskFeature, u32BitFeature);
    }
}

uint32_t DMA_CH__u32GetPrimaryControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32Reg = 0UL;
    u32Reg = DMA_CH__u32ReadRegister( (uint32_t) DMACH_BASE, (uint32_t) enChannel, DMACH_CHCTL_OFFSET, u32MaskFeature, u32BitFeature);
    return (u32Reg);
}

uint32_t DMA_CH__u32GetAlternateControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32Reg = 0UL;
    u32Reg = DMA_CH__u32ReadRegister( (uint32_t) DMAALTCH_BASE, (uint32_t) enChannel, DMACH_CHCTL_OFFSET, u32MaskFeature, u32BitFeature);
    return (u32Reg);
}

uint32_t DMA_CH__u32GetControlGeneric(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32Reg = 0UL;
    if(DMA_enCH_CTL_PRIMARY == enChannelStructure)
    {
        u32Reg = DMA_CH__u32GetPrimaryControlGeneric(enChannel, u32MaskFeature, u32BitFeature);
    }
    else
    {
        u32Reg = DMA_CH__u32GetAlternateControlGeneric(enChannel, u32MaskFeature, u32BitFeature);
    }
    return (u32Reg);
}
