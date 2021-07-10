/**
 *
 * @file GPIO_Direction.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Direction.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetDirection(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDIR enFeature)
{
    GPIO__vSetGeneric(enPort, GPIO_DIR_OFFSET, enPin, (uint32_t) enFeature);
}

GPIO_nDIR GPIO__enGetDirection(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nDIR enFeature = GPIO_enDIR_UNDEF;
    enFeature = (GPIO_nDIR) GPIO__u32GetGeneric(enPort, GPIO_DIR_OFFSET, enPin);
    return (enFeature);
}
