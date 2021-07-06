/**
 *
 * @file SCB_UsageFault.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_USAGEFAULT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_USAGEFAULT_H_

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>

void SCB_UsageFault__vSetPriority(SCB_nSHPR enUsageFaultPriority);
SCB_nSHPR SCB_UsageFault__enGetPriority(void);

void SCB_UsageFault__vSetPending(void);
void SCB_UsageFault__vClearPending(void);
SCB_nPENDSTATE SCB_UsageFault__enGetPending(void);

void SCB_UsageFault__vEnable(void);
void SCB_UsageFault__vDisable(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_USAGEFAULT_H_ */
