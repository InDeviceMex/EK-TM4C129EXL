/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleC.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEC_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEC_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

/******************************************************************************************
 ************************************ 22 PCTL Module C *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOC_PCTL_R_PIN0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOC_PCTL_R_PIN0_BIT    (0UL)
#define GPIOC_PCTL_R_PIN0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_R_PIN0_TCK    ((uint32_t) 0x00000001UL)
#define GPIOC_PCTL_R_PIN0_T4CCP0    ((uint32_t) 0x00000007UL)

#define GPIOC_PCTL_PIN0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOC_PCTL_PIN0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_PIN0_TCK    ((uint32_t) 0x00000001UL)
#define GPIOC_PCTL_PIN0_T4CCP0    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOC_PCTL_R_PIN1_MASK    ((uint32_t) 0x000000F0UL)
#define GPIOC_PCTL_R_PIN1_BIT    (4UL)
#define GPIOC_PCTL_R_PIN1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_R_PIN1_TMS    ((uint32_t) 0x00000010UL)
#define GPIOC_PCTL_R_PIN1_T4CCP1    ((uint32_t) 0x00000070UL)

#define GPIOC_PCTL_PIN1_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOC_PCTL_PIN1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_PIN1_TMS    ((uint32_t) 0x00000001UL)
#define GPIOC_PCTL_PIN1_T4CCP1    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOC_PCTL_R_PIN2_MASK    ((uint32_t) 0x00000F00UL)
#define GPIOC_PCTL_R_PIN2_BIT    (8UL)
#define GPIOC_PCTL_R_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_R_PIN2_TDI    ((uint32_t) 0x00000100UL)
#define GPIOC_PCTL_R_PIN2_T5CCP0    ((uint32_t) 0x00000700UL)

#define GPIOC_PCTL_PIN2_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOC_PCTL_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_PIN2_TDI    ((uint32_t) 0x00000001UL)
#define GPIOC_PCTL_PIN2_T5CCP0    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOC_PCTL_R_PIN3_MASK    ((uint32_t) 0x0000F000UL)
#define GPIOC_PCTL_R_PIN3_BIT    (12UL)
#define GPIOC_PCTL_R_PIN3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_R_PIN3_TDO    ((uint32_t) 0x00001000UL)
#define GPIOC_PCTL_R_PIN3_T5CCP1    ((uint32_t) 0x00007000UL)

#define GPIOC_PCTL_PIN3_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOC_PCTL_PIN3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_PIN3_TDO    ((uint32_t) 0x00000001UL)
#define GPIOC_PCTL_PIN3_T5CCP1    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define GPIOC_PCTL_R_PIN4_MASK    ((uint32_t) 0x000F0000UL)
#define GPIOC_PCTL_R_PIN4_BIT    (16UL)
#define GPIOC_PCTL_R_PIN4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_R_PIN4_U4Rx    ((uint32_t) 0x00010000UL)
#define GPIOC_PCTL_R_PIN4_U1Rx    ((uint32_t) 0x00020000UL)
#define GPIOC_PCTL_R_PIN4_M0PWM6    ((uint32_t) 0x00040000UL)
#define GPIOC_PCTL_R_PIN4_IDX1    ((uint32_t) 0x00060000UL)
#define GPIOC_PCTL_R_PIN4_WT0CCP0    ((uint32_t) 0x00070000UL)
#define GPIOC_PCTL_R_PIN4_U1RTS    ((uint32_t) 0x00080000UL)

#define GPIOC_PCTL_PIN4_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOC_PCTL_PIN4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_PIN4_U4Rx    ((uint32_t) 0x00000001UL)
#define GPIOC_PCTL_PIN4_U1Rx    ((uint32_t) 0x00000002UL)
#define GPIOC_PCTL_PIN4_M0PWM6    ((uint32_t) 0x00000004UL)
#define GPIOC_PCTL_PIN4_IDX1    ((uint32_t) 0x00000006UL)
#define GPIOC_PCTL_PIN4_WT0CCP0    ((uint32_t) 0x00000007UL)
#define GPIOC_PCTL_PIN4_U1RTS    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOC_PCTL_R_PIN5_MASK    ((uint32_t) 0x00F00000UL)
#define GPIOC_PCTL_R_PIN5_BIT    (20UL)
#define GPIOC_PCTL_R_PIN5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_R_PIN5_U4Tx    ((uint32_t) 0x00100000UL)
#define GPIOC_PCTL_R_PIN5_U1Tx    ((uint32_t) 0x00200000UL)
#define GPIOC_PCTL_R_PIN5_M0PWM7    ((uint32_t) 0x00400000UL)
#define GPIOC_PCTL_R_PIN5_PhA1    ((uint32_t) 0x00600000UL)
#define GPIOC_PCTL_R_PIN5_WT0CCP1    ((uint32_t) 0x00700000UL)
#define GPIOC_PCTL_R_PIN5_U1CTS    ((uint32_t) 0x00800000UL)

#define GPIOC_PCTL_PIN5_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOC_PCTL_PIN5_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_PIN5_U4Tx    ((uint32_t) 0x00000001UL)
#define GPIOC_PCTL_PIN5_U1Tx    ((uint32_t) 0x00000002UL)
#define GPIOC_PCTL_PIN5_M0PWM7    ((uint32_t) 0x00000004UL)
#define GPIOC_PCTL_PIN5_PhA1    ((uint32_t) 0x00000006UL)
#define GPIOC_PCTL_PIN5_WT0CCP1    ((uint32_t) 0x00000007UL)
#define GPIOC_PCTL_PIN5_U1CTS    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOC_PCTL_R_PIN6_MASK    ((uint32_t) 0x0F000000UL)
#define GPIOC_PCTL_R_PIN6_BIT    (24UL)
#define GPIOC_PCTL_R_PIN6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_R_PIN6_U3Rx    ((uint32_t) 0x01000000UL)
#define GPIOC_PCTL_R_PIN6_PhB1    ((uint32_t) 0x06000000UL)
#define GPIOC_PCTL_R_PIN6_WT1CCP0    ((uint32_t) 0x07000000UL)
#define GPIOC_PCTL_R_PIN6_USB0EPEN    ((uint32_t) 0x08000000UL)

#define GPIOC_PCTL_PIN6_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOC_PCTL_PIN6_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_PIN6_U3Rx    ((uint32_t) 0x00000001UL)
#define GPIOC_PCTL_PIN6_PhB1    ((uint32_t) 0x00000006UL)
#define GPIOC_PCTL_PIN6_WT1CCP0    ((uint32_t) 0x00000007UL)
#define GPIOC_PCTL_PIN6_USB0EPEN    ((uint32_t) 0x00000008UL)
/*----------*/

/*----------*/
#define GPIOC_PCTL_R_PIN7_MASK    ((uint32_t) 0xF000000UL)
#define GPIOC_PCTL_R_PIN7_BIT    (28UL)
#define GPIOC_PCTL_R_PIN7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_R_PIN7_U3Tx    ((uint32_t) 0x10000000UL)
#define GPIOC_PCTL_R_PIN7_WT1CCP1    ((uint32_t) 0x70000000UL)
#define GPIOC_PCTL_R_PIN7_USB0PFLT    ((uint32_t) 0x80000000UL)

#define GPIOC_PCTL_PIN7_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOC_PCTL_PIN7_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOC_PCTL_PIN7_U3Tx    ((uint32_t) 0x00000001UL)
#define GPIOC_PCTL_PIN7_WT1CCP1    ((uint32_t) 0x00000007UL)
#define GPIOC_PCTL_PIN7_USB0PFLT    ((uint32_t) 0x00000008UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEC_H_ */
