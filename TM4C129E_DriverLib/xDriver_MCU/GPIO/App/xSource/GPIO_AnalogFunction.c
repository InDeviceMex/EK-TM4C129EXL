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

GPIO_nERROR GPIO__enSetAnalogFunction(GPIO_nANALOG_FUNCTION enFunctionArg)
{
    GPIO_nERROR enErrorReg;
    uint32_t u32PortReg;
    uint32_t u32PinReg;

    u32PortReg = 0UL;
    u32PinReg = 0UL;
    enErrorReg = GPIO_enERROR_OK;
    if(GPIO_enAIN_UNDEF == enFunctionArg)
    {
        enErrorReg = GPIO_enERROR_VALUE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32PortReg = (uint32_t) enFunctionArg;
        u32PortReg >>= 8UL;
        u32PortReg &= 0xFFUL;

        u32PinReg = (uint32_t) enFunctionArg;
        u32PinReg >>= 0UL;
        u32PinReg &= 0xFFUL;
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, GPIO_enSTATE_ENA);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetConfigByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enDisableADCTriggerByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetFunctionByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, GPIO_enFUNCTION_GPIO);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enDisableDigitalModeByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enEnableAnalogModeByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, GPIO_enSTATE_DIS);
    }

    return (enErrorReg);
}
