/**
 *
 * @file ADC_RegisterDefines_DCISC.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCISC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCISC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 13 DCISC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_DCISC_R_DCINT_MASK    ((UBase_t) 0x000000FFUL)
#define ADC_DCISC_R_DCINT_BIT    ((UBase_t) 0UL)
#define ADC_DCISC_R_DCINT_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_R_DCINT_ACTIVE    ((UBase_t) 0x000000FFUL)
#define ADC_DCISC_R_DCINT_CLEAR    ((UBase_t) 0x000000FFUL)

#define ADC_DCISC_DCINT_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_DCINT_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_DCISC_R_DCINT0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_R_DCINT0_BIT    ((UBase_t) 0UL)
#define ADC_DCISC_R_DCINT0_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_R_DCINT0_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_R_DCINT0_CLEAR    ((UBase_t) 0x00000001UL)

#define ADC_DCISC_DCINT0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT0_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_DCINT0_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT0_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_DCISC_R_DCINT1_MASK    ((UBase_t) 0x00000002UL)
#define ADC_DCISC_R_DCINT1_BIT    ((UBase_t) 1UL)
#define ADC_DCISC_R_DCINT1_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_R_DCINT1_ACTIVE    ((UBase_t) 0x00000002UL)
#define ADC_DCISC_R_DCINT1_CLEAR    ((UBase_t) 0x00000002UL)

#define ADC_DCISC_DCINT1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT1_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_DCINT1_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT1_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_DCISC_R_DCINT2_MASK    ((UBase_t) 0x00000004UL)
#define ADC_DCISC_R_DCINT2_BIT    ((UBase_t) 2UL)
#define ADC_DCISC_R_DCINT2_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_R_DCINT2_ACTIVE    ((UBase_t) 0x00000004UL)
#define ADC_DCISC_R_DCINT2_CLEAR    ((UBase_t) 0x00000004UL)

#define ADC_DCISC_DCINT2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT2_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_DCINT2_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT2_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_DCISC_R_DCINT3_MASK    ((UBase_t) 0x00000008UL)
#define ADC_DCISC_R_DCINT3_BIT    ((UBase_t) 3UL)
#define ADC_DCISC_R_DCINT3_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_R_DCINT3_ACTIVE    ((UBase_t) 0x00000008UL)
#define ADC_DCISC_R_DCINT3_CLEAR    ((UBase_t) 0x00000008UL)

#define ADC_DCISC_DCINT3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT3_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_DCINT3_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT3_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_DCISC_R_DCINT4_MASK    ((UBase_t) 0x00000010UL)
#define ADC_DCISC_R_DCINT4_BIT    ((UBase_t) 4UL)
#define ADC_DCISC_R_DCINT4_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_R_DCINT4_ACTIVE    ((UBase_t) 0x00000010UL)
#define ADC_DCISC_R_DCINT4_CLEAR    ((UBase_t) 0x00000010UL)

#define ADC_DCISC_DCINT4_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT4_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_DCINT4_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT4_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_DCISC_R_DCINT5_MASK    ((UBase_t) 0x00000020UL)
#define ADC_DCISC_R_DCINT5_BIT    ((UBase_t) 5UL)
#define ADC_DCISC_R_DCINT5_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_R_DCINT5_ACTIVE    ((UBase_t) 0x00000020UL)
#define ADC_DCISC_R_DCINT5_CLEAR    ((UBase_t) 0x00000020UL)

#define ADC_DCISC_DCINT5_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT5_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_DCINT5_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT5_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_DCISC_R_DCINT6_MASK    ((UBase_t) 0x00000040UL)
#define ADC_DCISC_R_DCINT6_BIT    ((UBase_t) 6UL)
#define ADC_DCISC_R_DCINT6_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_R_DCINT6_ACTIVE    ((UBase_t) 0x00000040UL)
#define ADC_DCISC_R_DCINT6_CLEAR    ((UBase_t) 0x00000040UL)

#define ADC_DCISC_DCINT6_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT6_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_DCINT6_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT6_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_DCISC_R_DCINT7_MASK    ((UBase_t) 0x00000080UL)
#define ADC_DCISC_R_DCINT7_BIT    ((UBase_t) 7UL)
#define ADC_DCISC_R_DCINT7_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_R_DCINT7_ACTIVE    ((UBase_t) 0x00000080UL)
#define ADC_DCISC_R_DCINT7_CLEAR    ((UBase_t) 0x00000080UL)

#define ADC_DCISC_DCINT7_MASK    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT7_INACTIVE    ((UBase_t) 0x00000000UL)
#define ADC_DCISC_DCINT7_ACTIVE    ((UBase_t) 0x00000001UL)
#define ADC_DCISC_DCINT7_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCISC_H_ */
