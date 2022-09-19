/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleD.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULED_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULED_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

/******************************************************************************************
 ************************************ 22 PCTL Module D *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOD_PCTL_R_PIN0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOD_PCTL_R_PIN0_BIT    (0UL)
#define GPIOD_PCTL_R_PIN0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_R_PIN0_SSI3Clk    ((uint32_t) 0x00000001UL)
#define GPIOD_PCTL_R_PIN0_SSI1Clk    ((uint32_t) 0x00000002UL)
#define GPIOD_PCTL_R_PIN0_I2C3SCL    ((uint32_t) 0x00000003UL)
#define GPIOD_PCTL_R_PIN0_M0PWM6    ((uint32_t) 0x00000004UL)
#define GPIOD_PCTL_R_PIN0_M1PWM0    ((uint32_t) 0x00000005UL)
#define GPIOD_PCTL_R_PIN0_WT2CCP0    ((uint32_t) 0x00000007UL)

#define GPIOD_PCTL_PIN0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOD_PCTL_PIN0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_PIN0_SSI3Clk    ((uint32_t) 0x00000001UL)
#define GPIOD_PCTL_PIN0_SSI1Clk    ((uint32_t) 0x00000002UL)
#define GPIOD_PCTL_PIN0_I2C3SCL    ((uint32_t) 0x00000003UL)
#define GPIOD_PCTL_PIN0_M0PWM6    ((uint32_t) 0x00000004UL)
#define GPIOD_PCTL_PIN0_M1PWM0    ((uint32_t) 0x00000005UL)
#define GPIOD_PCTL_PIN0_WT2CCP0    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOD_PCTL_R_PIN1_MASK    ((uint32_t) 0x000000F0UL)
#define GPIOD_PCTL_R_PIN1_BIT    (4UL)
#define GPIOD_PCTL_R_PIN1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_R_PIN1_SSI3Fss    ((uint32_t) 0x00000010UL)
#define GPIOD_PCTL_R_PIN1_SSI1Fss    ((uint32_t) 0x00000020UL)
#define GPIOD_PCTL_R_PIN1_I2C3SDA    ((uint32_t) 0x00000030UL)
#define GPIOD_PCTL_R_PIN1_M0PWM7    ((uint32_t) 0x00000040UL)
#define GPIOD_PCTL_R_PIN1_M1PWM1    ((uint32_t) 0x00000050UL)
#define GPIOD_PCTL_R_PIN1_WT2CCP1    ((uint32_t) 0x00000070UL)

#define GPIOD_PCTL_PIN1_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOD_PCTL_PIN1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_PIN1_SSI3Fss    ((uint32_t) 0x00000001UL)
#define GPIOD_PCTL_PIN1_SSI1Fss    ((uint32_t) 0x00000002UL)
#define GPIOD_PCTL_PIN1_I2C3SDA    ((uint32_t) 0x00000003UL)
#define GPIOD_PCTL_PIN1_M0PWM7    ((uint32_t) 0x00000004UL)
#define GPIOD_PCTL_PIN1_M1PWM1    ((uint32_t) 0x00000005UL)
#define GPIOD_PCTL_PIN1_WT2CCP1    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOD_PCTL_R_PIN2_MASK    ((uint32_t) 0x00000F00UL)
#define GPIOD_PCTL_R_PIN2_BIT    (8UL)
#define GPIOD_PCTL_R_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_R_PIN2_SSI3Rx    ((uint32_t) 0x00000100UL)
#define GPIOD_PCTL_R_PIN2_SSI1Rx    ((uint32_t) 0x00000200UL)
#define GPIOD_PCTL_R_PIN2_M0FAULT0    ((uint32_t) 0x00000400UL)
#define GPIOD_PCTL_R_PIN2_WT3CCP0    ((uint32_t) 0x00000700UL)
#define GPIOD_PCTL_R_PIN2_USB0EPEN    ((uint32_t) 0x00000800UL)

#define GPIOD_PCTL_PIN2_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOD_PCTL_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_PIN2_SSI3Rx    ((uint32_t) 0x00000001UL)
#define GPIOD_PCTL_PIN2_SSI1Rx    ((uint32_t) 0x00000002UL)
#define GPIOD_PCTL_PIN2_M0FAULT0    ((uint32_t) 0x00000004UL)
#define GPIOD_PCTL_PIN2_WT3CCP0    ((uint32_t) 0x00000007UL)
#define GPIOD_PCTL_PIN2_USB0EPEN    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOD_PCTL_R_PIN3_MASK    ((uint32_t) 0x0000F000UL)
#define GPIOD_PCTL_R_PIN3_BIT    (12UL)
#define GPIOD_PCTL_R_PIN3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_R_PIN3_SSI3Tx    ((uint32_t) 0x00001000UL)
#define GPIOD_PCTL_R_PIN3_SSI1Tx    ((uint32_t) 0x00002000UL)
#define GPIOD_PCTL_R_PIN3_IDX0    ((uint32_t) 0x00006000UL)
#define GPIOD_PCTL_R_PIN3_WT3CCP1    ((uint32_t) 0x00007000UL)
#define GPIOD_PCTL_R_PIN3_USB0PFLT    ((uint32_t) 0x00008000UL)

#define GPIOD_PCTL_PIN3_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOD_PCTL_PIN3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_PIN3_SSI3Tx    ((uint32_t) 0x00000001UL)
#define GPIOD_PCTL_PIN3_SSI1Tx    ((uint32_t) 0x00000002UL)
#define GPIOD_PCTL_PIN3_IDX0    ((uint32_t) 0x00000006UL)
#define GPIOD_PCTL_PIN3_WT3CCP1    ((uint32_t) 0x00000007UL)
#define GPIOD_PCTL_PIN3_USB0PFLT    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOD_PCTL_R_PIN4_MASK    ((uint32_t) 0x000F0000UL)
#define GPIOD_PCTL_R_PIN4_BIT    (16UL)
#define GPIOD_PCTL_R_PIN4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_R_PIN4_U6Rx    ((uint32_t) 0x00010000UL)
#define GPIOD_PCTL_R_PIN4_WT4CCP0    ((uint32_t) 0x00070000UL)

#define GPIOD_PCTL_PIN4_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOD_PCTL_PIN4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_PIN4_U6Rx    ((uint32_t) 0x00000001UL)
#define GPIOD_PCTL_PIN4_WT4CCP0    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOD_PCTL_R_PIN5_MASK    ((uint32_t) 0x00F00000UL)
#define GPIOD_PCTL_R_PIN5_BIT    (20UL)
#define GPIOD_PCTL_R_PIN5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_R_PIN5_U6Tx    ((uint32_t) 0x00100000UL)
#define GPIOD_PCTL_R_PIN5_WT4CCP1    ((uint32_t) 0x00700000UL)

#define GPIOD_PCTL_PIN5_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOD_PCTL_PIN5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_PIN5_U6Tx    ((uint32_t) 0x00000001UL)
#define GPIOD_PCTL_PIN5_WT4CCP1    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOD_PCTL_R_PIN6_MASK    ((uint32_t) 0x0F000000UL)
#define GPIOD_PCTL_R_PIN6_BIT    (24UL)
#define GPIOD_PCTL_R_PIN6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_R_PIN6_U2Rx    ((uint32_t) 0x01000000UL)
#define GPIOD_PCTL_R_PIN6_M0FAULT0    ((uint32_t) 0x04000000UL)
#define GPIOD_PCTL_R_PIN6_PhA0    ((uint32_t) 0x06000000UL)
#define GPIOD_PCTL_R_PIN6_WT5CCP0    ((uint32_t) 0x07000000UL)

#define GPIOD_PCTL_PIN6_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOD_PCTL_PIN6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_PIN6_U2Rx    ((uint32_t) 0x00000001UL)
#define GPIOD_PCTL_PIN6_M0FAULT0    ((uint32_t) 0x00000004UL)
#define GPIOD_PCTL_PIN6_PhA0    ((uint32_t) 0x00000006UL)
#define GPIOD_PCTL_PIN6_WT5CCP0    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOD_PCTL_R_PIN7_MASK    ((uint32_t) 0xF000000UL)
#define GPIOD_PCTL_R_PIN7_BIT    (28UL)
#define GPIOD_PCTL_R_PIN7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_R_PIN7_U2Tx    ((uint32_t) 0x10000000UL)
#define GPIOD_PCTL_R_PIN7_PhB0    ((uint32_t) 0x60000000UL)
#define GPIOD_PCTL_R_PIN7_WT5CCP1    ((uint32_t) 0x70000000UL)
#define GPIOD_PCTL_R_PIN7_NMI    ((uint32_t) 0x80000000UL)

#define GPIOD_PCTL_PIN7_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOD_PCTL_PIN7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOD_PCTL_PIN7_U2Tx    ((uint32_t) 0x00000001UL)
#define GPIOD_PCTL_PIN7_PhB0    ((uint32_t) 0x00000006UL)
#define GPIOD_PCTL_PIN7_WT5CCP1    ((uint32_t) 0x00000007UL)
#define GPIOD_PCTL_PIN7_NMI    ((uint32_t) 0x00000008UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULED_H_ */
