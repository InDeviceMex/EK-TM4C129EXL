/**
 *
 * @file NVIC_WriteReg.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_WriteReg.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>
#include <xDriver_MCU/Core/NVIC/Driver/Intrinsics/Primitives/NVIC_Primitives.h>

NVIC_nERROR NVIC__enSetWriteValue(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, uintptr_t uptrRegisterOffsetArg, uint32_t u32ValueArg)
{
    NVIC_Register_t stRegister;
    NVIC_nERROR enErrorReg;
    uint32_t u32VectorBit;
    uint32_t u32VectorIndex;

    enErrorReg = (NVIC_nERROR) MCU__enCheckParams((uint32_t) enVectorArg, (uint32_t) NVIC_enVECTOR_MAX);
    if(NVIC_enERROR_OK == enErrorReg)
    {
        u32VectorBit = (uint32_t) enVectorArg;
        u32VectorBit %= 32UL;

        u32VectorIndex = (uint32_t) enVectorArg;
        u32VectorIndex >>= 5UL;
        u32VectorIndex <<= 2UL;

        uptrRegisterOffsetArg += u32VectorIndex;

        stRegister.u32Shift = (uint32_t) u32VectorBit;
        stRegister.u32Mask = 0x1UL;
        stRegister.uptrAddress = (uint32_t) uptrRegisterOffsetArg;
        stRegister.u32Value = u32ValueArg;
        enErrorReg = NVIC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}
