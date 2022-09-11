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

DMA_nERROR DMA_CH__enSetConfigParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                        const DMA_CONFIG_t* const pstConfigArg);
DMA_nERROR DMA_CH__enGetConfigParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                        DMA_CONFIG_t* pstConfigArg);

DMA_nERROR DMA_CH__enGetConfigParameters_Create(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                           DMA_CONFIG_t** pstConfigArg);
void DMA_CH__vDeleteConfigParameters(DMA_CONFIG_t* pstConfig);

#endif /* XDRIVER_MCU_DMA_APP_CH_CONFIG_DMA_CH_CONFIG_H_ */
