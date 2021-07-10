/**
 *
 * @file GPIO_DMATrigger.c
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
 * @verbatim 29 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_DMATrigger.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vEnGeneric(enPort, GPIO_DMACTL_OFFSET, enPin);
}

void GPIO__vDisDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vDisGeneric(enPort, GPIO_DMACTL_OFFSET, enPin);
}

void GPIO__vSetDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDMA_TRIGGER enFeature)
{
    GPIO__vSetGeneric(enPort, GPIO_DMACTL_OFFSET, enPin, (uint32_t) enFeature);
}

GPIO_nDMA_TRIGGER GPIO__enGetDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nDMA_TRIGGER enFeature = GPIO_enDMA_TRIGGER_UNDEF;
    enFeature = (GPIO_nDMA_TRIGGER) GPIO__u32GetGeneric(enPort, GPIO_DMACTL_OFFSET, enPin);
    return (enFeature);
}
