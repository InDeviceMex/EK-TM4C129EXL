/**
 *
 * @file GPIO_Lock.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Lock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetLockState(GPIO_nPORT enPortArg,
                                 GPIO_nLOCK enLockArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32LockValueReg;
    GPIO_nERROR enErrorReg;

    if(GPIO_enLOCK_UNLOCKED == enLockArg)
    {
        u32LockValueReg = GPIO_LOCK_R_PIN_KEY;
    }
    else
    {
        u32LockValueReg = 0UL;
    }

    stRegister.u32Shift = GPIO_LOCK_R_PIN_BIT;
    stRegister.u32Mask = MCU_MASK_32;
    stRegister.uptrAddress = GPIO_LOCK_OFFSET;
    stRegister.u32Value = u32LockValueReg;
    enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enUnlock(GPIO_nPORT enPortArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetLockState(enPortArg, GPIO_enLOCK_UNLOCKED);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enLock(GPIO_nPORT enPortArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetLockState(enPortArg, GPIO_enLOCK_LOCKED);
    return (enErrorReg);
}


GPIO_nERROR GPIO__IsLocked(GPIO_nPORT enPortArg,
                           GPIO_nLOCK* penLockArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penLockArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = GPIO_LOCK_R_PIN_BIT;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = GPIO_LOCK_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penLockArg = (GPIO_nLOCK) stRegister.u32Value;
    }
    return (enErrorReg);
}
