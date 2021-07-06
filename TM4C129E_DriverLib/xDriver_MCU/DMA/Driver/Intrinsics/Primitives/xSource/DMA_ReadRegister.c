/**
 *
 * @file DMA_ReadRegister.c
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
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/xHeader/DMA_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/xHeader/DMA_Ready.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nSTATUS DMA__enReadRegister(uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    DMA_nSTATUS enStatus = DMA_enSTATUS_UNDEF;
    DMA_nREADY enReady = DMA_enNOREADY;
    enReady = DMA__enIsReady(DMA_enMODULE_0);
    if((DMA_enREADY == enReady) && (0UL != (uint32_t) pu32FeatureValue))
    {
        enStatus = DMA_enSTATUS_OK;
        *pu32FeatureValue = MCU__u32ReadRegister(DMA_BASE, u32OffsetRegister, u32MaskFeature, u32BitFeature);
    }
    return (enStatus);
}
