/**
 *
 * @file DMA_CH_ControlWorld.c
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
 * @verbatim 21 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlWorld.h>

#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA_CH__vSetPrimaryControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef stChannelControlWorld)
{
    volatile uint32_t *pu32Reg = (volatile uint32_t*) &stChannelControlWorld;
    DMA_CH__vSetPrimaryControlGeneric(enChannel, (uint32_t) *pu32Reg, 0xFFFFFFFFUL, 0UL);
}

void DMA_CH__vSetAlternateControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef stChannelControlWorld)
{
    volatile uint32_t* pu32Reg = (volatile uint32_t*) &stChannelControlWorld;
    DMA_CH__vSetAlternateControlGeneric(enChannel, (uint32_t) *pu32Reg, 0xFFFFFFFFUL, 0UL);
}

void DMA_CH__vSetControlWorld(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMACHCTL_TypeDef stChannelControlWorld)
{
    volatile uint32_t* pu32Reg = (volatile uint32_t*) &stChannelControlWorld;
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure, (uint32_t) *pu32Reg, 0xFFFFFFFFUL, 0UL);
}

void DMA_CH__vSetPrimaryControlWorldInteger(DMA_nCH_MODULE enChannel, uint32_t u32ChannelControlWorld)
{
    DMA_CH__vSetPrimaryControlGeneric(enChannel, u32ChannelControlWorld, 0xFFFFFFFFUL, 0UL);
}

void DMA_CH__vSetAlternateControlWorldInteger(DMA_nCH_MODULE enChannel, uint32_t u32ChannelControlWorld)
{
    DMA_CH__vSetAlternateControlGeneric(enChannel, u32ChannelControlWorld, 0xFFFFFFFFUL, 0UL);
}

void DMA_CH__vSetControlWorldInteger(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32ChannelControlWorld)
{
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure, u32ChannelControlWorld, 0xFFFFFFFFUL, 0UL);
}

uint32_t DMA_CH__u32GetPrimaryControlWorld(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Reg = 0UL;
    u32Reg = DMA_CH__u32GetPrimaryControlGeneric(enChannel, 0xFFFFFFFFUL, 0UL);
    return (u32Reg);
}

uint32_t DMA_CH__u32GetAlternateControlWorld(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Reg = 0UL;
    u32Reg = DMA_CH__u32GetAlternateControlGeneric(enChannel, 0xFFFFFFFFUL, 0UL);
    return (u32Reg);
}

uint32_t DMA_CH__u32GetControlWorld(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    uint32_t u32Reg = 0UL;
    u32Reg = DMA_CH__u32GetControlGeneric(enChannel, enChannelStructure, 0xFFFFFFFFUL, 0UL);
    return (u32Reg);
}

void DMA_CH__vGetPrimaryControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef* pstChannelControlWorld)
{
    uint32_t u32Reg = 0UL;
    volatile uint32_t* pu32Reg = (volatile uint32_t*) 0UL;
    if(0UL != (uint32_t) pstChannelControlWorld)
    {
        pu32Reg = (volatile uint32_t*) pstChannelControlWorld;
        u32Reg = DMA_CH__u32GetPrimaryControlWorld(enChannel);
        *pu32Reg = u32Reg;
    }
}

void DMA_CH__vGetAlternateControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef* pstChannelControlWorld)
{
    uint32_t u32Reg = 0UL;
    volatile uint32_t* pu32Reg = (volatile uint32_t*) 0UL;
    if(0UL != (uint32_t) pstChannelControlWorld)
    {
        pu32Reg = (volatile uint32_t*) pstChannelControlWorld;
        u32Reg = DMA_CH__u32GetAlternateControlWorld(enChannel);
        *pu32Reg = u32Reg;
    }
}

void DMA_CH__vGetControlWorld(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMACHCTL_TypeDef* pstChannelControlWorld)
{
    uint32_t u32Reg = 0UL;
    volatile uint32_t* pu32Reg = (volatile uint32_t*) 0UL;
    if(0UL != (uint32_t) pstChannelControlWorld)
    {
        pu32Reg = (volatile uint32_t*) pstChannelControlWorld;
        u32Reg = DMA_CH__u32GetControlWorld(enChannel, enChannelStructure);
        *pu32Reg = u32Reg;
    }
}
