/**
 *
 * @file TIMER_RegisterDefines_ModuleW_32_RIS.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_RIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_RIS_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TW_TnRIS_R_TnTORIS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnRIS_R_TnTORIS_BIT    (0UL)
#define GPTM_TW_TnRIS_R_TnTORIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_R_TnTORIS_ACTIVE    ((UBase_t) 0x00000001UL)

#define GPTM_TW_TnRIS_TnTORIS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnRIS_TnTORIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_TnTORIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnRIS_R_CnMRIS_MASK    ((UBase_t) 0x00000002UL)
#define GPTM_TW_TnRIS_R_CnMRIS_BIT    (1UL)
#define GPTM_TW_TnRIS_R_CnMRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_R_CnMRIS_ACTIVE    ((UBase_t) 0x00000002UL)

#define GPTM_TW_TnRIS_CnMRIS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnRIS_CnMRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_CnMRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnRIS_R_CnERIS_MASK    ((UBase_t) 0x00000004UL)
#define GPTM_TW_TnRIS_R_CnERIS_BIT    (2UL)
#define GPTM_TW_TnRIS_R_CnERIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_R_CnERIS_ACTIVE    ((UBase_t) 0x00000004UL)

#define GPTM_TW_TnRIS_CnERIS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnRIS_CnERIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_CnERIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnRIS_R_RTCRIS_MASK    ((UBase_t) 0x00000008UL)
#define GPTM_TW_TnRIS_R_RTCRIS_BIT    (3UL)
#define GPTM_TW_TnRIS_R_RTCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_R_RTCRIS_ACTIVE    ((UBase_t) 0x00000008UL)

#define GPTM_TW_TnRIS_RTCRIS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnRIS_RTCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_RTCRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnRIS_R_TnMRIS_MASK    ((UBase_t) 0x00000010UL)
#define GPTM_TW_TnRIS_R_TnMRIS_BIT    (4UL)
#define GPTM_TW_TnRIS_R_TnMRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_R_TnMRIS_ACTIVE    ((UBase_t) 0x00000010UL)

#define GPTM_TW_TnRIS_TnMRIS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnRIS_TnMRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_TnMRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnRIS_R_DMAnRIS_MASK    ((UBase_t) 0x00000020UL)
#define GPTM_TW_TnRIS_R_DMAnRIS_BIT    (5UL)
#define GPTM_TW_TnRIS_R_DMAnRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_R_DMAnRIS_ACTIVE    ((UBase_t) 0x00000020UL)

#define GPTM_TW_TnRIS_DMAnRIS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnRIS_DMAnRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnRIS_DMAnRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_RIS_H_ */
