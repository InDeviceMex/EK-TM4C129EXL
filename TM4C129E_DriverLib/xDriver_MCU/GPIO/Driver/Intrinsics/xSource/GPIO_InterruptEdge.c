/**
 *
 * @file GPIO_InterruptEdge.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptEdge.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptSense.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nEDGE enEdge)
{
    GPIO__vSetIntSense(enPort, enPin, GPIO_enSENSE_EDGE);
    if(GPIO_enEDGE_BOTH == enEdge)
    {
        GPIO__vSetGeneric(enPort, GPIO_IBE_OFFSET, enPin, 1UL);
        GPIO__vSetGeneric(enPort, GPIO_IEV_OFFSET, enPin, (uint32_t) GPIO_enEDGE_FALLING);
    }
    else
    {
        GPIO__vSetGeneric(enPort, GPIO_IBE_OFFSET, enPin, 0UL);
        GPIO__vSetGeneric(enPort, GPIO_IEV_OFFSET, enPin, (uint32_t) enEdge);
    }
}

GPIO_nEDGE GPIO__enGetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nSENSE enSense = GPIO_enSENSE_UNDEF;
    GPIO_nEDGE enFeature = GPIO_enEDGE_UNDEF;
    uint32_t u32Feature = 0UL;
    enSense = GPIO__enGetIntSense(enPort, enPin);
    if(GPIO_enSENSE_EDGE == enSense)
    {
        u32Feature = GPIO__u32GetGeneric(enPort, GPIO_IBE_OFFSET, enPin);
        u32Feature <<= 1UL;
        if((uint32_t) GPIO_enEDGE_BOTH != u32Feature)
        {
            u32Feature = GPIO__u32GetGeneric(enPort, GPIO_IEV_OFFSET, enPin);
        }
        enFeature = (GPIO_nEDGE) u32Feature;
    }
    return (enFeature);
}



