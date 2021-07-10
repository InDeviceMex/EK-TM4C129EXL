/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleA.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEA_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEA_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 22 PCTL Module A *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOA_PCTL_R_PCM0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOA_PCTL_R_PCM0_BIT    (0UL)
#define GPIOA_PCTL_R_PCM0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_R_PCM0_U0Rx    ((uint32_t) 0x00000001UL)
#define GPIOA_PCTL_R_PCM0_CAN1Rx    ((uint32_t) 0x00000008UL)

#define GPIOA_PCTL_PCM0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOA_PCTL_PCM0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_PCM0_U0Rx    ((uint32_t) 0x00000001UL)
#define GPIOA_PCTL_PCM0_CAN1Rx    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PCM1_MASK    ((uint32_t) 0x000000F0UL)
#define GPIOA_PCTL_R_PCM1_BIT    (4UL)
#define GPIOA_PCTL_R_PCM1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_R_PCM1_U0Tx    ((uint32_t) 0x00000010UL)
#define GPIOA_PCTL_R_PCM1_CAN1Tx    ((uint32_t) 0x00000080UL)

#define GPIOA_PCTL_PCM1_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOA_PCTL_PCM1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_PCM1_U0Tx    ((uint32_t) 0x00000001UL)
#define GPIOA_PCTL_PCM1_CAN1Tx    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PCM2_MASK    ((uint32_t) 0x00000F00UL)
#define GPIOA_PCTL_R_PCM2_BIT    (8UL)
#define GPIOA_PCTL_R_PCM2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_R_PCM2_SSI0Clk    ((uint32_t) 0x00000200UL)

#define GPIOA_PCTL_PCM2_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOA_PCTL_PCM2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_PCM2_SSI0Clk    ((uint32_t) 0x00000002UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PCM3_MASK    ((uint32_t) 0x0000F000UL)
#define GPIOA_PCTL_R_PCM3_BIT    (12UL)
#define GPIOA_PCTL_R_PCM3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_R_PCM3_SSI0Fss    ((uint32_t) 0x00002000UL)

#define GPIOA_PCTL_PCM3_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOA_PCTL_PCM3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_PCM3_SSI0Fss    ((uint32_t) 0x00000002UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PCM4_MASK    ((uint32_t) 0x000F0000UL)
#define GPIOA_PCTL_R_PCM4_BIT    (16UL)
#define GPIOA_PCTL_R_PCM4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_R_PCM4_SSI0Rx    ((uint32_t) 0x00020000UL)

#define GPIOA_PCTL_PCM4_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOA_PCTL_PCM4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_PCM4_SSI0Rx    ((uint32_t) 0x00000002UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PCM5_MASK    ((uint32_t) 0x00F00000UL)
#define GPIOA_PCTL_R_PCM5_BIT    (20UL)
#define GPIOA_PCTL_R_PCM5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_R_PCM5_SSI0Tx    ((uint32_t) 0x00200000UL)

#define GPIOA_PCTL_PCM5_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOA_PCTL_PCM5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_PCM5_SSI0Tx    ((uint32_t) 0x00000002UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PCM6_MASK    ((uint32_t) 0x0F000000UL)
#define GPIOA_PCTL_R_PCM6_BIT    (24UL)
#define GPIOA_PCTL_R_PCM6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_R_PCM6_I2C1SCL    ((uint32_t) 0x03000000UL)
#define GPIOA_PCTL_R_PCM6_M1PWM2    ((uint32_t) 0x05000000UL)

#define GPIOA_PCTL_PCM6_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOA_PCTL_PCM6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_PCM6_I2C1SCL    ((uint32_t) 0x00000003UL)
#define GPIOA_PCTL_PCM6_M1PWM2    ((uint32_t) 0x00000005UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PCM7_MASK    ((uint32_t) 0xF0000000UL)
#define GPIOA_PCTL_R_PCM7_BIT    (28UL)
#define GPIOA_PCTL_R_PCM7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_R_PCM7_I2C1SDA    ((uint32_t) 0x30000000UL)
#define GPIOA_PCTL_R_PCM7_M1PWM3    ((uint32_t) 0x50000000UL)

#define GPIOA_PCTL_PCM7_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOA_PCTL_PCM7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOA_PCTL_PCM7_I2C1SDA    ((uint32_t) 0x00000003UL)
#define GPIOA_PCTL_PCM7_M1PWM3    ((uint32_t) 0x00000005UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEA_H_ */
