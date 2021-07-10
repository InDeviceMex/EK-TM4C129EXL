/**
 *
 * @file GPIO_InterruptType.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 9 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptType.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetIntType(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nINT_TYPE enIntType)
{
    if((GPIO_enPORT_P == enPort) || (GPIO_enPORT_Q == enPort))
    {
        GPIO__vSetGeneric(enPort, GPIO_SI_OFFSET, enPin, (uint32_t) enIntType);
    }
}

GPIO_nINT_TYPE GPIO__enGetIntType(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nINT_TYPE enFeature = GPIO_enINT_TYPE_UNDEF;

    if((GPIO_enPORT_P == enPort) || (GPIO_enPORT_Q == enPort))
    {
        enFeature = (GPIO_nINT_TYPE) GPIO__u32GetGeneric(enPort, GPIO_SI_OFFSET, enPin);
    }
    return (enFeature);
}





