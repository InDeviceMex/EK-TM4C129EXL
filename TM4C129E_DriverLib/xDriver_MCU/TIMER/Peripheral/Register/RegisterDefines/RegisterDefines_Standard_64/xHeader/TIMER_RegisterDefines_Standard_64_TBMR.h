/**
 *
 * @file TIMER_RegisterDefines_Standard_64_TBMR.h
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
 * @verbatim 6 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TBMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TBMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TBMR_R_TBMR_MASK    ((uint32_t) 0x00000003UL)
#define GPWTM_TBMR_R_TBMR_BIT    (0UL)
#define GPWTM_TBMR_R_TBMR_ONESHOT    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_R_TBMR_PERIOD    ((uint32_t) 0x00000002UL)
#define GPWTM_TBMR_R_TBMR_CAPTURE    ((uint32_t) 0x00000003UL)

#define GPWTM_TBMR_TBMR_MASK    ((uint32_t) 0x00000003UL)
#define GPWTM_TBMR_TBMR_ONESHOT    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBMR_PERIOD    ((uint32_t) 0x00000002UL)
#define GPWTM_TBMR_TBMR_CAPTURE    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBCMR_MASK    ((uint32_t) 0x00000004UL)
#define GPWTM_TBMR_R_TBCMR_BIT    (2UL)
#define GPWTM_TBMR_R_TBCMR_EDGECOUNT    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBCMR_EDGETIME    ((uint32_t) 0x00000004UL)

#define GPWTM_TBMR_TBCMR_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBCMR_EDGECOUNT    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBCMR_EDGETIME    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBAMS_MASK    ((uint32_t) 0x00000008UL)
#define GPWTM_TBMR_R_TBAMS_BIT    (3UL)
#define GPWTM_TBMR_R_TBAMS_CAPCOMP    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBAMS_PWM    ((uint32_t) 0x00000008UL)

#define GPWTM_TBMR_TBAMS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBAMS_CAPCOMP    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBAMS_PWM    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBCDIR_MASK    ((uint32_t) 0x00000010UL)
#define GPWTM_TBMR_R_TBCDIR_BIT    (4UL)
#define GPWTM_TBMR_R_TBCDIR_DOWN    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBCDIR_UP    ((uint32_t) 0x00000010UL)

#define GPWTM_TBMR_TBCDIR_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBCDIR_DOWN    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBCDIR_UP    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBMIE_MASK    ((uint32_t) 0x00000020UL)
#define GPWTM_TBMR_R_TBMIE_BIT    (5UL)
#define GPWTM_TBMR_R_TBMIE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBMIE_ENA    ((uint32_t) 0x00000020UL)

#define GPWTM_TBMR_TBMIE_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBMIE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBMIE_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBWOT_MASK    ((uint32_t) 0x00000040UL)
#define GPWTM_TBMR_R_TBWOT_BIT    (6UL)
#define GPWTM_TBMR_R_TBWOT_INSTBNT    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBWOT_TRIGGER    ((uint32_t) 0x00000040UL)

#define GPWTM_TBMR_TBWOT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBWOT_INSTBNT    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBWOT_TRIGGER    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBSNAPS_MASK    ((uint32_t) 0x00000080UL)
#define GPWTM_TBMR_R_TBSNAPS_BIT    (7UL)
#define GPWTM_TBMR_R_TBSNAPS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBSNAPS_ENA    ((uint32_t) 0x00000080UL)

#define GPWTM_TBMR_TBSNAPS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBSNAPS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBSNAPS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBILD_MASK    ((uint32_t) 0x00000100UL)
#define GPWTM_TBMR_R_TBILD_BIT    (8UL)
#define GPWTM_TBMR_R_TBILD_NEXT    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBILD_TIMEOUT    ((uint32_t) 0x00000100UL)

#define GPWTM_TBMR_TBILD_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBILD_NEXT    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBILD_TIMEOUT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBPWMIE_MASK    ((uint32_t) 0x00000200UL)
#define GPWTM_TBMR_R_TBPWMIE_BIT    (9UL)
#define GPWTM_TBMR_R_TBPWMIE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBPWMIE_ENA    ((uint32_t) 0x00000200UL)

#define GPWTM_TBMR_TBPWMIE_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBPWMIE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBPWMIE_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBMRSU_MASK    ((uint32_t) 0x00000400UL)
#define GPWTM_TBMR_R_TBMRSU_BIT    (10UL)
#define GPWTM_TBMR_R_TBMRSU_NEXT    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBMRSU_TIMEOUT    ((uint32_t) 0x00000400UL)

#define GPWTM_TBMR_TBMRSU_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBMRSU_NEXT    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBMRSU_TIMEOUT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TBMR_R_TBPLO_MASK    ((uint32_t) 0x00000800UL)
#define GPWTM_TBMR_R_TBPLO_BIT    (11UL)
#define GPWTM_TBMR_R_TBPLO_LOW    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_R_TBPLO_HIGH    ((uint32_t) 0x00000800UL)

#define GPWTM_TBMR_TBPLO_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TBMR_TBPLO_LOW    ((uint32_t) 0x00000000UL)
#define GPWTM_TBMR_TBPLO_HIGH    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TBMR_H_ */
