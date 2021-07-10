/**
 *
 * @file TIMER_RegisterDefines_Standard_64_TAMR.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TAMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TAMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TAMR_R_TAMR_MASK    ((uint32_t) 0x00000003UL)
#define GPWTM_TAMR_R_TAMR_BIT    (0UL)
#define GPWTM_TAMR_R_TAMR_ONESHOT    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_R_TAMR_PERIOD    ((uint32_t) 0x00000002UL)
#define GPWTM_TAMR_R_TAMR_CAPTURE    ((uint32_t) 0x00000003UL)

#define GPWTM_TAMR_TAMR_MASK    ((uint32_t) 0x00000003UL)
#define GPWTM_TAMR_TAMR_ONESHOT    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TAMR_PERIOD    ((uint32_t) 0x00000002UL)
#define GPWTM_TAMR_TAMR_CAPTURE    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TACMR_MASK    ((uint32_t) 0x00000004UL)
#define GPWTM_TAMR_R_TACMR_BIT    (2UL)
#define GPWTM_TAMR_R_TACMR_EDGECOUNT    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TACMR_EDGETIME    ((uint32_t) 0x00000004UL)

#define GPWTM_TAMR_TACMR_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TACMR_EDGECOUNT    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TACMR_EDGETIME    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TAAMS_MASK    ((uint32_t) 0x00000008UL)
#define GPWTM_TAMR_R_TAAMS_BIT    (3UL)
#define GPWTM_TAMR_R_TAAMS_CAPCOMP    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TAAMS_PWM    ((uint32_t) 0x00000008UL)

#define GPWTM_TAMR_TAAMS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TAAMS_CAPCOMP    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TAAMS_PWM    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TACDIR_MASK    ((uint32_t) 0x00000010UL)
#define GPWTM_TAMR_R_TACDIR_BIT    (4UL)
#define GPWTM_TAMR_R_TACDIR_DOWN    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TACDIR_UP    ((uint32_t) 0x00000010UL)

#define GPWTM_TAMR_TACDIR_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TACDIR_DOWN    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TACDIR_UP    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TAMIE_MASK    ((uint32_t) 0x00000020UL)
#define GPWTM_TAMR_R_TAMIE_BIT    (5UL)
#define GPWTM_TAMR_R_TAMIE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TAMIE_ENA    ((uint32_t) 0x00000020UL)

#define GPWTM_TAMR_TAMIE_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TAMIE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TAMIE_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TAWOT_MASK    ((uint32_t) 0x00000040UL)
#define GPWTM_TAMR_R_TAWOT_BIT    (6UL)
#define GPWTM_TAMR_R_TAWOT_INSTANT    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TAWOT_TRIGGER    ((uint32_t) 0x00000040UL)

#define GPWTM_TAMR_TAWOT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TAWOT_INSTANT    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TAWOT_TRIGGER    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TASNAPS_MASK    ((uint32_t) 0x00000080UL)
#define GPWTM_TAMR_R_TASNAPS_BIT    (7UL)
#define GPWTM_TAMR_R_TASNAPS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TASNAPS_ENA    ((uint32_t) 0x00000080UL)

#define GPWTM_TAMR_TASNAPS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TASNAPS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TASNAPS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TAILD_MASK    ((uint32_t) 0x00000100UL)
#define GPWTM_TAMR_R_TAILD_BIT    (8UL)
#define GPWTM_TAMR_R_TAILD_NEXT    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TAILD_TIMEOUT    ((uint32_t) 0x00000100UL)

#define GPWTM_TAMR_TAILD_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TAILD_NEXT    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TAILD_TIMEOUT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TAPWMIE_MASK    ((uint32_t) 0x00000200UL)
#define GPWTM_TAMR_R_TAPWMIE_BIT    (9UL)
#define GPWTM_TAMR_R_TAPWMIE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TAPWMIE_ENA    ((uint32_t) 0x00000200UL)

#define GPWTM_TAMR_TAPWMIE_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TAPWMIE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TAPWMIE_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TAMRSU_MASK    ((uint32_t) 0x00000400UL)
#define GPWTM_TAMR_R_TAMRSU_BIT    (10UL)
#define GPWTM_TAMR_R_TAMRSU_NEXT    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TAMRSU_TIMEOUT    ((uint32_t) 0x00000400UL)

#define GPWTM_TAMR_TAMRSU_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TAMRSU_NEXT    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TAMRSU_TIMEOUT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TAMR_R_TAPLO_MASK    ((uint32_t) 0x00000800UL)
#define GPWTM_TAMR_R_TAPLO_BIT    (11UL)
#define GPWTM_TAMR_R_TAPLO_LOW    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_R_TAPLO_HIGH    ((uint32_t) 0x00000800UL)

#define GPWTM_TAMR_TAPLO_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TAMR_TAPLO_LOW    ((uint32_t) 0x00000000UL)
#define GPWTM_TAMR_TAPLO_HIGH    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TAMR_H_ */
