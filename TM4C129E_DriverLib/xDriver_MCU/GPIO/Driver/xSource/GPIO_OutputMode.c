/**
 *
 * @file GPIO_OutputMode.c
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
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_OutputMode.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetOutputMode(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nOUTMODE enMode)
{
    GPIO__vSetGeneric(enPort, GPIO_ODR_OFFSET, enPin, (uint32_t) enMode);
}

GPIO_nOUTMODE GPIO__enGetOutputMode(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nOUTMODE enFeature = GPIO_enOUTMODE_UNDEF;
    enFeature = (GPIO_nOUTMODE) GPIO__u32GetGeneric(enPort, GPIO_ODR_OFFSET, enPin);
    return (enFeature);
}
