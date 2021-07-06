/**
 *
 * @file SYSTICK_TickPs.h
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

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_INTRINSICS_XHEADER_SYSTICK_TICKPS_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_INTRINSICS_XHEADER_SYSTICK_TICKPS_H_

#include <xUtils/Standard/Standard.h>

void SYSTICK__vClearTickPs(void);
void SYSTICK__vSetTickPs(uint32_t u32Tick);
uint32_t SYSTICK__u32GetTickPs(void);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_INTRINSICS_XHEADER_SYSTICK_TICKPS_H_ */
