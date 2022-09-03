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

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>

SCB_nERROR SCB_UsageFault__enSetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY enPriorityArg);
SCB_nERROR SCB_UsageFault__enGetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY* enPriorityArg);

SCB_nERROR SCB_UsageFault__enSetPending(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_UsageFault__enClearPending(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_UsageFault__enGetPending(SCB_nMODULE enModuleArg, SCB_nPENDSTATE* enStateArg);

SCB_nERROR SCB_UsageFault__enSetState(SCB_nMODULE enModuleArg, SCB_nSTATE enStateArg);
SCB_nERROR SCB_UsageFault__enEnable(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_UsageFault__enDisable(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_UsageFault__enGetState(SCB_nMODULE enModuleArg, SCB_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_USAGEFAULT_H_ */
