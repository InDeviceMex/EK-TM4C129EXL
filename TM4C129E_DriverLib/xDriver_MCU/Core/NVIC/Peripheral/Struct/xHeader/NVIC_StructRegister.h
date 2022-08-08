/**
 *
 * @file NVIC_StructRegister.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTREGISTER_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
    volatile uint32_t NVIC_GPIOA :1;
    volatile uint32_t NVIC_GPIOB :1;
    volatile uint32_t NVIC_GPIOC :1;
    volatile uint32_t NVIC_GPIOD :1;
    volatile uint32_t NVIC_GPIOE :1;
    volatile uint32_t NVIC_UART0 :1;
    volatile uint32_t NVIC_UART1 :1;
    volatile uint32_t NVIC_SSI0 :1;
    volatile uint32_t NVIC_I2C0 :1;
    volatile uint32_t NVIC_PWM0FAULT :1;
    volatile uint32_t NVIC_PWM0GEN0 :1;
    volatile uint32_t NVIC_PWM0GEN1 :1;
    volatile uint32_t NVIC_PWM0GEN2 :1;
    volatile uint32_t NVIC_QEI0 :1;
    volatile uint32_t NVIC_ADC0SEQ0 :1;
    volatile uint32_t NVIC_ADC0SEQ1 :1;
    volatile uint32_t NVIC_ADC0SEQ2 :1;
    volatile uint32_t NVIC_ADC0SEQ3 :1;
    volatile uint32_t NVIC_WDT01 :1;
    volatile uint32_t NVIC_TIMER0A :1;
    volatile uint32_t NVIC_TIMER0B :1;
    volatile uint32_t NVIC_TIMER1A :1;
    volatile uint32_t NVIC_TIMER1B :1;
    volatile uint32_t NVIC_TIMER2A :1;
    volatile uint32_t NVIC_TIMER2B :1;
    volatile uint32_t NVIC_ACMP0 :1;
    volatile uint32_t NVIC_ACMP1 :1;
    volatile uint32_t NVIC_ACMP2 :1;
    volatile uint32_t NVIC_SYSCTL :1;
    volatile uint32_t NVIC_FLASH :1;
    volatile uint32_t NVIC_GPIOF :1;
    volatile uint32_t NVIC_GPIOG :1;
}NVIC0_t;

typedef volatile struct
{
    volatile uint32_t NVIC_GPIOH :1;
    volatile uint32_t NVIC_UART2 :1;
    volatile uint32_t NVIC_SSI1 :1;
    volatile uint32_t NVIC_TIMER3A :1;
    volatile uint32_t NVIC_TIMER3B :1;
    volatile uint32_t NVIC_I2C1 :1;
    volatile uint32_t NVIC_CAN0 :1;
    volatile uint32_t NVIC_CAN1 :1;
    volatile uint32_t NVIC_ETH :1;
    volatile uint32_t NVIC_HIB :1;
    volatile uint32_t NVIC_USB :1;
    volatile uint32_t NVIC_PWM0GEN3 :1;
    volatile uint32_t NVIC_UDMASOFT :1;
    volatile uint32_t NVIC_UDMAERROR :1;
    volatile uint32_t NVIC_ADC1SEQ0 :1;
    volatile uint32_t NVIC_ADC0SEQ1:1;
    volatile uint32_t NVIC_ADC1SEQ2 :1;
    volatile uint32_t NVIC_ADC1SEQ3 :1;
    volatile uint32_t NVIC_EPI0 :1;
    volatile uint32_t NVIC_GPIOJ :1;
    volatile uint32_t NVIC_GPIOK :1;
    volatile uint32_t NVIC_GPIOL :1;
    volatile uint32_t NVIC_SSI2 :1;
    volatile uint32_t NVIC_SSI3 :1;
    volatile uint32_t NVIC_UART3 :1;
    volatile uint32_t NVIC_UART4 :1;
    volatile uint32_t NVIC_UART5 :1;
    volatile uint32_t NVIC_UART6 :1;
    volatile uint32_t NVIC_UART7 :1;
    volatile uint32_t NVIC_I2C2 :1;
    volatile uint32_t NVIC_I2C3 :1;
    volatile uint32_t NVIC_TIMER4A :1;
}NVIC1_t;

typedef volatile struct
{
    volatile uint32_t NVIC_TIMER4B :1;
    volatile uint32_t NVIC_TIMER5A :1;
    volatile uint32_t NVIC_TIMER5B :1;
    volatile uint32_t NVIC_SYSEXC :1;
    volatile uint32_t NVIC_RES84 :1;
    volatile uint32_t NVIC_RES85 :1;
    volatile uint32_t NVIC_I2C4 :1;
    volatile uint32_t NVIC_I2C5 :1;
    volatile uint32_t NVIC_GPIOM :1;
    volatile uint32_t NVIC_GPION :1;
    volatile uint32_t NVIC_RES90 :1;
    volatile uint32_t NVIC_TAMPER :1;
    volatile uint32_t NVIC_GPIOP :1;
    volatile uint32_t NVIC_GPIOP1 :1;
    volatile uint32_t NVIC_GPIOP2 :1;
    volatile uint32_t NVIC_GPIOP3 :1;
    volatile uint32_t NVIC_GPIOP4 :1;
    volatile uint32_t NVIC_GPIOP5 :1;
    volatile uint32_t NVIC_GPIOP6 :1;
    volatile uint32_t NVIC_GPIOP7 :1;
    volatile uint32_t NVIC_GPIOQ :1;
    volatile uint32_t NVIC_GPIOQ1 :1;
    volatile uint32_t NVIC_GPIOQ2 :1;
    volatile uint32_t NVIC_GPIOQ3 :1;
    volatile uint32_t NVIC_GPIOQ4 :1;
    volatile uint32_t NVIC_GPIOQ5 :1;
    volatile uint32_t NVIC_GPIOQ6 :1;
    volatile uint32_t NVIC_GPIOQ7 :1;
    volatile uint32_t NVIC_GPIOR :1;
    volatile uint32_t NVIC_GPIOS :1;
    volatile uint32_t NVIC_SHA_MD5 :1;
    volatile uint32_t NVIC_AES :1;
}NVIC2_t;

typedef volatile struct
{
    volatile uint32_t NVIC_DES :1;
    volatile uint32_t NVIC_LCD :1;
    volatile uint32_t NVIC_TIMER6A :1;
    volatile uint32_t NVIC_TIMER6B :1;
    volatile uint32_t NVIC_TIMER7A :1;
    volatile uint32_t NVIC_TIMER7B :1;
    volatile uint32_t NVIC_I2C6 :1;
    volatile uint32_t NVIC_I2C7 :1;
    volatile uint32_t NVIC_KEYBOARD :1;
    volatile uint32_t NVIC_ONEWIRE :1;
    volatile uint32_t NVIC_PS2 :1;
    volatile uint32_t NVIC_LEDSEQ :1;
    volatile uint32_t NVIC_IR :1;
    volatile uint32_t NVIC_I2C8 :1;
    volatile uint32_t NVIC_I2C9 :1;
    volatile uint32_t NVIC_GPIOT :1;
    volatile uint32_t NVIC_FAN :1;
    volatile uint32_t NVIC_RES129 :1;
    volatile uint32_t NVIC_RES130 :1;
    volatile uint32_t NVIC_RES131 :1;
    volatile uint32_t NVIC_RES132 :1;
    volatile uint32_t NVIC_RES133 :1;
    volatile uint32_t NVIC_RES134 :1;
    volatile uint32_t NVIC_RES135 :1;
    volatile uint32_t NVIC_RES136 :1;
    volatile uint32_t NVIC_RES137 :1;
    volatile uint32_t NVIC_RES138 :1;
    volatile uint32_t NVIC_RES139 :1;
    volatile uint32_t NVIC_RES140 :1;
    volatile uint32_t NVIC_RES141 :1;
    volatile uint32_t NVIC_RES142 :1;
    volatile uint32_t NVIC_RES143 :1;
}NVIC3_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOA :3;/*0*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_GPIOB :3;/*1*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_GPIOC :3;/*2*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_GPIOD :3;/*3*/
}IPR0_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOE :3;/*4*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_UART0 :3;/*5*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_UART1 :3;/*6*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_SSI0 :3;/*7*/
}IPR1_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_I2C0 :3;/*8*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_PWM0FAULT :3;/*9*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_PWM0GEN0 :3;/*10*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_PWM0GEN1 :3;/*11*/
}IPR2_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_PWM0GEN2 :3;/*12*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_QEI0 :3;/*13*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_ADC0SEQ0 :3;/*14*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_ADC0SEQ1 :3;/*15*/
}IPR3_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_ADC0SEQ2 :3;/*16*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_ADC0SEQ3 :3;/*17*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_WDT01 :3;/*18*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TIMER0A :3;/*19*/
}IPR4_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_TIMER0B :3;/*20*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_TIMER1A :3;/*21*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_TIMER1B :3;/*22*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TIMER2A :3;/*23*/
}IPR5_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_TIMER2B :3;/*24*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_ACMP0 :3;/*25*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_ACMP1 :3;/*26*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_ACMP2 :3;/*27*/
}IPR6_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_SYSCTL :3;/*28*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_FLASH :3;/*29*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_GPIOF :3;/*30*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_GPIOG :3;/*31*/
}IPR7_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOH :3;/*32*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_UART2 :3;/*33*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_SSI1 :3;/*34*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TIMER3A :3;/*35*/
}IPR8_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_TIMER3B :3;/*36*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_I2C1 :3;/*37*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_CAN0 :3;/*38*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_CAN1 :3;/*39*/
}IPR9_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_ETH :3;/*40*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_HIB :3;/*41*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_USB :3;/*42*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_PWM0GEN3 :3;/*43*/
}IPR10_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_UDMASOFT :3;/*44*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_UDMAERROR :3;/*45*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_ADC1SEQ0 :3;/*46*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_ADC1SEQ1:3;/*47*/
}IPR11_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_ADC1SEQ2 :3;/*48*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_ADC1SEQ3 :3;/*49*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_EPI0 :3;/*50*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_GPIOJ :3;/*51*/
}IPR12_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOK :3;/*52*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_GPIOL :3;/*53*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_SSI2 :3;/*54*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_SSI3 :3;/*55*/
}IPR13_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_UART3 :3;/*56*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_UART4 :3;/*57*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_UART5 :3;/*58*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_UART6 :3;/*59*/
}IPR14_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_UART7 :3;/*60*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_I2C2 :3;/*61*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_I2C3 :3;/*62*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TIMER4A :3;/*63*/
}IPR15_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_TIMER4B :3;/*64*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_TIMER5A :3;/*65*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_TIMER5B :3;/*66*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_SYSEXC :3;/*67*/
}IPR16_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES84 :3;/*68*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES85 :3;/*69*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_I2C4 :3;/*70*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_I2C5 :3;/*71*/
}IPR17_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOM :3;/*72*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_GPION :3;/*73*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES90 :3;/*74*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TAMPER :3;/*75*/
}IPR18_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOP :3;/*76*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_GPIOP1 :3;/*77*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_GPIOP2 :3;/*78*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_GPIOP3 :3;/*79*/
}IPR19_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOP4 :3;/*80*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_GPIOP5 :3;/*81*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_GPIOP6 :3;/*82*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_GPIOP7 :3;/*83*/
}IPR20_t;


typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOQ :3;/*84*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_GPIOQ1 :3;/*85*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_GPIOQ2 :3;/*86*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_GPIOQ3 :3;/*87*/
}IPR21_t;


typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOQ4 :3;/*88*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_GPIOQ5 :3;/*89*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_GPIOQ6 :3;/*90*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_GPIOQ7 :3;/*91*/
}IPR22_t;


typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOR :3;/*92*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_GPIOS :3;/*93*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_SHA_MD5 :3;/*94*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_AES :3;/*95*/
}IPR23_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_DES :3;/*96*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_LCD :3;/*97*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_TIMER6A :3;/*98*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TIMER6B :3;/*99*/
}IPR24_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_TIMER7A :3;/*100*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_TIMER7B :3;/*101*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_I2C6 :3;/*102*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_I2C7 :3;/*103*/
}IPR25_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_KEYBOARD :3;/*104*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_ONEWIRE :3;/*105*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_PS2 :3;/*106*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_LEDSEQ :3;/*107*/
}IPR26_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_IR :3;/*108*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_I2C8 :3;/*109*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_I2C9 :3;/*110*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_GPIOT :3;/*111*/
}IPR27_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_FAN :3;/*112*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES129 :3;/*113*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES130 :3;/*114*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES131 :3;/*115*/
}IPR28_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES132 :3;/*116*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES133 :3;/*117*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES134 :3;/*118*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES135 :3;/*119*/
}IPR29_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES136 :3;/*120*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES137 :3;/*121*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES138 :3;/*122*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES139 :3;/*123*/
}IPR30_t;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES140 :3;/*124*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES141 :3;/*125*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES142 :3;/*126*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES143 :3;/*127*/
}IPR31_t;

typedef volatile struct
{
  const uint32_t reserved :5;
  volatile uint32_t IP0 :3;/*0*/
  const uint32_t reserved1:5;
  volatile uint32_t IP1 :3;/*1*/
  const uint32_t reserved2:5;
  volatile uint32_t IP2 :3;/*2*/
  const uint32_t reserved3:5;
  volatile uint32_t IP3 :3;/*3*/
}IPRw_t;

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-6.4")
#endif
typedef volatile struct
{
     const uint8_t reserved :5;
     volatile uint8_t IP :3;
}IPRb_t;
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("6.4")
#endif

typedef volatile struct
{
    IPRb_t IPR[240];
}IPRb__t;

typedef volatile struct
{
    IPRw_t IPR[60];
}IPRw__t;

typedef volatile struct
{
    volatile uint32_t INTID :8;
    const uint32_t reserved :24;
}STIR_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTREGISTER_H_ */
