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

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

/******************************************************************************************
 ************************************ 22 PCTL Module A *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOA_PCTL_R_PIN0_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOA_PCTL_R_PIN0_BIT    (0UL)
#define GPIOA_PCTL_R_PIN0_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_R_PIN0_U0Rx    ((UBase_t) 0x00000001UL)
#define GPIOA_PCTL_R_PIN0_CAN1Rx    ((UBase_t) 0x00000008UL)

#define GPIOA_PCTL_PIN0_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOA_PCTL_PIN0_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_PIN0_U0Rx    ((UBase_t) 0x00000001UL)
#define GPIOA_PCTL_PIN0_CAN1Rx    ((UBase_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PIN1_MASK    ((UBase_t) 0x000000F0UL)
#define GPIOA_PCTL_R_PIN1_BIT    (4UL)
#define GPIOA_PCTL_R_PIN1_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_R_PIN1_U0Tx    ((UBase_t) 0x00000010UL)
#define GPIOA_PCTL_R_PIN1_CAN1Tx    ((UBase_t) 0x00000080UL)

#define GPIOA_PCTL_PIN1_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOA_PCTL_PIN1_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_PIN1_U0Tx    ((UBase_t) 0x00000001UL)
#define GPIOA_PCTL_PIN1_CAN1Tx    ((UBase_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PIN2_MASK    ((UBase_t) 0x00000F00UL)
#define GPIOA_PCTL_R_PIN2_BIT    (8UL)
#define GPIOA_PCTL_R_PIN2_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_R_PIN2_SSI0Clk    ((UBase_t) 0x00000200UL)

#define GPIOA_PCTL_PIN2_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOA_PCTL_PIN2_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_PIN2_SSI0Clk    ((UBase_t) 0x00000002UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PIN3_MASK    ((UBase_t) 0x0000F000UL)
#define GPIOA_PCTL_R_PIN3_BIT    (12UL)
#define GPIOA_PCTL_R_PIN3_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_R_PIN3_SSI0Fss    ((UBase_t) 0x00002000UL)

#define GPIOA_PCTL_PIN3_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOA_PCTL_PIN3_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_PIN3_SSI0Fss    ((UBase_t) 0x00000002UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PIN4_MASK    ((UBase_t) 0x000F0000UL)
#define GPIOA_PCTL_R_PIN4_BIT    (16UL)
#define GPIOA_PCTL_R_PIN4_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_R_PIN4_SSI0Rx    ((UBase_t) 0x00020000UL)

#define GPIOA_PCTL_PIN4_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOA_PCTL_PIN4_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_PIN4_SSI0Rx    ((UBase_t) 0x00000002UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PIN5_MASK    ((UBase_t) 0x00F00000UL)
#define GPIOA_PCTL_R_PIN5_BIT    (20UL)
#define GPIOA_PCTL_R_PIN5_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_R_PIN5_SSI0Tx    ((UBase_t) 0x00200000UL)

#define GPIOA_PCTL_PIN5_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOA_PCTL_PIN5_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_PIN5_SSI0Tx    ((UBase_t) 0x00000002UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PIN6_MASK    ((UBase_t) 0x0F000000UL)
#define GPIOA_PCTL_R_PIN6_BIT    (24UL)
#define GPIOA_PCTL_R_PIN6_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_R_PIN6_I2C1SCL    ((UBase_t) 0x03000000UL)
#define GPIOA_PCTL_R_PIN6_M1PWM2    ((UBase_t) 0x05000000UL)

#define GPIOA_PCTL_PIN6_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOA_PCTL_PIN6_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_PIN6_I2C1SCL    ((UBase_t) 0x00000003UL)
#define GPIOA_PCTL_PIN6_M1PWM2    ((UBase_t) 0x00000005UL)
/*----------*/

/*----------*/
#define GPIOA_PCTL_R_PIN7_MASK    ((UBase_t) 0xF0000000UL)
#define GPIOA_PCTL_R_PIN7_BIT    (28UL)
#define GPIOA_PCTL_R_PIN7_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_R_PIN7_I2C1SDA    ((UBase_t) 0x30000000UL)
#define GPIOA_PCTL_R_PIN7_M1PWM3    ((UBase_t) 0x50000000UL)

#define GPIOA_PCTL_PIN7_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOA_PCTL_PIN7_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOA_PCTL_PIN7_I2C1SDA    ((UBase_t) 0x00000003UL)
#define GPIOA_PCTL_PIN7_M1PWM3    ((UBase_t) 0x00000005UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEA_H_ */
