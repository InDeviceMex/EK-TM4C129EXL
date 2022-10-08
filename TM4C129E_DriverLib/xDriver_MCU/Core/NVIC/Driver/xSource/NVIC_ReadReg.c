/**
 *
 * @file NVIC_ReadReg.c
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
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_ReadReg.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>
#include <xDriver_MCU/Core/NVIC/Driver/Intrinsics/Primitives/NVIC_Primitives.h>

NVIC_nERROR NVIC__enReadValue(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, uintptr_t uptrRegisterOffsetArg, UBase_t* puxValueArg)
{
    NVIC_Register_t stRegister;
    NVIC_nERROR enErrorReg;
    UBase_t uxVectorBit;
    UBase_t uxVectorIndex;

    enErrorReg = NVIC_enERROR_OK;
    if(0UL == (uintptr_t) puxValueArg)
    {
        enErrorReg = NVIC_enERROR_POINTER;
    }
    if(NVIC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (NVIC_nERROR) MCU__enCheckParams((UBase_t) enVectorArg, (UBase_t) NVIC_enVECTOR_MAX);
    }
    if(NVIC_enERROR_OK == enErrorReg)
    {
        uxVectorBit = (UBase_t) enVectorArg;
        uxVectorBit %= 32UL;

        uxVectorIndex = (UBase_t) enVectorArg;
        /* Optimized
         * uxVectorIndex /= 32UL;
         * uxVectorIndex *= 4UL;
        */
        uxVectorIndex >>= 3U;

        uptrRegisterOffsetArg += uxVectorIndex;
        stRegister.uxShift = (UBase_t) uxVectorBit;
        stRegister.uxMask = 0x1UL;
        stRegister.uptrAddress = (UBase_t) uptrRegisterOffsetArg;
        enErrorReg = NVIC__enReadRegister(enModuleArg, &stRegister);
    }
    if(NVIC_enERROR_OK == enErrorReg)
    {
        *puxValueArg = stRegister.uxValue;
    }
    return (enErrorReg);
}
