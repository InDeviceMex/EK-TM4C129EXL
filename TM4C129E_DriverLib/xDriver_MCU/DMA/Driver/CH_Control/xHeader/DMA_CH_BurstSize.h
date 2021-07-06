/**
 *
 * @file DMA_CH_BurstSize.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURSTSIZE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURSTSIZE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimaryBurstSize(DMA_nCH_MODULE enChannel, DMA_nCH_BURST_SIZE enChannelBurstSize);
void DMA_CH__vSetAlternateBurstSize(DMA_nCH_MODULE enChannel, DMA_nCH_BURST_SIZE enChannelBurstSize);
void DMA_CH__vSetBurstSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_BURST_SIZE enChannelBurstSize);

DMA_nCH_BURST_SIZE DMA_CH__enGetAlternateBurstSize(DMA_nCH_MODULE enChannel);
DMA_nCH_BURST_SIZE DMA_CH__enGetPrimaryBurstSize(DMA_nCH_MODULE enChannel);
DMA_nCH_BURST_SIZE DMA_CH__enGetBurstSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURSTSIZE_H_ */
