/**
 *
 * @file DMA_CH_DestinationIncrement.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_DestinationIncrement.h>

#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA_CH__vSetPrimaryDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_DST_INC enChannelDestinationIncrement)
{
    DMA_CH__vSetPrimaryControlGeneric(enChannel, (uint32_t) enChannelDestinationIncrement, DMACH_CHCTL_DSTINC_MASK, DMACH_CHCTL_R_DSTINC_BIT);
}

void DMA_CH__vSetAlternateDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_DST_INC enChannelDestinationIncrement)
{
    DMA_CH__vSetAlternateControlGeneric(enChannel, (uint32_t) enChannelDestinationIncrement, DMAALTCH_CHCTL_DSTINC_MASK, DMAALTCH_CHCTL_R_DSTINC_BIT);
}

void DMA_CH__vSetDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_DST_INC enChannelDestinationIncrement)
{
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure, (uint32_t) enChannelDestinationIncrement, DMACH_CHCTL_DSTINC_MASK, DMACH_CHCTL_R_DSTINC_BIT);
}

DMA_nCH_DST_INC DMA_CH__enGetPrimaryDestinationIncrement(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_DST_INC enReg = DMA_enCH_DST_INC_UNDEF;
    enReg = (DMA_nCH_DST_INC)DMA_CH__u32GetPrimaryControlGeneric(enChannel, DMACH_CHCTL_DSTINC_MASK, DMACH_CHCTL_R_DSTINC_BIT);
    return (enReg);
}

DMA_nCH_DST_INC DMA_CH__enGetAlternateDestinationIncrement(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_DST_INC enReg = DMA_enCH_DST_INC_UNDEF;
    enReg = (DMA_nCH_DST_INC) DMA_CH__u32GetAlternateControlGeneric(enChannel, DMAALTCH_CHCTL_DSTINC_MASK, DMAALTCH_CHCTL_R_DSTINC_BIT);
    return (enReg);
}

DMA_nCH_DST_INC DMA_CH__enGetDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    DMA_nCH_DST_INC enReg = DMA_enCH_DST_INC_UNDEF;
    enReg = (DMA_nCH_DST_INC) DMA_CH__u32GetControlGeneric(enChannel, enChannelStructure, DMACH_CHCTL_DSTINC_MASK, DMACH_CHCTL_R_DSTINC_BIT);
    return (enReg);
}
