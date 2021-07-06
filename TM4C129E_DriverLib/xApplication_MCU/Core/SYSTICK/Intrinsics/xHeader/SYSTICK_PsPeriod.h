/**
 *
 * @file SYSTICK_PsPeriod.h
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
 * @verbatim 21 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_INTRINSICS_XHEADER_SYSTICK_PSPERIOD_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_INTRINSICS_XHEADER_SYSTICK_PSPERIOD_H_

#include <xUtils/Standard/Standard.h>

void SYSTICK__vClearPsPeriod(void);
void SYSTICK__vSetPsPeriod(uint64_t u64PsPeriod);
uint64_t SYSTICK__u64GetPsPeriod(void);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_INTRINSICS_XHEADER_SYSTICK_PSPERIOD_H_ */
