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

    uint32_t u32PortReg;
    uint32_t u32PinReg;

    u32PinReg = 0UL;
    u32PortReg = 0UL;
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
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetDigitalFunction(enFunctionArg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetConfigByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, enConfigArg);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetDigitalConfigStructure(GPIO_nDIGITAL_FUNCTION enFunctionArg,
                                           const GPIO_CONFIG_t *pstConfigArg)
{
    GPIO_nERROR enErrorReg;

    uint32_t u32PortReg;
    uint32_t u32PinReg;

    u32PinReg = 0UL;
    u32PortReg = 0UL;
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
        u32PortReg = (uint32_t) enFunctionArg;
        u32PortReg >>= 16UL;
        u32PortReg &= 0xFFUL;

        u32PinReg = (uint32_t) enFunctionArg;
        u32PinReg >>= 8UL;
        u32PinReg &= 0xFFUL;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetDigitalFunction(enFunctionArg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetConfigStructureByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, pstConfigArg);
    }

    return (enErrorReg);

}

GPIO_nERROR GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nCONFIG* penConfigArg)
{
    GPIO_nERROR enErrorReg;

    uint32_t u32PortReg;
    uint32_t u32PinReg;

    u32PinReg = 0UL;
    u32PortReg = 0UL;
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
        u32PortReg = (uint32_t) enFunctionArg;
        u32PortReg >>= 16UL;
        u32PortReg &= 0xFFUL;

        u32PinReg = (uint32_t) enFunctionArg;
        u32PinReg >>= 8UL;
        u32PinReg &= 0xFFUL;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetConfigByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, penConfigArg);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDigitalConfigStructure(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_CONFIG_t* pstConfigArg)
{
    GPIO_nERROR enErrorReg;

    uint32_t u32PortReg;
    uint32_t u32PinReg;

    u32PinReg = 0UL;
    u32PortReg = 0UL;
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
        u32PortReg = (uint32_t) enFunctionArg;
        u32PortReg >>= 16UL;
        u32PortReg &= 0xFFUL;

        u32PinReg = (uint32_t) enFunctionArg;
        u32PinReg >>= 8UL;
        u32PinReg &= 0xFFUL;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetConfigStructureByNumber((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, pstConfigArg);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDigitalConfigByNumber_Create(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_CONFIG_t** pstConfigArg)
{
    GPIO_nERROR enErrorReg;

    uint32_t u32PortReg;
    uint32_t u32PinReg;

    u32PinReg = 0UL;
    u32PortReg = 0UL;
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
        u32PortReg = (uint32_t) enFunctionArg;
        u32PortReg >>= 16UL;
        u32PortReg &= 0xFFUL;

        u32PinReg = (uint32_t) enFunctionArg;
        u32PinReg >>= 8UL;
        u32PinReg &= 0xFFUL;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetConfigByNumber_Create((GPIO_nPORT) u32PortReg, (GPIO_nPIN) u32PinReg, pstConfigArg);
    }
    return (enErrorReg);
}

