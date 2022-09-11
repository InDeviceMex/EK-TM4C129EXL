/**
 *
 * @file DMA_CH_DestinationAddress.h
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
 * @verbatim 21 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONADDRESS_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONADDRESS_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetDestinationEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, uint32_t u32EndAddressArg);
DMA_nERROR DMA_CH_Primary__enSetDestinationEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        uint32_t u32EndAddressArg);
DMA_nERROR DMA_CH_Alternate__enSetDestinationEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        uint32_t u32EndAddressArg);

DMA_nERROR DMA_CH__enSetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, uint32_t u32EndAddressArg);
DMA_nERROR DMA_CH_Primary__enSetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t u32EndAddressArg);
DMA_nERROR DMA_CH_Alternate__enSetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t u32EndAddressArg);

DMA_nERROR DMA_CH__enGetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, uint32_t* pu32EndAddressArg);
DMA_nERROR DMA_CH_Primary__enGetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t* pu32EndAddressArg);
DMA_nERROR DMA_CH_Alternate__enGetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          uint32_t* pu32EndAddressArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_DESTINATIONADDRESS_H_ */
