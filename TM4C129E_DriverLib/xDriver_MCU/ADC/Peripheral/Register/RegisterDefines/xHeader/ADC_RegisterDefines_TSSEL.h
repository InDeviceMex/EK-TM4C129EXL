/**
 *
 * @file ADC_RegisterDefines_TSSEL.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_TSSEL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_TSSEL_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 8 TSSEL *********************************************
******************************************************************************************/
/*--------*/
#define ADC_TSSEL_R_PS_MASK    ((uint32_t) 0x30303030UL)
#define ADC_TSSEL_R_PS_BIT    ((uint32_t) 4UL)
#define ADC_TSSEL_R_PS_PWM0    ((uint32_t) 0x00000000UL)

#define ADC_TSSEL_PS_MASK    ((uint32_t) 0x00000003UL)
#define ADC_TSSEL_PS_PWM0    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define ADC_TSSEL_R_PS0_MASK    ((uint32_t) 0x00000030UL)
#define ADC_TSSEL_R_PS0_BIT    ((uint32_t) 4UL)
#define ADC_TSSEL_R_PS0_PWM0    ((uint32_t) 0x00000000UL)

#define ADC_TSSEL_PS0_MASK    ((uint32_t) 0x00000003UL)
#define ADC_TSSEL_PS0_PWM0    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define ADC_TSSEL_R_PS1_MASK    ((uint32_t) 0x00003000UL)
#define ADC_TSSEL_R_PS1_BIT    ((uint32_t) 12UL)
#define ADC_TSSEL_R_PS1_PWM0    ((uint32_t) 0x00000000UL)

#define ADC_TSSEL_PS1_MASK    ((uint32_t) 0x00000003UL)
#define ADC_TSSEL_PS1_PWM0    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define ADC_TSSEL_R_PS2_MASK    ((uint32_t) 0x00300000UL)
#define ADC_TSSEL_R_PS2_BIT    ((uint32_t) 20UL)
#define ADC_TSSEL_R_PS2_PWM0    ((uint32_t) 0x00000000UL)

#define ADC_TSSEL_PS2_MASK    ((uint32_t) 0x00000003UL)
#define ADC_TSSEL_PS2_PWM0    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define ADC_TSSEL_R_PS3_MASK    ((uint32_t) 0x30000000UL)
#define ADC_TSSEL_R_PS3_BIT    ((uint32_t) 28UL)
#define ADC_TSSEL_R_PS3_PWM0    ((uint32_t) 0x00000000UL)

#define ADC_TSSEL_PS3_MASK    ((uint32_t) 0x00000003UL)
#define ADC_TSSEL_PS3_PWM0    ((uint32_t) 0x00000000UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_TSSEL_H_ */
