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

GPIO_nERROR GPIO__enSetDigitalFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg)
{
    uint32_t u32PortReg;
    uint32_t u32PinReg;
    uint32_t u32MuxReg;
    GPIO_nERROR enErrorReg;

    u32PinReg = 0UL;
    u32PortReg = 0UL;
    u32MuxReg = 0UL;
    enErrorReg = GPIO_enERROR_OK;
    if(GPIO_enGPIO_UNDEF == enFunctionArg)
    {
        enErrorReg = GPIO_enERROR_VALUE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32PortReg = (uint32_t) enFunctionArg;
        u32PortReg >>= 16UL;
        u32PortReg &= 0xFFUL;

        u32PinReg = (uint32_t) enFunctionArg;
        u32PinReg >>= 8UL;
        u32PinReg &= 0xFFUL;

        u32MuxReg = (uint32_t) enFunctionArg;
        u32MuxReg >>= 0UL;
        u32MuxReg &= 0xFFUL;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, GPIO_enSTATE_ENA);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enDisableAnalogModeByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enEnableDigitalModeByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL == u32MuxReg)
        {
            enErrorReg = GPIO__enSetFunctionByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, GPIO_enFUNCTION_GPIO);
        }
        else
        {
            enErrorReg = GPIO__enSetFunctionByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, GPIO_enFUNCTION_PERIPHERAL);
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetPeripheralMuxByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, u32MuxReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, GPIO_enSTATE_DIS);
    }

    return (enErrorReg);
}

