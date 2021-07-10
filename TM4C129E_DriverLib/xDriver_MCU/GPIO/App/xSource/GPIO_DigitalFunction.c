/**
 *
 * @file GPIO_DigitalFunction.c
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
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_DigitalFunction.h>

#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetDigitalFunction(GPIO_nDIGITAL_FUNCTION enFunction)
{
    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    uint32_t u32FunctionValue = 0UL;
    uint32_t u32Pin = 0UL;
    uint32_t u32FunctionBit = 0UL;

    if(GPIO_enGPIO_UNDEF != enFunction)
    {
        u32Port = (uint32_t) enFunction;
        u32Port >>= 16UL;
        u32Port &= 0xFFUL;

        u32PinNumber = (uint32_t) enFunction;
        u32PinNumber >>= 8UL;
        u32PinNumber &= 0xFFUL;

        u32FunctionValue = (uint32_t) enFunction;
        u32FunctionValue >>= 0UL;
        u32FunctionValue &= 0xFFUL;

        u32Pin = 1UL;
        u32Pin <<= u32PinNumber;

        u32FunctionBit = u32PinNumber;
        u32FunctionBit *= 4UL;

        GPIO__vDisAnalog((GPIO_nPORT) u32Port, (GPIO_nPIN) u32Pin);
        GPIO__vEnDigital((GPIO_nPORT) u32Port, (GPIO_nPIN) u32Pin);
        GPIO__vSetAltFunction((GPIO_nPORT) u32Port, (GPIO_nPIN) u32Pin, (GPIO_nALT_FUNCTION) u32FunctionValue);

        GPIO__vWriteRegister( (GPIO_nPORT) u32Port, GPIO_PCTL_OFFSET, u32FunctionValue, 0xFUL, u32FunctionBit);
    }
}

