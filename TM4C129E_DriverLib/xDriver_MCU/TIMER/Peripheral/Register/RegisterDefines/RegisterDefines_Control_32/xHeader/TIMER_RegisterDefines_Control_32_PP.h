/**
 *
 * @file TIMER_RegisterDefines_Control_32_PP.h
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
 * @verbatim 9 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_32_PP_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_32_PP_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_CTL_PP_R_SIZE_MASK    ((uint32_t) 0x0000000FUL)
#define GPTM_CTL_PP_R_SIZE_BIT    (0UL)
#define GPTM_CTL_PP_R_SIZE_16b    ((uint32_t) 0x00000000UL)
#define GPTM_CTL_PP_R_SIZE_32b    ((uint32_t) 0x00000001UL)

#define GPTM_CTL_PP_SIZE_MASK    ((uint32_t) 0x0000000FUL)
#define GPTM_CTL_PP_SIZE_16b    ((uint32_t) 0x00000000UL)
#define GPTM_CTL_PP_SIZE_32b    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_32_PP_H_ */
