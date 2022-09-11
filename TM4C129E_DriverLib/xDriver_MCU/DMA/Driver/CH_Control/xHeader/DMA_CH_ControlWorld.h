/**
 *
 * @file DMA_CH_ControlWorld.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_CONTROLWORLD_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_CONTROLWORLD_H_

#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetControlRegisterByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_CH_CTL_t stControlArg);
DMA_nERROR DMA_CH_Primary__enSetControlRegisterByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                      DMA_CH_CTL_t stControlArg);
DMA_nERROR DMA_CH_Alternate__enSetControlRegisterByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        DMA_CH_CTL_t stControlArg);

DMA_nERROR DMA_CH__enSetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                DMA_nCH_CONTROL enControlArg, DMA_CH_CTL_t stControlArg);
DMA_nERROR DMA_CH_Primary__enSetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_CH_CTL_t stControlArg);
DMA_nERROR DMA_CH_Alternate__enSetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          DMA_CH_CTL_t stControlArg);

DMA_nERROR DMA_CH__enGetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                DMA_nCH_CONTROL enControlArg, DMA_CH_CTL_t* pstControlArg);
DMA_nERROR DMA_CH_Primary__enGetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_CH_CTL_t* pstControlArg);
DMA_nERROR DMA_CH_Alternate__enGetControlRegisterByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          DMA_CH_CTL_t* pstControlArg);


DMA_nERROR DMA_CH__enSetControlValueByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, uint32_t u32ControlArg);
DMA_nERROR DMA_CH_Primary__enSetControlValueByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                   uint32_t u32ControlArg);
DMA_nERROR DMA_CH_Alternate__enSetControlValueByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                     uint32_t u32ControlArg);

DMA_nERROR DMA_CH__enSetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, uint32_t u32ControlArg);
DMA_nERROR DMA_CH_Primary__enSetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                     uint32_t u32ControlArg);
DMA_nERROR DMA_CH_Alternate__enSetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                       uint32_t u32ControlArg);

DMA_nERROR DMA_CH__enGetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, uint32_t* pu32ControlArg);
DMA_nERROR DMA_CH_Primary__enGetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                     uint32_t* pu32ControlArg);
DMA_nERROR DMA_CH_Alternate__enGetControlValueByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          uint32_t* pu32ControlArg);
#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONTROL_XHEADER_DMA_CH_CONTROLWORLD_H_ */
