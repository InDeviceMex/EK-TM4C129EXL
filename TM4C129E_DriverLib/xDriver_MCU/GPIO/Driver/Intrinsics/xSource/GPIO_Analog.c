/**
 *
 * @file GPIO_Analog.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Analog.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnAnalog(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vEnGeneric(enPort, GPIO_AMSEL_OFFSET, enPin);
}

void GPIO__vDisAnalog(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vDisGeneric(enPort, GPIO_AMSEL_OFFSET, enPin);
}

void GPIO__vSetAnalog(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nANALOG_MODE enFeature)
{
    GPIO__vSetGeneric(enPort, GPIO_AMSEL_OFFSET, enPin, (uint32_t) enFeature);
}

GPIO_nANALOG_MODE GPIO__enGetAnalog(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nANALOG_MODE enFeature = GPIO_enANALOG_MODE_UNDEF;
    enFeature = (GPIO_nANALOG_MODE) GPIO__u32GetGeneric(enPort, GPIO_AMSEL_OFFSET, enPin);
    return (enFeature);
}
