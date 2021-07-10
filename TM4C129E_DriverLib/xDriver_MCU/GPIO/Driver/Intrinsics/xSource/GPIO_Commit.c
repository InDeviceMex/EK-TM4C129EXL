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
    GPIO__vUnlock(enPort);
    GPIO__vSetGeneric(enPort, GPIO_CR_OFFSET, enPin, (uint32_t) enFeature);
}

GPIO_nCOMMIT GPIO__enGetCommit(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nCOMMIT enFeature = GPIO_enCOMMIT_UNDEF;
    enFeature = (GPIO_nCOMMIT) GPIO__u32GetGeneric(enPort, GPIO_CR_OFFSET, enPin);
    return (enFeature);
}
