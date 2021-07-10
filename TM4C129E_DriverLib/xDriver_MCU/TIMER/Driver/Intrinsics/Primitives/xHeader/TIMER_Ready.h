/**
 *
 * @file TIMER_Ready.h
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_PRIMITIVES_TIMER_READY_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_PRIMITIVES_TIMER_READY_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vSetReady(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber);
void TIMER__vClearReady(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber);
TIMER_nREADY TIMER__enIsReady(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber);

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_PRIMITIVES_TIMER_READY_H_ */
