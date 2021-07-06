/**
 *
 * @file DMA_CH_TransferSize.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERSIZE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERSIZE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimaryTransferSize(DMA_nCH_MODULE enChannel, uint32_t u32ChannelTransferSize);
void DMA_CH__vSetAlternateTransferSize(DMA_nCH_MODULE enChannel, uint32_t u32ChannelTransferSize);
void DMA_CH__vSetTransferSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32ChannelTransferSize);

uint32_t DMA_CH__u32GetAlternateTransferSize(DMA_nCH_MODULE enChannel);
uint32_t DMA_CH__u32GetPrimaryTransferSize(DMA_nCH_MODULE enChannel);
uint32_t DMA_CH__u32GetTransferSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERSIZE_H_ */
