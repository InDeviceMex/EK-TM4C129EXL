/**
 *
 * @file DMA_Enable.c
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
 * @verbatim 19 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_Enable.h>

#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA__vSetModuleEnable(DMA_nENABLE enModuleEnable)
{
    DMA__vWriteRegister(DMA_CFG_OFFSET, (uint32_t) enModuleEnable, DMA_CFG_MASTEN_MASK, DMA_CFG_R_MASTEN_BIT);
}

DMA_nENABLE DMA__enGetModuleEnable(void)
{
    DMA_nENABLE enModuleEnable = DMA_enENABLE_UNDEF;
    DMA__enReadRegister(DMA_STAT_OFFSET, (uint32_t*) &enModuleEnable, DMA_STAT_MASTEN_MASK, DMA_STAT_R_MASTEN_BIT);
    return (enModuleEnable);
}
