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

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vUnlock(GPIO_nPORT enPort)
{
    GPIO__vWriteRegister(enPort, GPIO_LOCK_OFFSET, GPIO_LOCK_R_LOCK_KEY, GPIO_LOCK_R_LOCK_MASK, 0UL);
}

void GPIO__vLock(GPIO_nPORT enPort)
{
    GPIO__vWriteRegister(enPort, GPIO_LOCK_OFFSET, GPIO_LOCK_R_LOCK_LOCK, GPIO_LOCK_R_LOCK_MASK, 0UL);
}

GPIO_nLOCK GPIO__enIsLocked(GPIO_nPORT enPort)
{
    GPIO_nLOCK enReg = GPIO_enLOCK_UNDEF;
    GPIO__enReadRegister(enPort, GPIO_LOCK_OFFSET, (uint32_t*) &enReg, GPIO_LOCK_R_LOCK_LOCK, 0UL);
    return (enReg);
}
