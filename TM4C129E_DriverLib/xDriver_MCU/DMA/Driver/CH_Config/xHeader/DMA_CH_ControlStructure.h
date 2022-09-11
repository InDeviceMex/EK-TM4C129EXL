/**
 *
 * @file DMA_CH_ControlStructure.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_CONTROLSTRUCTURE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_CONTROLSTRUCTURE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetActiveControStructureByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                    DMA_nCH_CONTROL enActiveControStructureArg);
DMA_nERROR DMA_CH__enSetActiveControStructureByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                      DMA_nCH_CONTROL enActiveControStructureArg);

DMA_nERROR DMA_CH__enGetActiveControStructureByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                    DMA_nCHMASK* penCHMaskReqArg);
DMA_nERROR DMA_CH__enGetActiveControStructureByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL* penActiveControStructureArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_CONTROLSTRUCTURE_H_ */
