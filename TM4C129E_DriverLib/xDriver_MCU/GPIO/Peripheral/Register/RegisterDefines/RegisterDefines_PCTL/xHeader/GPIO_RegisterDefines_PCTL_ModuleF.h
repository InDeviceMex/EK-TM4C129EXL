/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleF.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEF_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEF_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

/******************************************************************************************
 ************************************ 22 PCTL Module F *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOF_PCTL_R_PIN0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_R_PIN0_BIT    (0UL)
#define GPIOF_PCTL_R_PIN0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN0_U1RTS    ((uint32_t) 0x00000001UL)
#define GPIOF_PCTL_R_PIN0_SSI1Rx    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_R_PIN0_CAN0Rx    ((uint32_t) 0x00000003UL)
#define GPIOF_PCTL_R_PIN0_M1PWM4    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_R_PIN0_PhA0    ((uint32_t) 0x00000006UL)
#define GPIOF_PCTL_R_PIN0_T0CCP0    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_R_PIN0_NMI    ((uint32_t) 0x00000008UL)
#define GPIOF_PCTL_R_PIN0_C0o    ((uint32_t) 0x00000009UL)

#define GPIOF_PCTL_PIN0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PIN0_U1RTS    ((uint32_t) 0x00000001UL)
#define GPIOF_PCTL_PIN0_SSI1Rx    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_PIN0_CAN0Rx    ((uint32_t) 0x00000003UL)
#define GPIOF_PCTL_PIN0_M1PWM4    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PIN0_PhA0    ((uint32_t) 0x00000006UL)
#define GPIOF_PCTL_PIN0_T0CCP0    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PIN0_NMI    ((uint32_t) 0x00000008UL)
#define GPIOF_PCTL_PIN0_C0o    ((uint32_t) 0x00000009UL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PIN1_MASK    ((uint32_t) 0x000000F0UL)
#define GPIOF_PCTL_R_PIN1_BIT    (4UL)
#define GPIOF_PCTL_R_PIN1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN1_U1CTS    ((uint32_t) 0x00000010UL)
#define GPIOF_PCTL_R_PIN1_SSI1Tx    ((uint32_t) 0x00000020UL)
#define GPIOF_PCTL_R_PIN1_M1PWM5    ((uint32_t) 0x00000050UL)
#define GPIOF_PCTL_R_PIN1_PhB0    ((uint32_t) 0x00000060UL)
#define GPIOF_PCTL_R_PIN1_T0CCP1    ((uint32_t) 0x00000070UL)
#define GPIOF_PCTL_R_PIN1_C1o    ((uint32_t) 0x00000090UL)
#define GPIOF_PCTL_R_PIN1_TRD1    ((uint32_t) 0x000000E0UL)

#define GPIOF_PCTL_PIN1_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PIN1_U1CTS    ((uint32_t) 0x00000001UL)
#define GPIOF_PCTL_PIN1_SSI1Tx    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_PIN1_M1PWM5    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PIN1_PhB0    ((uint32_t) 0x00000006UL)
#define GPIOF_PCTL_PIN1_T0CCP1    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PIN1_C1o    ((uint32_t) 0x00000009UL)
#define GPIOF_PCTL_PIN1_TRD1    ((uint32_t) 0x0000000EUL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PIN2_MASK    ((uint32_t) 0x00000F00UL)
#define GPIOF_PCTL_R_PIN2_BIT    (8UL)
#define GPIOF_PCTL_R_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN2_SSI1Clk    ((uint32_t) 0x00000200UL)
#define GPIOF_PCTL_R_PIN2_M0FAULT0    ((uint32_t) 0x00000400UL)
#define GPIOF_PCTL_R_PIN2_M1PWM6    ((uint32_t) 0x00000500UL)
#define GPIOF_PCTL_R_PIN2_T1CCP0    ((uint32_t) 0x00000700UL)
#define GPIOF_PCTL_R_PIN2_TRD0    ((uint32_t) 0x00000E00UL)

#define GPIOF_PCTL_PIN2_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PIN2_SSI1Clk    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_PIN2_M0FAULT0    ((uint32_t) 0x00000004UL)
#define GPIOF_PCTL_PIN2_M1PWM6    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PIN2_T1CCP0    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PIN2_TRD0    ((uint32_t) 0x0000000EUL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PIN3_MASK    ((uint32_t) 0x0000F000UL)
#define GPIOF_PCTL_R_PIN3_BIT    (12UL)
#define GPIOF_PCTL_R_PIN3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN3_SSI1Fss    ((uint32_t) 0x00002000UL)
#define GPIOF_PCTL_R_PIN3_CAN0Tx    ((uint32_t) 0x00003000UL)
#define GPIOF_PCTL_R_PIN3_M1PWM7    ((uint32_t) 0x00005000UL)
#define GPIOF_PCTL_R_PIN3_T1CCP1    ((uint32_t) 0x00007000UL)
#define GPIOF_PCTL_R_PIN3_TRCLK    ((uint32_t) 0x0000E000UL)

#define GPIOF_PCTL_PIN3_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PIN3_SSI1Fss    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_PIN3_CAN0Tx    ((uint32_t) 0x00000003UL)
#define GPIOF_PCTL_PIN3_M1PWM7    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PIN3_T1CCP1    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PIN3_TRCLK    ((uint32_t) 0x0000000EUL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PIN4_MASK    ((uint32_t) 0x000F0000UL)
#define GPIOF_PCTL_R_PIN4_BIT    (16UL)
#define GPIOF_PCTL_R_PIN4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN4_M1FAULT0    ((uint32_t) 0x00050000UL)
#define GPIOF_PCTL_R_PIN4_IDX0    ((uint32_t) 0x00060000UL)
#define GPIOF_PCTL_R_PIN4_T2CCP0    ((uint32_t) 0x00070000UL)
#define GPIOF_PCTL_R_PIN4_USB0EPEN    ((uint32_t) 0x00080000UL)

#define GPIOF_PCTL_PIN4_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PIN4_M1FAULT0    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PIN4_IDX0    ((uint32_t) 0x00000006UL)
#define GPIOF_PCTL_PIN4_T2CCP0    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PIN4_USB0EPEN    ((uint32_t) 0x00000008UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEF_H_ */
