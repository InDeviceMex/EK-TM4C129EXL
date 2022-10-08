/**
 *
 * @file GPIO_InterruptRegisterIRQSource.c
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
 * @verbatim 2 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/GPIO_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enRegisterIRQSourceHandlerByMask(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                   GPIO_nPORT enPort,
                                                   GPIO_nPINMASK enPinMask)
{
    GPIO_pvfIRQSourceHandler_t* pvfIrqHandler;
    UBase_t uxPinNumber;
    UBase_t uxPinMask;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPort, (UBase_t) GPIO_enPORT_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMask, (UBase_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxPinMask = (UBase_t) enPinMask;
        uxPinNumber = 0UL;
        while(0UL != uxPinMask)
        {
            if(0UL != (1UL & uxPinMask))
            {
                pvfIrqHandler = GPIO__pvfGetIRQSourceHandlerPointer(enPort, (GPIO_nPIN) uxPinNumber);
                enErrorReg = (GPIO_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
            }
            uxPinNumber++;
            uxPinMask >>= 1UL;
        }
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enRegisterIRQSourceHandlerByNumber(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                     GPIO_nPORT enPort,
                                                     GPIO_nPIN enPin)
{
    GPIO_pvfIRQSourceHandler_t* pvfIrqHandler;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPort, (UBase_t) GPIO_enPORT_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPin, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        pvfIrqHandler = GPIO__pvfGetIRQSourceHandlerPointer(enPort, enPin);
        enErrorReg = (GPIO_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO_DMA__enRegisterIRQSourceHandlerByMask(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                   GPIO_nPORT enPort,
                                                   GPIO_nPINMASK enPinMask)
{
    GPIO_pvfIRQSourceHandler_t* pvfIrqHandler;
    UBase_t uxPinNumber;
    UBase_t uxPinMask;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPort, (UBase_t) GPIO_enPORT_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMask, (UBase_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxPinMask = (UBase_t) enPinMask;
        uxPinNumber = 0UL;
        while(0UL != uxPinMask)
        {
            if(0UL != (1UL & uxPinMask))
            {
                pvfIrqHandler = GPIO_DMA__pvfGetIRQSourceHandlerPointer(enPort, (GPIO_nPIN) uxPinNumber);
                enErrorReg = (GPIO_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
            }
            uxPinNumber++;
            uxPinMask >>= 1UL;
        }
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO_DMA__enRegisterIRQSourceHandlerByNumber(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                 GPIO_nPORT enPort,
                                                 GPIO_nPIN enPin)
{
    GPIO_pvfIRQSourceHandler_t* pvfIrqHandler;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPort, (UBase_t) GPIO_enPORT_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPin, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        pvfIrqHandler = GPIO_DMA__pvfGetIRQSourceHandlerPointer(enPort, enPin);
        enErrorReg = (GPIO_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO_SW__enRegisterIRQSourceHandler(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                 GPIO_nPORT enPort)
{
    GPIO_pvfIRQSourceHandler_t* pvfIrqHandler;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPort, (UBase_t) GPIO_enPORT_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        pvfIrqHandler = GPIO_SW__pvfGetIRQSourceHandlerPointer(enPort);
        enErrorReg = (GPIO_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}

/**
 * @brief Function to register The interrupt source of PORTQ and PORTP SW when they act
 * in separate vectors
 *
 * @param pfIrqSourceHandler
 * @param enPort Must be GPIO_enPORT_P or GPIO_enPORT_Q
 * @param enPin Must be greather than GPIO_enPINMASK_0
 */

GPIO_nERROR GPIO_PQ__enRegisterIRQSourceHandlerByMask(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                      GPIO_nPORT enPort,
                                                      GPIO_nPINMASK enPinMask)
{
    GPIO_pvfIRQSourceHandler_t* pvfIrqHandler;
    UBase_t uxPinNumber;
    UBase_t uxPinMask;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if((GPIO_enPORT_P != enPort) && (GPIO_enPORT_Q != enPort))
    {
        enErrorReg = GPIO_enERROR_RANGE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMask, (UBase_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxPinMask = (UBase_t) enPinMask;
        uxPinNumber = 0UL;
        while(0UL != uxPinMask)
        {
            if(0UL != (1UL & uxPinMask))
            {
                pvfIrqHandler = GPIO_PQ__pvfGetIRQSourceHandlerPointer(enPort, (GPIO_nPIN) uxPinNumber);
                enErrorReg = (GPIO_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
            }
            uxPinNumber++;
            uxPinMask >>= 1UL;
        }
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO_PQ__enRegisterIRQSourceHandlerByNumber(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                        GPIO_nPORT enPort,
                                                        GPIO_nPIN enPin)
{
    GPIO_pvfIRQSourceHandler_t* pvfIrqHandler;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if((GPIO_enPORT_P != enPort) && (GPIO_enPORT_Q != enPort))
    {
        enErrorReg = GPIO_enERROR_RANGE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPin, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        pvfIrqHandler = GPIO_PQ__pvfGetIRQSourceHandlerPointer(enPort, enPin);
        enErrorReg = (GPIO_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}
