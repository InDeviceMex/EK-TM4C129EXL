/**
 *
 * @file TIMER_Ready.h
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_TIMER_INTRINSICS_XHEADER_TIMER_READY_H_
#define XAPPLICATION_MCU_TIMER_INTRINSICS_XHEADER_TIMER_READY_H_

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Defines.h>

void TIMER__vSetReady(TIMER_nMODULE_NUM enModuleNumber);
void TIMER__vClearReady(TIMER_nMODULE_NUM enModuleNumber);
TIMER_nREADY TIMER__enIsReady(TIMER_nMODULE_NUM enModuleNumber);

#endif /* XAPPLICATION_MCU_TIMER_INTRINSICS_XHEADER_TIMER_READY_H_ */
