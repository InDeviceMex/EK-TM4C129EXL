/**
 *
 * @file SYSCTL_ResetCause.c
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_ResetCause.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>


SYSCTL_nERROR SYSCTL__enGetResetCause(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET* penCauseArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penCauseArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0UL;
        stRegister.uxMask = (UBase_t) SYSCTL_enRESET_ALL;
        stRegister.uptrAddress = SYSCTL_RESC_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penCauseArg = (SYSCTL_nRESET) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enClearResetCause(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET enCauseArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = 0UL;
    stRegister.uxMask = (UBase_t) enCauseArg;
    stRegister.uptrAddress = SYSCTL_RESC_OFFSET;
    stRegister.uxValue = 0UL;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}
