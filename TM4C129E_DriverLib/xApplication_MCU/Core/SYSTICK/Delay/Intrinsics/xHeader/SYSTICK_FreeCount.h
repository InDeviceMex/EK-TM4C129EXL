/**
 *
 * @file SYSTICK_FreeCount.h
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

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_DELAY_INTRINSICS_XHEADER_SYSTICK_FREECOUNT_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_DELAY_INTRINSICS_XHEADER_SYSTICK_FREECOUNT_H_

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

void SYSTICK__vSetFreeCount(uint32_t u32Count);
uint32_t SYSTICK__u32GetFreeCount(void);
void SYSTICK__vClearFreeCount(void);

void SYSTICK__vSetFreeCountOv(uint32_t u32Count);
uint32_t SYSTICK__u32GetFreeCountOv(void);
void SYSTICK__vClearFreeCountOv(void);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_DELAY_INTRINSICS_XHEADER_SYSTICK_FREECOUNT_H_ */
