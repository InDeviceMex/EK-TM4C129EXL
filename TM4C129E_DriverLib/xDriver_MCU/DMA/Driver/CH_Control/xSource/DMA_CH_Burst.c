/**
 *
 * @file DMA_CH_Burst.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_Burst.h>

#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA_CH__vSetPrimaryBurst(DMA_nCH_MODULE enChannel, DMA_nCH_BURST enChannelBurst)
{
    DMA_CH__vSetPrimaryControlGeneric(enChannel, (uint32_t) enChannelBurst, DMACH_CHCTL_NXTUSEBURST_MASK, DMACH_CHCTL_R_NXTUSEBURST_BIT);
}

void DMA_CH__vSetAlternateBurst(DMA_nCH_MODULE enChannel, DMA_nCH_BURST enChannelBurst)
{
    DMA_CH__vSetAlternateControlGeneric(enChannel, (uint32_t) enChannelBurst, DMAALTCH_CHCTL_NXTUSEBURST_MASK, DMAALTCH_CHCTL_R_NXTUSEBURST_BIT);
}

void DMA_CH__vSetBurst(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_BURST enChannelBurst)
{
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure, (uint32_t) enChannelBurst, DMACH_CHCTL_NXTUSEBURST_MASK, DMACH_CHCTL_R_NXTUSEBURST_BIT);
}

DMA_nCH_BURST DMA_CH__enGetPrimaryBurst(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_BURST enReg = DMA_enCH_BURST_UNDEF;
    enReg = (DMA_nCH_BURST)DMA_CH__u32GetPrimaryControlGeneric(enChannel, DMACH_CHCTL_NXTUSEBURST_MASK, DMACH_CHCTL_R_NXTUSEBURST_BIT);
    return (enReg);
}

DMA_nCH_BURST DMA_CH__enGetAlternateBurst(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_BURST enReg = DMA_enCH_BURST_UNDEF;
    enReg = (DMA_nCH_BURST) DMA_CH__u32GetAlternateControlGeneric(enChannel, DMAALTCH_CHCTL_NXTUSEBURST_MASK, DMAALTCH_CHCTL_R_NXTUSEBURST_BIT);
    return (enReg);
}

DMA_nCH_BURST DMA_CH__enGetBurst(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    DMA_nCH_BURST enReg = DMA_enCH_BURST_UNDEF;
    enReg = (DMA_nCH_BURST) DMA_CH__u32GetControlGeneric(enChannel, enChannelStructure, DMACH_CHCTL_NXTUSEBURST_MASK, DMACH_CHCTL_R_NXTUSEBURST_BIT);
    return (enReg);
}
