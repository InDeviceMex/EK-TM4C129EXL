/**
 *
 * @file GPIO_InterruptConfig.c
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
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_InterruptConfig.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptEdge.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptLevel.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptSense.h>

void GPIO__vSetInterruptSourceConfig(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nINT_CONFIG enIntConfigArg)
{
    uint32_t u32Sense = 0UL;
    uint32_t u32Event = 0UL;

    u32Sense = (uint32_t) enIntConfigArg;
    u32Sense >>= 8UL;
    u32Sense &= 1UL;

    u32Event = (uint32_t) enIntConfigArg;
    u32Event &= 0x3UL;

    if((uint32_t) GPIO_enSENSE_EDGE == u32Sense)
    {
        GPIO__vSetIntEdge(enPort, enPin, (GPIO_nEDGE) u32Event);
    }
    else
    {
        GPIO__vSetIntLevel(enPort, enPin, (GPIO_nLEVEL) u32Event);
    }
}




