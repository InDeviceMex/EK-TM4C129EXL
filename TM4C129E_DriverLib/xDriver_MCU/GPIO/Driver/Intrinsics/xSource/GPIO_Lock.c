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
    UBase_t uxLockValueReg;
    uxLockValueReg = (GPIO_enLOCK_UNLOCKED == enLockArg) ? GPIO_LOCK_R_PIN_KEY : 0UL;

    GPIO_Register_t stRegister;
    stRegister.uxShift = GPIO_LOCK_R_PIN_BIT;
    stRegister.uxMask = MCU_MASK_BASE;
    stRegister.uptrAddress = GPIO_LOCK_OFFSET;
    stRegister.uxValue = uxLockValueReg;

    GPIO_nERROR enErrorReg;
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


GPIO_nERROR GPIO__enIsLocked(GPIO_nPORT enPortArg,
                           GPIO_nLOCK* penLockArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penLockArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;

    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = GPIO_LOCK_R_PIN_BIT;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = GPIO_LOCK_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penLockArg = (GPIO_nLOCK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
