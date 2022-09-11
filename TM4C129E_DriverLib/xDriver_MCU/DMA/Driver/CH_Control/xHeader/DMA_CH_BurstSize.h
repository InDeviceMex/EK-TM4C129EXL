/**
 *
 * @file DMA_CH_BurstSize.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURSTSIZE_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURSTSIZE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetArbitrationSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_ARBITRATION_SIZE enSizeArg);
DMA_nERROR DMA_CH_Primary__enSetArbitrationSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        DMA_nCH_ARBITRATION_SIZE enSizeArg);
DMA_nERROR DMA_CH_Alternate__enSetArbitrationSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        DMA_nCH_ARBITRATION_SIZE enSizeArg);

DMA_nERROR DMA_CH__enSetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_ARBITRATION_SIZE enSizeArg);
DMA_nERROR DMA_CH_Primary__enSetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nCH_ARBITRATION_SIZE enSizeArg);
DMA_nERROR DMA_CH_Alternate__enSetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nCH_ARBITRATION_SIZE enSizeArg);

DMA_nERROR DMA_CH__enGetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                DMA_nCH_CONTROL enControlArg, DMA_nCH_ARBITRATION_SIZE* penSizeArg);
DMA_nERROR DMA_CH_Primary__enGetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nCH_ARBITRATION_SIZE* penSizeArg);
DMA_nERROR DMA_CH_Alternate__enGetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          DMA_nCH_ARBITRATION_SIZE* penSizeArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_BURSTSIZE_H_ */
