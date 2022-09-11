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

DMA_nERROR DMA_CH__enSetTransferModeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                           DMA_nCH_CONTROL enControlArg, DMA_nCH_MODE enModeArg);
DMA_nERROR DMA_CH_Primary__enSetTransferModeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                   DMA_nCH_MODE enModeArg);
DMA_nERROR DMA_CH_Alternate__enSetTransferModeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                     DMA_nCH_MODE enModeArg);

DMA_nERROR DMA_CH__enSetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, DMA_nCH_MODE enModeArg);
DMA_nERROR DMA_CH_Primary__enSetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                     DMA_nCH_MODE enModeArg);
DMA_nERROR DMA_CH_Alternate__enSetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                       DMA_nCH_MODE enModeArg);


DMA_nERROR DMA_CH__enGetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, DMA_nCH_MODE* penModeArg);
DMA_nERROR DMA_CH_Primary__enGetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                     DMA_nCH_MODE* penModeArg);
DMA_nERROR DMA_CH_Alternate__enGetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                       DMA_nCH_MODE* penModeArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERMODE_H_ */
