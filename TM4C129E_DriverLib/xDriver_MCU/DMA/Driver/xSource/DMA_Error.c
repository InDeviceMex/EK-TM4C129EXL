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

#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA__enClearError(DMA_nMODULE enModuleArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.u32Shift = DMA_ERRCLR_R_ERRCLR_BIT;
    stRegister.u32Mask = DMA_ERRCLR_ERRCLR_MASK;
    stRegister.uptrAddress = DMA_ERRCLR_OFFSET;
    stRegister.u32Value = DMA_ERRCLR_ERRCLR_ERROR;
    enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA__enGetError(DMA_nMODULE enModuleArg, DMA_nSTATUS* penStatusArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = DMA_ERRCLR_R_ERRCLR_BIT;
        stRegister.u32Mask = DMA_ERRCLR_ERRCLR_MASK;
        stRegister.uptrAddress = DMA_ERRCLR_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (DMA_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}

