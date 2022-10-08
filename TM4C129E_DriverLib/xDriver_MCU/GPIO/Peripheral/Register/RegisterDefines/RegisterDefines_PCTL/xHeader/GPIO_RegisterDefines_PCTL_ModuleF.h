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
#define GPIOF_PCTL_R_PIN0_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOF_PCTL_R_PIN0_BIT    (0UL)
#define GPIOF_PCTL_R_PIN0_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN0_U1RTS    ((UBase_t) 0x00000001UL)
#define GPIOF_PCTL_R_PIN0_SSI1Rx    ((UBase_t) 0x00000002UL)
#define GPIOF_PCTL_R_PIN0_CAN0Rx    ((UBase_t) 0x00000003UL)
#define GPIOF_PCTL_R_PIN0_M1PWM4    ((UBase_t) 0x00000005UL)
#define GPIOF_PCTL_R_PIN0_PhA0    ((UBase_t) 0x00000006UL)
#define GPIOF_PCTL_R_PIN0_T0CCP0    ((UBase_t) 0x00000007UL)
#define GPIOF_PCTL_R_PIN0_NMI    ((UBase_t) 0x00000008UL)
#define GPIOF_PCTL_R_PIN0_C0o    ((UBase_t) 0x00000009UL)

#define GPIOF_PCTL_PIN0_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN0_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_PIN0_U1RTS    ((UBase_t) 0x00000001UL)
#define GPIOF_PCTL_PIN0_SSI1Rx    ((UBase_t) 0x00000002UL)
#define GPIOF_PCTL_PIN0_CAN0Rx    ((UBase_t) 0x00000003UL)
#define GPIOF_PCTL_PIN0_M1PWM4    ((UBase_t) 0x00000005UL)
#define GPIOF_PCTL_PIN0_PhA0    ((UBase_t) 0x00000006UL)
#define GPIOF_PCTL_PIN0_T0CCP0    ((UBase_t) 0x00000007UL)
#define GPIOF_PCTL_PIN0_NMI    ((UBase_t) 0x00000008UL)
#define GPIOF_PCTL_PIN0_C0o    ((UBase_t) 0x00000009UL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PIN1_MASK    ((UBase_t) 0x000000F0UL)
#define GPIOF_PCTL_R_PIN1_BIT    (4UL)
#define GPIOF_PCTL_R_PIN1_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN1_U1CTS    ((UBase_t) 0x00000010UL)
#define GPIOF_PCTL_R_PIN1_SSI1Tx    ((UBase_t) 0x00000020UL)
#define GPIOF_PCTL_R_PIN1_M1PWM5    ((UBase_t) 0x00000050UL)
#define GPIOF_PCTL_R_PIN1_PhB0    ((UBase_t) 0x00000060UL)
#define GPIOF_PCTL_R_PIN1_T0CCP1    ((UBase_t) 0x00000070UL)
#define GPIOF_PCTL_R_PIN1_C1o    ((UBase_t) 0x00000090UL)
#define GPIOF_PCTL_R_PIN1_TRD1    ((UBase_t) 0x000000E0UL)

#define GPIOF_PCTL_PIN1_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN1_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_PIN1_U1CTS    ((UBase_t) 0x00000001UL)
#define GPIOF_PCTL_PIN1_SSI1Tx    ((UBase_t) 0x00000002UL)
#define GPIOF_PCTL_PIN1_M1PWM5    ((UBase_t) 0x00000005UL)
#define GPIOF_PCTL_PIN1_PhB0    ((UBase_t) 0x00000006UL)
#define GPIOF_PCTL_PIN1_T0CCP1    ((UBase_t) 0x00000007UL)
#define GPIOF_PCTL_PIN1_C1o    ((UBase_t) 0x00000009UL)
#define GPIOF_PCTL_PIN1_TRD1    ((UBase_t) 0x0000000EUL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PIN2_MASK    ((UBase_t) 0x00000F00UL)
#define GPIOF_PCTL_R_PIN2_BIT    (8UL)
#define GPIOF_PCTL_R_PIN2_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN2_SSI1Clk    ((UBase_t) 0x00000200UL)
#define GPIOF_PCTL_R_PIN2_M0FAULT0    ((UBase_t) 0x00000400UL)
#define GPIOF_PCTL_R_PIN2_M1PWM6    ((UBase_t) 0x00000500UL)
#define GPIOF_PCTL_R_PIN2_T1CCP0    ((UBase_t) 0x00000700UL)
#define GPIOF_PCTL_R_PIN2_TRD0    ((UBase_t) 0x00000E00UL)

#define GPIOF_PCTL_PIN2_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN2_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_PIN2_SSI1Clk    ((UBase_t) 0x00000002UL)
#define GPIOF_PCTL_PIN2_M0FAULT0    ((UBase_t) 0x00000004UL)
#define GPIOF_PCTL_PIN2_M1PWM6    ((UBase_t) 0x00000005UL)
#define GPIOF_PCTL_PIN2_T1CCP0    ((UBase_t) 0x00000007UL)
#define GPIOF_PCTL_PIN2_TRD0    ((UBase_t) 0x0000000EUL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PIN3_MASK    ((UBase_t) 0x0000F000UL)
#define GPIOF_PCTL_R_PIN3_BIT    (12UL)
#define GPIOF_PCTL_R_PIN3_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN3_SSI1Fss    ((UBase_t) 0x00002000UL)
#define GPIOF_PCTL_R_PIN3_CAN0Tx    ((UBase_t) 0x00003000UL)
#define GPIOF_PCTL_R_PIN3_M1PWM7    ((UBase_t) 0x00005000UL)
#define GPIOF_PCTL_R_PIN3_T1CCP1    ((UBase_t) 0x00007000UL)
#define GPIOF_PCTL_R_PIN3_TRCLK    ((UBase_t) 0x0000E000UL)

#define GPIOF_PCTL_PIN3_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN3_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_PIN3_SSI1Fss    ((UBase_t) 0x00000002UL)
#define GPIOF_PCTL_PIN3_CAN0Tx    ((UBase_t) 0x00000003UL)
#define GPIOF_PCTL_PIN3_M1PWM7    ((UBase_t) 0x00000005UL)
#define GPIOF_PCTL_PIN3_T1CCP1    ((UBase_t) 0x00000007UL)
#define GPIOF_PCTL_PIN3_TRCLK    ((UBase_t) 0x0000000EUL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PIN4_MASK    ((UBase_t) 0x000F0000UL)
#define GPIOF_PCTL_R_PIN4_BIT    (16UL)
#define GPIOF_PCTL_R_PIN4_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_R_PIN4_M1FAULT0    ((UBase_t) 0x00050000UL)
#define GPIOF_PCTL_R_PIN4_IDX0    ((UBase_t) 0x00060000UL)
#define GPIOF_PCTL_R_PIN4_T2CCP0    ((UBase_t) 0x00070000UL)
#define GPIOF_PCTL_R_PIN4_USB0EPEN    ((UBase_t) 0x00080000UL)

#define GPIOF_PCTL_PIN4_MASK    ((UBase_t) 0x0000000FUL)
#define GPIOF_PCTL_PIN4_GPIO    ((UBase_t) 0x00000000UL)
#define GPIOF_PCTL_PIN4_M1FAULT0    ((UBase_t) 0x00000005UL)
#define GPIOF_PCTL_PIN4_IDX0    ((UBase_t) 0x00000006UL)
#define GPIOF_PCTL_PIN4_T2CCP0    ((UBase_t) 0x00000007UL)
#define GPIOF_PCTL_PIN4_USB0EPEN    ((UBase_t) 0x00000008UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEF_H_ */
