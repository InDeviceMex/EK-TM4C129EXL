/**
 *
 * @file TIMER_RegisterDefines_ModuleA_16_MIS.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_MIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_MIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TA_TnMIS_R_TnTOMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnMIS_R_TnTOMIS_BIT    (0UL)
#define GPTM_TA_TnMIS_R_TnTOMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnMIS_R_TnTOMIS_OCCUR    ((uint32_t) 0x00000001UL)

#define GPTM_TA_TnMIS_TnTOMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnMIS_TnTOMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnMIS_TnTOMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnMIS_R_CnMMIS_MASK    ((uint32_t) 0x00000002UL)
#define GPTM_TA_TnMIS_R_CnMMIS_BIT    (1UL)
#define GPTM_TA_TnMIS_R_CnMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnMIS_R_CnMMIS_OCCUR    ((uint32_t) 0x00000002UL)

#define GPTM_TA_TnMIS_CnMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnMIS_CnMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnMIS_CnMMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnMIS_R_CnEMIS_MASK    ((uint32_t) 0x00000004UL)
#define GPTM_TA_TnMIS_R_CnEMIS_BIT    (2UL)
#define GPTM_TA_TnMIS_R_CnEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnMIS_R_CnEMIS_OCCUR    ((uint32_t) 0x00000004UL)

#define GPTM_TA_TnMIS_CnEMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnMIS_CnEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnMIS_CnEMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnMIS_R_TnMMIS_MASK    ((uint32_t) 0x00000010UL)
#define GPTM_TA_TnMIS_R_TnMMIS_BIT    (4UL)
#define GPTM_TA_TnMIS_R_TnMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnMIS_R_TnMMIS_OCCUR    ((uint32_t) 0x00000010UL)

#define GPTM_TA_TnMIS_TnMMIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnMIS_TnMMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnMIS_TnMMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_MIS_H_ */
