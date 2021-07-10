/**
 *
 * @file GPIO_Alternative.c
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
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Alternative.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Commit.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vSetCommit(enPort, enPin, GPIO_enCOMMIT_ENA);
    GPIO__vEnGeneric(enPort, GPIO_AFSEL_OFFSET, enPin);
}

void GPIO__vDisAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vSetCommit(enPort, enPin, GPIO_enCOMMIT_ENA);
    GPIO__vDisGeneric(enPort, GPIO_AFSEL_OFFSET, enPin);
}

void GPIO__vSetAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nALT_FUNCTION enFeature)
{
    GPIO__vSetGeneric(enPort, GPIO_AFSEL_OFFSET, enPin, (uint32_t) enFeature);
}

GPIO_nALT_FUNCTION GPIO__enGetAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nALT_FUNCTION enFeature = GPIO_enALT_FUNCTION_UNDEF;
    enFeature = (GPIO_nALT_FUNCTION) GPIO__u32GetGeneric(enPort, GPIO_AFSEL_OFFSET, enPin);
    return (enFeature);
}
