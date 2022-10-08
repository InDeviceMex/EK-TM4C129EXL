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

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_DELAY_INTRINSICS_XHEADER_SYSTICK_TICKPS_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_DELAY_INTRINSICS_XHEADER_SYSTICK_TICKPS_H_

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

void SYSTICK__vClearTickPs(void);
void SYSTICK__vSetTickPs(UBase_t uxTick);
UBase_t SYSTICK__uxGetTickPs(void);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_DELAY_INTRINSICS_XHEADER_SYSTICK_TICKPS_H_ */
