/**
 *
 * @file GPIO_InterruptRegisterIRQVector.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/GPIO_InterruptRegisterIRQVector.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Dependencies.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/GPIO_InterruptRoutine.h>

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

void GPIO__vRegisterAll_IRQVectorHandler(void)
{
    GPIO__vRegisterIRQVectorHandler( &GPIOA__vIRQVectorHandler, GPIO_enPORT_A);
    GPIO__vRegisterIRQVectorHandler( &GPIOB__vIRQVectorHandler, GPIO_enPORT_B);
    GPIO__vRegisterIRQVectorHandler( &GPIOC__vIRQVectorHandler, GPIO_enPORT_C);
    GPIO__vRegisterIRQVectorHandler( &GPIOD__vIRQVectorHandler, GPIO_enPORT_D);
    GPIO__vRegisterIRQVectorHandler( &GPIOE__vIRQVectorHandler, GPIO_enPORT_E);
    GPIO__vRegisterIRQVectorHandler( &GPIOF__vIRQVectorHandler, GPIO_enPORT_F);
    GPIO__vRegisterIRQVectorHandler( &GPIOG__vIRQVectorHandler, GPIO_enPORT_G);
    GPIO__vRegisterIRQVectorHandler( &GPIOH__vIRQVectorHandler, GPIO_enPORT_H);
    GPIO__vRegisterIRQVectorHandler( &GPIOJ__vIRQVectorHandler, GPIO_enPORT_J);
    GPIO__vRegisterIRQVectorHandler( &GPIOK__vIRQVectorHandler, GPIO_enPORT_K);
    GPIO__vRegisterIRQVectorHandler( &GPIOL__vIRQVectorHandler, GPIO_enPORT_L);
    GPIO__vRegisterIRQVectorHandler( &GPIOM__vIRQVectorHandler, GPIO_enPORT_M);
    GPIO__vRegisterIRQVectorHandler( &GPION__vIRQVectorHandler, GPIO_enPORT_N);
    GPIO__vRegisterIRQVectorHandler( &GPIOP__vIRQVectorHandler, GPIO_enPORT_P);
    GPIO__vRegisterIRQVectorHandler( &GPIOQ__vIRQVectorHandler, GPIO_enPORT_Q);
}
