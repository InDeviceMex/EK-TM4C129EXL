/**
 *
 * @file GPIO_ReadRegister.c
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/xHeader/GPIO_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

uint32_t GPIO__u32ReadRegister(GPIO_nPORT enPort, uint32_t u32OffsetRegister, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32PortBase = 0UL;
    uint32_t u32Port = 0UL;
    uint32_t u32FeatureValue = 0UL;
    u32Port = MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);
    u32PortBase = GPIO__u32BlockBaseAddress((GPIO_nPORT) u32Port);
    u32FeatureValue = MCU__u32ReadRegister(u32PortBase, u32OffsetRegister, u32MaskFeature, u32BitFeature);

    return (u32FeatureValue);
}
