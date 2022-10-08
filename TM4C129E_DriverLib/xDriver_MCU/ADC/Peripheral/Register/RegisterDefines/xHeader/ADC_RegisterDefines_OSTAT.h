/**
 *
 * @file ADC_RegisterDefines_OSTAT.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_OSTAT_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_OSTAT_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 5 OSTAT *********************************************
******************************************************************************************/
/*--------*/
#define ADC_OSTAT_R_OV_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_OSTAT_R_OV_BIT    ((UBase_t) 0UL)
#define ADC_OSTAT_R_OV_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_R_OV_FULL    ((UBase_t) 0x0000000FUL)

#define ADC_OSTAT_OV_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_OSTAT_OV_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_OV_FULL    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_OSTAT_R_OV0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_OSTAT_R_OV0_BIT    ((UBase_t) 0UL)
#define ADC_OSTAT_R_OV0_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_R_OV0_FULL    ((UBase_t) 0x00000001UL)

#define ADC_OSTAT_OV0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_OSTAT_OV0_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_OV0_FULL    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_OSTAT_R_OV1_MASK    ((UBase_t) 0x00000002UL)
#define ADC_OSTAT_R_OV1_BIT    ((UBase_t) 1UL)
#define ADC_OSTAT_R_OV1_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_R_OV1_FULL    ((UBase_t) 0x00000002UL)

#define ADC_OSTAT_OV1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_OSTAT_OV1_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_OV1_FULL    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_OSTAT_R_OV2_MASK    ((UBase_t) 0x00000004UL)
#define ADC_OSTAT_R_OV2_BIT    ((UBase_t) 2UL)
#define ADC_OSTAT_R_OV2_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_R_OV2_FULL    ((UBase_t) 0x00000004UL)

#define ADC_OSTAT_OV2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_OSTAT_OV2_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_OV2_FULL    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_OSTAT_R_OV3_MASK    ((UBase_t) 0x00000008UL)
#define ADC_OSTAT_R_OV3_BIT    ((UBase_t) 3UL)
#define ADC_OSTAT_R_OV3_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_R_OV3_FULL    ((UBase_t) 0x00000008UL)

#define ADC_OSTAT_OV3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_OSTAT_OV3_NOFULL    ((UBase_t) 0x00000000UL)
#define ADC_OSTAT_OV3_FULL    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_OSTAT_H_ */
