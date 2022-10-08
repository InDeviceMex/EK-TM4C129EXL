/**
 *
 * @file GPIO_InterruptRegisterIRQVector.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/GPIO/Interrupt/InterruptRegister/xHeader/GPIO_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/GPIO/Interrupt/InterruptRoutine/GPIO_InterruptRoutine.h>
#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>


GPIO_nERROR GPIO__enRegisterIRQVectorHandler(GPIO_nPORT enPortArg, GPIO_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_GPIO[(UBase_t) GPIO_enPORT_MAX] =
    {
      SCB_enVECISR_GPIOA, SCB_enVECISR_GPIOB, SCB_enVECISR_GPIOC, SCB_enVECISR_GPIOD, SCB_enVECISR_GPIOE,
      SCB_enVECISR_GPIOF, SCB_enVECISR_GPIOG, SCB_enVECISR_GPIOH, SCB_enVECISR_GPIOJ, SCB_enVECISR_GPIOK,
      SCB_enVECISR_GPIOL, SCB_enVECISR_GPIOM, SCB_enVECISR_GPION, SCB_enVECISR_GPIOP, SCB_enVECISR_GPIOQ
    };
    SCB_nVECISR enVectorReg;
    GPIO_nERROR enErrorReg;
    GPIO_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPortArg, (UBase_t) GPIO_enPORT_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_GPIO[(UBase_t) enPortArg];
        pvfVectorHandlerReg = GPIO__pvfGetIRQVectorHandlerPointer(enPortArg);
        enErrorReg = (GPIO_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}

GPIO_nERROR GPIO_PQ__enRegisterIRQVectorHandler(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_GPIO_PQ[(UBase_t) GPIO_enPORT_MAX - (UBase_t) GPIO_enPORT_P] [(UBase_t) GPIO_enPIN_MAX] =
    {
     {
         SCB_enVECISR_GPIOP, SCB_enVECISR_GPIOP1, SCB_enVECISR_GPIOP2, SCB_enVECISR_GPIOP3,
         SCB_enVECISR_GPIOP4, SCB_enVECISR_GPIOP5, SCB_enVECISR_GPIOP6, SCB_enVECISR_GPIOP7
     },
     {
          SCB_enVECISR_GPIOQ, SCB_enVECISR_GPIOQ1, SCB_enVECISR_GPIOQ2, SCB_enVECISR_GPIOQ3,
          SCB_enVECISR_GPIOQ4, SCB_enVECISR_GPIOQ5, SCB_enVECISR_GPIOQ6, SCB_enVECISR_GPIOQ7
     },
    };
    SCB_nVECISR enVectorReg;
    GPIO_nERROR enErrorReg;
    GPIO_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enVectorReg = SCB_enVECISR_GPIOP;
    enErrorReg = GPIO_enERROR_OK;
    if((GPIO_enPORT_P != enPortArg) && (GPIO_enPORT_Q != enPortArg))
    {
        enErrorReg = GPIO_enERROR_RANGE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enPORT_P == enPortArg)
        {
            enVectorReg = SCB_enVECISR_GPIO_PQ[0UL][(UBase_t) enPinArg];
        }
        else if(GPIO_enPORT_Q == enPortArg)
        {
            enVectorReg = SCB_enVECISR_GPIO_PQ[1UL][(UBase_t) enPinArg];
        }
        pvfVectorHandlerReg = GPIO_PQ__pvfGetIRQVectorHandlerPointer(enPortArg, enPinArg);
        enErrorReg = (GPIO_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}

GPIO_nERROR GPIO__enRegisterAll_IRQVectorHandler(void)
{
    GPIO_nERROR enErrorReg;
    UBase_t uxPortReg;
    UBase_t uxPinReg;
    GPIO_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    uxPortReg = (UBase_t) GPIO_enPORT_A;
    enErrorReg = GPIO_enERROR_OK;
    while((uxPortReg < (UBase_t) GPIO_enPORT_MAX) && (GPIO_enERROR_OK == enErrorReg))
    {
        pfIrqVectorHandlerReg = GPIO__pvfGetIRQVectorHandler((GPIO_nPORT) uxPortReg);
        enErrorReg = GPIO__enRegisterIRQVectorHandler((GPIO_nPORT) uxPortReg, pfIrqVectorHandlerReg);
        uxPortReg++;
    }

    uxPinReg = (UBase_t) GPIO_enPIN_1;
    enErrorReg = GPIO_enERROR_OK;
    while((uxPinReg < (UBase_t) GPIO_enPIN_MAX) && (GPIO_enERROR_OK == enErrorReg))
    {
        pfIrqVectorHandlerReg = GPIO_PQ__pvfGetIRQVectorHandler(GPIO_enPORT_P, (GPIO_nPIN) uxPinReg);
        enErrorReg = GPIO_PQ__enRegisterIRQVectorHandler(GPIO_enPORT_P, (GPIO_nPIN) uxPinReg, pfIrqVectorHandlerReg);
        uxPinReg++;
    }

    uxPinReg = (UBase_t) GPIO_enPIN_1;
    enErrorReg = GPIO_enERROR_OK;
    while((uxPinReg < (UBase_t) GPIO_enPIN_MAX) && (GPIO_enERROR_OK == enErrorReg))
    {
        pfIrqVectorHandlerReg = GPIO_PQ__pvfGetIRQVectorHandler(GPIO_enPORT_Q, (GPIO_nPIN) uxPinReg);
        enErrorReg = GPIO_PQ__enRegisterIRQVectorHandler(GPIO_enPORT_Q, (GPIO_nPIN) uxPinReg, pfIrqVectorHandlerReg);
        uxPinReg++;
    }
    return (enErrorReg);
}
