/**
 *
 * @file ADC_RegisterDefines_SSFSTAT.h
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSFSTAT_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSFSTAT_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 18 SSFSTAT *********************************************
******************************************************************************************/

/*--------*/
#define ADC_SSFSTAT_R_TPTR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSFSTAT_R_TPTR_BIT    ((uint32_t) 0UL)
#define ADC_SSFSTAT_R_TPTR_POS0    ((uint32_t) 0x00000000UL)
#define ADC_SSFSTAT_R_TPTR_POS1    ((uint32_t) 0x00000001UL)
#define ADC_SSFSTAT_R_TPTR_POS2    ((uint32_t) 0x00000002UL)
#define ADC_SSFSTAT_R_TPTR_POS3    ((uint32_t) 0x00000003UL)
#define ADC_SSFSTAT_R_TPTR_POS4    ((uint32_t) 0x00000004UL)
#define ADC_SSFSTAT_R_TPTR_POS5    ((uint32_t) 0x00000005UL)
#define ADC_SSFSTAT_R_TPTR_POS6    ((uint32_t) 0x00000006UL)
#define ADC_SSFSTAT_R_TPTR_POS7    ((uint32_t) 0x00000007UL)

#define ADC_SSFSTAT_TPTR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSFSTAT_TPTR_POS0    ((uint32_t) 0x00000000UL)
#define ADC_SSFSTAT_TPTR_POS1    ((uint32_t) 0x00000001UL)
#define ADC_SSFSTAT_TPTR_POS2    ((uint32_t) 0x00000002UL)
#define ADC_SSFSTAT_TPTR_POS3    ((uint32_t) 0x00000003UL)
#define ADC_SSFSTAT_TPTR_POS4    ((uint32_t) 0x00000004UL)
#define ADC_SSFSTAT_TPTR_POS5    ((uint32_t) 0x00000005UL)
#define ADC_SSFSTAT_TPTR_POS6    ((uint32_t) 0x00000006UL)
#define ADC_SSFSTAT_TPTR_POS7    ((uint32_t) 0x00000007UL)
/*--------*/

/*--------*/
#define ADC_SSFSTAT_R_HPTR_MASK    ((uint32_t) 0x000000F0UL)
#define ADC_SSFSTAT_R_HPTR_BIT    ((uint32_t) 4UL)
#define ADC_SSFSTAT_R_HPTR_POS0    ((uint32_t) 0x00000000UL)
#define ADC_SSFSTAT_R_HPTR_POS1    ((uint32_t) 0x00000010UL)
#define ADC_SSFSTAT_R_HPTR_POS2    ((uint32_t) 0x00000020UL)
#define ADC_SSFSTAT_R_HPTR_POS3    ((uint32_t) 0x00000030UL)
#define ADC_SSFSTAT_R_HPTR_POS4    ((uint32_t) 0x00000040UL)
#define ADC_SSFSTAT_R_HPTR_POS5    ((uint32_t) 0x00000050UL)
#define ADC_SSFSTAT_R_HPTR_POS6    ((uint32_t) 0x00000060UL)
#define ADC_SSFSTAT_R_HPTR_POS7    ((uint32_t) 0x00000070UL)

#define ADC_SSFSTAT_HPTR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSFSTAT_HPTR_POS0    ((uint32_t) 0x00000000UL)
#define ADC_SSFSTAT_HPTR_POS1    ((uint32_t) 0x00000001UL)
#define ADC_SSFSTAT_HPTR_POS2    ((uint32_t) 0x00000002UL)
#define ADC_SSFSTAT_HPTR_POS3    ((uint32_t) 0x00000003UL)
#define ADC_SSFSTAT_HPTR_POS4    ((uint32_t) 0x00000004UL)
#define ADC_SSFSTAT_HPTR_POS5    ((uint32_t) 0x00000005UL)
#define ADC_SSFSTAT_HPTR_POS6    ((uint32_t) 0x00000006UL)
#define ADC_SSFSTAT_HPTR_POS7    ((uint32_t) 0x00000007UL)
/*--------*/

/*--------*/
#define ADC_SSFSTAT_R_EMPTY_MASK    ((uint32_t) 0x00000100UL)
#define ADC_SSFSTAT_R_EMPTY_BIT    ((uint32_t) 8UL)
#define ADC_SSFSTAT_R_EMPTY_NOEMPTY    ((uint32_t) 0x00000000UL)
#define ADC_SSFSTAT_R_EMPTY_EMPTY    ((uint32_t) 0x00000100UL)

#define ADC_SSFSTAT_EMPTY_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSFSTAT_EMPTY_NOEMPTY    ((uint32_t) 0x00000000UL)
#define ADC_SSFSTAT_EMPTY_EMPTY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSFSTAT_R_FULL_MASK    ((uint32_t) 0x00001000UL)
#define ADC_SSFSTAT_R_FULL_BIT    ((uint32_t) 12UL)
#define ADC_SSFSTAT_R_FULL_NOFULL    ((uint32_t) 0x00000000UL)
#define ADC_SSFSTAT_R_FULL_FULL    ((uint32_t) 0x00001000UL)

#define ADC_SSFSTAT_FULL_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSFSTAT_FULL_NOFULL    ((uint32_t) 0x00000000UL)
#define ADC_SSFSTAT_FULL_FULL    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSFSTAT_H_ */
