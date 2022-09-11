/**
 *
 * @file DMA_CH_TransferSize.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERSIZE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERSIZE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetTransferSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, uint32_t u32TransferSizeArg);
DMA_nERROR DMA_CH_Primary__enSetTransferSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        uint32_t u32TransferSizeArg);
DMA_nERROR DMA_CH_Alternate__enSetTransferSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        uint32_t u32TransferSizeArg);

DMA_nERROR DMA_CH__enSetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, uint32_t u32TransferSizeArg);
DMA_nERROR DMA_CH_Primary__enSetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t u32TransferSizeArg);
DMA_nERROR DMA_CH_Alternate__enSetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t u32TransferSizeArg);

DMA_nERROR DMA_CH__enGetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, uint32_t* pu32TransferSizeArg);
DMA_nERROR DMA_CH_Primary__enGetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    uint32_t* pu32TransferSizeArg);
DMA_nERROR DMA_CH_Alternate__enGetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                      uint32_t* pu32TransferSizeArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_TRANSFERSIZE_H_ */
