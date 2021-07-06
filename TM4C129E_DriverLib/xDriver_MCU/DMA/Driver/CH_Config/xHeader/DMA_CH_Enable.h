/**
 *
 * @file DMA_CH_Enable.h
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
 * @verbatim 20 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_ENABLE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_ENABLE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetEnable(DMA_nCH_MODULE enChannel, DMA_nCH_ENA enEnable);
DMA_nCH_ENA DMA_CH__enGetEnable(DMA_nCH_MODULE enChannel);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_ENABLE_H_ */
