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

void GPIO__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), GPIO_nPORT enPort)
{
    SCB_nVECISR enVector = SCB_enVECISR_GPIOA;
    uint32_t u32Port = 0UL;
    const SCB_nVECISR SCB_enVECISR_GPIO[(uint32_t) GPIO_enPORT_MAX] =
    { SCB_enVECISR_GPIOA, SCB_enVECISR_GPIOB, SCB_enVECISR_GPIOC, SCB_enVECISR_GPIOD,
      SCB_enVECISR_GPIOE, SCB_enVECISR_GPIOF, SCB_enVECISR_GPIOG, SCB_enVECISR_GPIOH,
      SCB_enVECISR_GPIOJ, SCB_enVECISR_GPIOK, SCB_enVECISR_GPIOL, SCB_enVECISR_GPIOM,
      SCB_enVECISR_GPION, SCB_enVECISR_GPIOP, SCB_enVECISR_GPIOQ
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Port = MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);
        enVector = SCB_enVECISR_GPIO[u32Port];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler, GPIO__pvfGetIRQVectorHandlerPointer((GPIO_nPORT) u32Port), enVector);
    }
}

void GPIO_PQ__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),
                                        GPIO_nPORT enPort,
                                        GPIO_nPIN_NUMBER enPinNumber)
{
    SCB_nVECISR enVector = SCB_enVECISR_GPIOP;
    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    const SCB_nVECISR SCB_enVECISR_GPIO_PQ[(uint32_t) GPIO_enPORT_MAX - (uint32_t) GPIO_enPORT_P]
                                        [(uint32_t) GPIO_enPIN_NUMBER_MAX] =
    {
     {
         SCB_enVECISR_GPIOP, SCB_enVECISR_GPIOP1,
         SCB_enVECISR_GPIOP2, SCB_enVECISR_GPIOP3,
         SCB_enVECISR_GPIOP4, SCB_enVECISR_GPIOP5,
         SCB_enVECISR_GPIOP6, SCB_enVECISR_GPIOP7
     },
     {
          SCB_enVECISR_GPIOQ, SCB_enVECISR_GPIOQ1,
          SCB_enVECISR_GPIOQ2, SCB_enVECISR_GPIOQ3,
          SCB_enVECISR_GPIOQ4, SCB_enVECISR_GPIOQ5,
          SCB_enVECISR_GPIOQ6, SCB_enVECISR_GPIOQ7
     },
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        if((GPIO_enPORT_P == enPort) || (GPIO_enPORT_Q == enPort))
        {
            if(GPIO_enPIN_0 != enPinNumber)
            {
                enVector = SCB_enVECISR_GPIO_PQ[u32Port][u32PinNumber];
                SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler,
                                   GPIO__pvfGetIRQVectorHandlerPointer((GPIO_nPORT) u32Port),
                                   enVector);
            }
        }
    }
}

void GPIO__vRegisterAll_IRQVectorHandler(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_A);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_A);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_B);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_B);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_C);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_C);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_D);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_D);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_E);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_E);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_F);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_F);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_G);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_G);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_H);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_H);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_J);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_J);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_K);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_K);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_L);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_L);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_M);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_M);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_N);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_N);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_P);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_P);
    pfIrqVectorHandler = GPIO__pvfGetIRQVectorHandler(GPIO_enPORT_Q);
    GPIO__vRegisterIRQVectorHandler( pfIrqVectorHandler, GPIO_enPORT_Q);
}
