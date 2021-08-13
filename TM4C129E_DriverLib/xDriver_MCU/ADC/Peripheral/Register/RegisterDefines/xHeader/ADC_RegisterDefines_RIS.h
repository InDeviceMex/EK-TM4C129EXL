/**
 *
 * @file ADC_RegisterDefines_RIS.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_RIS_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_RIS_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 2 RIS *********************************************
******************************************************************************************/
/*--------*/
#define ADC_RIS_R_INR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_RIS_R_INR_BIT    ((uint32_t) 0UL)
#define ADC_RIS_R_INR_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR_ACTIVE    ((uint32_t) 0x0000000FUL)

#define ADC_RIS_INR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_RIS_INR_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR_ACTIVE    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_R_INR0_BIT    ((uint32_t) 0UL)
#define ADC_RIS_R_INR0_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR0_ACTIVE    ((uint32_t) 0x00000001UL)

#define ADC_RIS_INR0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INR0_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR0_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR1_MASK    ((uint32_t) 0x00000002UL)
#define ADC_RIS_R_INR1_BIT    ((uint32_t) 1UL)
#define ADC_RIS_R_INR1_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR1_ACTIVE    ((uint32_t) 0x00000002UL)

#define ADC_RIS_INR1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INR1_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR1_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR2_MASK    ((uint32_t) 0x00000004UL)
#define ADC_RIS_R_INR2_BIT    ((uint32_t) 2UL)
#define ADC_RIS_R_INR2_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR2_ACTIVE    ((uint32_t) 0x00000004UL)

#define ADC_RIS_INR2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INR2_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR2_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR3_MASK    ((uint32_t) 0x00000008UL)
#define ADC_RIS_R_INR3_BIT    ((uint32_t) 3UL)
#define ADC_RIS_R_INR3_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR3_ACTIVE    ((uint32_t) 0x00000008UL)

#define ADC_RIS_INR3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INR3_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR3_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR_MASK    ((uint32_t) 0x00000F00UL)
#define ADC_RIS_R_DMAINR_BIT    ((uint32_t) 8UL)
#define ADC_RIS_R_DMAINR_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR_ACTIVE    ((uint32_t) 0x00000F00UL)

#define ADC_RIS_DMAINR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_RIS_DMAINR_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_DMAINR_ACTIVE    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR0_MASK    ((uint32_t) 0x00000100UL)
#define ADC_RIS_R_DMAINR0_BIT    ((uint32_t) 8UL)
#define ADC_RIS_R_DMAINR0_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR0_ACTIVE    ((uint32_t) 0x00000100UL)

#define ADC_RIS_DMAINR0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_DMAINR0_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_DMAINR0_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR1_MASK    ((uint32_t) 0x00000200UL)
#define ADC_RIS_R_DMAINR1_BIT    ((uint32_t) 9UL)
#define ADC_RIS_R_DMAINR1_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR1_ACTIVE    ((uint32_t) 0x00000200UL)

#define ADC_RIS_DMAINR1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_DMAINR1_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_DMAINR1_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR2_MASK    ((uint32_t) 0x00000400UL)
#define ADC_RIS_R_DMAINR2_BIT    ((uint32_t) 10UL)
#define ADC_RIS_R_DMAINR2_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR2_ACTIVE    ((uint32_t) 0x00000400UL)

#define ADC_RIS_DMAINR2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_DMAINR2_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_DMAINR2_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR3_MASK    ((uint32_t) 0x00000800UL)
#define ADC_RIS_R_DMAINR3_BIT    ((uint32_t) 11UL)
#define ADC_RIS_R_DMAINR3_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR3_ACTIVE    ((uint32_t) 0x00000800UL)

#define ADC_RIS_DMAINR3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_DMAINR3_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_DMAINR3_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INRDC_MASK    ((uint32_t) 0x00010000UL)
#define ADC_RIS_R_INRDC_BIT    ((uint32_t) 16UL)
#define ADC_RIS_R_INRDC_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INRDC_ACTIVE    ((uint32_t) 0x00010000UL)

#define ADC_RIS_INRDC_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INRDC_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INRDC_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_RIS_H_ */
