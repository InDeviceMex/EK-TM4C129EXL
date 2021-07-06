/**
 *
 * @file DMA_CH_SourceSize.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCESIZE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCESIZE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimarySourceSize(DMA_nCH_MODULE enChannel, DMA_nCH_SRC_SIZE enChannelSourceSize);
void DMA_CH__vSetAlternateSourceSize(DMA_nCH_MODULE enChannel, DMA_nCH_SRC_SIZE enChannelSourceSize);
void DMA_CH__vSetSourceSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_SRC_SIZE enChannelSourceSize);

DMA_nCH_SRC_SIZE DMA_CH__enGetAlternateSourceSize(DMA_nCH_MODULE enChannel);
DMA_nCH_SRC_SIZE DMA_CH__enGetPrimarySourceSize(DMA_nCH_MODULE enChannel);
DMA_nCH_SRC_SIZE DMA_CH__enGetSourceSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCESIZE_H_ */
