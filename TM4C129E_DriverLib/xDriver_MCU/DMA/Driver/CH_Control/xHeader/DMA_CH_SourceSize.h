/**
 *
 * @file DMA_CH_SourceSize.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCESIZE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCESIZE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetSourceDataSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_DATA_SIZE enDataSizeArg);
DMA_nERROR DMA_CH_Primary__enSetSourceDataSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                               DMA_nCH_DATA_SIZE enDataSizeArg);
DMA_nERROR DMA_CH_Alternate__enSetSourceDataSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 DMA_nCH_DATA_SIZE enDataSizeArg);

DMA_nERROR DMA_CH__enSetSourceDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_DATA_SIZE enDataSizeArg);
DMA_nERROR DMA_CH_Primary__enSetSourceDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_DATA_SIZE enDataSizeArg);
DMA_nERROR DMA_CH_Alternate__enSetSourceDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_DATA_SIZE enDataSizeArg);

DMA_nERROR DMA_CH__enGetSourceDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, DMA_nCH_DATA_SIZE* penDataSizeArg);
DMA_nERROR DMA_CH_Primary__enGetSourceDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_DATA_SIZE* penDataSizeArg);
DMA_nERROR DMA_CH_Alternate__enGetSourceDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_DATA_SIZE* penDataSizeArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCESIZE_H_ */
