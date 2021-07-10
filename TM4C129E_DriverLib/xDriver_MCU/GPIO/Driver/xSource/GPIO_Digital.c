/**
 *
 * @file GPIO_Digital.c
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
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Digital.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Commit.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnDigital(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vSetCommit(enPort, enPin, GPIO_enCOMMIT_ENA);
    GPIO__vEnGeneric(enPort, GPIO_DEN_OFFSET, enPin);
}

void GPIO__vDisDigital(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO__vSetCommit(enPort, enPin, GPIO_enCOMMIT_ENA);
    GPIO__vDisGeneric(enPort, GPIO_DEN_OFFSET, enPin);
}

void GPIO__vSetDigital(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDIGITAL enFeature)
{
    GPIO__vSetGeneric(enPort, GPIO_DEN_OFFSET, enPin, (uint32_t) enFeature);
}

GPIO_nDIGITAL GPIO__enGetDigital(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nDIGITAL enFeature = GPIO_enDIGITAL_UNDEF;
    enFeature = (GPIO_nDIGITAL) GPIO__u32GetGeneric(enPort, GPIO_DEN_OFFSET, enPin);
    return (enFeature);
}
