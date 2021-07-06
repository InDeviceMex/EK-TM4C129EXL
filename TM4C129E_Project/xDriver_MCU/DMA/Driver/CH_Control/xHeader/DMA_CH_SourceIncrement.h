/**
 *
 * @file DMA_CH_SourceIncrement.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEINCREMENT_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEINCREMENT_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimarySourceIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_SRC_INC enChannelSourceIncrement);
void DMA_CH__vSetAlternateSourceIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_SRC_INC enChannelSourceIncrement);
void DMA_CH__vSetSourceIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_SRC_INC enChannelSourceIncrement);

DMA_nCH_SRC_INC DMA_CH__enGetAlternateSourceIncrement(DMA_nCH_MODULE enChannel);
DMA_nCH_SRC_INC DMA_CH__enGetPrimarySourceIncrement(DMA_nCH_MODULE enChannel);
DMA_nCH_SRC_INC DMA_CH__enGetSourceIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEINCREMENT_H_ */
