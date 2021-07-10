/**
 *
 * @file TIMER_RegisterDefines_Standard_32_TBPR.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_TBPR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_TBPR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TBPR_R_TBPSR_MASK    ((uint32_t) 0x000000FFUL)
#define GPTM_TBPR_R_TBPSR_BIT    (0UL)

#define GPTM_TBPR_TBPSR_MASK    ((uint32_t) 0x000000FFUL)
/*----------*/

/*----------*/
#define GPTM_TBPR_R_TBPSRH_MASK    ((uint32_t) 0x0000FF00UL)
#define GPTM_TBPR_R_TBPSRH_BIT    (8UL)

#define GPTM_TBPR_TBPSRH_MASK    ((uint32_t) 0x000000FFUL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_TBPR_H_ */
