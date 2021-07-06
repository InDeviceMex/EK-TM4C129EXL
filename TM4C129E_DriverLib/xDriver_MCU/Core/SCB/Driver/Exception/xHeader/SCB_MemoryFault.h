/**
 *
 * @file SCB_MemoryFault.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_MEMORYFAULT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_MEMORYFAULT_H_

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>

void SCB_MemoryFault__vSetPending(void);
void SCB_MemoryFault__vClearPending(void);
SCB_nPENDSTATE SCB_MemoryFault__enGetPending(void);

void SCB_MemoryFault__vSetPriority(SCB_nSHPR enMemoryPriority);
SCB_nSHPR SCB_MemoryFault__enGetPriority(void);

void SCB_MemoryFault__vEnable(void);
void SCB_MemoryFault__vDisable(void);

uint32_t SCB_MemoryFault_u32GetAddress(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_MEMORYFAULT_H_ */
