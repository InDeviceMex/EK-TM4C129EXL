/**
 *
 * @file SYSTICK_TimeUs.h
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

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_DELAY_MISCELLANEOUS_XHEADER_SYSTICK_TIMEUS_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_DELAY_MISCELLANEOUS_XHEADER_SYSTICK_TIMEUS_H_

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

uint64_t SYSTICK__u64GetTimePs(void);
uint64_t SYSTICK__u64GetTimeNs(void);
uint64_t SYSTICK__u64GetTimeUs(void);
uint64_t SYSTICK__u64GetTimeMs(void);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_DELAY_MISCELLANEOUS_XHEADER_SYSTICK_TIMEUS_H_ */
