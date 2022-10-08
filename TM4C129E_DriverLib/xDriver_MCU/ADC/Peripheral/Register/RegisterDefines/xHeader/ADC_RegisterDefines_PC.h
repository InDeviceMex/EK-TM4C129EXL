/**
 *
 * @file ADC_RegisterDefines_PC.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 25 PC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_PC_R_MCR_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_PC_R_MCR_BIT    ((UBase_t) 0UL)
#define ADC_PC_R_MCR_112    ((UBase_t) 0x00000001UL)
#define ADC_PC_R_MCR_48    ((UBase_t) 0x00000003UL)
#define ADC_PC_R_MCR_16    ((UBase_t) 0x00000005UL)
#define ADC_PC_R_MCR_1    ((UBase_t) 0x00000007UL)

#define ADC_PC_MCR_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_PC_MCR_112    ((UBase_t) 0x00000001UL)
#define ADC_PC_MCR_48    ((UBase_t) 0x00000003UL)
#define ADC_PC_MCR_16    ((UBase_t) 0x00000005UL)
#define ADC_PC_MCR_1    ((UBase_t) 0x00000007UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PC_H_ */
