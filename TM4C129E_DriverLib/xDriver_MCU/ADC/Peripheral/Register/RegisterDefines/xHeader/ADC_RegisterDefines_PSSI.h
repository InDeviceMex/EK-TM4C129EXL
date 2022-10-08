/**
 *
 * @file ADC_RegisterDefines_PSSI.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PSSI_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PSSI_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 11 PSSI *********************************************
******************************************************************************************/
/*--------*/
#define ADC_PSSI_R_SS_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_PSSI_R_SS_BIT    ((UBase_t) 0UL)
#define ADC_PSSI_R_SS_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_R_SS_INIT    ((UBase_t) 0x0000000FUL)

#define ADC_PSSI_SS_MASK    ((UBase_t) 0x0000000FUL)
#define ADC_PSSI_SS_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_SS_INIT    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SS0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_PSSI_R_SS0_BIT    ((UBase_t) 0UL)
#define ADC_PSSI_R_SS0_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_R_SS0_INIT    ((UBase_t) 0x00000001UL)

#define ADC_PSSI_SS0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_PSSI_SS0_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_SS0_INIT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SS1_MASK    ((UBase_t) 0x00000002UL)
#define ADC_PSSI_R_SS1_BIT    ((UBase_t) 1UL)
#define ADC_PSSI_R_SS1_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_R_SS1_INIT    ((UBase_t) 0x00000002UL)

#define ADC_PSSI_SS1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_PSSI_SS1_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_SS1_INIT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SS2_MASK    ((UBase_t) 0x00000004UL)
#define ADC_PSSI_R_SS2_BIT    ((UBase_t) 2UL)
#define ADC_PSSI_R_SS2_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_R_SS2_INIT    ((UBase_t) 0x00000004UL)

#define ADC_PSSI_SS2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_PSSI_SS2_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_SS2_INIT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SS3_MASK    ((UBase_t) 0x00000008UL)
#define ADC_PSSI_R_SS3_BIT    ((UBase_t) 3UL)
#define ADC_PSSI_R_SS3_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_R_SS3_INIT    ((UBase_t) 0x00000008UL)

#define ADC_PSSI_SS3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_PSSI_SS3_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_SS3_INIT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SYNCWAIT_MASK    ((UBase_t) 0x08000000UL)
#define ADC_PSSI_R_SYNCWAIT_BIT    ((UBase_t) 27UL)
#define ADC_PSSI_R_SYNCWAIT_DIS    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_R_SYNCWAIT_ENA    ((UBase_t) 0x08000000UL)

#define ADC_PSSI_SYNCWAIT_MASK    ((UBase_t) 0x00000001UL)
#define ADC_PSSI_SYNCWAIT_DIS    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_SYNCWAIT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_GSYNC_MASK    ((UBase_t) 0x80000000UL)
#define ADC_PSSI_R_GSYNC_BIT    ((UBase_t) 31UL)
#define ADC_PSSI_R_GSYNC_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_R_GSYNC_INIT    ((UBase_t) 0x80000000UL)

#define ADC_PSSI_GSYNC_MASK    ((UBase_t) 0x00000001UL)
#define ADC_PSSI_GSYNC_NA    ((UBase_t) 0x00000000UL)
#define ADC_PSSI_GSYNC_INIT    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PSSI_H_ */
