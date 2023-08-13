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

ACMP_nERROR ACMP__enSetReferenceEncoder(ACMP_nMODULE enModuleArg, UBase_t uxEncoderValueArg)
{
    ACMP_Register_t stRegister;
    stRegister.uxShift = ACMP_REFCTL_R_VREF_BIT;
    stRegister.uxMask = ACMP_REFCTL_VREF_MASK;
    stRegister.uptrAddress = ACMP_REFCTL_OFFSET;
    stRegister.uxValue = uxEncoderValueArg;

    ACMP_nERROR enErrorReg;
    enErrorReg = ACMP__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetReferenceEncoder(ACMP_nMODULE enModuleArg, UBase_t* puxEncoderValueArg)
{
    ACMP_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxEncoderValueArg) ? ACMP_enERROR_POINTER : ACMP_enERROR_OK;

    if(ACMP_enERROR_OK == enErrorReg)
    {
        ACMP_Register_t stRegister;
        stRegister.uxShift = ACMP_REFCTL_R_VREF_BIT;
        stRegister.uxMask = ACMP_REFCTL_VREF_MASK;
        stRegister.uptrAddress = ACMP_REFCTL_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            *puxEncoderValueArg = stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
