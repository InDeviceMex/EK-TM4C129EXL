/**
 *
 * @file TIMER_RegisterDefines_Standard_32_TAMR.h
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
 * @verbatim 5 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_TAMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_TAMR_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TAMR_R_TAMR_MASK    ((UBase_t) 0x00000003UL)
#define GPTM_TAMR_R_TAMR_BIT    (0UL)
#define GPTM_TAMR_R_TAMR_ONESHOT    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_R_TAMR_PERIOD    ((UBase_t) 0x00000002UL)
#define GPTM_TAMR_R_TAMR_CAPTURE    ((UBase_t) 0x00000003UL)

#define GPTM_TAMR_TAMR_MASK    ((UBase_t) 0x00000003UL)
#define GPTM_TAMR_TAMR_ONESHOT    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TAMR_PERIOD    ((UBase_t) 0x00000002UL)
#define GPTM_TAMR_TAMR_CAPTURE    ((UBase_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TACMR_MASK    ((UBase_t) 0x00000004UL)
#define GPTM_TAMR_R_TACMR_BIT    (2UL)
#define GPTM_TAMR_R_TACMR_EDGECOUNT    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TACMR_EDGETIME    ((UBase_t) 0x00000004UL)

#define GPTM_TAMR_TACMR_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TACMR_EDGECOUNT    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TACMR_EDGETIME    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TAAMS_MASK    ((UBase_t) 0x00000008UL)
#define GPTM_TAMR_R_TAAMS_BIT    (3UL)
#define GPTM_TAMR_R_TAAMS_CAPCOMP    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TAAMS_PWM    ((UBase_t) 0x00000008UL)

#define GPTM_TAMR_TAAMS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TAAMS_CAPCOMP    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TAAMS_PWM    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TACDIR_MASK    ((UBase_t) 0x00000010UL)
#define GPTM_TAMR_R_TACDIR_BIT    (4UL)
#define GPTM_TAMR_R_TACDIR_DOWN    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TACDIR_UP    ((UBase_t) 0x00000010UL)

#define GPTM_TAMR_TACDIR_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TACDIR_DOWN    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TACDIR_UP    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TAMIE_MASK    ((UBase_t) 0x00000020UL)
#define GPTM_TAMR_R_TAMIE_BIT    (5UL)
#define GPTM_TAMR_R_TAMIE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TAMIE_ENA    ((UBase_t) 0x00000020UL)

#define GPTM_TAMR_TAMIE_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TAMIE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TAMIE_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TAWOT_MASK    ((UBase_t) 0x00000040UL)
#define GPTM_TAMR_R_TAWOT_BIT    (6UL)
#define GPTM_TAMR_R_TAWOT_INSTANT    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TAWOT_TRIGGER    ((UBase_t) 0x00000040UL)

#define GPTM_TAMR_TAWOT_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TAWOT_INSTANT    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TAWOT_TRIGGER    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TASNAPS_MASK    ((UBase_t) 0x00000080UL)
#define GPTM_TAMR_R_TASNAPS_BIT    (7UL)
#define GPTM_TAMR_R_TASNAPS_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TASNAPS_ENA    ((UBase_t) 0x00000080UL)

#define GPTM_TAMR_TASNAPS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TASNAPS_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TASNAPS_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TAILD_MASK    ((UBase_t) 0x00000100UL)
#define GPTM_TAMR_R_TAILD_BIT    (8UL)
#define GPTM_TAMR_R_TAILD_NEXT    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TAILD_TIMEOUT    ((UBase_t) 0x00000100UL)

#define GPTM_TAMR_TAILD_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TAILD_NEXT    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TAILD_TIMEOUT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TAPWMIE_MASK    ((UBase_t) 0x00000200UL)
#define GPTM_TAMR_R_TAPWMIE_BIT    (9UL)
#define GPTM_TAMR_R_TAPWMIE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TAPWMIE_ENA    ((UBase_t) 0x00000200UL)

#define GPTM_TAMR_TAPWMIE_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TAPWMIE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TAPWMIE_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TAMRSU_MASK    ((UBase_t) 0x00000400UL)
#define GPTM_TAMR_R_TAMRSU_BIT    (10UL)
#define GPTM_TAMR_R_TAMRSU_NEXT    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TAMRSU_TIMEOUT    ((UBase_t) 0x00000400UL)

#define GPTM_TAMR_TAMRSU_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TAMRSU_NEXT    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TAMRSU_TIMEOUT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TAPLO_MASK    ((UBase_t) 0x00000800UL)
#define GPTM_TAMR_R_TAPLO_BIT    (11UL)
#define GPTM_TAMR_R_TAPLO_LOW    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TAPLO_HIGH    ((UBase_t) 0x00000800UL)

#define GPTM_TAMR_TAPLO_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TAPLO_LOW    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TAPLO_HIGH    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TACINTD_MASK    ((UBase_t) 0x00001000UL)
#define GPTM_TAMR_R_TACINTD_BIT    (12UL)
#define GPTM_TAMR_R_TACINTD_NORMAL    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TACINTD_DIS    ((UBase_t) 0x00001000UL)

#define GPTM_TAMR_TACINTD_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TACINTD_NORMAL    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TACINTD_DIS    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TAMR_R_TCACT_MASK    ((UBase_t) 0x0000E000UL)
#define GPTM_TAMR_R_TCACT_BIT    (13UL)
#define GPTM_TAMR_R_TCACT_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_R_TCACT_TOOGLE_TO    ((UBase_t) 0x00002000UL)
#define GPTM_TAMR_R_TCACT_CLEAR_TO    ((UBase_t) 0x00004000UL)
#define GPTM_TAMR_R_TCACT_SET_TO    ((UBase_t) 0x00006000UL)
#define GPTM_TAMR_R_TCACT_SET_INM_TOOGLE_TO    ((UBase_t) 0x00008000UL)
#define GPTM_TAMR_R_TCACT_CLEAR_INM_TOOGLE_TO    ((UBase_t) 0x0000A000UL)
#define GPTM_TAMR_R_TCACT_SET_INM_CLEAR_TO    ((UBase_t) 0x0000C000UL)
#define GPTM_TAMR_R_TCACT_CLEAR_INM_SET_TO    ((UBase_t) 0x0000E000UL)

#define GPTM_TAMR_TCACT_MASK    ((UBase_t) 0x00000007UL)
#define GPTM_TAMR_TCACT_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TAMR_TCACT_TOOGLE_TO    ((UBase_t) 0x00000001UL)
#define GPTM_TAMR_TCACT_CLEAR_TO    ((UBase_t) 0x00000002UL)
#define GPTM_TAMR_TCACT_SET_TO    ((UBase_t) 0x00000003UL)
#define GPTM_TAMR_TCACT_SET_INM_TOOGLE_TO    ((UBase_t) 0x00000004UL)
#define GPTM_TAMR_TCACT_CLEAR_INM_TOOGLE_TO    ((UBase_t) 0x00000005UL)
#define GPTM_TAMR_TCACT_SET_INM_CLEAR_TO    ((UBase_t) 0x00000006UL)
#define GPTM_TAMR_TCACT_CLEAR_INM_SET_TO    ((UBase_t) 0x00000007UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_TAMR_H_ */
