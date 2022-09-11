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

DMA_nERROR DMA_CH__enSetSourceTransferIncrementByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_INCREMENT enIncrementArg);
DMA_nERROR DMA_CH_Primary__enSetSourceTransferIncrementByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                               DMA_nCH_INCREMENT enIncrementArg);
DMA_nERROR DMA_CH_Alternate__enSetSourceTransferIncrementByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 DMA_nCH_INCREMENT enIncrementArg);

DMA_nERROR DMA_CH__enSetSourceTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_INCREMENT enIncrementArg);
DMA_nERROR DMA_CH_Primary__enSetSourceTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_INCREMENT enIncrementArg);
DMA_nERROR DMA_CH_Alternate__enSetSourceTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_INCREMENT enIncrementArg);

DMA_nERROR DMA_CH__enGetSourceTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, DMA_nCH_INCREMENT* penIncrementArg);
DMA_nERROR DMA_CH_Primary__enGetSourceTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_INCREMENT* penIncrementArg);
DMA_nERROR DMA_CH_Alternate__enGetSourceTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_INCREMENT* penIncrementArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEINCREMENT_H_ */
