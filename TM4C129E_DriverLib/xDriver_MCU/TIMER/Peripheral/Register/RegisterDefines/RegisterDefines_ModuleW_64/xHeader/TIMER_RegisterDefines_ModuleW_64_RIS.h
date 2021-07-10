/**
 *
 * @file TIMER_RegisterDefines_ModuleW_64_RIS.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_RIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_RIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TW_TnRIS_R_TnTORIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnRIS_R_TnTORIS_BIT    (0UL)
#define GPWTM_TW_TnRIS_R_TnTORIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_R_TnTORIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define GPWTM_TW_TnRIS_TnTORIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnRIS_TnTORIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_TnTORIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnRIS_R_CnMRIS_MASK    ((uint32_t) 0x00000002UL)
#define GPWTM_TW_TnRIS_R_CnMRIS_BIT    (1UL)
#define GPWTM_TW_TnRIS_R_CnMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_R_CnMRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define GPWTM_TW_TnRIS_CnMRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnRIS_CnMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_CnMRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnRIS_R_CnERIS_MASK    ((uint32_t) 0x00000004UL)
#define GPWTM_TW_TnRIS_R_CnERIS_BIT    (2UL)
#define GPWTM_TW_TnRIS_R_CnERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_R_CnERIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define GPWTM_TW_TnRIS_CnERIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnRIS_CnERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_CnERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnRIS_R_RTCRIS_MASK    ((uint32_t) 0x00000008UL)
#define GPWTM_TW_TnRIS_R_RTCRIS_BIT    (3UL)
#define GPWTM_TW_TnRIS_R_RTCRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_R_RTCRIS_ACTIVE    ((uint32_t) 0x00000008UL)

#define GPWTM_TW_TnRIS_RTCRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnRIS_RTCRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_RTCRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnRIS_R_TnMRIS_MASK    ((uint32_t) 0x00000010UL)
#define GPWTM_TW_TnRIS_R_TnMRIS_BIT    (4UL)
#define GPWTM_TW_TnRIS_R_TnMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_R_TnMRIS_ACTIVE    ((uint32_t) 0x00000010UL)

#define GPWTM_TW_TnRIS_TnMRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnRIS_TnMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_TnMRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnRIS_R_WUERIS_MASK    ((uint32_t) 0x00010000UL)
#define GPWTM_TW_TnRIS_R_WUERIS_BIT    (16UL)
#define GPWTM_TW_TnRIS_R_WUERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_R_WUERIS_ACTIVE    ((uint32_t) 0x00010000UL)

#define GPWTM_TW_TnRIS_WUERIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnRIS_WUERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnRIS_WUERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_RIS_H_ */
