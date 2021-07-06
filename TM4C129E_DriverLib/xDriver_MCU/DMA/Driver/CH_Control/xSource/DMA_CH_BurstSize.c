/**
 *
 * @file DMA_CH_BurstSize.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_BurstSize.h>

#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA_CH__vSetPrimaryBurstSize(DMA_nCH_MODULE enChannel, DMA_nCH_BURST_SIZE enChannelBurstSize)
{
    DMA_CH__vSetPrimaryControlGeneric(enChannel, (uint32_t) enChannelBurstSize, DMACH_CHCTL_ARBSIZE_MASK, DMACH_CHCTL_R_ARBSIZE_BIT);
}

void DMA_CH__vSetAlternateBurstSize(DMA_nCH_MODULE enChannel, DMA_nCH_BURST_SIZE enChannelBurstSize)
{
    DMA_CH__vSetAlternateControlGeneric(enChannel, (uint32_t) enChannelBurstSize, DMAALTCH_CHCTL_ARBSIZE_MASK, DMAALTCH_CHCTL_R_ARBSIZE_BIT);
}

void DMA_CH__vSetBurstSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_BURST_SIZE enChannelBurstSize)
{
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure, (uint32_t) enChannelBurstSize, DMACH_CHCTL_ARBSIZE_MASK, DMACH_CHCTL_R_ARBSIZE_BIT);
}

DMA_nCH_BURST_SIZE DMA_CH__enGetPrimaryBurstSize(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_BURST_SIZE enReg = DMA_enCH_BURST_SIZE_UNDEF;
    enReg = (DMA_nCH_BURST_SIZE) DMA_CH__u32GetPrimaryControlGeneric(enChannel, DMACH_CHCTL_ARBSIZE_MASK, DMACH_CHCTL_R_ARBSIZE_BIT);
    return (enReg);
}

DMA_nCH_BURST_SIZE DMA_CH__enGetAlternateBurstSize(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_BURST_SIZE enReg = DMA_enCH_BURST_SIZE_UNDEF;
    enReg = (DMA_nCH_BURST_SIZE) DMA_CH__u32GetAlternateControlGeneric(enChannel, DMAALTCH_CHCTL_ARBSIZE_MASK, DMAALTCH_CHCTL_R_ARBSIZE_BIT);
    return (enReg);
}

DMA_nCH_BURST_SIZE DMA_CH__enGetBurstSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    DMA_nCH_BURST_SIZE enReg = DMA_enCH_BURST_SIZE_UNDEF;
    enReg = (DMA_nCH_BURST_SIZE) DMA_CH__u32GetControlGeneric(enChannel, enChannelStructure, DMACH_CHCTL_ARBSIZE_MASK, DMACH_CHCTL_R_ARBSIZE_BIT);
    return (enReg);
}
