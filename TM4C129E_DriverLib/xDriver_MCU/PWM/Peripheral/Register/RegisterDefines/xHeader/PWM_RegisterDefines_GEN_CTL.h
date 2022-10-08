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

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

/******************************************************************************************
************************************ 12 GEN_CTL *********************************************
******************************************************************************************/
/*--------*/
#define PWM_GEN_CTL_R_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_R_ENABLE_BIT    ((UBase_t) 0UL)
#define PWM_GEN_CTL_R_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_ENABLE_ENA    ((UBase_t) 0x00000001UL)

#define PWM_GEN_CTL_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_ENABLE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_MODE_MASK    ((UBase_t) 0x00000002UL)
#define PWM_GEN_CTL_R_MODE_BIT    ((UBase_t) 1UL)
#define PWM_GEN_CTL_R_MODE_DOWN    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_MODE_UP_DOWN    ((UBase_t) 0x00000002UL)

#define PWM_GEN_CTL_MODE_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_MODE_DOWN    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_MODE_UP_DOWN    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_DEBUG_MASK    ((UBase_t) 0x00000004UL)
#define PWM_GEN_CTL_R_DEBUG_BIT    ((UBase_t) 2UL)
#define PWM_GEN_CTL_R_DEBUG_FREEZE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_DEBUG_RUN    ((UBase_t) 0x00000004UL)

#define PWM_GEN_CTL_DEBUG_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_DEBUG_FREEZE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_DEBUG_RUN    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_LOAD_UPD_MASK    ((UBase_t) 0x00000008UL)
#define PWM_GEN_CTL_R_LOAD_UPD_BIT    ((UBase_t) 3UL)
#define PWM_GEN_CTL_R_LOAD_UPD_LOCAL    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_LOAD_UPD_GLOBAL    ((UBase_t) 0x00000008UL)

#define PWM_GEN_CTL_LOAD_UPD_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_LOAD_UPD_LOCAL    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_LOAD_UPD_GLOBAL    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_OUTA_CMP_UPD_MASK    ((UBase_t) 0x00000010UL)
#define PWM_GEN_CTL_R_OUTA_CMP_UPD_BIT    ((UBase_t) 4UL)
#define PWM_GEN_CTL_R_OUTA_CMP_UPD_LOCAL    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_OUTA_CMP_UPD_GLOBAL    ((UBase_t) 0x00000010UL)

#define PWM_GEN_CTL_OUTA_CMP_UPD_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_OUTA_CMP_UPD_LOCAL    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_OUTA_CMP_UPD_GLOBAL    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_OUTB_CMP_UPD_MASK    ((UBase_t) 0x00000020UL)
#define PWM_GEN_CTL_R_OUTB_CMP_UPD_BIT    ((UBase_t) 5UL)
#define PWM_GEN_CTL_R_OUTB_CMP_UPD_LOCAL    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_OUTB_CMP_UPD_GLOBAL    ((UBase_t) 0x00000020UL)

#define PWM_GEN_CTL_OUTB_CMP_UPD_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_OUTB_CMP_UPD_LOCAL    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_OUTB_CMP_UPD_GLOBAL    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_OUTA_ACTION_UPD_MASK    ((UBase_t) 0x000000C0UL)
#define PWM_GEN_CTL_R_OUTA_ACTION_UPD_BIT    ((UBase_t) 6UL)
#define PWM_GEN_CTL_R_OUTA_ACTION_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_OUTA_ACTION_UPD_LOCAL    ((UBase_t) 0x00000080UL)
#define PWM_GEN_CTL_R_OUTA_ACTION_UPD_GLOBAL    ((UBase_t) 0x000000C0UL)

#define PWM_GEN_CTL_OUTA_ACTION_UPD_MASK    ((UBase_t) 0x00000003UL)
#define PWM_GEN_CTL_OUTA_ACTION_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_OUTA_ACTION_UPD_LOCAL    ((UBase_t) 0x00000002UL)
#define PWM_GEN_CTL_OUTA_ACTION_UPD_GLOBAL    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_OUTB_ACTION_UPD_MASK    ((UBase_t) 0x00000300UL)
#define PWM_GEN_CTL_R_OUTB_ACTION_UPD_BIT    ((UBase_t) 8UL)
#define PWM_GEN_CTL_R_OUTB_ACTION_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_OUTB_ACTION_UPD_LOCAL    ((UBase_t) 0x00000200UL)
#define PWM_GEN_CTL_R_OUTB_ACTION_UPD_GLOBAL    ((UBase_t) 0x00000300UL)

#define PWM_GEN_CTL_OUTB_ACTION_UPD_MASK    ((UBase_t) 0x00000003UL)
#define PWM_GEN_CTL_OUTB_ACTION_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_OUTB_ACTION_UPD_LOCAL    ((UBase_t) 0x00000002UL)
#define PWM_GEN_CTL_OUTB_ACTION_UPD_GLOBAL    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_DB_CTL_UPD_MASK    ((UBase_t) 0x00000C00UL)
#define PWM_GEN_CTL_R_DB_CTL_UPD_BIT    ((UBase_t) 10UL)
#define PWM_GEN_CTL_R_DB_CTL_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_DB_CTL_UPD_LOCAL    ((UBase_t) 0x00000800UL)
#define PWM_GEN_CTL_R_DB_CTL_UPD_GLOBAL    ((UBase_t) 0x00000C00UL)

#define PWM_GEN_CTL_DB_CTL_UPD_MASK    ((UBase_t) 0x00000003UL)
#define PWM_GEN_CTL_DB_CTL_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_DB_CTL_UPD_LOCAL    ((UBase_t) 0x00000002UL)
#define PWM_GEN_CTL_DB_CTL_UPD_GLOBAL    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_DB_RISE_UPD_MASK    ((UBase_t) 0x00003000UL)
#define PWM_GEN_CTL_R_DB_RISE_UPD_BIT    ((UBase_t) 12UL)
#define PWM_GEN_CTL_R_DB_RISE_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_DB_RISE_UPD_LOCAL    ((UBase_t) 0x00002000UL)
#define PWM_GEN_CTL_R_DB_RISE_UPD_GLOBAL    ((UBase_t) 0x00003000UL)

#define PWM_GEN_CTL_DB_RISE_UPD_MASK    ((UBase_t) 0x00000003UL)
#define PWM_GEN_CTL_DB_RISE_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_DB_RISE_UPD_LOCAL    ((UBase_t) 0x00000002UL)
#define PWM_GEN_CTL_DB_RISE_UPD_GLOBAL    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_DB_FALL_UPD_MASK    ((UBase_t) 0x0000C000UL)
#define PWM_GEN_CTL_R_DB_FALL_UPD_BIT    ((UBase_t) 14UL)
#define PWM_GEN_CTL_R_DB_FALL_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_DB_FALL_UPD_LOCAL    ((UBase_t) 0x00008000UL)
#define PWM_GEN_CTL_R_DB_FALL_UPD_GLOBAL    ((UBase_t) 0x0000C000UL)

#define PWM_GEN_CTL_DB_FALL_UPD_MASK    ((UBase_t) 0x00000003UL)
#define PWM_GEN_CTL_DB_FALL_UPD_IMMEDIATE    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_DB_FALL_UPD_LOCAL    ((UBase_t) 0x00000002UL)
#define PWM_GEN_CTL_DB_FALL_UPD_GLOBAL    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_FAULT_SRC_MASK    ((UBase_t) 0x00010000UL)
#define PWM_GEN_CTL_R_FAULT_SRC_BIT    ((UBase_t) 16UL)
#define PWM_GEN_CTL_R_FAULT_SRC_INPUT    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_FAULT_SRC_REG    ((UBase_t) 0x00010000UL)

#define PWM_GEN_CTL_FAULT_SRC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_FAULT_SRC_INPUT    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_FAULT_SRC_REG    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_FAULT_MIN_PERIOD_MASK    ((UBase_t) 0x00020000UL)
#define PWM_GEN_CTL_R_FAULT_MIN_PERIOD_BIT    ((UBase_t) 17UL)
#define PWM_GEN_CTL_R_FAULT_MIN_PERIOD_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_FAULT_MIN_PERIOD_ENA    ((UBase_t) 0x00020000UL)

#define PWM_GEN_CTL_FAULT_MIN_PERIOD_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_FAULT_MIN_PERIOD_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_FAULT_MIN_PERIOD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_GEN_CTL_R_FAULT_LATCH_MASK    ((UBase_t) 0x00040000UL)
#define PWM_GEN_CTL_R_FAULT_LATCH_BIT    ((UBase_t) 18UL)
#define PWM_GEN_CTL_R_FAULT_LATCH_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_R_FAULT_LATCH_ENA    ((UBase_t) 0x00040000UL)

#define PWM_GEN_CTL_FAULT_LATCH_MASK    ((UBase_t) 0x00000001UL)
#define PWM_GEN_CTL_FAULT_LATCH_DIS    ((UBase_t) 0x00000000UL)
#define PWM_GEN_CTL_FAULT_LATCH_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_CTL_H_ */
