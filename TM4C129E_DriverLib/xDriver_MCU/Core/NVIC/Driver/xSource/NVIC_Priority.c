/**
 *
 * @file NVIC_Priority.c
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Priority.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/NVIC/Driver/Intrinsics/NVIC_Intrinsics.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

NVIC_nERROR NVIC__enGetVectorPriority(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, NVIC_nPRIORITY* penPriorityArg)
{
    NVIC_Register_t stRegister;
    NVIC_nERROR enErrorReg;
    uint32_t u32VectorIndex;
    uint32_t u32VectorBit;
    uintptr_t uptrRegisterOffset;
    if(0U != (uintptr_t) penPriorityArg)
    {
        enErrorReg = (NVIC_nERROR) MCU__enCheckParams((uint32_t) enVectorArg, (uint32_t) NVIC_enVECTOR_MAX);
        if(NVIC_enERROR_OK == enErrorReg)
        {
            uptrRegisterOffset = NVIC_IPR_OFFSET;

            u32VectorBit = (uint32_t) enVectorArg;
            u32VectorBit %= 4UL;
            u32VectorBit <<= 3U;

            u32VectorIndex = (uint32_t) enVectorArg;
            u32VectorIndex &= ~(0x00000003UL);

            uptrRegisterOffset += u32VectorIndex;

            stRegister.u32Shift = (uint32_t) u32VectorBit;
            stRegister.u32Mask = NVIC_PRI_MASK;
            stRegister.uptrAddress = (uint32_t) uptrRegisterOffset;
            enErrorReg = NVIC__enReadRegister(enModuleArg, &stRegister);

            *penPriorityArg = (NVIC_nPRIORITY) stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = NVIC_enERROR_POINTER;
    }
    return (enErrorReg);
}


NVIC_nERROR NVIC__enSetVectorPriority(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, NVIC_nPRIORITY enPriorityArg)
{
    NVIC_Register_t stRegister;
    NVIC_nERROR enErrorReg;
    uint32_t u32VectorBit;
    uint32_t u32VectorIndex;
    uintptr_t uptrRegisterOffset;

    enErrorReg = (NVIC_nERROR) MCU__enCheckParams((uint32_t) enVectorArg, (uint32_t) NVIC_enVECTOR_MAX);
    if(NVIC_enERROR_OK == enErrorReg)
    {
        uptrRegisterOffset = NVIC_IPR_OFFSET;
        u32VectorBit = (uint32_t) enVectorArg;
        u32VectorBit %= 4UL;
        u32VectorBit <<= 3U;
        u32VectorBit += NVIC_PRI_BIT_OFFSET;

        u32VectorIndex = (uint32_t) enVectorArg;
        u32VectorIndex &= ~(0x00000003UL);

        uptrRegisterOffset += u32VectorIndex;

        stRegister.u32Shift = (uint32_t) u32VectorBit;
        stRegister.u32Mask = NVIC_PRI_MASK;
        stRegister.uptrAddress = (uint32_t) uptrRegisterOffset;
        stRegister.u32Value = (uint32_t) enPriorityArg;
        enErrorReg = NVIC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

