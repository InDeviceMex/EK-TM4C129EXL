/**
 *
 * @file DMA_CH_TransferMode.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERMODE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERMODE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimaryTransferMode(DMA_nCH_MODULE enChannel, DMA_nCH_MODE enChannelTransferMode);
void DMA_CH__vSetAlternateTransferMode(DMA_nCH_MODULE enChannel, DMA_nCH_MODE enChannelTransferMode);
void DMA_CH__vSetTransferMode(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_MODE enChannelTransferMode);

DMA_nCH_MODE DMA_CH__enGetAlternateTransferMode(DMA_nCH_MODULE enChannel);
DMA_nCH_MODE DMA_CH__enGetPrimaryTransferMode(DMA_nCH_MODULE enChannel);
DMA_nCH_MODE DMA_CH__enGetTransferMode(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERMODE_H_ */
