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

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 22 PCTL Module B *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOB_PCTL_R_PCM0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOB_PCTL_R_PCM0_BIT    (0UL)
#define GPIOB_PCTL_R_PCM0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_R_PCM0_U1Rx    ((uint32_t) 0x00000001UL)
#define GPIOB_PCTL_R_PCM0_T2CCP0    ((uint32_t) 0x00000007UL)

#define GPIOB_PCTL_PCM0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOB_PCTL_PCM0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_PCM0_U1Rx    ((uint32_t) 0x00000001UL)
#define GPIOB_PCTL_PCM0_T2CCP0    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PCM1_MASK    ((uint32_t) 0x000000F0UL)
#define GPIOB_PCTL_R_PCM1_BIT    (4UL)
#define GPIOB_PCTL_R_PCM1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_R_PCM1_U1Tx    ((uint32_t) 0x00000010UL)
#define GPIOB_PCTL_R_PCM1_T2CCP1    ((uint32_t) 0x00000070UL)

#define GPIOB_PCTL_PCM1_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOB_PCTL_PCM1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_PCM1_U1Tx    ((uint32_t) 0x00000001UL)
#define GPIOB_PCTL_PCM1_T2CCP1    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PCM2_MASK    ((uint32_t) 0x00000F00UL)
#define GPIOB_PCTL_R_PCM2_BIT    (8UL)
#define GPIOB_PCTL_R_PCM2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_R_PCM2_I2C0SCL    ((uint32_t) 0x00000300UL)
#define GPIOB_PCTL_R_PCM2_T3CCP0    ((uint32_t) 0x00000700UL)

#define GPIOB_PCTL_PCM2_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOB_PCTL_PCM2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_PCM2_I2C0SCL    ((uint32_t) 0x00000003UL)
#define GPIOB_PCTL_PCM2_T3CCP0    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PCM3_MASK    ((uint32_t) 0x0000F000UL)
#define GPIOB_PCTL_R_PCM3_BIT    (12UL)
#define GPIOB_PCTL_R_PCM3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_R_PCM3_I2C0SDA    ((uint32_t) 0x00003000UL)
#define GPIOB_PCTL_R_PCM3_T3CCP1    ((uint32_t) 0x00007000UL)

#define GPIOB_PCTL_PCM3_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOB_PCTL_PCM3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_PCM3_I2C0SDA    ((uint32_t) 0x00000003UL)
#define GPIOB_PCTL_PCM3_T3CCP1    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PCM4_MASK    ((uint32_t) 0x000F0000UL)
#define GPIOB_PCTL_R_PCM4_BIT    (16UL)
#define GPIOB_PCTL_R_PCM4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_R_PCM4_SSI2Clk    ((uint32_t) 0x00020000UL)
#define GPIOB_PCTL_R_PCM4_M0PWM2    ((uint32_t) 0x00040000UL)
#define GPIOB_PCTL_R_PCM4_T1CCP0    ((uint32_t) 0x00070000UL)
#define GPIOB_PCTL_R_PCM4_CAN0Rx    ((uint32_t) 0x00080000UL)

#define GPIOB_PCTL_PCM4_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOB_PCTL_PCM4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_PCM4_SSSI2Clk    ((uint32_t) 0x00000002UL)
#define GPIOB_PCTL_PCM4_M0PWM2    ((uint32_t) 0x00000004UL)
#define GPIOB_PCTL_PCM4_T1CCP0    ((uint32_t) 0x00000007UL)
#define GPIOB_PCTL_PCM4_CAN0Rx    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PCM5_MASK    ((uint32_t) 0x00F00000UL)
#define GPIOB_PCTL_R_PCM5_BIT    (20UL)
#define GPIOB_PCTL_R_PCM5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_R_PCM5_SSI2Fss    ((uint32_t) 0x00200000UL)
#define GPIOB_PCTL_R_PCM5_M0PWM3    ((uint32_t) 0x00400000UL)
#define GPIOB_PCTL_R_PCM5_T1CCP1    ((uint32_t) 0x00700000UL)
#define GPIOB_PCTL_R_PCM5_CAN0Tx    ((uint32_t) 0x00800000UL)

#define GPIOB_PCTL_PCM5_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOB_PCTL_PCM5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_PCM5_SSI2Fss    ((uint32_t) 0x00000002UL)
#define GPIOB_PCTL_PCM5_M0PWM3    ((uint32_t) 0x00000004UL)
#define GPIOB_PCTL_PCM5_T1CCP1    ((uint32_t) 0x00000007UL)
#define GPIOB_PCTL_PCM5_CAN0Tx    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PCM6_MASK    ((uint32_t) 0x0F000000UL)
#define GPIOB_PCTL_R_PCM6_BIT    (24UL)
#define GPIOB_PCTL_R_PCM6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_R_PCM6_SSI2Rx    ((uint32_t) 0x02000000UL)
#define GPIOB_PCTL_R_PCM6_M0PWM0    ((uint32_t) 0x04000000UL)
#define GPIOB_PCTL_R_PCM6_T0CCP0    ((uint32_t) 0x07000000UL)

#define GPIOB_PCTL_PCM6_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOB_PCTL_PCM6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_PCM6_SSI2Rx    ((uint32_t) 0x00000002UL)
#define GPIOB_PCTL_PCM6_M0PWM0    ((uint32_t) 0x00000004UL)
#define GPIOB_PCTL_PCM6_T0CCP0    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOB_PCTL_R_PCM7_MASK    ((uint32_t) 0xF0000000UL)
#define GPIOB_PCTL_R_PCM7_BIT    (28UL)
#define GPIOB_PCTL_R_PCM7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_R_PCM7_SSI2Tx    ((uint32_t) 0x20000000UL)
#define GPIOB_PCTL_R_PCM7_M0PWM1    ((uint32_t) 0x40000000UL)
#define GPIOB_PCTL_R_PCM7_T0CCP1    ((uint32_t) 0x70000000UL)

#define GPIOB_PCTL_PCM7_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOB_PCTL_PCM7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOB_PCTL_PCM7_SSI2Tx    ((uint32_t) 0x00000002UL)
#define GPIOB_PCTL_PCM7_M0PWM1    ((uint32_t) 0x00000004UL)
#define GPIOB_PCTL_PCM7_T0CCP1    ((uint32_t) 0x00000007UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEB_H_ */
