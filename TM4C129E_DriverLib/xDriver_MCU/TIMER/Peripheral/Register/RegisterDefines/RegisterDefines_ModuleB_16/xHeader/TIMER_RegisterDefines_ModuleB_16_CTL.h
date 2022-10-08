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

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TB_TnCTL_R_TnEN_MASK    ((UBase_t) 0x00000100UL)
#define GPTM_TB_TnCTL_R_TnEN_BIT    (8UL)
#define GPTM_TB_TnCTL_R_TnEN_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnEN_ENA    ((UBase_t) 0x00000100UL)

#define GPTM_TB_TnCTL_TnEN_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnEN_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnEN_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnCTL_R_TnSTALL_MASK    ((UBase_t) 0x00000200UL)
#define GPTM_TB_TnCTL_R_TnSTALL_BIT    (9UL)
#define GPTM_TB_TnCTL_R_TnSTALL_CONTINUE    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnSTALL_FREEZE    ((UBase_t) 0x00000200UL)

#define GPTM_TB_TnCTL_TnSTALL_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnSTALL_CONTINUE    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnSTALL_FREEZE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnCTL_R_TnEVENT_MASK    ((UBase_t) 0x00000C00UL)
#define GPTM_TB_TnCTL_R_TnEVENT_BIT    (10UL)
#define GPTM_TB_TnCTL_R_TnEVENT_POS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnEVENT_NEG    ((UBase_t) 0x00000400UL)
#define GPTM_TB_TnCTL_R_TnEVENT_BOTH    ((UBase_t) 0x00000C00UL)

#define GPTM_TB_TnCTL_TnEVENT_MASK    ((UBase_t) 0x00000003UL)
#define GPTM_TB_TnCTL_TnEVENT_NEG    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnEVENT_POS    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnEVENT_BOTH    ((UBase_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnCTL_R_TnOTE_MASK    ((UBase_t) 0x00002000UL)
#define GPTM_TB_TnCTL_R_TnOTE_BIT    (13UL)
#define GPTM_TB_TnCTL_R_TnOTE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnOTE_ENA    ((UBase_t) 0x00002000UL)

#define GPTM_TB_TnCTL_TnOTE_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnOTE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnOTE_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnCTL_R_TnPWML_MASK    ((UBase_t) 0x00004000UL)
#define GPTM_TB_TnCTL_R_TnPWML_BIT    (14UL)
#define GPTM_TB_TnCTL_R_TnPWML_NA    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_R_TnPWML_INV    ((UBase_t) 0x00004000UL)

#define GPTM_TB_TnCTL_TnPWML_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnCTL_TnPWML_NA    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnCTL_TnPWML_INV    ((UBase_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_CTL_H_ */
