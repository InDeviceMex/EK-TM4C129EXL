/**
 *
 * @file DMA_CH_ConfigGeneric.c
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
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_ConfigGeneric.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA_CH__vSetConfigGeneric(DMA_nCH_MODULE enChannel, uint32_t u32Register)
{
    uint32_t u32Channel = 0UL;

    u32Channel = MCU__u32CheckParams( (uint32_t) enChannel, (uint32_t) DMA_enCH_MODULE_MAX);
    DMA__vWriteRegister(u32Register, 1UL, 1UL, u32Channel);
}

void DMA_CH__vSetConfigGeneric_Direct(DMA_nCH_MODULE enChannel, uint32_t u32Register)
{
    uint32_t u32Channel = 0UL;

    u32Channel = MCU__u32CheckParams( (uint32_t) enChannel, (uint32_t) DMA_enCH_MODULE_MAX);
    DMA__vWriteRegister_Direct(u32Register, 1UL, 1UL, u32Channel);
}

uint32_t DMA_CH__u32GetConfigGeneric(DMA_nCH_MODULE enChannel, uint32_t u32Register)
{
    uint32_t u32Reg = 0UL;
    uint32_t u32Result = 0xFFFFFFFFUL;
    DMA_nSTATUS enStatus = DMA_enSTATUS_UNDEF;
    uint32_t u32Channel = 0UL;

    u32Channel = MCU__u32CheckParams( (uint32_t) enChannel, (uint32_t) DMA_enCH_MODULE_MAX);
    enStatus = DMA__enReadRegister(u32Register, &u32Reg, 1UL, u32Channel);

    if(DMA_enSTATUS_OK == enStatus)
    {
        u32Result = u32Reg;
    }
    return (u32Result);
}
