/**
 *
 * @file DMA_CH_Control.h
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

#ifndef XDRIVER_MCU_DMA_APP_CH_CONTROL_DMA_CH_CONTROL_H_
#define XDRIVER_MCU_DMA_APP_CH_CONTROL_DMA_CH_CONTROL_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetPrimaryControlStruct(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef pstControl);
void DMA_CH__vSetAlternateControlStruct(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef pstControl);
void DMA_CH__vSetControlStruct(DMA_nCH_MODULE enDMAChannel, DMA_nCH_CTL enChannelStructure, DMA_CONTROL_Typedef pstControl);

DMA_nSTATUS DMA_CH__enGetPrimaryControl(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef* pstControl);
DMA_nSTATUS DMA_CH__enGetAlternateControl(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef* pstControl);
DMA_nSTATUS DMA_CH__enGetControl(DMA_nCH_MODULE enDMAChannel, DMA_nCH_CTL enChannelStructure, DMA_CONTROL_Typedef* pstControl);

DMA_CONTROL_Typedef* DMA_CH__pstGetPrimaryControl(DMA_nCH_MODULE enDMAChannel);
DMA_CONTROL_Typedef* DMA_CH__pstGetAlternateControl(DMA_nCH_MODULE enDMAChannel);
DMA_CONTROL_Typedef* DMA_CH__pstGetControl(DMA_nCH_MODULE enDMAChannel, DMA_nCH_CTL enChannelStructure);

void DMA_CH__vDeleteControlStruct(DMA_CONTROL_Typedef* pstControl);

#endif /* XDRIVER_MCU_DMA_APP_CH_CONTROL_DMA_CH_CONTROL_H_ */
