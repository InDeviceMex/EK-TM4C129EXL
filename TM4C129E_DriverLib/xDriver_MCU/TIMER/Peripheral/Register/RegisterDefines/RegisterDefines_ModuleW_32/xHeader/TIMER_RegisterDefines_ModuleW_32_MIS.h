/**
 *
 * @file TIMER_RegisterDefines_ModuleW_32_MIS.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_MIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_MIS_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TW_TnMIS_R_TnTOMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnMIS_R_TnTOMIS_BIT    (0UL)
#define GPTM_TW_TnMIS_R_TnTOMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_R_TnTOMIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define GPTM_TW_TnMIS_TnTOMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnMIS_TnTOMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_TnTOMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnMIS_R_CnMMIS_MASK    ((uint32_t) 0x00000002UL)
#define GPTM_TW_TnMIS_R_CnMMIS_BIT    (1UL)
#define GPTM_TW_TnMIS_R_CnMMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_R_CnMMIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define GPTM_TW_TnMIS_CnMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnMIS_CnMMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_CnMMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnMIS_R_CnEMIS_MASK    ((uint32_t) 0x00000004UL)
#define GPTM_TW_TnMIS_R_CnEMIS_BIT    (2UL)
#define GPTM_TW_TnMIS_R_CnEMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_R_CnEMIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define GPTM_TW_TnMIS_CnEMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnMIS_CnEMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_CnEMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnMIS_R_RTCMIS_MASK    ((uint32_t) 0x00000008UL)
#define GPTM_TW_TnMIS_R_RTCMIS_BIT    (3UL)
#define GPTM_TW_TnMIS_R_RTCMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_R_RTCMIS_ACTIVE    ((uint32_t) 0x00000008UL)

#define GPTM_TW_TnMIS_RTCMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnMIS_RTCMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_RTCMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnMIS_R_TnMMIS_MASK    ((uint32_t) 0x00000010UL)
#define GPTM_TW_TnMIS_R_TnMMIS_BIT    (4UL)
#define GPTM_TW_TnMIS_R_TnMMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_R_TnMMIS_ACTIVE    ((uint32_t) 0x00000010UL)

#define GPTM_TW_TnMIS_TnMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnMIS_TnMMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_TnMMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnMIS_R_DMAnMIS_MASK    ((uint32_t) 0x00000020UL)
#define GPTM_TW_TnMIS_R_DMAnMIS_BIT    (5UL)
#define GPTM_TW_TnMIS_R_DMAnMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_R_DMAnMIS_ACTIVE    ((uint32_t) 0x00000020UL)

#define GPTM_TW_TnMIS_DMAnMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnMIS_DMAnMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnMIS_DMAnMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_MIS_H_ */
