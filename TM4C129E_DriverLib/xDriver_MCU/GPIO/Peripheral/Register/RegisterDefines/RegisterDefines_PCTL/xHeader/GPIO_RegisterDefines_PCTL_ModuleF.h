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

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 22 PCTL Module F *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOF_PCTL_R_PCM0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_R_PCM0_BIT    (0UL)
#define GPIOF_PCTL_R_PCM0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PCM0_U1RTS    ((uint32_t) 0x00000001UL)
#define GPIOF_PCTL_R_PCM0_SSI1Rx    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_R_PCM0_CAN0Rx    ((uint32_t) 0x00000003UL)
#define GPIOF_PCTL_R_PCM0_M1PWM4    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_R_PCM0_PhA0    ((uint32_t) 0x00000006UL)
#define GPIOF_PCTL_R_PCM0_T0CCP0    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_R_PCM0_NMI    ((uint32_t) 0x00000008UL)
#define GPIOF_PCTL_R_PCM0_C0o    ((uint32_t) 0x00000009UL)

#define GPIOF_PCTL_PCM0_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PCM0_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PCM0_U1RTS    ((uint32_t) 0x00000001UL)
#define GPIOF_PCTL_PCM0_SSI1Rx    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_PCM0_CAN0Rx    ((uint32_t) 0x00000003UL)
#define GPIOF_PCTL_PCM0_M1PWM4    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PCM0_PhA0    ((uint32_t) 0x00000006UL)
#define GPIOF_PCTL_PCM0_T0CCP0    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PCM0_NMI    ((uint32_t) 0x00000008UL)
#define GPIOF_PCTL_PCM0_C0o    ((uint32_t) 0x00000009UL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PCM1_MASK    ((uint32_t) 0x000000F0UL)
#define GPIOF_PCTL_R_PCM1_BIT    (4UL)
#define GPIOF_PCTL_R_PCM1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PCM1_U1CTS    ((uint32_t) 0x00000010UL)
#define GPIOF_PCTL_R_PCM1_SSI1Tx    ((uint32_t) 0x00000020UL)
#define GPIOF_PCTL_R_PCM1_M1PWM5    ((uint32_t) 0x00000050UL)
#define GPIOF_PCTL_R_PCM1_PhB0    ((uint32_t) 0x00000060UL)
#define GPIOF_PCTL_R_PCM1_T0CCP1    ((uint32_t) 0x00000070UL)
#define GPIOF_PCTL_R_PCM1_C1o    ((uint32_t) 0x00000090UL)
#define GPIOF_PCTL_R_PCM1_TRD1    ((uint32_t) 0x000000E0UL)

#define GPIOF_PCTL_PCM1_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PCM1_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PCM1_U1CTS    ((uint32_t) 0x00000001UL)
#define GPIOF_PCTL_PCM1_SSI1Tx    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_PCM1_M1PWM5    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PCM1_PhB0    ((uint32_t) 0x00000006UL)
#define GPIOF_PCTL_PCM1_T0CCP1    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PCM1_C1o    ((uint32_t) 0x00000009UL)
#define GPIOF_PCTL_PCM1_TRD1    ((uint32_t) 0x0000000EUL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PCM2_MASK    ((uint32_t) 0x00000F00UL)
#define GPIOF_PCTL_R_PCM2_BIT    (8UL)
#define GPIOF_PCTL_R_PCM2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PCM2_SSI1Clk    ((uint32_t) 0x00000200UL)
#define GPIOF_PCTL_R_PCM2_M0FAULT0    ((uint32_t) 0x00000400UL)
#define GPIOF_PCTL_R_PCM2_M1PWM6    ((uint32_t) 0x00000500UL)
#define GPIOF_PCTL_R_PCM2_T1CCP0    ((uint32_t) 0x00000700UL)
#define GPIOF_PCTL_R_PCM2_TRD0    ((uint32_t) 0x00000E00UL)

#define GPIOF_PCTL_PCM2_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PCM2_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PCM2_SSI1Clk    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_PCM2_M0FAULT0    ((uint32_t) 0x00000004UL)
#define GPIOF_PCTL_PCM2_M1PWM6    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PCM2_T1CCP0    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PCM2_TRD0    ((uint32_t) 0x0000000EUL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PCM3_MASK    ((uint32_t) 0x0000F000UL)
#define GPIOF_PCTL_R_PCM3_BIT    (12UL)
#define GPIOF_PCTL_R_PCM3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PCM3_SSI1Fss    ((uint32_t) 0x00002000UL)
#define GPIOF_PCTL_R_PCM3_CAN0Tx    ((uint32_t) 0x00003000UL)
#define GPIOF_PCTL_R_PCM3_M1PWM7    ((uint32_t) 0x00005000UL)
#define GPIOF_PCTL_R_PCM3_T1CCP1    ((uint32_t) 0x00007000UL)
#define GPIOF_PCTL_R_PCM3_TRCLK    ((uint32_t) 0x0000E000UL)

#define GPIOF_PCTL_PCM3_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PCM3_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PCM3_SSI1Fss    ((uint32_t) 0x00000002UL)
#define GPIOF_PCTL_PCM3_CAN0Tx    ((uint32_t) 0x00000003UL)
#define GPIOF_PCTL_PCM3_M1PWM7    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PCM3_T1CCP1    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PCM3_TRCLK    ((uint32_t) 0x0000000EUL)
/*----------*/

/*----------*/
#define GPIOF_PCTL_R_PCM4_MASK    ((uint32_t) 0x000F0000UL)
#define GPIOF_PCTL_R_PCM4_BIT    (16UL)
#define GPIOF_PCTL_R_PCM4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_R_PCM4_M1FAULT0    ((uint32_t) 0x00050000UL)
#define GPIOF_PCTL_R_PCM4_IDX0    ((uint32_t) 0x00060000UL)
#define GPIOF_PCTL_R_PCM4_T2CCP0    ((uint32_t) 0x00070000UL)
#define GPIOF_PCTL_R_PCM4_USB0EPEN    ((uint32_t) 0x00080000UL)

#define GPIOF_PCTL_PCM4_MASK    ((uint32_t) 0x0000000FUL)
#define GPIOF_PCTL_PCM4_GPIO    ((uint32_t) 0x00000000UL)
#define GPIOF_PCTL_PCM4_M1FAULT0    ((uint32_t) 0x00000005UL)
#define GPIOF_PCTL_PCM4_IDX0    ((uint32_t) 0x00000006UL)
#define GPIOF_PCTL_PCM4_T2CCP0    ((uint32_t) 0x00000007UL)
#define GPIOF_PCTL_PCM4_USB0EPEN    ((uint32_t) 0x00000008UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEF_H_ */
