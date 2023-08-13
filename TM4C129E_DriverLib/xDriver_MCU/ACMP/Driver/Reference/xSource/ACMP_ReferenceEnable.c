/**
 *
 * @file ACMP_ReferenceEnable.c
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
#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_ReferenceEnable.h>

#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

ACMP_nERROR ACMP__enSetReferenceState(ACMP_nMODULE enModuleArg, ACMP_nSTATE enStateArg)
{
    ACMP_Register_t stRegister;
    stRegister.uxShift = ACMP_REFCTL_R_EN_BIT;
    stRegister.uxMask = ACMP_REFCTL_EN_MASK;
    stRegister.uptrAddress = ACMP_REFCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    ACMP_nERROR enErrorReg;
    enErrorReg = ACMP__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetReferenceState(ACMP_nMODULE enModuleArg, ACMP_nSTATE* penStateArg)
{
    ACMP_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? ACMP_enERROR_POINTER : ACMP_enERROR_OK;

    if(ACMP_enERROR_OK == enErrorReg)
    {
        ACMP_Register_t stRegister;
        stRegister.uxShift = ACMP_REFCTL_R_EN_BIT;
        stRegister.uxMask = ACMP_REFCTL_EN_MASK;
        stRegister.uptrAddress = ACMP_REFCTL_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            *penStateArg = (ACMP_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

