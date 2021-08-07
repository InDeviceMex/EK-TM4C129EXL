/**
 *
 * @file ADC_RegisterDefines_SAC.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SAC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SAC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 12 SAC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_SAC_R_AVG_MASK    ((uint32_t) 0x00000007UL)
#define ADC_SAC_R_AVG_BIT    ((uint32_t) 0UL)
#define ADC_SAC_R_AVG_1    ((uint32_t) 0x00000000UL)
#define ADC_SAC_R_AVG_2    ((uint32_t) 0x00000001UL)
#define ADC_SAC_R_AVG_4    ((uint32_t) 0x00000002UL)
#define ADC_SAC_R_AVG_8    ((uint32_t) 0x00000003UL)
#define ADC_SAC_R_AVG_16    ((uint32_t) 0x00000004UL)
#define ADC_SAC_R_AVG_32    ((uint32_t) 0x00000005UL)
#define ADC_SAC_R_AVG_64    ((uint32_t) 0x00000006UL)
#define ADC_SAC_R_RESERVED    ((uint32_t) 0x00000007UL)

#define ADC_SAC_AVG_MASK    ((uint32_t) 0x00000007UL)
#define ADC_SAC_AVG_1    ((uint32_t) 0x00000000UL)
#define ADC_SAC_AVG_2    ((uint32_t) 0x00000001UL)
#define ADC_SAC_AVG_4    ((uint32_t) 0x00000002UL)
#define ADC_SAC_AVG_8    ((uint32_t) 0x00000003UL)
#define ADC_SAC_AVG_16    ((uint32_t) 0x00000004UL)
#define ADC_SAC_AVG_32    ((uint32_t) 0x00000005UL)
#define ADC_SAC_AVG_64    ((uint32_t) 0x00000006UL)
#define ADC_SAC_RESERVED    ((uint32_t) 0x00000007UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SAC_H_ */
