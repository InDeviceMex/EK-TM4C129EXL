/**
 *
 * @file GPIO_Commit.c
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Commit.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Lock.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetCommit(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nCOMMIT enFeature)
{
    GPIO_nPORT enPortReg = enPort;
    GPIO_nPIN enPinReg = enPin;
    GPIO_nCOMMIT enFeatureReg = enFeature;
    GPIO__vUnlock(enPortReg);
    GPIO__vSetGeneric(enPortReg, GPIO_CR_OFFSET, enPinReg, (uint32_t) enFeatureReg);
}

GPIO_nCOMMIT GPIO__enGetCommit(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nCOMMIT enCommitReg = GPIO_enCOMMIT_DIS;
    enCommitReg = (GPIO_nCOMMIT) GPIO__u32GetGeneric(enPort, GPIO_CR_OFFSET, enPin);
    return (enCommitReg);
}
