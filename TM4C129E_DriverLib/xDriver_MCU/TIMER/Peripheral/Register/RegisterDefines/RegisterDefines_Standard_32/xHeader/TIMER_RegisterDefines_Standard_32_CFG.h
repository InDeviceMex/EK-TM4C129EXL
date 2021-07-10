/**
 *
 * @file TIMER_RegisterDefines_Standard_32_CFG.h
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
 * @verbatim 5 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_CFG_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_CFG_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_CFG_R_CFG_MASK    ((uint32_t) 0x00000007UL)
#define GPTM_CFG_R_CFG_BIT    (0UL)
#define GPTM_CFG_R_CFG_BOTH    ((uint32_t) 0x00000000UL)
#define GPTM_CFG_R_CFG_RTC    ((uint32_t) 0x00000001UL)
#define GPTM_CFG_R_CFG_SINGLE    ((uint32_t) 0x00000004UL)

#define GPTM_CFG_CFG_MASK    ((uint32_t) 0x00000007UL)
#define GPTM_CFG_CFG_BOTH    ((uint32_t) 0x00000000UL)
#define GPTM_CFG_CFG_RTC    ((uint32_t) 0x00000001UL)
#define GPTM_CFG_CFG_SINGLE    ((uint32_t) 0x00000004UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_CFG_H_ */
