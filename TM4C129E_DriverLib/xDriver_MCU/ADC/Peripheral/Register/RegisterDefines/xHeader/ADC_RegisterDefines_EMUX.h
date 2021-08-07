/**
 *
 * @file ADC_RegisterDefines_EMUX.h
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
 * @verbatim 14 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_EMUX_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_EMUX_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 EMUX *********************************************
******************************************************************************************/
/*--------*/
#define ADC_EMUX_R_EM0_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_EMUX_R_EM0_BIT    ((uint32_t) 0UL)
#define ADC_EMUX_R_EM0_DEFAULT    ((uint32_t) 0x00000000UL)
#define ADC_EMUX_R_EM0_ACMP0    ((uint32_t) 0x00000001UL)
#define ADC_EMUX_R_EM0_ACMP1    ((uint32_t) 0x00000002UL)
#define ADC_EMUX_R_EM0_ACMP2    ((uint32_t) 0x00000003UL)
#define ADC_EMUX_R_EM0_GPIO    ((uint32_t) 0x00000004UL)
#define ADC_EMUX_R_EM0_TIMER    ((uint32_t) 0x00000005UL)
#define ADC_EMUX_R_EM0_PWMGEN0    ((uint32_t) 0x00000006UL)
#define ADC_EMUX_R_EM0_PWMGEN1    ((uint32_t) 0x00000007UL)
#define ADC_EMUX_R_EM0_PWMGEN2    ((uint32_t) 0x00000008UL)
#define ADC_EMUX_R_EM0_PWMGEN3    ((uint32_t) 0x00000009UL)
#define ADC_EMUX_R_EM0_NEVER    ((uint32_t) 0x0000000EUL)
#define ADC_EMUX_R_EM0_ALWAYS    ((uint32_t) 0x0000000FUL)

#define ADC_EMUX_EM0_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_EMUX_EM0_DEFAULT    ((uint32_t) 0x00000000UL)
#define ADC_EMUX_EM0_ACMP0    ((uint32_t) 0x00000001UL)
#define ADC_EMUX_EM0_ACMP1    ((uint32_t) 0x00000002UL)
#define ADC_EMUX_EM0_ACMP2    ((uint32_t) 0x00000003UL)
#define ADC_EMUX_EM0_GPIO    ((uint32_t) 0x00000004UL)
#define ADC_EMUX_EM0_TIMER    ((uint32_t) 0x00000005UL)
#define ADC_EMUX_EM0_PWMGEN0    ((uint32_t) 0x00000006UL)
#define ADC_EMUX_EM0_PWMGEN1    ((uint32_t) 0x00000007UL)
#define ADC_EMUX_EM0_PWMGEN2    ((uint32_t) 0x00000008UL)
#define ADC_EMUX_EM0_PWMGEN3    ((uint32_t) 0x00000009UL)
#define ADC_EMUX_EM0_NEVER    ((uint32_t) 0x0000000EUL)
#define ADC_EMUX_EM0_ALWAYS    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_EMUX_R_EM1_MASK    ((uint32_t) 0x000000F0UL)
#define ADC_EMUX_R_EM1_BIT    ((uint32_t) 4UL)
#define ADC_EMUX_R_EM1_DEFAULT    ((uint32_t) 0x00000000UL)
#define ADC_EMUX_R_EM1_ACMP0    ((uint32_t) 0x00000010UL)
#define ADC_EMUX_R_EM1_ACMP1    ((uint32_t) 0x00000020UL)
#define ADC_EMUX_R_EM1_ACMP2    ((uint32_t) 0x00000030UL)
#define ADC_EMUX_R_EM1_GPIO    ((uint32_t) 0x00000040UL)
#define ADC_EMUX_R_EM1_TIMER    ((uint32_t) 0x00000050UL)
#define ADC_EMUX_R_EM1_PWMGEN0    ((uint32_t) 0x00000060UL)
#define ADC_EMUX_R_EM1_PWMGEN1    ((uint32_t) 0x00000070UL)
#define ADC_EMUX_R_EM1_PWMGEN2    ((uint32_t) 0x00000080UL)
#define ADC_EMUX_R_EM1_PWMGEN3    ((uint32_t) 0x00000090UL)
#define ADC_EMUX_R_EM1_NEVER    ((uint32_t) 0x000000E0UL)
#define ADC_EMUX_R_EM1_ALWAYS    ((uint32_t) 0x000000F0UL)

#define ADC_EMUX_EM1_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_EMUX_EM1_DEFAULT    ((uint32_t) 0x00000000UL)
#define ADC_EMUX_EM1_ACMP0    ((uint32_t) 0x00000001UL)
#define ADC_EMUX_EM1_ACMP1    ((uint32_t) 0x00000002UL)
#define ADC_EMUX_EM1_ACMP2    ((uint32_t) 0x00000003UL)
#define ADC_EMUX_EM1_GPIO    ((uint32_t) 0x00000004UL)
#define ADC_EMUX_EM1_TIMER    ((uint32_t) 0x00000005UL)
#define ADC_EMUX_EM1_PWMGEN0    ((uint32_t) 0x00000006UL)
#define ADC_EMUX_EM1_PWMGEN1    ((uint32_t) 0x00000007UL)
#define ADC_EMUX_EM1_PWMGEN2    ((uint32_t) 0x00000008UL)
#define ADC_EMUX_EM1_PWMGEN3    ((uint32_t) 0x00000009UL)
#define ADC_EMUX_EM1_NEVER    ((uint32_t) 0x0000000EUL)
#define ADC_EMUX_EM1_ALWAYS    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_EMUX_R_EM2_MASK    ((uint32_t) 0x00000F00UL)
#define ADC_EMUX_R_EM2_BIT    ((uint32_t) 8UL)
#define ADC_EMUX_R_EM2_DEFAULT    ((uint32_t) 0x00000000UL)
#define ADC_EMUX_R_EM2_ACMP0    ((uint32_t) 0x00000100UL)
#define ADC_EMUX_R_EM2_ACMP1    ((uint32_t) 0x00000200UL)
#define ADC_EMUX_R_EM2_ACMP2    ((uint32_t) 0x00000300UL)
#define ADC_EMUX_R_EM2_GPIO    ((uint32_t) 0x00000400UL)
#define ADC_EMUX_R_EM2_TIMER    ((uint32_t) 0x00000500UL)
#define ADC_EMUX_R_EM2_PWMGEN0    ((uint32_t) 0x00000600UL)
#define ADC_EMUX_R_EM2_PWMGEN1    ((uint32_t) 0x00000700UL)
#define ADC_EMUX_R_EM2_PWMGEN2    ((uint32_t) 0x00000800UL)
#define ADC_EMUX_R_EM2_PWMGEN3    ((uint32_t) 0x00000900UL)
#define ADC_EMUX_R_EM2_NEVER    ((uint32_t) 0x00000E00UL)
#define ADC_EMUX_R_EM2_ALWAYS    ((uint32_t) 0x00000F00UL)

#define ADC_EMUX_EM2_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_EMUX_EM2_DEFAULT    ((uint32_t) 0x00000000UL)
#define ADC_EMUX_EM2_ACMP0    ((uint32_t) 0x00000001UL)
#define ADC_EMUX_EM2_ACMP1    ((uint32_t) 0x00000002UL)
#define ADC_EMUX_EM2_ACMP2    ((uint32_t) 0x00000003UL)
#define ADC_EMUX_EM2_GPIO    ((uint32_t) 0x00000004UL)
#define ADC_EMUX_EM2_TIMER    ((uint32_t) 0x00000005UL)
#define ADC_EMUX_EM2_PWMGEN0    ((uint32_t) 0x00000006UL)
#define ADC_EMUX_EM2_PWMGEN1    ((uint32_t) 0x00000007UL)
#define ADC_EMUX_EM2_PWMGEN2    ((uint32_t) 0x00000008UL)
#define ADC_EMUX_EM2_PWMGEN3    ((uint32_t) 0x00000009UL)
#define ADC_EMUX_EM2_NEVER    ((uint32_t) 0x0000000EUL)
#define ADC_EMUX_EM2_ALWAYS    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_EMUX_R_EM3_MASK    ((uint32_t) 0x0000FUL)
#define ADC_EMUX_R_EM3_BIT    ((uint32_t) 12UL)
#define ADC_EMUX_R_EM3_DEFAULT    ((uint32_t) 0x00000000UL)
#define ADC_EMUX_R_EM3_ACMP0    ((uint32_t) 0x00001000UL)
#define ADC_EMUX_R_EM3_ACMP1    ((uint32_t) 0x00002000UL)
#define ADC_EMUX_R_EM3_ACMP2    ((uint32_t) 0x00003000UL)
#define ADC_EMUX_R_EM3_GPIO    ((uint32_t) 0x00004000UL)
#define ADC_EMUX_R_EM3_TIMER    ((uint32_t) 0x00005000UL)
#define ADC_EMUX_R_EM3_PWMGEN0    ((uint32_t) 0x00006000UL)
#define ADC_EMUX_R_EM3_PWMGEN1    ((uint32_t) 0x00007000UL)
#define ADC_EMUX_R_EM3_PWMGEN2    ((uint32_t) 0x00008000UL)
#define ADC_EMUX_R_EM3_PWMGEN3    ((uint32_t) 0x00009000UL)
#define ADC_EMUX_R_EM3_NEVER    ((uint32_t) 0x0000E000UL)
#define ADC_EMUX_R_EM3_ALWAYS    ((uint32_t) 0x0000F000UL)

#define ADC_EMUX_EM3_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_EMUX_EM3_DEFAULT    ((uint32_t) 0x00000000UL)
#define ADC_EMUX_EM3_ACMP0    ((uint32_t) 0x00000001UL)
#define ADC_EMUX_EM3_ACMP1    ((uint32_t) 0x00000002UL)
#define ADC_EMUX_EM3_ACMP2    ((uint32_t) 0x00000003UL)
#define ADC_EMUX_EM3_GPIO    ((uint32_t) 0x00000004UL)
#define ADC_EMUX_EM3_TIMER    ((uint32_t) 0x00000005UL)
#define ADC_EMUX_EM3_PWMGEN0    ((uint32_t) 0x00000006UL)
#define ADC_EMUX_EM3_PWMGEN1    ((uint32_t) 0x00000007UL)
#define ADC_EMUX_EM3_PWMGEN2    ((uint32_t) 0x00000008UL)
#define ADC_EMUX_EM3_PWMGEN3    ((uint32_t) 0x00000009UL)
#define ADC_EMUX_EM3_NEVER    ((uint32_t) 0x0000000EUL)
#define ADC_EMUX_EM3_ALWAYS    ((uint32_t) 0x0000000FUL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_EMUX_H_ */
