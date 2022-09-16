/**
 *
 * @file GPIO_Config.c
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
#include <xDriver_MCU/GPIO/App/Config/GPIO_Config.h>

#include <stdlib.h>
#include <xDriver_MCU/GPIO/App/Config/xHeader/GPIO_ConfigStruct.h>
#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>

GPIO_nERROR GPIO__enSetConfig(GPIO_nPORT enPort, GPIO_nPINMASK enPin,
                               GPIO_nCONFIG enConfigParam)
{
    GPIO_nERROR enReturn = GPIO_enERROR_POINTER;
    GPIO_CONFIG_t *pstConfig = GPIO__pstCreateConfigStruct(enConfigParam);

    if(0UL != (uint32_t) pstConfig)
    {
        GPIO__vSetResistorMode(enPort, enPin, pstConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort, enPin, pstConfig->enOutputMode);
        GPIO__vSetDirection(enPort, enPin, pstConfig->enDirection);
        GPIO__vSetDrive(enPort, enPin, pstConfig->enDrive);
        GPIO__vDeleteConfigStruct(pstConfig);
        enReturn = GPIO_enERROR_OK;
    }
    return (enReturn);
}

GPIO_nERROR GPIO__enSetConfigStruct(GPIO_nPORT enPort, GPIO_nPINMASK enPin,
                                     const GPIO_CONFIG_t *pstConfig)
{
    GPIO_nERROR enReturn = GPIO_enERROR_POINTER;
    if(0UL != (uint32_t) pstConfig)
    {
        GPIO__vSetResistorMode(enPort, enPin, pstConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort, enPin, pstConfig->enOutputMode);
        GPIO__vSetDirection(enPort, enPin, pstConfig->enDirection);
        GPIO__vSetDrive(enPort, enPin, pstConfig->enDrive);
        enReturn = GPIO_enERROR_OK;
    }
    return (enReturn);
}

GPIO_nCONFIG GPIO__enGetConfig(GPIO_nPORT enPort, GPIO_nPINMASK enPin)
{
    GPIO_nCONFIG enConfig = GPIO_enCONFIG_UNDEF;

    uint32_t u32ResistorModeVar = 0UL;
    uint32_t u32OutputModeVar = 0UL;
    uint32_t u32DirectionVar = 0UL;
    uint32_t u32DriveVar = 0UL;

    uint32_t u32Reg = 0UL;

    u32ResistorModeVar = (uint32_t) GPIO__enGetResistorMode(enPort, enPin);
    u32ResistorModeVar <<= 0UL;
    u32OutputModeVar = (uint32_t) GPIO__enGetOutputMode(enPort, enPin);
    u32OutputModeVar <<= 4UL;
    u32DirectionVar = (uint32_t) GPIO__enGetDirection(enPort, enPin);
    u32DirectionVar <<= 8UL;
    u32DriveVar = (uint32_t) GPIO__enGetDrive(enPort, enPin);
    u32DriveVar <<= 16UL;

    u32Reg = u32ResistorModeVar;
    u32Reg |= u32OutputModeVar;
    u32Reg |= u32DirectionVar;
    u32Reg |= u32DriveVar;

    enConfig = (GPIO_nCONFIG) u32Reg;
    return (enConfig);
}

void GPIO__vGetConfig(GPIO_nPORT enPort, GPIO_nPINMASK enPin, GPIO_CONFIG_t *pstConfig)
{
    if(0UL != (uint32_t) pstConfig)
    {
        pstConfig->enResistorMode = GPIO__enGetResistorMode(enPort, enPin);
        pstConfig->enOutputMode = GPIO__enGetOutputMode(enPort, enPin);
        pstConfig->enDirection = GPIO__enGetDirection(enPort, enPin);
        pstConfig->enDrive = GPIO__enGetDrive(enPort, enPin);
    }
}

GPIO_CONFIG_t* GPIO__pstGetConfig(GPIO_nPORT enPort, GPIO_nPINMASK enPin)
{
    GPIO_CONFIG_t *pstConfig = 0UL;
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    pstConfig = (GPIO_CONFIG_t*) memalign( (size_t) 4,
                                                 (size_t) (sizeof(GPIO_CONFIG_t)));
#elif defined (__GNUC__ )
    pstConfig = (GPIO_CONFIG_t*) malloc((size_t) sizeof(GPIO_CONFIG_t));
    #endif

    if(0UL != (uint32_t) pstConfig)
    {
        pstConfig->enResistorMode = GPIO__enGetResistorMode(enPort, enPin);
        pstConfig->enOutputMode = GPIO__enGetOutputMode(enPort, enPin);
        pstConfig->enDirection = GPIO__enGetDirection(enPort, enPin);
        pstConfig->enDrive = GPIO__enGetDrive(enPort, enPin);
    }
    return (pstConfig);
}
