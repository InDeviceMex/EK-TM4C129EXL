/**
 *
 * @file TIMER_RegisterDefines_ModuleB_32_MIS.h
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
 * @verbatim 7 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_MIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_MIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TB_TnMIS_R_TnTOMIS_MASK    ((uint32_t) 0x00000100UL)
#define GPWTM_TB_TnMIS_R_TnTOMIS_BIT    (8UL)
#define GPWTM_TB_TnMIS_R_TnTOMIS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnMIS_R_TnTOMIS_ENA    ((uint32_t) 0x00000100UL)

#define GPWTM_TB_TnMIS_TnTOMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_TnMIS_TnTOMIS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnMIS_TnTOMIS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TB_TnMIS_R_CnMMIS_MASK    ((uint32_t) 0x00000200UL)
#define GPWTM_TB_TnMIS_R_CnMMIS_BIT    (9UL)
#define GPWTM_TB_TnMIS_R_CnMMIS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnMIS_R_CnMMIS_ENA    ((uint32_t) 0x00000200UL)

#define GPWTM_TB_TnMIS_CnMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_TnMIS_CnMMIS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnMIS_CnMMIS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TB_TnMIS_R_CnEMIS_MASK    ((uint32_t) 0x00000400UL)
#define GPWTM_TB_TnMIS_R_CnEMIS_BIT    (10UL)
#define GPWTM_TB_TnMIS_R_CnEMIS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnMIS_R_CnEMIS_ENA    ((uint32_t) 0x00000400UL)

#define GPWTM_TB_TnMIS_CnEMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_TnMIS_CnEMIS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnMIS_CnEMIS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TB_TnMIS_R_TnMMIS_MASK    ((uint32_t) 0x00000800UL)
#define GPWTM_TB_TnMIS_R_TnMMIS_BIT    (11UL)
#define GPWTM_TB_TnMIS_R_TnMMIS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnMIS_R_TnMMIS_ENA    ((uint32_t) 0x00000800UL)

#define GPWTM_TB_TnMIS_TnMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_TnMIS_TnMMIS_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnMIS_TnMMIS_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_MIS_H_ */
