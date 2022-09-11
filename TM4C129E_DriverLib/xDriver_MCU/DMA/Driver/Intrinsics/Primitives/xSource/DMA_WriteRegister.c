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
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA__enWriteRegister(DMA_nMODULE enModuleArg, DMA_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    DMA_nERROR enErrorReg;
    if(0UL != (uint32_t) pstRegisterDataArg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) DMA_enMODULE_MAX);
        if(DMA_enERROR_OK == enErrorReg)
        {
            uptrModuleBase = DMA__uptrBlockBaseAddress(enModuleArg);
            pstRegisterDataArg->uptrAddress += uptrModuleBase;
            enErrorReg = (DMA_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}

DMA_nERROR DMA__enWriteRegister_Direct(DMA_nMODULE enModuleArg, DMA_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    DMA_nERROR enErrorReg;
    if(0UL != (uint32_t) pstRegisterDataArg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) DMA_enMODULE_MAX);
        if(DMA_enERROR_OK == enErrorReg)
        {
            uptrModuleBase = DMA__uptrBlockBaseAddress(enModuleArg);
            pstRegisterDataArg->uptrAddress += uptrModuleBase;
            enErrorReg = (DMA_nERROR) MCU__enWriteRegister_Direct(pstRegisterDataArg);
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}
