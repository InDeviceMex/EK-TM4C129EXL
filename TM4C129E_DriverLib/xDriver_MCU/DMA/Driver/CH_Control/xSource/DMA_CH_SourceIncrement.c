/**
 *
 * @file DMA_CH_SourceIncrement.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_SourceIncrement.h>

#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA_CH__vSetPrimarySourceIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_SRC_INC enChannelSourceIncrement)
{
    DMA_CH__vSetPrimaryControlGeneric(enChannel, (uint32_t) enChannelSourceIncrement, DMACH_CHCTL_SRCINC_MASK, DMACH_CHCTL_R_SRCINC_BIT);
}

void DMA_CH__vSetAlternateSourceIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_SRC_INC enChannelSourceIncrement)
{
    DMA_CH__vSetAlternateControlGeneric(enChannel, (uint32_t) enChannelSourceIncrement, DMAALTCH_CHCTL_SRCINC_MASK, DMAALTCH_CHCTL_R_SRCINC_BIT);
}

void DMA_CH__vSetSourceIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_SRC_INC enChannelSourceIncrement)
{
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure, (uint32_t) enChannelSourceIncrement, DMACH_CHCTL_SRCINC_MASK, DMACH_CHCTL_R_SRCINC_BIT);
}

DMA_nCH_SRC_INC DMA_CH__enGetPrimarySourceIncrement(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_SRC_INC enReg = DMA_enCH_SRC_INC_UNDEF;
    enReg = (DMA_nCH_SRC_INC) DMA_CH__u32GetPrimaryControlGeneric(enChannel, DMACH_CHCTL_SRCINC_MASK, DMACH_CHCTL_R_SRCINC_BIT);
    return (enReg);
}

DMA_nCH_SRC_INC DMA_CH__enGetAlternateSourceIncrement(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_SRC_INC enReg = DMA_enCH_SRC_INC_UNDEF;
    enReg = (DMA_nCH_SRC_INC) DMA_CH__u32GetAlternateControlGeneric(enChannel, DMAALTCH_CHCTL_SRCINC_MASK, DMAALTCH_CHCTL_R_SRCINC_BIT);
    return (enReg);
}

DMA_nCH_SRC_INC DMA_CH__enGetSourceIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    DMA_nCH_SRC_INC enReg = DMA_enCH_SRC_INC_UNDEF;
    enReg = (DMA_nCH_SRC_INC) DMA_CH__u32GetControlGeneric(enChannel, enChannelStructure, DMACH_CHCTL_SRCINC_MASK, DMACH_CHCTL_R_SRCINC_BIT);
    return (enReg);
}
