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

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 23 DC_CMP *********************************************
******************************************************************************************/
/*--------*/
#define ADC_DC_CMP_R_COMP0_MASK    ((UBase_t) 0x00000FFFUL)
#define ADC_DC_CMP_R_COMP0_BIT    ((UBase_t) 0UL)

#define ADC_DC_CMP_COMP0_MASK    ((UBase_t) 0x00000FFFUL)
/*--------*/

/*--------*/
#define ADC_DC_CMP_R_COMP1_MASK    ((UBase_t) 0x0FFF0000UL)
#define ADC_DC_CMP_R_COMP1_BIT    ((UBase_t) 16UL)

#define ADC_DC_CMP_COMP1_MASK    ((UBase_t) 0x00000FFFUL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_DCCMP_H_ */
