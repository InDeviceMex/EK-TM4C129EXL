/**
 *
 * @file GPIO_ADCTrigger.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_ADCTrigger.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vEnGeneric(enPort, GPIO_ADCCTL_OFFSET, enPin);
}

void GPIO__vDisADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vDisGeneric(enPort, GPIO_ADCCTL_OFFSET, enPin);
}

void GPIO__vSetADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nADC_TRIGGER enFeature)
{
    GPIO__vSetGeneric(enPort, GPIO_ADCCTL_OFFSET, enPin, (uint32_t) enFeature);
}

GPIO_nADC_TRIGGER GPIO__enGetADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nADC_TRIGGER enFeature = GPIO_enADC_TRIGGER_UNDEF;
    enFeature = (GPIO_nADC_TRIGGER) GPIO__u32GetGeneric(enPort, GPIO_ADCCTL_OFFSET, enPin);
    return (enFeature);
}
