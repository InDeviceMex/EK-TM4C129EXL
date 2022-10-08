/**
 *
 * @file TIMER_RegisterDefines_ModuleW_32_CTL.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_CTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_CTL_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TW_TnCTL_R_TnEN_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnCTL_R_TnEN_BIT    (0UL)
#define GPTM_TW_TnCTL_R_TnEN_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_R_TnEN_ENA    ((UBase_t) 0x00000001UL)

#define GPTM_TW_TnCTL_TnEN_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnCTL_TnEN_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_TnEN_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnCTL_R_TnSTALL_MASK    ((UBase_t) 0x00000002UL)
#define GPTM_TW_TnCTL_R_TnSTALL_BIT    (1UL)
#define GPTM_TW_TnCTL_R_TnSTALL_CONTINUE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_R_TnSTALL_FREEZE    ((UBase_t) 0x00000002UL)

#define GPTM_TW_TnCTL_TnSTALL_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnCTL_TnSTALL_CONTINUE    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_TnSTALL_FREEZE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnCTL_R_TnEVENT_MASK    ((UBase_t) 0x0000000CUL)
#define GPTM_TW_TnCTL_R_TnEVENT_BIT    (2UL)
#define GPTM_TW_TnCTL_R_TnEVENT_POS    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_R_TnEVENT_NEG    ((UBase_t) 0x00000004UL)
#define GPTM_TW_TnCTL_R_TnEVENT_BOTH    ((UBase_t) 0x0000000CUL)

#define GPTM_TW_TnCTL_TnEVENT_MASK    ((UBase_t) 0x00000003UL)
#define GPTM_TW_TnCTL_TnEVENT_NEG    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_TnEVENT_POS    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnCTL_TnEVENT_BOTH    ((UBase_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnCTL_R_RTCEN_MASK    ((UBase_t) 0x00000010UL)
#define GPTM_TW_TnCTL_R_RTCEN_BIT    (4UL)
#define GPTM_TW_TnCTL_R_RTCEN_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_R_RTCEN_ENA    ((UBase_t) 0x00000010UL)

#define GPTM_TW_TnCTL_RTCEN_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnCTL_RTCEN_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_RTCEN_ENA    ((UBase_t) 0x00000001UL)
/*----------*/
/*----------*/
#define GPTM_TW_TnCTL_R_TnOTE_MASK    ((UBase_t) 0x00000020UL)
#define GPTM_TW_TnCTL_R_TnOTE_BIT    (5UL)
#define GPTM_TW_TnCTL_R_TnOTE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_R_TnOTE_ENA    ((UBase_t) 0x00000020UL)

#define GPTM_TW_TnCTL_TnOTE_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnCTL_TnOTE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_TnOTE_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnCTL_R_TnPWML_MASK    ((UBase_t) 0x00000040UL)
#define GPTM_TW_TnCTL_R_TnPWML_BIT    (6UL)
#define GPTM_TW_TnCTL_R_TnPWML_NA    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_R_TnPWML_INV    ((UBase_t) 0x00000040UL)

#define GPTM_TW_TnCTL_TnPWML_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TW_TnCTL_TnPWML_NA    ((UBase_t) 0x00000000UL)
#define GPTM_TW_TnCTL_TnPWML_INV    ((UBase_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_CTL_H_ */
