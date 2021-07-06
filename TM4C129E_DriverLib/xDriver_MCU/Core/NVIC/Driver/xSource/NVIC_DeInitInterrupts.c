/**
 *
 * @file NVIC_DeInitInterrupts.c
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_DeInitInterrupts.h>

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Enable.h>

void NVIC__vDeInitInterrupts(void)
{
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WDT01);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER0A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER1A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER2A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER3A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER4A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER5A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER6A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER7A);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER0B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER1B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER2B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER3B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER4B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER5B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER6B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER7B);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOA);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOB);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOC);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOD);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOE);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOF);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOG);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOH);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOJ);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOK);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOL);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOM);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPION);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOP);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOQ);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOR);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOS);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOT);


    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOP1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOP2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOP3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOP4);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOP5);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOP6);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOP7);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOQ1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOQ2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOQ3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOQ4);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOQ5);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOQ6);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOQ7);


    NVIC__vClearEnableIRQ(NVIC_enSTIR_UDMASOFT);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UDMAERROR);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_HIB);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_ETH);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_EPI0);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART4);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART5);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART6);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART7);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_SSI0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SSI1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SSI2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SSI3);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C4);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C5);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C6);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C7);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C8);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C9);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_USB);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_CAN0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_CAN1);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC1SEQ0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC1SEQ1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC1SEQ2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC1SEQ3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC0SEQ0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC0SEQ1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC0SEQ2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC0SEQ3);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_ACMP0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ACMP1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ACMP2);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0GEN0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0GEN1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0GEN2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0GEN3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0FAULT);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_QEI0);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_FLASH);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SYSCTL);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SYSEXC);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_TAMPER);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SHA_MD5);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_AES);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_DES);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_LCD);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_KEYBOARD);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ONEWIRE);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PS2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_LEDSEQ);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_IR);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_FAN);
}
