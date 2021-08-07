/**
 *
 * @file ADC_RegisterDefines_DCCMP.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCCMP_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCCMP_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 23 DCCMP *********************************************
******************************************************************************************/
/*--------*/
#define ADC_DCCMP_R_COMP0_MASK    ((uint32_t) 0x00000FFFUL)
#define ADC_DCCMP_R_COMP0_BIT    ((uint32_t) 0UL)

#define ADC_DCCMP_COMP0_MASK    ((uint32_t) 0x00000FFFUL)
/*--------*/

/*--------*/
#define ADC_DCCMP_R_COMP1_MASK    ((uint32_t) 0x0FFF0000UL)
#define ADC_DCCMP_R_COMP1_BIT    ((uint32_t) 16UL)

#define ADC_DCCMP_COMP1_MASK    ((uint32_t) 0x00000FFFUL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCCMP_H_ */
