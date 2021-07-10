/**
 *
 * @file TIMER_RegisterDefines_ModuleB_16_CTL.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_CTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_CTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TB_TnCTL_R_TnEN_MASK    ((uint32_t) 0x00000100UL)
#define GPTM_TB_TnCTL_R_TnEN_BIT    (8UL)
#define GPTM_TB_TnCTL_R_TnEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnEN_ENA    ((uint32_t) 0x00000100UL)

#define GPTM_TB_TnCTL_TnEN_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnCTL_R_TnSTALL_MASK    ((uint32_t) 0x00000200UL)
#define GPTM_TB_TnCTL_R_TnSTALL_BIT    (9UL)
#define GPTM_TB_TnCTL_R_TnSTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnSTALL_FREEZE    ((uint32_t) 0x00000200UL)

#define GPTM_TB_TnCTL_TnSTALL_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnSTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnSTALL_FREEZE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnCTL_R_TnEVENT_MASK    ((uint32_t) 0x00000C00UL)
#define GPTM_TB_TnCTL_R_TnEVENT_BIT    (10UL)
#define GPTM_TB_TnCTL_R_TnEVENT_POS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnEVENT_NEG    ((uint32_t) 0x00000400UL)
#define GPTM_TB_TnCTL_R_TnEVENT_BOTH    ((uint32_t) 0x00000C00UL)

#define GPTM_TB_TnCTL_TnEVENT_MASK    ((uint32_t) 0x00000003UL)
#define GPTM_TB_TnCTL_TnEVENT_NEG    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnEVENT_POS    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnEVENT_BOTH    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnCTL_R_TnOTE_MASK    ((uint32_t) 0x00002000UL)
#define GPTM_TB_TnCTL_R_TnOTE_BIT    (13UL)
#define GPTM_TB_TnCTL_R_TnOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnOTE_ENA    ((uint32_t) 0x00002000UL)

#define GPTM_TB_TnCTL_TnOTE_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnOTE_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnCTL_R_TnPWML_MASK    ((uint32_t) 0x00004000UL)
#define GPTM_TB_TnCTL_R_TnPWML_BIT    (14UL)
#define GPTM_TB_TnCTL_R_TnPWML_NA    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnPWML_INV    ((uint32_t) 0x00004000UL)

#define GPTM_TB_TnCTL_TnPWML_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnPWML_NA    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnPWML_INV    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_CTL_H_ */
