/**
 *
 * @file DMA_CH_Burst.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURST_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURST_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enUseLastBurstTransferByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                DMA_nCH_CONTROL enControlArg, DMA_nSTATE enStateArg);
DMA_nERROR DMA_CH_Primary__enUseLastBurstTransferByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        DMA_nSTATE enStateArg);
DMA_nERROR DMA_CH_Alternate__enUseLastBurstTransferByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        DMA_nSTATE enStateArg);

DMA_nERROR DMA_CH__enUseLastBurstTransferByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nSTATE enStateArg);
DMA_nERROR DMA_CH_Primary__enUseLastBurstTransferByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nSTATE enStateArg);
DMA_nERROR DMA_CH_Alternate__enUseLastBurstTransferByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nSTATE enStateArg);

DMA_nERROR DMA_CH__enGetLastBurstTransferStateByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                       DMA_nCH_CONTROL enControlArg, DMA_nSTATE* penStateArg);
DMA_nERROR DMA_CH_Primary__enGetLastBurstTransferStateByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                               DMA_nSTATE* penStateArg);
DMA_nERROR DMA_CH_Alternate__enGetLastBurstTransferStateByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURST_H_ */
