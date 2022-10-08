/**
 *
 * @file ADC_RegisterDefines_USTAT.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_USTAT_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_USTAT_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 7 USTAT *********************************************
******************************************************************************************/
/*--------*/
#define ADC_USTAT_R_UV_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_USTAT_R_UV_BIT    ((UBase_t) 0UL)
#define ADC_USTAT_R_UV_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_R_UV_EMPTY    ((UBase_t) 0x0000000FUL)

#define ADC_USTAT_UV_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_USTAT_UV_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_UV_EMPTY    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_USTAT_R_UV0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_USTAT_R_UV0_BIT    ((UBase_t) 0UL)
#define ADC_USTAT_R_UV0_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_R_UV0_EMPTY    ((UBase_t) 0x00000001UL)

#define ADC_USTAT_UV0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_USTAT_UV0_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_UV0_EMPTY    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_USTAT_R_UV1_MASK    ((UBase_t) 0x00000002UL)
#define ADC_USTAT_R_UV1_BIT    ((UBase_t) 1UL)
#define ADC_USTAT_R_UV1_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_R_UV1_EMPTY    ((UBase_t) 0x00000002UL)

#define ADC_USTAT_UV1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_USTAT_UV1_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_UV1_EMPTY    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_USTAT_R_UV2_MASK    ((UBase_t) 0x00000004UL)
#define ADC_USTAT_R_UV2_BIT    ((UBase_t) 2UL)
#define ADC_USTAT_R_UV2_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_R_UV2_EMPTY    ((UBase_t) 0x00000004UL)

#define ADC_USTAT_UV2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_USTAT_UV2_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_UV2_EMPTY    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_USTAT_R_UV3_MASK    ((UBase_t) 0x00000008UL)
#define ADC_USTAT_R_UV3_BIT    ((UBase_t) 3UL)
#define ADC_USTAT_R_UV3_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_R_UV3_EMPTY    ((UBase_t) 0x00000008UL)

#define ADC_USTAT_UV3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_USTAT_UV3_NOEMPTY    ((UBase_t) 0x00000000UL)
#define ADC_USTAT_UV3_EMPTY    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_USTAT_H_ */
