/**
 *
 * @file ACMP_ReferenceRange.c
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
#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_ReferenceRange.h>

#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

ACMP_nERROR ACMP__enSetReferenceRange(ACMP_nMODULE enModuleArg, ACMP_nREFERENCE_RANGE enReferenceRangeArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    stRegister.uxShift = ACMP_REFCTL_R_RNG_BIT;
    stRegister.uxMask = ACMP_REFCTL_RNG_MASK;
    stRegister.uptrAddress = ACMP_REFCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enReferenceRangeArg;
    enErrorReg = ACMP__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetReferenceRange(ACMP_nMODULE enModuleArg, ACMP_nREFERENCE_RANGE* penReferenceRangeArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;
    if(0UL == (uintptr_t) penReferenceRangeArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = ACMP_REFCTL_R_RNG_BIT;
        stRegister.uxMask = ACMP_REFCTL_RNG_MASK;
        stRegister.uptrAddress = ACMP_REFCTL_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penReferenceRangeArg = (ACMP_nREFERENCE_RANGE) stRegister.uxValue;
    }
    return (enErrorReg);
}
