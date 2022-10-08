/**
 *
 * @file ADC_RegisterDefines_SSPRI.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSPRI_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSPRI_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 9 SSPRI *********************************************
******************************************************************************************/
/*--------*/
#define ADC_SSPRI_R_SS_MASK    ((UBase_t) 0x00003333UL)
#define ADC_SSPRI_R_SS_BIT    ((UBase_t) 0UL)
#define ADC_SSPRI_R_SS_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_R_SS_MEDIUM    ((UBase_t) 0x00001111UL)
#define ADC_SSPRI_R_SS_LOW    ((UBase_t) 0x00002222UL)
#define ADC_SSPRI_R_SS_VERY_LOW    ((UBase_t) 0x00003333UL)

#define ADC_SSPRI_SS_MASK    ((UBase_t) 0x00000003UL)
#define ADC_SSPRI_SS_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_SS_MEDIUM    ((UBase_t) 0x00001111UL)
#define ADC_SSPRI_SS_LOW    ((UBase_t) 0x00002222UL)
#define ADC_SSPRI_SS_VERY_LOW    ((UBase_t) 0x00003333UL)
/*--------*/

/*--------*/
#define ADC_SSPRI_R_SS0_MASK    ((UBase_t) 0x00000003UL)
#define ADC_SSPRI_R_SS0_BIT    ((UBase_t) 0UL)
#define ADC_SSPRI_R_SS0_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_R_SS0_MEDIUM    ((UBase_t) 0x00000001UL)
#define ADC_SSPRI_R_SS0_LOW    ((UBase_t) 0x00000002UL)
#define ADC_SSPRI_R_SS0_VERY_LOW    ((UBase_t) 0x00000003UL)

#define ADC_SSPRI_SS0_MASK    ((UBase_t) 0x00000003UL)
#define ADC_SSPRI_SS0_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_SS0_MEDIUM    ((UBase_t) 0x00000001UL)
#define ADC_SSPRI_SS0_LOW    ((UBase_t) 0x00000002UL)
#define ADC_SSPRI_SS0_VERY_LOW    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_SSPRI_R_SS1_MASK    ((UBase_t) 0x00000030UL)
#define ADC_SSPRI_R_SS1_BIT    ((UBase_t) 4UL)
#define ADC_SSPRI_R_SS1_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_R_SS1_MEDIUM    ((UBase_t) 0x00000010UL)
#define ADC_SSPRI_R_SS1_LOW    ((UBase_t) 0x00000020UL)
#define ADC_SSPRI_R_SS1_VERY_LOW    ((UBase_t) 0x00000030UL)

#define ADC_SSPRI_SS1_MASK    ((UBase_t) 0x00000003UL)
#define ADC_SSPRI_SS1_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_SS1_MEDIUM    ((UBase_t) 0x00000001UL)
#define ADC_SSPRI_SS1_LOW    ((UBase_t) 0x00000002UL)
#define ADC_SSPRI_SS1_VERY_LOW    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_SSPRI_R_SS2_MASK    ((UBase_t) 0x00000300UL)
#define ADC_SSPRI_R_SS2_BIT    ((UBase_t) 8UL)
#define ADC_SSPRI_R_SS2_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_R_SS2_MEDIUM    ((UBase_t) 0x00000100UL)
#define ADC_SSPRI_R_SS2_LOW    ((UBase_t) 0x00000200UL)
#define ADC_SSPRI_R_SS2_VERY_LOW    ((UBase_t) 0x00000300UL)

#define ADC_SSPRI_SS2_MASK    ((UBase_t) 0x00000003UL)
#define ADC_SSPRI_SS2_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_SS2_MEDIUM    ((UBase_t) 0x00000001UL)
#define ADC_SSPRI_SS2_LOW    ((UBase_t) 0x00000002UL)
#define ADC_SSPRI_SS2_VERY_LOW    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_SSPRI_R_SS3_MASK    ((UBase_t) 0x00003000UL)
#define ADC_SSPRI_R_SS3_BIT    ((UBase_t) 12UL)
#define ADC_SSPRI_R_SS3_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_R_SS3_MEDIUM    ((UBase_t) 0x00001000UL)
#define ADC_SSPRI_R_SS3_LOW    ((UBase_t) 0x00002000UL)
#define ADC_SSPRI_R_SS3_VERY_LOW    ((UBase_t) 0x00003000UL)

#define ADC_SSPRI_SS3_MASK    ((UBase_t) 0x00000003UL)
#define ADC_SSPRI_SS3_HIGH    ((UBase_t) 0x00000000UL)
#define ADC_SSPRI_SS3_MEDIUM    ((UBase_t) 0x00000001UL)
#define ADC_SSPRI_SS3_LOW    ((UBase_t) 0x00000002UL)
#define ADC_SSPRI_SS3_VERY_LOW    ((UBase_t) 0x00000003UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSPRI_H_ */
