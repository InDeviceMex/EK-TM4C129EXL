/**
 *
 * @file TIMER_RegisterDefines_ModuleA_16_ICR.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_ICR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_ICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TA_TnICR_R_TnTOCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnICR_R_TnTOCINT_BIT    (0UL)
#define GPTM_TA_TnICR_R_TnTOCINT_CLEAR    ((uint32_t) 0x00000001UL)

#define GPTM_TA_TnICR_TnTOCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnICR_TnTOCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnICR_R_CnMCINT_MASK    ((uint32_t) 0x00000002UL)
#define GPTM_TA_TnICR_R_CnMCINT_BIT    (1UL)
#define GPTM_TA_TnICR_R_CnMCINT_CLEAR    ((uint32_t) 0x00000002UL)

#define GPTM_TA_TnICR_CnMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnICR_CnMCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnICR_R_CnECINT_MASK    ((uint32_t) 0x00000004UL)
#define GPTM_TA_TnICR_R_CnECINT_BIT    (2UL)
#define GPTM_TA_TnICR_R_CnECINT_CLEAR    ((uint32_t) 0x00000004UL)

#define GPTM_TA_TnICR_CnECINT_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnICR_CnECINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnICR_R_TnMCINT_MASK    ((uint32_t) 0x00000010UL)
#define GPTM_TA_TnICR_R_TnMCINT_BIT    (4UL)
#define GPTM_TA_TnICR_R_TnMCINT_CLEAR    ((uint32_t) 0x00000010UL)

#define GPTM_TA_TnICR_TnMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnICR_TnMCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_ICR_H_ */
