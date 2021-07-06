/**
 *
 * @file DMA_CH_DestinationSize.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONSIZE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONSIZE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimaryDestinationSize(DMA_nCH_MODULE enChannel, DMA_nCH_DST_SIZE enChannelDestinationSize);
void DMA_CH__vSetAlternateDestinationSize(DMA_nCH_MODULE enChannel, DMA_nCH_DST_SIZE enChannelDestinationSize);
void DMA_CH__vSetDestinationSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_DST_SIZE enChannelDestinationSize);

DMA_nCH_DST_SIZE DMA_CH__enGetAlternateDestinationSize(DMA_nCH_MODULE enChannel);
DMA_nCH_DST_SIZE DMA_CH__enGetPrimaryDestinationSize(DMA_nCH_MODULE enChannel);
DMA_nCH_DST_SIZE DMA_CH__enGetDestinationSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONSIZE_H_ */
