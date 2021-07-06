/**
 *
 * @file DMA_CH_WriteRegister.h
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
 * @verbatim 29 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_DMA_CH_WRITEREGISTER_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_DMA_CH_WRITEREGISTER_H_

#include <xUtils/Standard/Standard.h>

void DMA_CH__vWriteRegister(uint32_t u32ChBase, uint32_t u32ChNum, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_DMA_CH_WRITEREGISTER_H_ */
