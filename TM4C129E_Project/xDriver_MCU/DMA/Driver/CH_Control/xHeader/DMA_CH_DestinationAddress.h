/**
 *
 * @file DMA_CH_DestinationAddress.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONADDRESS_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONADDRESS_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetAlternateDestEndAddress(DMA_nCH_MODULE enChannel, uint32_t u32DestAddress);
void DMA_CH__vSetPrimaryDestEndAddress(DMA_nCH_MODULE enChannel, uint32_t u32DestAddress);
void DMA_CH__vSetDestEndAddress(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32DestAddress);

uint32_t DMA_CH__u32GetPrimaryDestEndAddress(DMA_nCH_MODULE enChannel);
uint32_t DMA_CH__u32GetAlternateDestEndAddress(DMA_nCH_MODULE enChannel);
uint32_t DMA_CH__u32GetDestEndAddress(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONADDRESS_H_ */
