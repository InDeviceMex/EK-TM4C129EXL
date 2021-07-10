/**
 *
 * @file GPIO_InterruptLevel.c
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
 * @verbatim Apr 6, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 6, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptLevel.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptSense.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nLEVEL enLevel)
{
    GPIO__vSetIntSense(enPort, enPin, GPIO_enSENSE_LEVEL);
    GPIO__vSetGeneric(enPort, GPIO_IEV_OFFSET, enPin, (uint32_t) enLevel);
}

GPIO_nLEVEL GPIO__enGetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nSENSE enSense = GPIO_enSENSE_UNDEF;
    GPIO_nLEVEL enFeature = GPIO_enLEVEL_UNDEF;
    enSense = GPIO__enGetIntSense(enPort, enPin);
    if(GPIO_enSENSE_LEVEL == enSense)
    {
        enFeature = (GPIO_nLEVEL) GPIO__u32GetGeneric(enPort, GPIO_IEV_OFFSET, enPin);
    }
    return (enFeature);
}



