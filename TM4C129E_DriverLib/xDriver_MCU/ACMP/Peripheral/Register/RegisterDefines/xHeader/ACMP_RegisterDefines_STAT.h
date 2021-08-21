/**
 *
 * @file ACMP_RegisterDefines_STAT.h
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
 * @verbatim 28 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_STAT_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_STAT_H_
#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 5 STAT *********************************************
******************************************************************************************/
/*--------*/
#define ACMP_STAT_R_OVAL_MASK    ((uint32_t) 0x00000002U)
#define ACMP_STAT_R_OVAL_BIT    ((uint32_t) 1U)
#define ACMP_STAT_R_OVAL_LOW    ((uint32_t) 0x00000000U)
#define ACMP_STAT_R_OVAL_HIGH    ((uint32_t) 0x00000002U)

#define ACMP_STAT_OVAL_MASK    ((uint32_t) 0x00000001U)
#define ACMP_STAT_OVAL_LOW    ((uint32_t) 0x00000000U)
#define ACMP_STAT_OVAL_HIGH    ((uint32_t) 0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_STAT_H_ */
