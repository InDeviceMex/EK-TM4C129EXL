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
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_WDT01);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER0A);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER1A);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER2A);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER3A);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER4A);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER5A);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER6A);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER7A);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER0B);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER1B);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER2B);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER3B);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER4B);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER5B);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER6B);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TIMER7B);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOA);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOB);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOC);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOD);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOE);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOF);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOG);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOH);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOJ);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOK);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOL);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOM);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPION);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOP);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOQ);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOR);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOS);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOT);


    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOP1);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOP2);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOP3);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOP4);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOP5);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOP6);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOP7);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOQ1);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOQ2);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOQ3);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOQ4);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOQ5);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOQ6);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_GPIOQ7);


    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UDMASOFT);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UDMAERROR);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_HIB);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ETH);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_EPI0);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UART0);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UART1);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UART2);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UART3);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UART4);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UART5);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UART6);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_UART7);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_SSI0);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_SSI1);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_SSI2);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_SSI3);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C0);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C1);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C2);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C3);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C4);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C5);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C6);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C7);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C8);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_I2C9);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_USB);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_CAN0);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_CAN1);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ADC1SEQ0);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ADC1SEQ1);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ADC1SEQ2);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ADC1SEQ3);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ADC0SEQ0);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ADC0SEQ1);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ADC0SEQ2);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ADC0SEQ3);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ACMP0);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ACMP1);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ACMP2);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_PWM0GEN0);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_PWM0GEN1);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_PWM0GEN2);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_PWM0GEN3);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_PWM0FAULT);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_QEI0);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_FLASH);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_SYSCTL);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_SYSEXC);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_TAMPER);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_SHA_MD5);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_AES);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_DES);

    NVIC__vClearEnableIRQ(NVIC_enVECTOR_LCD);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_KEYBOARD);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_ONEWIRE);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_PS2);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_LEDSEQ);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_IR);
    NVIC__vClearEnableIRQ(NVIC_enVECTOR_FAN);
}
