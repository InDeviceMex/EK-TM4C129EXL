/**
 *
 * @file ACMP_ReferenceEncoder.c
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
 * @verbatim Apr 2, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 2, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_ReferenceEncoder.h>

#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

ACMP_nERROR ACMP__enSetReferenceEncoder(ACMP_nMODULE enModuleArg, uint32_t u32EncoderValueArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    stRegister.u32Shift = ACMP_REFCTL_R_VREF_BIT;
    stRegister.u32Mask = ACMP_REFCTL_VREF_MASK;
    stRegister.uptrAddress = ACMP_REFCTL_OFFSET;
    stRegister.u32Value = u32EncoderValueArg;
    enErrorReg = ACMP__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetReferenceEncoder(ACMP_nMODULE enModuleArg, uint32_t* pu32EncoderValueArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;
    if(0UL == (uintptr_t) pu32EncoderValueArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = ACMP_REFCTL_R_VREF_BIT;
        stRegister.u32Mask = ACMP_REFCTL_VREF_MASK;
        stRegister.uptrAddress = ACMP_REFCTL_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *pu32EncoderValueArg = stRegister.u32Value;
    }
    return (enErrorReg);
}
