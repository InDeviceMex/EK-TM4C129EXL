/**
 *
 * @file TIMER_RegisterDefines_ModuleA_16_IMR.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_IMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_IMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TA_TnIMR_R_TnTOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnIMR_R_TnTOIM_BIT    (0UL)
#define GPTM_TA_TnIMR_R_TnTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnIMR_R_TnTOIM_ENA    ((uint32_t) 0x00000001UL)

#define GPTM_TA_TnIMR_TnTOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnIMR_TnTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnIMR_TnTOIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnIMR_R_CnMIM_MASK    ((uint32_t) 0x00000002UL)
#define GPTM_TA_TnIMR_R_CnMIM_BIT    (1UL)
#define GPTM_TA_TnIMR_R_CnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnIMR_R_CnMIM_ENA    ((uint32_t) 0x00000002UL)

#define GPTM_TA_TnIMR_CnMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnIMR_CnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnIMR_CnMIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnIMR_R_CnEIM_MASK    ((uint32_t) 0x00000004UL)
#define GPTM_TA_TnIMR_R_CnEIM_BIT    (2UL)
#define GPTM_TA_TnIMR_R_CnEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnIMR_R_CnEIM_ENA    ((uint32_t) 0x00000004UL)

#define GPTM_TA_TnIMR_CnEIM_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnIMR_CnEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnIMR_CnEIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TA_TnIMR_R_TnMIM_MASK    ((uint32_t) 0x00000010UL)
#define GPTM_TA_TnIMR_R_TnMIM_BIT    (4UL)
#define GPTM_TA_TnIMR_R_TnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnIMR_R_TnMIM_ENA    ((uint32_t) 0x00000010UL)

#define GPTM_TA_TnIMR_TnMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TA_TnIMR_TnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TA_TnIMR_TnMIM_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_IMR_H_ */
