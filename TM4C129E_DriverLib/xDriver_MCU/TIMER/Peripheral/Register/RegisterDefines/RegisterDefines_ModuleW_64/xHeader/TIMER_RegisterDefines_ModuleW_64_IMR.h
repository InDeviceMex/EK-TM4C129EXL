/**
 *
 * @file TIMER_RegisterDefines_ModuleW_64_IMR.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_IMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_IMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/


/*----------*/
#define GPWTM_TW_TnIMR_R_TnTOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnIMR_R_TnTOIM_BIT    (0UL)
#define GPWTM_TW_TnIMR_R_TnTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_R_TnTOIM_ENA    ((uint32_t) 0x00000001UL)

#define GPWTM_TW_TnIMR_TnTOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnIMR_TnTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_TnTOIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnIMR_R_CnMIM_MASK    ((uint32_t) 0x00000002UL)
#define GPWTM_TW_TnIMR_R_CnMIM_BIT    (1UL)
#define GPWTM_TW_TnIMR_R_CnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_R_CnMIM_ENA    ((uint32_t) 0x00000002UL)

#define GPWTM_TW_TnIMR_CnMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnIMR_CnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_CnMIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnIMR_R_CnEIM_MASK    ((uint32_t) 0x00000004UL)
#define GPWTM_TW_TnIMR_R_CnEIM_BIT    (2UL)
#define GPWTM_TW_TnIMR_R_CnEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_R_CnEIM_ENA    ((uint32_t) 0x00000004UL)

#define GPWTM_TW_TnIMR_CnEIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnIMR_CnEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_CnEIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnIMR_R_RTCIM_MASK    ((uint32_t) 0x00000008UL)
#define GPWTM_TW_TnIMR_R_RTCIM_BIT    (3UL)
#define GPWTM_TW_TnIMR_R_RTCIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_R_RTCIM_ENA    ((uint32_t) 0x00000008UL)

#define GPWTM_TW_TnIMR_RTCIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnIMR_RTCIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_RTCIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnIMR_R_TnMIM_MASK    ((uint32_t) 0x00000010UL)
#define GPWTM_TW_TnIMR_R_TnMIM_BIT    (4UL)
#define GPWTM_TW_TnIMR_R_TnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_R_TnMIM_ENA    ((uint32_t) 0x00000010UL)

#define GPWTM_TW_TnIMR_TnMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnIMR_TnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_TnMIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnIMR_R_WUEIM_MASK    ((uint32_t) 0x00010000UL)
#define GPWTM_TW_TnIMR_R_WUEIM_BIT    (16UL)
#define GPWTM_TW_TnIMR_R_WUEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_R_WUEIM_ENA    ((uint32_t) 0x00010000UL)

#define GPWTM_TW_TnIMR_WUEIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnIMR_WUEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnIMR_WUEIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_IMR_H_ */
