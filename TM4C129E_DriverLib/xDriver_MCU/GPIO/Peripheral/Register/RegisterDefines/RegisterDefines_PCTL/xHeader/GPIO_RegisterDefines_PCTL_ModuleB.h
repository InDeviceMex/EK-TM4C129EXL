/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleB.h
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
 * @verbatim 25 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEB_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEB_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

/******************************************************************************************
 ************************************ 22 PCTL Module B *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOB_PCTL_R_PIN0_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOB_PCTL_R_PIN0_BIT    (0UL)
#define GPIOB_PCTL_R_PIN0_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_R_PIN0_U1Rx    ((UBase_t) 0x00000001UL)
#define GPIOB_PCTL_R_PIN0_T2CCP0    ((UBase_t) 0x00000007UL)

#define GPIOB_PCTL_PIN0_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOB_PCTL_PIN0_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_PIN0_U1Rx    ((UBase_t) 0x00000001UL)
#define GPIOB_PCTL_PIN0_T2CCP0    ((UBase_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PIN1_MASK    ((UBase_t) 0x000000F0UL)
#define GPIOB_PCTL_R_PIN1_BIT    (4UL)
#define GPIOB_PCTL_R_PIN1_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_R_PIN1_U1Tx    ((UBase_t) 0x00000010UL)
#define GPIOB_PCTL_R_PIN1_T2CCP1    ((UBase_t) 0x00000070UL)

#define GPIOB_PCTL_PIN1_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOB_PCTL_PIN1_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_PIN1_U1Tx    ((UBase_t) 0x00000001UL)
#define GPIOB_PCTL_PIN1_T2CCP1    ((UBase_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PIN2_MASK    ((UBase_t) 0x00000F00UL)
#define GPIOB_PCTL_R_PIN2_BIT    (8UL)
#define GPIOB_PCTL_R_PIN2_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_R_PIN2_I2C0SCL    ((UBase_t) 0x00000300UL)
#define GPIOB_PCTL_R_PIN2_T3CCP0    ((UBase_t) 0x00000700UL)

#define GPIOB_PCTL_PIN2_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOB_PCTL_PIN2_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_PIN2_I2C0SCL    ((UBase_t) 0x00000003UL)
#define GPIOB_PCTL_PIN2_T3CCP0    ((UBase_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PIN3_MASK    ((UBase_t) 0x0000F000UL)
#define GPIOB_PCTL_R_PIN3_BIT    (12UL)
#define GPIOB_PCTL_R_PIN3_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_R_PIN3_I2C0SDA    ((UBase_t) 0x00003000UL)
#define GPIOB_PCTL_R_PIN3_T3CCP1    ((UBase_t) 0x00007000UL)

#define GPIOB_PCTL_PIN3_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOB_PCTL_PIN3_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_PIN3_I2C0SDA    ((UBase_t) 0x00000003UL)
#define GPIOB_PCTL_PIN3_T3CCP1    ((UBase_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PIN4_MASK    ((UBase_t) 0x000F0000UL)
#define GPIOB_PCTL_R_PIN4_BIT    (16UL)
#define GPIOB_PCTL_R_PIN4_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_R_PIN4_SSI2Clk    ((UBase_t) 0x00020000UL)
#define GPIOB_PCTL_R_PIN4_M0PWM2    ((UBase_t) 0x00040000UL)
#define GPIOB_PCTL_R_PIN4_T1CCP0    ((UBase_t) 0x00070000UL)
#define GPIOB_PCTL_R_PIN4_CAN0Rx    ((UBase_t) 0x00080000UL)

#define GPIOB_PCTL_PIN4_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOB_PCTL_PIN4_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_PIN4_SSSI2Clk    ((UBase_t) 0x00000002UL)
#define GPIOB_PCTL_PIN4_M0PWM2    ((UBase_t) 0x00000004UL)
#define GPIOB_PCTL_PIN4_T1CCP0    ((UBase_t) 0x00000007UL)
#define GPIOB_PCTL_PIN4_CAN0Rx    ((UBase_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PIN5_MASK    ((UBase_t) 0x00F00000UL)
#define GPIOB_PCTL_R_PIN5_BIT    (20UL)
#define GPIOB_PCTL_R_PIN5_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_R_PIN5_SSI2Fss    ((UBase_t) 0x00200000UL)
#define GPIOB_PCTL_R_PIN5_M0PWM3    ((UBase_t) 0x00400000UL)
#define GPIOB_PCTL_R_PIN5_T1CCP1    ((UBase_t) 0x00700000UL)
#define GPIOB_PCTL_R_PIN5_CAN0Tx    ((UBase_t) 0x00800000UL)

#define GPIOB_PCTL_PIN5_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOB_PCTL_PIN5_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_PIN5_SSI2Fss    ((UBase_t) 0x00000002UL)
#define GPIOB_PCTL_PIN5_M0PWM3    ((UBase_t) 0x00000004UL)
#define GPIOB_PCTL_PIN5_T1CCP1    ((UBase_t) 0x00000007UL)
#define GPIOB_PCTL_PIN5_CAN0Tx    ((UBase_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PIN6_MASK    ((UBase_t) 0x0F000000UL)
#define GPIOB_PCTL_R_PIN6_BIT    (24UL)
#define GPIOB_PCTL_R_PIN6_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_R_PIN6_SSI2Rx    ((UBase_t) 0x02000000UL)
#define GPIOB_PCTL_R_PIN6_M0PWM0    ((UBase_t) 0x04000000UL)
#define GPIOB_PCTL_R_PIN6_T0CCP0    ((UBase_t) 0x07000000UL)

#define GPIOB_PCTL_PIN6_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOB_PCTL_PIN6_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_PIN6_SSI2Rx    ((UBase_t) 0x00000002UL)
#define GPIOB_PCTL_PIN6_M0PWM0    ((UBase_t) 0x00000004UL)
#define GPIOB_PCTL_PIN6_T0CCP0    ((UBase_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PIN7_MASK    ((UBase_t) 0xF0000000UL)
#define GPIOB_PCTL_R_PIN7_BIT    (28UL)
#define GPIOB_PCTL_R_PIN7_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_R_PIN7_SSI2Tx    ((UBase_t) 0x20000000UL)
#define GPIOB_PCTL_R_PIN7_M0PWM1    ((UBase_t) 0x40000000UL)
#define GPIOB_PCTL_R_PIN7_T0CCP1    ((UBase_t) 0x70000000UL)

#define GPIOB_PCTL_PIN7_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOB_PCTL_PIN7_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOB_PCTL_PIN7_SSI2Tx    ((UBase_t) 0x00000002UL)
#define GPIOB_PCTL_PIN7_M0PWM1    ((UBase_t) 0x00000004UL)
#define GPIOB_PCTL_PIN7_T0CCP1    ((UBase_t) 0x00000007UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEB_H_ */
