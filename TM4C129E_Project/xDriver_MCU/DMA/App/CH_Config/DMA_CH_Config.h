/**
 *
 * @file DMA_CH_Config.h
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

#ifndef XDRIVER_MCU_DMA_APP_CH_CONFIG_DMA_CH_CONFIG_H_
#define XDRIVER_MCU_DMA_APP_CH_CONFIG_DMA_CH_CONFIG_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetConfigStruct(DMA_nCH_MODULE enDMAChannel, DMA_CONFIG_Typedef pstConfig);

void DMA_CH__vGetConfig(DMA_nCH_MODULE enDMAChannel, DMA_CONFIG_Typedef* pstConfig);
DMA_CONFIG_Typedef* DMA_CH__pstGetConfig(DMA_nCH_MODULE enDMAChannel);

void DMA_CH__vDeleteConfigStruct(DMA_CONFIG_Typedef* pstConfig);

#endif /* XDRIVER_MCU_DMA_APP_CH_CONFIG_DMA_CH_CONFIG_H_ */
