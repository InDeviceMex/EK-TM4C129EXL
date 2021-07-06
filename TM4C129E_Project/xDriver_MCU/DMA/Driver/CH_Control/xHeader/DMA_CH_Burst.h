/**
 *
 * @file DMA_CH_Burst.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURST_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURST_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimaryBurst(DMA_nCH_MODULE enChannel, DMA_nCH_BURST enChannelBurst);
void DMA_CH__vSetAlternateBurst(DMA_nCH_MODULE enChannel, DMA_nCH_BURST enChannelBurst);
void DMA_CH__vSetBurst(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_BURST enChannelBurst);

DMA_nCH_BURST DMA_CH__enGetAlternateBurst(DMA_nCH_MODULE enChannel);
DMA_nCH_BURST DMA_CH__enGetPrimaryBurst(DMA_nCH_MODULE enChannel);
DMA_nCH_BURST DMA_CH__enGetBurst(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURST_H_ */
