/**
 *
 * @file TIMER_RegisterDefines_Standard_64_CTL.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_CTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_CTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_CTL_R_TAEN_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_R_TAEN_BIT    (0UL)
#define GPWTM_CTL_R_TAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TAEN_ENA    ((uint32_t) 0x00000001UL)

#define GPWTM_CTL_TAEN_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TAEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_TASTALL_MASK    ((uint32_t) 0x00000002UL)
#define GPWTM_CTL_R_TASTALL_BIT    (1UL)
#define GPWTM_CTL_R_TASTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TASTALL_FREEZE    ((uint32_t) 0x00000002UL)

#define GPWTM_CTL_TASTALL_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TASTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TASTALL_FREEZE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_TAEVENT_MASK    ((uint32_t) 0x0000000CUL)
#define GPWTM_CTL_R_TAEVENT_BIT    (2UL)
#define GPWTM_CTL_R_TAEVENT_POS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TAEVENT_NEG    ((uint32_t) 0x00000004UL)
#define GPWTM_CTL_R_TAEVENT_BOTH    ((uint32_t) 0x0000000CUL)

#define GPWTM_CTL_TAEVENT_MASK    ((uint32_t) 0x00000003UL)
#define GPWTM_CTL_TAEVENT_NEG    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TAEVENT_POS    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TAEVENT_BOTH    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_RTCEN_MASK    ((uint32_t) 0x00000010UL)
#define GPWTM_CTL_R_RTCEN_BIT    (4UL)
#define GPWTM_CTL_R_RTCEN_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_RTCEN_FREEZE    ((uint32_t) 0x00000010UL)

#define GPWTM_CTL_RTCEN_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_RTCEN_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_RTCEN_FREEZE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_TAOTE_MASK    ((uint32_t) 0x00000020UL)
#define GPWTM_CTL_R_TAOTE_BIT    (5UL)
#define GPWTM_CTL_R_TAOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TAOTE_ENA    ((uint32_t) 0x00000020UL)

#define GPWTM_CTL_TAOTE_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TAOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TAOTE_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_TAPWML_MASK    ((uint32_t) 0x00000040UL)
#define GPWTM_CTL_R_TAPWML_BIT    (6UL)
#define GPWTM_CTL_R_TAPWML_NA    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TAPWML_INV    ((uint32_t) 0x00000040UL)

#define GPWTM_CTL_TAPWML_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TAPWML_NA    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TAPWML_INV    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_TBEN_MASK    ((uint32_t) 0x00000100UL)
#define GPWTM_CTL_R_TBEN_BIT    (8UL)
#define GPWTM_CTL_R_TBEN_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TBEN_ENA    ((uint32_t) 0x00000100UL)

#define GPWTM_CTL_TBEN_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TBEN_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TBEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_TBSTALL_MASK    ((uint32_t) 0x00000200UL)
#define GPWTM_CTL_R_TBSTALL_BIT    (9UL)
#define GPWTM_CTL_R_TBSTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TBSTALL_FREEZE    ((uint32_t) 0x00000200UL)

#define GPWTM_CTL_TBSTALL_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TBSTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TBSTALL_FREEZE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_TBEVENT_MASK    ((uint32_t) 0x00000C00UL)
#define GPWTM_CTL_R_TBEVENT_BIT    (10UL)
#define GPWTM_CTL_R_TBEVENT_POS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TBEVENT_NEG    ((uint32_t) 0x00000400UL)
#define GPWTM_CTL_R_TBEVENT_BOTH    ((uint32_t) 0x00000C00UL)

#define GPWTM_CTL_TBEVENT_MASK    ((uint32_t) 0x00000003UL)
#define GPWTM_CTL_TBEVENT_NEG    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TBEVENT_POS    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TBEVENT_BOTH    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_TBOTE_MASK    ((uint32_t) 0x00002000UL)
#define GPWTM_CTL_R_TBOTE_BIT    (13UL)
#define GPWTM_CTL_R_TBOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TBOTE_ENA    ((uint32_t) 0x00002000UL)

#define GPWTM_CTL_TBOTE_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TBOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TBOTE_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_CTL_R_TBPWML_MASK    ((uint32_t) 0x00004000UL)
#define GPWTM_CTL_R_TBPWML_BIT    (14UL)
#define GPWTM_CTL_R_TBPWML_NA    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_R_TBPWML_INV    ((uint32_t) 0x00004000UL)

#define GPWTM_CTL_TBPWML_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_CTL_TBPWML_NA    ((uint32_t) 0x00000000UL)
#define GPWTM_CTL_TBPWML_INV    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_CTL_H_ */
