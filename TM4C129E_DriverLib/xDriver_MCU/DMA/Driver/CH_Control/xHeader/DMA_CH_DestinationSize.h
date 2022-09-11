/**
 *
 * @file DMA_CH_DestinationSize.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONSIZE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONSIZE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetDestinationDataSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_DATA_SIZE enDataSizeArg);
DMA_nERROR DMA_CH_Primary__enSetDestinationDataSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                               DMA_nCH_DATA_SIZE enDataSizeArg);
DMA_nERROR DMA_CH_Alternate__enSetDestinationDataSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 DMA_nCH_DATA_SIZE enDataSizeArg);

DMA_nERROR DMA_CH__enSetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_DATA_SIZE enDataSizeArg);
DMA_nERROR DMA_CH_Primary__enSetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_DATA_SIZE enDataSizeArg);
DMA_nERROR DMA_CH_Alternate__enSetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_DATA_SIZE enDataSizeArg);

DMA_nERROR DMA_CH__enGetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, DMA_nCH_DATA_SIZE* penDataSizeArg);
DMA_nERROR DMA_CH_Primary__enGetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_DATA_SIZE* penDataSizeArg);
DMA_nERROR DMA_CH_Alternate__enGetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_DATA_SIZE* penDataSizeArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONSIZE_H_ */
