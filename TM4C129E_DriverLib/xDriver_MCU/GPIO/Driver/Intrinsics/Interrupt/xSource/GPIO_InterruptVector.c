/**
 *
 * @file GPIO_InterruptVector.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptVector.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Dependencies.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

static NVIC_nSTIR NVIC_enSTIR_GPIO[ (uint32_t) GPIO_enPORT_MAX] =
{ NVIC_enSTIR_GPIOA, NVIC_enSTIR_GPIOB, NVIC_enSTIR_GPIOC, NVIC_enSTIR_GPIOD, NVIC_enSTIR_GPIOE, NVIC_enSTIR_GPIOF,
  NVIC_enSTIR_GPIOG, NVIC_enSTIR_GPIOH, NVIC_enSTIR_GPIOJ, NVIC_enSTIR_GPIOK, NVIC_enSTIR_GPIOL, NVIC_enSTIR_GPIOM,
  NVIC_enSTIR_GPION, NVIC_enSTIR_GPIOP, NVIC_enSTIR_GPIOQ};

void GPIO__vEnInterruptVector(GPIO_nPORT enPort, GPIO_nPRIORITY enGPIOPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_GPIOA;
    enPort = (GPIO_nPORT) MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);

    enVector = NVIC_enSTIR_GPIO[ (uint32_t) enPort];

    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enGPIOPriority);
}

void GPIO__vDisInterruptVector(GPIO_nPORT enPort)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_GPIOA;
    enPort = (GPIO_nPORT) MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);

    enVector = NVIC_enSTIR_GPIO[ (uint32_t) enPort];
    NVIC__vClearEnableIRQ(enVector);
}

static NVIC_nSTIR NVIC_enSTIR_GPIOPQ_PIN [2UL][(uint32_t) GPIO_enPIN_NUMBER_MAX] =
{
  {
   NVIC_enSTIR_GPIOP, NVIC_enSTIR_GPIOP1, NVIC_enSTIR_GPIOP2, NVIC_enSTIR_GPIOP3,
   NVIC_enSTIR_GPIOP4, NVIC_enSTIR_GPIOP5, NVIC_enSTIR_GPIOP6, NVIC_enSTIR_GPIOP7
  },
  {
   NVIC_enSTIR_GPIOQ, NVIC_enSTIR_GPIOP1, NVIC_enSTIR_GPIOP2, NVIC_enSTIR_GPIOP3,
   NVIC_enSTIR_GPIOQ4, NVIC_enSTIR_GPIOQ5, NVIC_enSTIR_GPIOQ6, NVIC_enSTIR_GPIOQ7
  },
};

void GPIO__vEnInterruptVectorPin(GPIO_nPORT enPort, GPIO_nPIN_NUMBER enPinNumber, GPIO_nPRIORITY enGPIOPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_GPIOP;
    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    if((GPIO_enPORT_P == enPort) || (GPIO_enPORT_Q == enPort ))
    {

        u32PinNumber = MCU__u32CheckParams( (uint32_t) enPinNumber, (uint32_t) GPIO_enPIN_NUMBER_MAX);
        switch(enPort)
        {
        case GPIO_enPORT_P:
            u32Port = 0UL;
            break;
        case GPIO_enPORT_Q:
            u32Port = 1UL;
            break;
        default:
            break;
        }

        enVector = NVIC_enSTIR_GPIOPQ_PIN[u32Port][u32PinNumber];

        NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enGPIOPriority);
    }
}

void GPIO__vDisInterruptVectorPin(GPIO_nPORT enPort, GPIO_nPIN_NUMBER enPinNumber)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_GPIOP;
    uint32_t u32Port = 0UL;
    uint32_t u32PinNumber = 0UL;
    if((GPIO_enPORT_P == enPort) || (GPIO_enPORT_Q == enPort ))
    {

        u32PinNumber = MCU__u32CheckParams( (uint32_t) enPinNumber, (uint32_t) GPIO_enPIN_NUMBER_MAX);
        switch(enPort)
        {
        case GPIO_enPORT_P:
            u32Port = 0UL;
            break;
        case GPIO_enPORT_Q:
            u32Port = 1UL;
            break;
        default:
            break;
        }

        enVector = NVIC_enSTIR_GPIOPQ_PIN[u32Port][u32PinNumber];

        NVIC__vClearEnableIRQ(enVector);
    }
}
