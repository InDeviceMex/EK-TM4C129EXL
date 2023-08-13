/**
 *
 * @file WDT_Lock.c
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/xHeader/WDT_Lock.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nERROR WDT__enIsLocked(WDT_nMODULE enModuleArg, WDT_nBOOLEAN* penLockedArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penLockedArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;

    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = WDT_LOCK_R_LOCK_BIT;
        stRegister.uxMask = WDT_LOCK_LOCK_MASK;
        stRegister.uptrAddress = WDT_LOCK_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penLockedArg = (WDT_nBOOLEAN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enSetLockState(WDT_nMODULE enModuleArg, WDT_nSTATE enStateArg)
{
    UBase_t uxValueReg;
    uxValueReg = (WDT_enSTATE_DIS == enStateArg) ? WDT_LOCK_LOCK_KEY : WDT_LOCK_LOCK_LOCK;

    WDT_Register_t stRegister;
    stRegister.uxShift = WDT_LOCK_R_LOCK_BIT;
    stRegister.uxMask = WDT_LOCK_LOCK_MASK;
    stRegister.uptrAddress = WDT_LOCK_OFFSET;
    stRegister.uxValue = uxValueReg;

    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

WDT_nERROR WDT__enLock(WDT_nMODULE enModuleArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetLockState(enModuleArg, WDT_enSTATE_ENA);
    return (enErrorReg);
}

WDT_nERROR WDT__enUnlock(WDT_nMODULE enModuleArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetLockState(enModuleArg, WDT_enSTATE_DIS);
    return (enErrorReg);
}
