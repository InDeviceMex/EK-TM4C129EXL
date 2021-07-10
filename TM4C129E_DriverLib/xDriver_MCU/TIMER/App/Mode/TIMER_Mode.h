/**
 *
 * @file TIMER_Mode.h
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_APP_TIMER_MODE_TIMER_MODE_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_APP_TIMER_MODE_TIMER_MODE_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

TIMER_nSTATUS TIMER__enSetMode(TIMER_nMODULE enModule, TIMER_nMODE enMode);
TIMER_nSTATUS TIMER__enSetModeStruct(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* pstMode);

TIMER_nMODE TIMER__enGetMode(TIMER_nMODULE enModule);
TIMER_nSTATUS TIMER__enGetModeStruct(TIMER_nMODULE enModule, TIMER_MODE_Typedef* pstMode);
TIMER_MODE_Typedef* TIMER__pstGetMode(TIMER_nMODULE enModule);

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_APP_TIMER_MODE_TIMER_MODE_H_ */
