/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleE.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

/******************************************************************************************
 ************************************ 22 PCTL Module E *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOE_PCTL_R_PIN0_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOE_PCTL_R_PIN0_BIT    (0UL)
#define GPIOE_PCTL_R_PIN0_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOE_PCTL_R_PIN0_U7Rx    ((UBase_t) 0x00000001UL)

#define GPIOE_PCTL_PIN0_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOE_PCTL_PIN0_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOE_PCTL_PIN0_U7Rx    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIOE_PCTL_R_PIN1_MASK    ((UBase_t) 0x000000F0UL)
#define GPIOE_PCTL_R_PIN1_BIT    (4UL)
#define GPIOE_PCTL_R_PIN1_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOE_PCTL_R_PIN1_U7Tx    ((UBase_t) 0x00000010UL)

#define GPIOE_PCTL_PIN1_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOE_PCTL_PIN1_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOE_PCTL_PIN1_U7Tx    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIOE_PCTL_R_PIN2_MASK    ((UBase_t) 0x00000F00UL)
#define GPIOE_PCTL_R_PIN2_BIT    (8UL)
#define GPIOE_PCTL_R_PIN2_GPIO    ((UBase_t) 0x00000000UL)

#define GPIOE_PCTL_PIN2_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOE_PCTL_PIN2_GPIO    ((UBase_t) 0x00000000UL)
/*----------*/

/*----------*/
#define GPIOE_PCTL_R_PIN3_MASK    ((UBase_t) 0x0000F000UL)
#define GPIOE_PCTL_R_PIN3_BIT    (12UL)
#define GPIOE_PCTL_R_PIN3_GPIO    ((UBase_t) 0x00000000UL)

#define GPIOE_PCTL_PIN3_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOE_PCTL_PIN3_GPIO    ((UBase_t) 0x00000000UL)
/*----------*/

/*----------*/
#define GPIOE_PCTL_R_PIN4_MASK    ((UBase_t) 0x000F0000UL)
#define GPIOE_PCTL_R_PIN4_BIT    (16UL)
#define GPIOE_PCTL_R_PIN4_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOE_PCTL_R_PIN4_U5Rx    ((UBase_t) 0x00010000UL)
#define GPIOE_PCTL_R_PIN4_I2C2SCL    ((UBase_t) 0x00030000UL)
#define GPIOE_PCTL_R_PIN4_M0PWM4    ((UBase_t) 0x00040000UL)
#define GPIOE_PCTL_R_PIN4_M1PWM2    ((UBase_t) 0x00050000UL)
#define GPIOE_PCTL_R_PIN4_CAN0Rx    ((UBase_t) 0x00080000UL)

#define GPIOE_PCTL_PIN4_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOE_PCTL_PIN4_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOE_PCTL_PIN4_U5Rx    ((UBase_t) 0x00000001UL)
#define GPIOE_PCTL_PIN4_I2C2SCL    ((UBase_t) 0x00000003UL)
#define GPIOE_PCTL_PIN4_M0PWM4    ((UBase_t) 0x00000004UL)
#define GPIOE_PCTL_PIN4_M1PWM2    ((UBase_t) 0x00000005UL)
#define GPIOE_PCTL_PIN4_CAN0Rx    ((UBase_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOE_PCTL_R_PIN5_MASK    ((UBase_t) 0x00F00000UL)
#define GPIOE_PCTL_R_PIN5_BIT    (20UL)
#define GPIOE_PCTL_R_PIN5_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOE_PCTL_R_PIN5_U5Tx    ((UBase_t) 0x00100000UL)
#define GPIOE_PCTL_R_PIN5_I2C2SDA    ((UBase_t) 0x00300000UL)
#define GPIOE_PCTL_R_PIN5_M0PWM5    ((UBase_t) 0x00400000UL)
#define GPIOE_PCTL_R_PIN5_M1PWM3    ((UBase_t) 0x00500000UL)
#define GPIOE_PCTL_R_PIN5_CAN0Tx    ((UBase_t) 0x00800000UL)

#define GPIOE_PCTL_PIN5_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOE_PCTL_PIN5_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOE_PCTL_PIN5_U5Tx    ((UBase_t) 0x00000001UL)
#define GPIOE_PCTL_PIN5_I2C2SDA    ((UBase_t) 0x00000003UL)
#define GPIOE_PCTL_PIN5_M0PWM5    ((UBase_t) 0x00000004UL)
#define GPIOE_PCTL_PIN5_M1PWM3    ((UBase_t) 0x00000005UL)
#define GPIOE_PCTL_PIN5_CAN0Tx    ((UBase_t) 0x00000008UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEE_H_ */
