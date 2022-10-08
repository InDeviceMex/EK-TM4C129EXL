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
    UBase_t uxPortReg;
    UBase_t uxPinReg;
    UBase_t uxMuxReg;
    GPIO_nERROR enErrorReg;

    uxPinReg = 0UL;
    uxPortReg = 0UL;
    uxMuxReg = 0UL;
    enErrorReg = GPIO_enERROR_OK;
    if(GPIO_enGPIO_UNDEF == enFunctionArg)
    {
        enErrorReg = GPIO_enERROR_VALUE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxPortReg = (UBase_t) enFunctionArg;
        uxPortReg >>= 16UL;
        uxPortReg &= 0xFFUL;

        uxPinReg = (UBase_t) enFunctionArg;
        uxPinReg >>= 8UL;
        uxPinReg &= 0xFFUL;

        uxMuxReg = (UBase_t) enFunctionArg;
        uxMuxReg >>= 0UL;
        uxMuxReg &= 0xFFUL;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, GPIO_enSTATE_ENA);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enDisableAnalogModeByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enEnableDigitalModeByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMuxReg)
        {
            enErrorReg = GPIO__enSetFunctionByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, GPIO_enFUNCTION_GPIO);
        }
        else
        {
            enErrorReg = GPIO__enSetFunctionByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, GPIO_enFUNCTION_PERIPHERAL);
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetPeripheralMuxByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, uxMuxReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, GPIO_enSTATE_DIS);
    }

    return (enErrorReg);
}

