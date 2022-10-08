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

NVIC_nERROR NVIC__enSetWriteValue(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, uintptr_t uptrRegisterOffsetArg, UBase_t uxValueArg)
{
    NVIC_Register_t stRegister;
    NVIC_nERROR enErrorReg;
    UBase_t uxVectorBit;
    UBase_t uxVectorIndex;

    enErrorReg = (NVIC_nERROR) MCU__enCheckParams((UBase_t) enVectorArg, (UBase_t) NVIC_enVECTOR_MAX);
    if(NVIC_enERROR_OK == enErrorReg)
    {
        uxVectorBit = (UBase_t) enVectorArg;
        uxVectorBit %= 32UL;

        uxVectorIndex = (UBase_t) enVectorArg;
        uxVectorIndex >>= 5UL;
        uxVectorIndex <<= 2UL;

        uptrRegisterOffsetArg += uxVectorIndex;

        stRegister.uxShift = (UBase_t) uxVectorBit;
        stRegister.uxMask = 0x1UL;
        stRegister.uptrAddress = (UBase_t) uptrRegisterOffsetArg;
        stRegister.uxValue = uxValueArg;
        enErrorReg = NVIC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}
