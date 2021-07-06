/**
 *
 * @file DMA_CH_ReadRegister.c
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
 #include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/xHeader/DMA_CH_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

uint32_t DMA_CH__u32ReadRegister(uint32_t u32ChBase, uint32_t u32ChNum, uint32_t u32OffsetRegister, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureValue = 0UL;
    uint32_t u32RegChannel = 0UL;
    u32ChNum = MCU__u32CheckParams(u32ChNum, DMA_enCH_MODULE_MAX);

    u32RegChannel = DMACH_REG_NUM;
    u32RegChannel *= u32ChNum;
    u32RegChannel *= 4UL;
    u32ChBase += u32RegChannel;

    u32FeatureValue = MCU__u32ReadRegister(u32ChBase, u32OffsetRegister, u32MaskFeature, u32BitFeature);
    return (u32FeatureValue);
}
