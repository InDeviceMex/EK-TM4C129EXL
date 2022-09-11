/**
 *
 * @file DMA_CH_SourceAccess.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEACCESS_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEACCESS_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetSourceDataAccessByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_ACCESS enAccessArg);
DMA_nERROR DMA_CH_Primary__enSetSourceDataAccessByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                               DMA_nCH_ACCESS enAccessArg);
DMA_nERROR DMA_CH_Alternate__enSetSourceDataAccessByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 DMA_nCH_ACCESS enAccessArg);

DMA_nERROR DMA_CH__enSetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_ACCESS enAccessArg);
DMA_nERROR DMA_CH_Primary__enSetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_ACCESS enAccessArg);
DMA_nERROR DMA_CH_Alternate__enSetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_ACCESS enAccessArg);

DMA_nERROR DMA_CH__enGetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, DMA_nCH_ACCESS* penAccessArg);
DMA_nERROR DMA_CH_Primary__enGetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_ACCESS* penAccessArg);
DMA_nERROR DMA_CH_Alternate__enGetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_ACCESS* penAccessArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEACCESS_H_ */
