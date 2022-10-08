/**
 *
 * @file DMA_CH_SourceAddress.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEADDRESS_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEADDRESS_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetSourceEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, UBase_t uxEndAddressArg);
DMA_nERROR DMA_CH_Primary__enSetSourceEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        UBase_t uxEndAddressArg);
DMA_nERROR DMA_CH_Alternate__enSetSourceEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        UBase_t uxEndAddressArg);

DMA_nERROR DMA_CH__enSetSourceEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, UBase_t uxEndAddressArg);
DMA_nERROR DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t uxEndAddressArg);
DMA_nERROR DMA_CH_Alternate__enSetSourceEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t uxEndAddressArg);

DMA_nERROR DMA_CH__enGetSourceEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, UBase_t* puxEndAddressArg);
DMA_nERROR DMA_CH_Primary__enGetSourceEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t* puxEndAddressArg);
DMA_nERROR DMA_CH_Alternate__enGetSourceEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          UBase_t* puxEndAddressArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_SOURCEADDRESS_H_ */
