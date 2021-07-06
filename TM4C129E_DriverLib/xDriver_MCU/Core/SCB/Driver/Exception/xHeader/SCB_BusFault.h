/**
 *
 * @file SCB_BusFault.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_BUSFAULT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_BUSFAULT_H_

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>

void SCB_BusFault__vSetPriority(SCB_nSHPR enSCBPriority);
SCB_nSHPR SCB_BusFault__enGetPriority(void);

void SCB_BusFault__vSetPending(void);
void SCB_BusFault__vClearPending(void);
SCB_nPENDSTATE SCB_BusFault__enGetPending(void);

void SCB_BusFault__vEnable(void);
void SCB_BusFault__vDisable(void);

uint32_t SCB_BusFault_u32GetAddress(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_BUSFAULT_H_ */
