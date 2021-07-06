/**
 *
 * @file DMA_CH_ControlWorld.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_CONTROLWORLD_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_CONTROLWORLD_H_

#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA_CH__vSetPrimaryControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef stChannelControlWorld);
void DMA_CH__vSetAlternateControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef stChannelControlWorld);
void DMA_CH__vSetControlWorld(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMACHCTL_TypeDef stChannelControlWorld);

void DMA_CH__vSetPrimaryControlWorldInteger(DMA_nCH_MODULE enChannel, uint32_t u32ChannelControlWorld);
void DMA_CH__vSetAlternateControlWorldInteger(DMA_nCH_MODULE enChannel, uint32_t u32ChannelControlWorld);
void DMA_CH__vSetControlWorldInteger(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32ChannelControlWorld);

uint32_t DMA_CH__u32GetAlternateControlWorld(DMA_nCH_MODULE enChannel);
uint32_t DMA_CH__u32GetPrimaryControlWorld(DMA_nCH_MODULE enChannel);
uint32_t DMA_CH__u32GetControlWorld(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

void DMA_CH__vGetAlternateControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef* pstChannelControlWorld);
void DMA_CH__vGetPrimaryControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef* pstChannelControlWorld);
void DMA_CH__vGetControlWorld(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMACHCTL_TypeDef* pstChannelControlWorld);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_CONTROLWORLD_H_ */
