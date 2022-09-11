/**
 *
 * @file DMA_CH_Encoder.h
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
 * @verbatim 20 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_ENCODER_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_ENCODER_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetEncoderByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                      DMA_nCH_ENCODER enEncoderArg);
DMA_nERROR DMA_CH__enSetEncoderByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                        DMA_nCH_ENCODER enEncoderArg);
DMA_nERROR DMA_CH__enGetEncoderByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                       DMA_nCH_ENCODER* penEncoderArg);

DMA_nERROR DMA_CH__enSetTrigger(DMA_nMODULE enModuleArg, DMA_nCH_TRIGGER enChannelTriggerArg);
DMA_nERROR DMA_CH__enGetTrigger(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                DMA_nCH_TRIGGER* penChannelTriggerArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_ENCODER_H_ */
