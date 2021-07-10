/**
 *
 * @file TIMER_RegisterDefines_ModuleB_16_RIS.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_RIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_RIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TB_TnRIS_R_TnTORIS_MASK    ((uint32_t) 0x00000100UL)
#define GPTM_TB_TnRIS_R_TnTORIS_BIT    (8UL)
#define GPTM_TB_TnRIS_R_TnTORIS_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnRIS_R_TnTORIS_ENA    ((uint32_t) 0x00000100UL)

#define GPTM_TB_TnRIS_TnTORIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnRIS_TnTORIS_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnRIS_TnTORIS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnRIS_R_CnMRIS_MASK    ((uint32_t) 0x00000200UL)
#define GPTM_TB_TnRIS_R_CnMRIS_BIT    (9UL)
#define GPTM_TB_TnRIS_R_CnMRIS_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnRIS_R_CnMRIS_ENA    ((uint32_t) 0x00000200UL)

#define GPTM_TB_TnRIS_CnMRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnRIS_CnMRIS_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnRIS_CnMRIS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnRIS_R_CnERIS_MASK    ((uint32_t) 0x00000400UL)
#define GPTM_TB_TnRIS_R_CnERIS_BIT    (10UL)
#define GPTM_TB_TnRIS_R_CnERIS_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnRIS_R_CnERIS_ENA    ((uint32_t) 0x00000400UL)

#define GPTM_TB_TnRIS_CnERIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnRIS_CnERIS_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnRIS_CnERIS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnRIS_R_TnMRIS_MASK    ((uint32_t) 0x00000800UL)
#define GPTM_TB_TnRIS_R_TnMRIS_BIT    (11UL)
#define GPTM_TB_TnRIS_R_TnMRIS_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnRIS_R_TnMRIS_ENA    ((uint32_t) 0x00000800UL)

#define GPTM_TB_TnRIS_TnMRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnRIS_TnMRIS_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnRIS_TnMRIS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_RIS_H_ */
