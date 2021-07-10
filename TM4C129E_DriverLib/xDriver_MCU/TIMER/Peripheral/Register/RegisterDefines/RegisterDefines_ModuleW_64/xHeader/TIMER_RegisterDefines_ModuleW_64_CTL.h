/**
 *
 * @file TIMER_RegisterDefines_ModuleW_64_CTL.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_CTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_CTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TW_TnCTL_R_TnEN_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnCTL_R_TnEN_BIT    (0UL)
#define GPWTM_TW_TnCTL_R_TnEN_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_R_TnEN_ENA    ((uint32_t) 0x00000001UL)

#define GPWTM_TW_TnCTL_TnEN_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnCTL_TnEN_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_TnEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnCTL_R_TnSTALL_MASK    ((uint32_t) 0x00000002UL)
#define GPWTM_TW_TnCTL_R_TnSTALL_BIT    (1UL)
#define GPWTM_TW_TnCTL_R_TnSTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_R_TnSTALL_FREEZE    ((uint32_t) 0x00000002UL)

#define GPWTM_TW_TnCTL_TnSTALL_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnCTL_TnSTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_TnSTALL_FREEZE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnCTL_R_TnEVENT_MASK    ((uint32_t) 0x0000000CUL)
#define GPWTM_TW_TnCTL_R_TnEVENT_BIT    (2UL)
#define GPWTM_TW_TnCTL_R_TnEVENT_POS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_R_TnEVENT_NEG    ((uint32_t) 0x00000004UL)
#define GPWTM_TW_TnCTL_R_TnEVENT_BOTH    ((uint32_t) 0x0000000CUL)

#define GPWTM_TW_TnCTL_TnEVENT_MASK    ((uint32_t) 0x00000003UL)
#define GPWTM_TW_TnCTL_TnEVENT_NEG    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_TnEVENT_POS    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnCTL_TnEVENT_BOTH    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnCTL_R_RTCEN_MASK    ((uint32_t) 0x00000010UL)
#define GPWTM_TW_TnCTL_R_RTCEN_BIT    (4UL)
#define GPWTM_TW_TnCTL_R_RTCEN_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_R_RTCEN_ENA    ((uint32_t) 0x00000010UL)

#define GPWTM_TW_TnCTL_RTCEN_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnCTL_RTCEN_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_RTCEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/
/*----------*/
#define GPWTM_TW_TnCTL_R_TnOTE_MASK    ((uint32_t) 0x00000020UL)
#define GPWTM_TW_TnCTL_R_TnOTE_BIT    (5UL)
#define GPWTM_TW_TnCTL_R_TnOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_R_TnOTE_ENA    ((uint32_t) 0x00000020UL)

#define GPWTM_TW_TnCTL_TnOTE_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnCTL_TnOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_TnOTE_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_TnCTL_R_TnPWML_MASK    ((uint32_t) 0x00000040UL)
#define GPWTM_TW_TnCTL_R_TnPWML_BIT    (6UL)
#define GPWTM_TW_TnCTL_R_TnPWML_NA    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_R_TnPWML_INV    ((uint32_t) 0x00000040UL)

#define GPWTM_TW_TnCTL_TnPWML_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_TnCTL_TnPWML_NA    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_TnCTL_TnPWML_INV    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_CTL_H_ */
