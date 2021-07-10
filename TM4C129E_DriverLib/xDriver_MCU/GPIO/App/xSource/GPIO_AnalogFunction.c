/**
 *
 * @file GPIO_AnalogFunction.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_AnalogFunction.h>

#include <xDriver_MCU/GPIO/App/Config/GPIO_Config.h>
#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>

void GPIO__vSetAnalogFunction(GPIO_nANALOG_FUNCTION enFunction)
{
    GPIO_nPORT enPort = GPIO_enPORT_A;
    GPIO_nPIN enPin = GPIO_enPIN_0;
    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    uint32_t u32Pin = 0U;

    u32Port = (uint32_t) enFunction;
    u32Port >>= 8UL;
    u32Port &= 0xFFUL;

    u32PinNumber = (uint32_t) enFunction;
    u32PinNumber >>= 0UL;
    u32PinNumber &= 0xFFUL;

    u32Pin = 1UL;
    u32Pin <<= u32PinNumber;

    enPort = (GPIO_nPORT) u32Port;
    enPin = (GPIO_nPIN) u32Pin;

    GPIO__enSetConfig(enPort, enPin, GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
    GPIO__vDisADCTrigger(enPort, enPin);
    GPIO__vDisAltFunction(enPort, enPin);
    GPIO__vDisDigital(enPort, enPin);
    GPIO__vEnAnalog(enPort, enPin);
}
