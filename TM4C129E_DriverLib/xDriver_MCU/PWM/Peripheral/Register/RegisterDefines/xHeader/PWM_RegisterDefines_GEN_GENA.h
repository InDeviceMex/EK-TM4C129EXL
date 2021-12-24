/**
 *
 * @file PWM_RegisterDefines_GEN_GENA.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_GENA_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_GENA_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 20 GEN_GENA *********************************************
******************************************************************************************/
/*--------*/
#define PWM_GEN_GENA_R_ACTZERO_MASK    ((uint32_t) 0x00000003UL)
#define PWM_GEN_GENA_R_ACTZERO_BIT    ((uint32_t) 0UL)
#define PWM_GEN_GENA_R_ACTZERO_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_R_ACTZERO_INVERT   ((uint32_t) 0x00000001UL)
#define PWM_GEN_GENA_R_ACTZERO_LOW    ((uint32_t) 0x00000002UL)
#define PWM_GEN_GENA_R_ACTZERO_HIGH    ((uint32_t) 0x00000003UL)

#define PWM_GEN_GENA_ACTZERO_MASK    ((uint32_t) 0x00000003UL)
#define PWM_GEN_GENA_ACTZERO_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_ACTZERO_INVERT   ((uint32_t) 0x00000001UL)
#define PWM_GEN_GENA_ACTZERO_LOW    ((uint32_t) 0x00000002UL)
#define PWM_GEN_GENA_ACTZERO_HIGH    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_GENA_R_ACTLOAD_MASK    ((uint32_t) 0x0000000CUL)
#define PWM_GEN_GENA_R_ACTLOAD_BIT    ((uint32_t) 2UL)
#define PWM_GEN_GENA_R_ACTLOAD_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_R_ACTLOAD_INVERT   ((uint32_t) 0x00000004UL)
#define PWM_GEN_GENA_R_ACTLOAD_LOW    ((uint32_t) 0x00000008UL)
#define PWM_GEN_GENA_R_ACTLOAD_HIGH    ((uint32_t) 0x0000000CUL)

#define PWM_GEN_GENA_ACTLOAD_MASK    ((uint32_t) 0x00000003UL)
#define PWM_GEN_GENA_ACTLOAD_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_ACTLOAD_INVERT   ((uint32_t) 0x00000001UL)
#define PWM_GEN_GENA_ACTLOAD_LOW    ((uint32_t) 0x00000002UL)
#define PWM_GEN_GENA_ACTLOAD_HIGH    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_GENA_R_ACTCMPAU_MASK    ((uint32_t) 0x00000030UL)
#define PWM_GEN_GENA_R_ACTCMPAU_BIT    ((uint32_t) 4UL)
#define PWM_GEN_GENA_R_ACTCMPAU_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_R_ACTCMPAU_INVERT   ((uint32_t) 0x00000010UL)
#define PWM_GEN_GENA_R_ACTCMPAU_LOW    ((uint32_t) 0x00000020UL)
#define PWM_GEN_GENA_R_ACTCMPAU_HIGH    ((uint32_t) 0x00000030UL)

#define PWM_GEN_GENA_ACTCMPAU_MASK    ((uint32_t) 0x00000003UL)
#define PWM_GEN_GENA_ACTCMPAU_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_ACTCMPAU_INVERT   ((uint32_t) 0x00000001UL)
#define PWM_GEN_GENA_ACTCMPAU_LOW    ((uint32_t) 0x00000002UL)
#define PWM_GEN_GENA_ACTCMPAU_HIGH    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_GENA_R_ACTCMPAD_MASK    ((uint32_t) 0x000000C0UL)
#define PWM_GEN_GENA_R_ACTCMPAD_BIT    ((uint32_t) 6UL)
#define PWM_GEN_GENA_R_ACTCMPAD_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_R_ACTCMPAD_INVERT   ((uint32_t) 0x00000040UL)
#define PWM_GEN_GENA_R_ACTCMPAD_LOW    ((uint32_t) 0x00000080UL)
#define PWM_GEN_GENA_R_ACTCMPAD_HIGH    ((uint32_t) 0x000000C0UL)

#define PWM_GEN_GENA_ACTCMPAD_MASK    ((uint32_t) 0x00000003UL)
#define PWM_GEN_GENA_ACTCMPAD_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_ACTCMPAD_INVERT   ((uint32_t) 0x00000001UL)
#define PWM_GEN_GENA_ACTCMPAD_LOW    ((uint32_t) 0x00000002UL)
#define PWM_GEN_GENA_ACTCMPAD_HIGH    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_GENA_R_ACTCMPBU_MASK    ((uint32_t) 0x00000300UL)
#define PWM_GEN_GENA_R_ACTCMPBU_BIT    ((uint32_t) 8UL)
#define PWM_GEN_GENA_R_ACTCMPBU_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_R_ACTCMPBU_INVERT   ((uint32_t) 0x00000100UL)
#define PWM_GEN_GENA_R_ACTCMPBU_LOW    ((uint32_t) 0x00000200UL)
#define PWM_GEN_GENA_R_ACTCMPBU_HIGH    ((uint32_t) 0x00000300UL)

#define PWM_GEN_GENA_ACTCMPBU_MASK    ((uint32_t) 0x00000003UL)
#define PWM_GEN_GENA_ACTCMPBU_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_ACTCMPBU_INVERT   ((uint32_t) 0x00000001UL)
#define PWM_GEN_GENA_ACTCMPBU_LOW    ((uint32_t) 0x00000002UL)
#define PWM_GEN_GENA_ACTCMPBU_HIGH    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PWM_GEN_GENA_R_ACTCMPBD_MASK    ((uint32_t) 0x00000C00UL)
#define PWM_GEN_GENA_R_ACTCMPBD_BIT    ((uint32_t) 10UL)
#define PWM_GEN_GENA_R_ACTCMPBD_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_R_ACTCMPBD_INVERT   ((uint32_t) 0x00000400UL)
#define PWM_GEN_GENA_R_ACTCMPBD_LOW    ((uint32_t) 0x00000800UL)
#define PWM_GEN_GENA_R_ACTCMPBD_HIGH    ((uint32_t) 0x00000C00UL)

#define PWM_GEN_GENA_ACTCMPBD_MASK    ((uint32_t) 0x00000003UL)
#define PWM_GEN_GENA_ACTCMPBD_NOTHING    ((uint32_t) 0x00000000UL)
#define PWM_GEN_GENA_ACTCMPBD_INVERT   ((uint32_t) 0x00000001UL)
#define PWM_GEN_GENA_ACTCMPBD_LOW    ((uint32_t) 0x00000002UL)
#define PWM_GEN_GENA_ACTCMPBD_HIGH    ((uint32_t) 0x00000003UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_GEN_GENA_H_ */
