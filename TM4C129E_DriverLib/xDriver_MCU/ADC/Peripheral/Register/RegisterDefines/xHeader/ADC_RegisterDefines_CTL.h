/**
 *
 * @file ADC_RegisterDefines_CTL.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_CTL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_CTL_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 14 CTL *********************************************
******************************************************************************************/
/*--------*/
#define ADC_CTL_R_VREF_MASK    ((UBase_t) 0x00000001UL)
#define ADC_CTL_R_VREF_BIT    ((UBase_t) 0UL)
#define ADC_CTL_R_VREF_VDDA_GNDA    ((UBase_t) 0x00000000UL)
#define ADC_CTL_R_VREF_VREFA_GNDA    ((UBase_t) 0x00000001UL)

#define ADC_CTL_VREF_MASK    ((UBase_t) 0x00000001UL)
#define ADC_CTL_VREF_VDDA_GNDA    ((UBase_t) 0x00000000UL)
#define ADC_CTL_VREF_VREFA_GNDA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_CTL_H_ */
