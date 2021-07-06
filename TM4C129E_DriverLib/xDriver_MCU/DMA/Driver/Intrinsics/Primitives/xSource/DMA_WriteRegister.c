/**
 *
 * @file DMA_WriteRegister.c
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
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/xHeader/DMA_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/xHeader/DMA_Ready.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA__vWriteRegister(uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    DMA__vSetReady(DMA_enMODULE_0);
    MCU__vWriteRegister(DMA_BASE, u32OffsetRegister, u32FeatureValue, u32MaskFeature, u32BitFeature);
}

void DMA__vWriteRegister_Direct(uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    DMA__vSetReady(DMA_enMODULE_0);
    MCU__vWriteRegister_Direct(DMA_BASE, u32OffsetRegister, u32FeatureValue, u32MaskFeature, u32BitFeature);
}


