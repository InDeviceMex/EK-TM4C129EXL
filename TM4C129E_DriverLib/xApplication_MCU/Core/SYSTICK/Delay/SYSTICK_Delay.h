/**
 *
 * @file SYSTICK_Delay.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_DELAY_SYSTICK_DELAY_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_DELAY_SYSTICK_DELAY_H_

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

#include <xApplication_MCU/Core/SYSTICK/Delay/Miscellaneous/SYSTICK_Miscellaneous.h>
#include <xApplication_MCU/Core/SYSTICK/Delay/Intrinsics/SYSTICK_Intrinsics.h>

void SYSTICK__vDelayUs(UBase_t uxTimeUs);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_DELAY_SYSTICK_DELAY_H_ */
