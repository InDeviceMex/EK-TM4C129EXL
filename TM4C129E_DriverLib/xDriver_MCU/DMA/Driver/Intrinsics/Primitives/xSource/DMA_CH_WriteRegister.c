/**
 *
 * @file DMA_CH_WriteRegister.c
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
 #include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/xHeader/DMA_CH_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enWriteRegister(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg, DMA_nCH_CONTROL enControlArg, DMA_Register_t* pstRegisterDataArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstRegisterDataArg) ? DMA_enERROR_POINTER :  DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) DMA_enMODULE_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        uintptr_t uptrModuleBase = DMA_CH__uptrBlockBaseAddress(enModuleArg, enControlArg);

        uintptr_t uptrChannelOffset = (UBase_t) enChannelArg;
        uptrChannelOffset <<= 4UL; /*DMA_CH_REG_NUM * 4UL = 4UL * 4UL = 16UL*/
        uptrModuleBase += uptrChannelOffset;
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (DMA_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}
