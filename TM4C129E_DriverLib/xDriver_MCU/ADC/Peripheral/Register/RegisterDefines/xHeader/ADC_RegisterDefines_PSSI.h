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

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 11 PSSI *********************************************
******************************************************************************************/
/*--------*/
#define ADC_PSSI_R_SS_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_PSSI_R_SS_BIT    ((uint32_t) 0UL)
#define ADC_PSSI_R_SS_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_R_SS_INIT    ((uint32_t) 0x0000000FUL)

#define ADC_PSSI_SS_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_PSSI_SS_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_SS_INIT    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SS0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_PSSI_R_SS0_BIT    ((uint32_t) 0UL)
#define ADC_PSSI_R_SS0_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_R_SS0_INIT    ((uint32_t) 0x00000001UL)

#define ADC_PSSI_SS0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_PSSI_SS0_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_SS0_INIT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SS1_MASK    ((uint32_t) 0x00000002UL)
#define ADC_PSSI_R_SS1_BIT    ((uint32_t) 1UL)
#define ADC_PSSI_R_SS1_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_R_SS1_INIT    ((uint32_t) 0x00000002UL)

#define ADC_PSSI_SS1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_PSSI_SS1_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_SS1_INIT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SS2_MASK    ((uint32_t) 0x00000004UL)
#define ADC_PSSI_R_SS2_BIT    ((uint32_t) 2UL)
#define ADC_PSSI_R_SS2_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_R_SS2_INIT    ((uint32_t) 0x00000004UL)

#define ADC_PSSI_SS2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_PSSI_SS2_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_SS2_INIT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SS3_MASK    ((uint32_t) 0x00000008UL)
#define ADC_PSSI_R_SS3_BIT    ((uint32_t) 3UL)
#define ADC_PSSI_R_SS3_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_R_SS3_INIT    ((uint32_t) 0x00000008UL)

#define ADC_PSSI_SS3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_PSSI_SS3_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_SS3_INIT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_SYNCWAIT_MASK    ((uint32_t) 0x08000000UL)
#define ADC_PSSI_R_SYNCWAIT_BIT    ((uint32_t) 27UL)
#define ADC_PSSI_R_SYNCWAIT_DIS    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_R_SYNCWAIT_ENA    ((uint32_t) 0x08000000UL)

#define ADC_PSSI_SYNCWAIT_MASK    ((uint32_t) 0x00000001UL)
#define ADC_PSSI_SYNCWAIT_DIS    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_SYNCWAIT_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_PSSI_R_GSYNC_MASK    ((uint32_t) 0x80000000UL)
#define ADC_PSSI_R_GSYNC_BIT    ((uint32_t) 31UL)
#define ADC_PSSI_R_GSYNC_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_R_GSYNC_INIT    ((uint32_t) 0x80000000UL)

#define ADC_PSSI_GSYNC_MASK    ((uint32_t) 0x00000001UL)
#define ADC_PSSI_GSYNC_NA    ((uint32_t) 0x00000000UL)
#define ADC_PSSI_GSYNC_INIT    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PSSI_H_ */
