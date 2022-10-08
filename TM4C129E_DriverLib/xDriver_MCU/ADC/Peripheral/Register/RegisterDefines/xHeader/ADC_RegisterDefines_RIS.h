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

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 2 RIS *********************************************
******************************************************************************************/
/*--------*/
#define ADC_RIS_R_INR_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_RIS_R_INR_BIT    ((UBase_t) 0UL)
#define ADC_RIS_R_INR_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_INR_ACTIVE    ((UBase_t) 0x0000000FUL)

#define ADC_RIS_INR_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_RIS_INR_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_INR_ACTIVE    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_R_INR0_BIT    ((UBase_t) 0UL)
#define ADC_RIS_R_INR0_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_INR0_ACTIVE    ((UBase_t) 0x00000001UL)

#define ADC_RIS_INR0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_INR0_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_INR0_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR1_MASK    ((UBase_t) 0x00000002UL)
#define ADC_RIS_R_INR1_BIT    ((UBase_t) 1UL)
#define ADC_RIS_R_INR1_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_INR1_ACTIVE    ((UBase_t) 0x00000002UL)

#define ADC_RIS_INR1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_INR1_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_INR1_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR2_MASK    ((UBase_t) 0x00000004UL)
#define ADC_RIS_R_INR2_BIT    ((UBase_t) 2UL)
#define ADC_RIS_R_INR2_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_INR2_ACTIVE    ((UBase_t) 0x00000004UL)

#define ADC_RIS_INR2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_INR2_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_INR2_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR3_MASK    ((UBase_t) 0x00000008UL)
#define ADC_RIS_R_INR3_BIT    ((UBase_t) 3UL)
#define ADC_RIS_R_INR3_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_INR3_ACTIVE    ((UBase_t) 0x00000008UL)

#define ADC_RIS_INR3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_INR3_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_INR3_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR_MASK    ((UBase_t) 0x00000F00UL)
#define ADC_RIS_R_DMAINR_BIT    ((UBase_t) 8UL)
#define ADC_RIS_R_DMAINR_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR_ACTIVE    ((UBase_t) 0x00000F00UL)

#define ADC_RIS_DMAINR_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_RIS_DMAINR_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_DMAINR_ACTIVE    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR0_MASK    ((UBase_t) 0x00000100UL)
#define ADC_RIS_R_DMAINR0_BIT    ((UBase_t) 8UL)
#define ADC_RIS_R_DMAINR0_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR0_ACTIVE    ((UBase_t) 0x00000100UL)

#define ADC_RIS_DMAINR0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_DMAINR0_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_DMAINR0_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR1_MASK    ((UBase_t) 0x00000200UL)
#define ADC_RIS_R_DMAINR1_BIT    ((UBase_t) 9UL)
#define ADC_RIS_R_DMAINR1_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR1_ACTIVE    ((UBase_t) 0x00000200UL)

#define ADC_RIS_DMAINR1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_DMAINR1_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_DMAINR1_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR2_MASK    ((UBase_t) 0x00000400UL)
#define ADC_RIS_R_DMAINR2_BIT    ((UBase_t) 10UL)
#define ADC_RIS_R_DMAINR2_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR2_ACTIVE    ((UBase_t) 0x00000400UL)

#define ADC_RIS_DMAINR2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_DMAINR2_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_DMAINR2_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_DMAINR3_MASK    ((UBase_t) 0x00000800UL)
#define ADC_RIS_R_DMAINR3_BIT    ((UBase_t) 11UL)
#define ADC_RIS_R_DMAINR3_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_DMAINR3_ACTIVE    ((UBase_t) 0x00000800UL)

#define ADC_RIS_DMAINR3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_DMAINR3_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_DMAINR3_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INRDC_MASK    ((UBase_t) 0x00010000UL)
#define ADC_RIS_R_INRDC_BIT    ((UBase_t) 16UL)
#define ADC_RIS_R_INRDC_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_R_INRDC_ACTIVE    ((UBase_t) 0x00010000UL)

#define ADC_RIS_INRDC_MASK    ((UBase_t) 0x00000001UL)
#define ADC_RIS_INRDC_NOACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_RIS_INRDC_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_RIS_H_ */
