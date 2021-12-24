/**
 *
 * @file PWM_RegisterDefines_GEN_CTL.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 24 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_CTL_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_CTL_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 12 GEN_CTL *********************************************
******************************************************************************************/
/*--------*/
#define PWM_GEN_CTL_R_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_R_ENABLE_BIT    ((uint32_t) 0UL)
#define PWM_GEN_CTL_R_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_ENABLE_ENA    ((uint32_t) 0x00000001UL)

#define PWM_GEN_CTL_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_ENABLE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_MODE_MASK    ((uint32_t) 0x00000002UL)
#define PWM_GEN_CTL_R_MODE_BIT    ((uint32_t) 1UL)
#define PWM_GEN_CTL_R_MODE_DOWN    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_MODE_UP_DOWN    ((uint32_t) 0x00000002UL)

#define PWM_GEN_CTL_MODE_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_MODE_DOWN    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_MODE_UP_DOWN    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_DEBUG_MASK    ((uint32_t) 0x00000004UL)
#define PWM_GEN_CTL_R_DEBUG_BIT    ((uint32_t) 2UL)
#define PWM_GEN_CTL_R_DEBUG_FREEZE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_DEBUG_RUN    ((uint32_t) 0x00000004UL)

#define PWM_GEN_CTL_DEBUG_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_DEBUG_FREEZE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_DEBUG_RUN    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_LOADUPD_MASK    ((uint32_t) 0x00000008UL)
#define PWM_GEN_CTL_R_LOADUPD_BIT    ((uint32_t) 3UL)
#define PWM_GEN_CTL_R_LOADUPD_LOCAL    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_LOADUPD_GLOBAL    ((uint32_t) 0x00000008UL)

#define PWM_GEN_CTL_LOADUPD_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_LOADUPD_LOCAL    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_LOADUPD_GLOBAL    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_CMPAUPD_MASK    ((uint32_t) 0x00000010UL)
#define PWM_GEN_CTL_R_CMPAUPD_BIT    ((uint32_t) 4UL)
#define PWM_GEN_CTL_R_CMPAUPD_LOCAL    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_CMPAUPD_GLOBAL    ((uint32_t) 0x00000010UL)

#define PWM_GEN_CTL_CMPAUPD_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_CMPAUPD_LOCAL    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_CMPAUPD_GLOBAL    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_CMPBUPD_MASK    ((uint32_t) 0x00000020UL)
#define PWM_GEN_CTL_R_CMPBUPD_BIT    ((uint32_t) 5UL)
#define PWM_GEN_CTL_R_CMPBUPD_LOCAL    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_CMPBUPD_GLOBAL    ((uint32_t) 0x00000020UL)

#define PWM_GEN_CTL_CMPBUPD_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_CMPBUPD_LOCAL    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_CMPBUPD_GLOBAL    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_GENAUPD_MASK    ((uint32_t) 0x000000C0UL)
#define PWM_GEN_CTL_R_GENAUPD_BIT    ((uint32_t) 6UL)
#define PWM_GEN_CTL_R_GENAUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_GENAUPD_LOCAL    ((uint32_t) 0x00000080UL)
#define PWM_GEN_CTL_R_GENAUPD_GLOBAL    ((uint32_t) 0x000000C0UL)

#define PWM_GEN_CTL_GENAUPD_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_GENAUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_GENAUPD_LOCAL    ((uint32_t) 0x00000002UL)
#define PWM_GEN_CTL_GENAUPD_GLOBAL    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_GENBUPD_MASK    ((uint32_t) 0x00000300UL)
#define PWM_GEN_CTL_R_GENBUPD_BIT    ((uint32_t) 8UL)
#define PWM_GEN_CTL_R_GENBUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_GENBUPD_LOCAL    ((uint32_t) 0x00000200UL)
#define PWM_GEN_CTL_R_GENBUPD_GLOBAL    ((uint32_t) 0x00000300UL)

#define PWM_GEN_CTL_GENBUPD_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_GENBUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_GENBUPD_LOCAL    ((uint32_t) 0x00000002UL)
#define PWM_GEN_CTL_GENBUPD_GLOBAL    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_DBCTLUPD_MASK    ((uint32_t) 0x00000C00UL)
#define PWM_GEN_CTL_R_DBCTLUPD_BIT    ((uint32_t) 10UL)
#define PWM_GEN_CTL_R_DBCTLUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_DBCTLUPD_LOCAL    ((uint32_t) 0x00000800UL)
#define PWM_GEN_CTL_R_DBCTLUPD_GLOBAL    ((uint32_t) 0x00000C00UL)

#define PWM_GEN_CTL_DBCTLUPD_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_DBCTLUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_DBCTLUPD_LOCAL    ((uint32_t) 0x00000002UL)
#define PWM_GEN_CTL_DBCTLUPD_GLOBAL    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_DBRISEUPD_MASK    ((uint32_t) 0x00003000UL)
#define PWM_GEN_CTL_R_DBRISEUPD_BIT    ((uint32_t) 12UL)
#define PWM_GEN_CTL_R_DBRISEUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_DBRISEUPD_LOCAL    ((uint32_t) 0x00002000UL)
#define PWM_GEN_CTL_R_DBRISEUPD_GLOBAL    ((uint32_t) 0x00003000UL)

#define PWM_GEN_CTL_DBRISEUPD_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_DBRISEUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_DBRISEUPD_LOCAL    ((uint32_t) 0x00000002UL)
#define PWM_GEN_CTL_DBRISEUPD_GLOBAL    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_DBFALLUPD_MASK    ((uint32_t) 0x0000C000UL)
#define PWM_GEN_CTL_R_DBFALLUPD_BIT    ((uint32_t) 14UL)
#define PWM_GEN_CTL_R_DBFALLUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_DBFALLUPD_LOCAL    ((uint32_t) 0x00008000UL)
#define PWM_GEN_CTL_R_DBFALLUPD_GLOBAL    ((uint32_t) 0x0000C000UL)

#define PWM_GEN_CTL_DBFALLUPD_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_DBFALLUPD_IMMEDIATE    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_DBFALLUPD_LOCAL    ((uint32_t) 0x00000002UL)
#define PWM_GEN_CTL_DBFALLUPD_GLOBAL    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_FLTSRC_MASK    ((uint32_t) 0x00010000UL)
#define PWM_GEN_CTL_R_FLTSRC_BIT    ((uint32_t) 16UL)
#define PWM_GEN_CTL_R_FLTSRC_INPUT    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_FLTSRC_REG    ((uint32_t) 0x00010000UL)

#define PWM_GEN_CTL_FLTSRC_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_FLTSRC_INPUT    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_FLTSRC_REG    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_MINFLTPER_MASK    ((uint32_t) 0x00020000UL)
#define PWM_GEN_CTL_R_MINFLTPER_BIT    ((uint32_t) 17UL)
#define PWM_GEN_CTL_R_MINFLTPER_DIS    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_MINFLTPER_ENA    ((uint32_t) 0x00020000UL)

#define PWM_GEN_CTL_MINFLTPER_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_MINFLTPER_DIS    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_MINFLTPER_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_LATCH_MASK    ((uint32_t) 0x00040000UL)
#define PWM_GEN_CTL_R_LATCH_BIT    ((uint32_t) 18UL)
#define PWM_GEN_CTL_R_LATCH_DIS    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_R_LATCH_ENA    ((uint32_t) 0x00040000UL)

#define PWM_GEN_CTL_LATCH_MASK    ((uint32_t) 0x00000001UL)
#define PWM_GEN_CTL_LATCH_DIS    ((uint32_t) 0x00000000UL)
#define PWM_GEN_CTL_LATCH_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_CTL_H_ */
