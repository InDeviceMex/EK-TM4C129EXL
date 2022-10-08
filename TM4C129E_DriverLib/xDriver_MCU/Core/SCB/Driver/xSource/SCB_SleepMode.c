/**
 *
 * @file SCB_SleepMode.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_SleepMode.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB__enSetSleepMode(SCB_nMODULE enModuleArg, SCB_nSLEEPMODE enSleepModeArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.uxShift = SCB_SCR_R_SLEEPDEEP_BIT;
    stRegister.uxMask = SCB_SCR_SLEEPDEEP_MASK;
    stRegister.uptrAddress = SCB_SCR_OFFSET;
    stRegister.uxValue = (UBase_t) enSleepModeArg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SCB_nERROR SCB__enGetSleepMode(SCB_nMODULE enModuleArg, SCB_nSLEEPMODE* penSleepModeArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    enErrorReg = SCB_enERROR_OK;
    if(0UL == (uintptr_t) penSleepModeArg)
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SCB_SCR_R_SLEEPDEEP_BIT;
        stRegister.uxMask = SCB_SCR_SLEEPDEEP_MASK;
        stRegister.uptrAddress = SCB_SCR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        *penSleepModeArg = (SCB_nSLEEPMODE) stRegister.uxValue;
    }
    return (enErrorReg);
}


SCB_nERROR SCB__enEnterDeepSleep(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;

    enErrorReg = SCB__enSetSleepMode(enModuleArg, SCB_enSLEEPMODE_DEEPSLEEP);
    MCU__vWaitForInterrupt();

    return (enErrorReg);
}

SCB_nERROR SCB__enEnterSleep(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;

    enErrorReg = SCB__enSetSleepMode(enModuleArg, SCB_enSLEEPMODE_SLEEP);
    MCU__vWaitForInterrupt();

    return (enErrorReg);
}


SCB_nERROR SCB__enSetSleepOnExit(SCB_nMODULE enModuleArg, SCB_nSLEEPONEXIT enSleepOnExitArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.uxShift = SCB_SCR_R_SLEEPONEXIT_BIT;
    stRegister.uxMask = SCB_SCR_SLEEPONEXIT_MASK;
    stRegister.uptrAddress = SCB_SCR_OFFSET;
    stRegister.uxValue = (UBase_t) enSleepOnExitArg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SCB_nERROR SCB__enGetSleepOnExit(SCB_nMODULE enModuleArg, SCB_nSLEEPONEXIT* enSleepOnExitArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    enErrorReg = SCB_enERROR_OK;
    if(0UL == (uintptr_t) enSleepOnExitArg)
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SCB_SCR_R_SLEEPONEXIT_BIT;
        stRegister.uxMask = SCB_SCR_SLEEPONEXIT_MASK;
        stRegister.uptrAddress = SCB_SCR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        *enSleepOnExitArg = (SCB_nSLEEPONEXIT) stRegister.uxValue;
    }
    return (enErrorReg);
}
