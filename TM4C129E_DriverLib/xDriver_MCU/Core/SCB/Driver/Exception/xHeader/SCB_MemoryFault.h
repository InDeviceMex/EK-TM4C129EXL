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

SCB_nERROR SCB_MemoryFault__enSetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY enPriorityArg);
SCB_nERROR SCB_MemoryFault__enGetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY* enPriorityArg);

SCB_nERROR SCB_MemoryFault__enSetPending(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_MemoryFault__enClearPending(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_MemoryFault__enGetPending(SCB_nMODULE enModuleArg, SCB_nPENDSTATE* enStateArg);

SCB_nERROR SCB_MemoryFault__enSetState(SCB_nMODULE enModuleArg, SCB_nSTATE enStateArg);
SCB_nERROR SCB_MemoryFault__enEnable(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_MemoryFault__enDisable(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_MemoryFault__enGetState(SCB_nMODULE enModuleArg, SCB_nSTATE* penStateArg);

SCB_nERROR SCB_MemoryFault_enGetFaultAddress(SCB_nMODULE enModuleArg, UBase_t* puxFaultAddressArg);


#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_MEMORYFAULT_H_ */
