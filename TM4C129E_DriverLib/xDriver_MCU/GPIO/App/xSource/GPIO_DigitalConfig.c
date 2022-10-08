/**
 *
 * @file GPIO_DigitalConfig.c
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
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_DigitalConfig.h>

#include <stdlib.h>
#include <xDriver_MCU/GPIO/App/Config/GPIO_Config.h>
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_DigitalFunction.h>
#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>

GPIO_nERROR GPIO__enSetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunctionArg,
                                      GPIO_nCONFIG enConfigArg)
{
    GPIO_nERROR enErrorReg;

    UBase_t uxPortReg;
    UBase_t uxPinReg;

    uxPinReg = 0UL;
    uxPortReg = 0UL;
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
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetDigitalFunction(enFunctionArg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetConfigByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, enConfigArg);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetDigitalConfigStructure(GPIO_nDIGITAL_FUNCTION enFunctionArg,
                                           const GPIO_CONFIG_t *pstConfigArg)
{
    GPIO_nERROR enErrorReg;

    UBase_t uxPortReg;
    UBase_t uxPinReg;

    uxPinReg = 0UL;
    uxPortReg = 0UL;
    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
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
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetDigitalFunction(enFunctionArg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetConfigStructureByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, pstConfigArg);
    }

    return (enErrorReg);

}

GPIO_nERROR GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nCONFIG* penConfigArg)
{
    GPIO_nERROR enErrorReg;

    UBase_t uxPortReg;
    UBase_t uxPinReg;

    uxPinReg = 0UL;
    uxPortReg = 0UL;
    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
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
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetConfigByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, penConfigArg);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDigitalConfigStructure(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_CONFIG_t* pstConfigArg)
{
    GPIO_nERROR enErrorReg;

    UBase_t uxPortReg;
    UBase_t uxPinReg;

    uxPinReg = 0UL;
    uxPortReg = 0UL;
    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
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
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetConfigStructureByNumber((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, pstConfigArg);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDigitalConfigByNumber_Create(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_CONFIG_t** pstConfigArg)
{
    GPIO_nERROR enErrorReg;

    UBase_t uxPortReg;
    UBase_t uxPinReg;

    uxPinReg = 0UL;
    uxPortReg = 0UL;
    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
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
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetConfigByNumber_Create((GPIO_nPORT) uxPortReg, (GPIO_nPIN) uxPinReg, pstConfigArg);
    }
    return (enErrorReg);
}

