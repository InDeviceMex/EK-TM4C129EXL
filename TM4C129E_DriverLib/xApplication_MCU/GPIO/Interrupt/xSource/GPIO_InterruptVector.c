/**
 *
 * @file GPIO_InterruptVector.c
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
#include <xApplication_MCU/GPIO/Interrupt/xHeader/GPIO_InterruptVector.h>

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>

static NVIC_nVECTOR NVIC_enVECTOR_GPIO[ (uint32_t) GPIO_enPORT_MAX] =
{ NVIC_enVECTOR_GPIOA, NVIC_enVECTOR_GPIOB, NVIC_enVECTOR_GPIOC,
  NVIC_enVECTOR_GPIOD, NVIC_enVECTOR_GPIOE, NVIC_enVECTOR_GPIOF,
  NVIC_enVECTOR_GPIOG, NVIC_enVECTOR_GPIOH, NVIC_enVECTOR_GPIOJ,
  NVIC_enVECTOR_GPIOK, NVIC_enVECTOR_GPIOL, NVIC_enVECTOR_GPIOM,
  NVIC_enVECTOR_GPION, NVIC_enVECTOR_GPIOP, NVIC_enVECTOR_GPIOQ};

void GPIO__vEnInterruptVector(GPIO_nPORT enPort, GPIO_nPRIORITY enGPIOPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_GPIOA;
    enPort = (GPIO_nPORT) MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);

    enVector = NVIC_enVECTOR_GPIO[ (uint32_t) enPort];

    NVIC__enEnableVector(NVIC_enMODULE_0, enVector, (NVIC_nPRIORITY) enGPIOPriority);
}

void GPIO__vDisInterruptVector(GPIO_nPORT enPort)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_GPIOA;
    enPort = (GPIO_nPORT) MCU__u32CheckParams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);

    enVector = NVIC_enVECTOR_GPIO[ (uint32_t) enPort];
    NVIC__enDisableVector(NVIC_enMODULE_0, enVector);
}

static NVIC_nVECTOR NVIC_enVECTOR_GPIOPQ_PIN [2UL][(uint32_t) GPIO_enPIN_NUMBER_MAX] =
{
  {
   NVIC_enVECTOR_GPIOP, NVIC_enVECTOR_GPIOP1, NVIC_enVECTOR_GPIOP2, NVIC_enVECTOR_GPIOP3,
   NVIC_enVECTOR_GPIOP4, NVIC_enVECTOR_GPIOP5, NVIC_enVECTOR_GPIOP6, NVIC_enVECTOR_GPIOP7
  },
  {
   NVIC_enVECTOR_GPIOQ, NVIC_enVECTOR_GPIOP1, NVIC_enVECTOR_GPIOP2, NVIC_enVECTOR_GPIOP3,
   NVIC_enVECTOR_GPIOQ4, NVIC_enVECTOR_GPIOQ5, NVIC_enVECTOR_GPIOQ6, NVIC_enVECTOR_GPIOQ7
  },
};

void GPIO__vEnInterruptVectorPin(GPIO_nPORT enPort, GPIO_nPIN_NUMBER enPinNumber, GPIO_nPRIORITY enGPIOPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_GPIOP;
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

        enVector = NVIC_enVECTOR_GPIOPQ_PIN[u32Port][u32PinNumber];

        NVIC__enEnableVector(NVIC_enMODULE_0, enVector, (NVIC_nPRIORITY) enGPIOPriority);
    }
}

void GPIO__vDisInterruptVectorPin(GPIO_nPORT enPort, GPIO_nPIN_NUMBER enPinNumber)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_GPIOP;
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

        enVector = NVIC_enVECTOR_GPIOPQ_PIN[u32Port][u32PinNumber];

        NVIC__enDisableVector(NVIC_enMODULE_0, enVector);
    }
}
