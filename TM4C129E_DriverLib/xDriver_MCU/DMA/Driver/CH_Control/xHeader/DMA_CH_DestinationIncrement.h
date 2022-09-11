/**
 *
 * @file DMA_CH_DestinationIncrement.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONINCREMENT_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONINCREMENT_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetDestinationTransferIncrementByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_INCREMENT enIncrementArg);
DMA_nERROR DMA_CH_Primary__enSetDestinationTransferIncrementByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                               DMA_nCH_INCREMENT enIncrementArg);
DMA_nERROR DMA_CH_Alternate__enSetDestinationTransferIncrementByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 DMA_nCH_INCREMENT enIncrementArg);

DMA_nERROR DMA_CH__enSetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_INCREMENT enIncrementArg);
DMA_nERROR DMA_CH_Primary__enSetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_INCREMENT enIncrementArg);
DMA_nERROR DMA_CH_Alternate__enSetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_INCREMENT enIncrementArg);

DMA_nERROR DMA_CH__enGetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, DMA_nCH_INCREMENT* penIncrementArg);
DMA_nERROR DMA_CH_Primary__enGetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_INCREMENT* penIncrementArg);
DMA_nERROR DMA_CH_Alternate__enGetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_INCREMENT* penIncrementArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONINCREMENT_H_ */
