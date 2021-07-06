/**
 *
 * @file DMA_State.c
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
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_State.h>

#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nSTATE DMA__enGetModuleState(void)
{
    DMA_nSTATE enModuleState = DMA_enSTATE_UNDEF;
    DMA__enReadRegister(DMA_STAT_OFFSET, (uint32_t*) &enModuleState, DMA_STAT_STATE_MASK, DMA_STAT_R_STATE_BIT);
    return (enModuleState);
}

uint32_t DMA__u32GetModulechannels(void)
{
    DMA_nCH_MODULE enModuleChannels = DMA_enCH_MODULE_UNDEF;
    DMA__enReadRegister(DMA_STAT_OFFSET, (uint32_t*) &enModuleChannels, DMA_STAT_DMACHANS_MASK, DMA_STAT_R_DMACHANS_BIT);
    return (enModuleChannels);
}
