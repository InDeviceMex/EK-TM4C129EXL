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
#include <xDriver_MCU/GPIO/App/Config/xHeader/GPIO_ConfigStruct.h>
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_DigitalFunction.h>
#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>

GPIO_nSTATUS GPIO__enSetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction, GPIO_nCONFIG enConfigParam)
{
    GPIO_nSTATUS enReturn = GPIO_enSTATUS_ERROR;

    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    uint32_t u32Pin = 0UL;

    GPIO_nPORT enPort = GPIO_enPORT_A;
    GPIO_nPIN enPin = GPIO_enPIN_0;

    if(GPIO_enGPIO_UNDEF != enFunction)
    {
        GPIO_CONFIG_Typedef *pstConfig = GPIO__pstCreateConfigStruct(enConfigParam);

        if(0UL != (uint32_t) pstConfig)
        {
            u32Port = (uint32_t) enFunction;
            u32Port >>= 16UL;
            u32Port &= 0xFFUL;

            u32PinNumber = (uint32_t) enFunction;
            u32PinNumber >>= 8UL;
            u32PinNumber &= 0xFFUL;

            u32Pin = 1UL;
            u32Pin <<= u32PinNumber;

            enPort = (GPIO_nPORT) u32Port;
            enPin = (GPIO_nPIN) u32Pin;

            GPIO__vSetDigitalFunction(enFunction);
            GPIO__vSetResistorMode(enPort, enPin, pstConfig->enResistorMode);
            GPIO__vSetOutputMode(enPort, enPin, pstConfig->enOutputMode);
            GPIO__vSetDirection(enPort, enPin, pstConfig->enDirection);
            GPIO__vSetDrive(enPort, enPin, pstConfig->enDrive);
            GPIO__vDeleteConfigStruct(pstConfig);
            enReturn = GPIO_enSTATUS_OK;
        }
    }
    return enReturn;
}

GPIO_nSTATUS GPIO__enSetDigitalConfigStruct(GPIO_nDIGITAL_FUNCTION enFunction, const GPIO_CONFIG_Typedef *pstConfig)
{
    GPIO_nSTATUS enReturn = GPIO_enSTATUS_ERROR;

    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    uint32_t u32Pin = 0UL;

    GPIO_nPORT enPort = GPIO_enPORT_A;
    GPIO_nPIN enPin = GPIO_enPIN_0;

    if((0UL != (uint32_t) pstConfig) && (GPIO_enGPIO_UNDEF != enFunction))
    {
        u32Port = (uint32_t) enFunction;
        u32Port >>= 16UL;
        u32Port &= 0xFFUL;

        u32PinNumber = (uint32_t) enFunction;
        u32PinNumber >>= 8UL;
        u32PinNumber &= 0xFFUL;

        u32Pin = 1UL;
        u32Pin <<= u32PinNumber;

        enPort = (GPIO_nPORT) u32Port;
        enPin = (GPIO_nPIN) u32Pin;

        GPIO__vSetDigitalFunction(enFunction);
        GPIO__vSetResistorMode(enPort, enPin, pstConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort, enPin, pstConfig->enOutputMode);
        GPIO__vSetDirection(enPort, enPin, pstConfig->enDirection);
        GPIO__vSetDrive(enPort, enPin, pstConfig->enDrive);
        enReturn = GPIO_enSTATUS_OK;
    }
    return enReturn;

}
GPIO_nCONFIG GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction)
{
    GPIO_nCONFIG enConfig = GPIO_enCONFIG_UNDEF;
    GPIO_nRESMODE enResistorModeVar = GPIO_enRESMODE_UNDEF;
    GPIO_nOUTMODE enOutputModeVar = GPIO_enOUTMODE_UNDEF;
    GPIO_nDIR enDirectionVar = GPIO_enDIR_UNDEF;
    GPIO_nDRIVE enDriveVar = GPIO_enDRIVE_UNDEF;
    GPIO_nPORT enPort = GPIO_enPORT_A;
    GPIO_nPIN enPin = GPIO_enPIN_0;
    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    uint32_t u32Pin = 0UL;
    uint32_t u32Reg = 0UL;

    if(GPIO_enGPIO_UNDEF != enFunction)
    {
        u32Port = (uint32_t) enFunction;
        u32Port >>= 16UL;
        u32Port &= 0xFFUL;

        u32PinNumber = (uint32_t) enFunction;
        u32PinNumber >>= 8UL;
        u32PinNumber &= 0xFFUL;

        u32Pin = 1UL;
        u32Pin <<= u32PinNumber;

        enPort = (GPIO_nPORT) u32Port;
        enPin = (GPIO_nPIN) u32Pin;

        enResistorModeVar = GPIO__enGetResistorMode(enPort, enPin);
        enOutputModeVar = GPIO__enGetOutputMode(enPort, enPin);
        enDirectionVar = GPIO__enGetDirection(enPort, enPin);
        enDriveVar = GPIO__enGetDrive(enPort, enPin);

        u32Reg = ((uint32_t) enResistorModeVar << 0UL);
        u32Reg |= ((uint32_t) enOutputModeVar << 4UL);
        u32Reg |= ((uint32_t) enDirectionVar << 8UL);
        u32Reg |= ((uint32_t) enDriveVar << 16UL);

        enConfig = (GPIO_nCONFIG) u32Reg;
    }
    return enConfig;
}

void GPIO__vGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction, GPIO_CONFIG_Typedef *pstConfig)
{
    GPIO_nPORT enPort = GPIO_enPORT_A;
    GPIO_nPIN enPin = GPIO_enPIN_0;
    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    uint32_t u32Pin = 0UL;

    if((0UL != (uint32_t) pstConfig) && (GPIO_enGPIO_UNDEF != enFunction))
    {
        u32Port = (uint32_t) enFunction;
        u32Port >>= 16UL;
        u32Port &= 0xFFUL;

        u32PinNumber = (uint32_t) enFunction;
        u32PinNumber >>= 8UL;
        u32PinNumber &= 0xFFUL;

        u32Pin = 1UL;
        u32Pin <<= u32PinNumber;

        enPort = (GPIO_nPORT) u32Port;
        enPin = (GPIO_nPIN) u32Pin;

        pstConfig->enResistorMode = GPIO__enGetResistorMode(enPort, enPin);
        pstConfig->enOutputMode = GPIO__enGetOutputMode(enPort, enPin);
        pstConfig->enDirection = GPIO__enGetDirection(enPort, enPin);
        pstConfig->enDrive = GPIO__enGetDrive(enPort, enPin);
    }
}

GPIO_CONFIG_Typedef* GPIO__pstGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction)
{
    GPIO_CONFIG_Typedef *pstConfig = 0UL;

    GPIO_nPORT enPort = GPIO_enPORT_A;
    GPIO_nPIN enPin = GPIO_enPIN_0;
    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    uint32_t u32Pin = 0UL;

    if(GPIO_enGPIO_UNDEF != enFunction)
    {
    #if defined (__TI_ARM__ )
        pstConfig = (GPIO_CONFIG_Typedef*) memalign( (size_t) 4, (size_t) (sizeof(GPIO_CONFIG_Typedef) ));
    #elif defined (__GNUC__ )
        pstConfig = (GPIO_CONFIG_Typedef*) malloc( (size_t) sizeof(GPIO_CONFIG_Typedef));
    #endif

        if(0UL != (uint32_t) pstConfig)
        {
            u32Port = (uint32_t) enFunction;
            u32Port >>= 16UL;
            u32Port &= 0xFFUL;

            u32PinNumber = (uint32_t) enFunction;
            u32PinNumber >>= 8UL;
            u32PinNumber &= 0xFFUL;

            u32Pin = 1UL;
            u32Pin <<= u32PinNumber;

            enPort = (GPIO_nPORT) u32Port;
            enPin = (GPIO_nPIN) u32Pin;

            pstConfig->enResistorMode = GPIO__enGetResistorMode(enPort, enPin);
            pstConfig->enOutputMode = GPIO__enGetOutputMode(enPort, enPin);
            pstConfig->enDirection = GPIO__enGetDirection(enPort, enPin);
            pstConfig->enDrive = GPIO__enGetDrive(enPort, enPin);
        }
    }
    return pstConfig;
}

