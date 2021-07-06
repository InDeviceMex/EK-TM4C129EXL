/**
 *
 * @file DMA_Error.c
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
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_Error.h>

#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA__vClearModuleError(void)
{
    DMA__vWriteRegister(DMA_ERRCLR_OFFSET, DMA_ERRCLR_ERRCLR_ERROR, DMA_ERRCLR_ERRCLR_MASK, DMA_ERRCLR_R_ERRCLR_BIT);
}

DMA_nERROR DMA__enGetModuleError(void)
{
    DMA_nERROR enModuleError = DMA_enSTATUS_ERROR_UNDEF;
    DMA__enReadRegister(DMA_ERRCLR_OFFSET, (uint32_t*) &enModuleError, DMA_ERRCLR_ERRCLR_MASK, DMA_ERRCLR_R_ERRCLR_BIT);
    return (enModuleError);
}
