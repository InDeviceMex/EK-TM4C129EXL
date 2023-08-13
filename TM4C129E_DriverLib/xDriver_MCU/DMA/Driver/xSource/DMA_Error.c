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
    stRegister.uxShift = DMA_ERRCLR_R_ERRCLR_BIT;
    stRegister.uxMask = DMA_ERRCLR_ERRCLR_MASK;
    stRegister.uptrAddress = DMA_ERRCLR_OFFSET;
    stRegister.uxValue = DMA_ERRCLR_ERRCLR_ERROR;

    DMA_nERROR enErrorReg;
    enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

DMA_nERROR DMA__enGetError(DMA_nMODULE enModuleArg, DMA_nSTATUS* penStatusArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_ERRCLR_R_ERRCLR_BIT;
        stRegister.uxMask = DMA_ERRCLR_ERRCLR_MASK;
        stRegister.uptrAddress = DMA_ERRCLR_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (DMA_nSTATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
