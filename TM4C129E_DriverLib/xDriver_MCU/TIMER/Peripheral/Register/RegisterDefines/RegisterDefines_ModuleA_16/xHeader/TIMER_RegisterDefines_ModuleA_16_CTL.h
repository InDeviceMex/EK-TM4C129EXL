/**
 *
 * @file TIMER_RegisterDefines_ModuleA_16_CTL.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_CTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_CTL_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TA_TnCTL_R_TnEN_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnCTL_R_TnEN_BIT    (0UL)
#define GPTM_TA_TnCTL_R_TnEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_R_TnEN_ENA    ((uint32_t) 0x00000001UL)

#define GPTM_TA_TnCTL_TnEN_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnCTL_TnEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_TnEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnCTL_R_TnSTALL_MASK    ((uint32_t) 0x00000002UL)
#define GPTM_TA_TnCTL_R_TnSTALL_BIT    (1UL)
#define GPTM_TA_TnCTL_R_TnSTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_R_TnSTALL_FREEZE    ((uint32_t) 0x00000002UL)

#define GPTM_TA_TnCTL_TnSTALL_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnCTL_TnSTALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_TnSTALL_FREEZE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnCTL_R_TnEVENT_MASK    ((uint32_t) 0x0000000CUL)
#define GPTM_TA_TnCTL_R_TnEVENT_BIT    (2UL)
#define GPTM_TA_TnCTL_R_TnEVENT_POS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_R_TnEVENT_NEG    ((uint32_t) 0x00000004UL)
#define GPTM_TA_TnCTL_R_TnEVENT_BOTH    ((uint32_t) 0x0000000CUL)

#define GPTM_TA_TnCTL_TnEVENT_MASK    ((uint32_t) 0x00000003UL)
#define GPTM_TA_TnCTL_TnEVENT_NEG    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_TnEVENT_POS    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnCTL_TnEVENT_BOTH    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnCTL_R_TnOTE_MASK    ((uint32_t) 0x00000020UL)
#define GPTM_TA_TnCTL_R_TnOTE_BIT    (5UL)
#define GPTM_TA_TnCTL_R_TnOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_R_TnOTE_ENA    ((uint32_t) 0x00000020UL)

#define GPTM_TA_TnCTL_TnOTE_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnCTL_TnOTE_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_TnOTE_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnCTL_R_TnPWML_MASK    ((uint32_t) 0x00000040UL)
#define GPTM_TA_TnCTL_R_TnPWML_BIT    (6UL)
#define GPTM_TA_TnCTL_R_TnPWML_NA    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_R_TnPWML_INV    ((uint32_t) 0x00000040UL)

#define GPTM_TA_TnCTL_TnPWML_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnCTL_TnPWML_NA    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnCTL_TnPWML_INV    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_CTL_H_ */
