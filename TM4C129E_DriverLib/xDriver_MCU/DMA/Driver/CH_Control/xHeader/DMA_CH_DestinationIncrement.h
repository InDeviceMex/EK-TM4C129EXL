/**
 *
 * @file DMA_CH_DestinationIncrement.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONINCREMENT_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONINCREMENT_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimaryDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_DST_INC enChannelDestinationIncrement);
void DMA_CH__vSetAlternateDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_DST_INC enChannelDestinationIncrement);
void DMA_CH__vSetDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_DST_INC enChannelDestinationIncrement);

DMA_nCH_DST_INC DMA_CH__enGetAlternateDestinationIncrement(DMA_nCH_MODULE enChannel);
DMA_nCH_DST_INC DMA_CH__enGetPrimaryDestinationIncrement(DMA_nCH_MODULE enChannel);
DMA_nCH_DST_INC DMA_CH__enGetDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONINCREMENT_H_ */
