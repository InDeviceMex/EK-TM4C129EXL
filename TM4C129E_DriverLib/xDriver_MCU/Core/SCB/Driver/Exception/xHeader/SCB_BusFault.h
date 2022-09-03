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

SCB_nERROR SCB_BusFault__enSetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY enPriorityArg);
SCB_nERROR SCB_BusFault__enGetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY* enPriorityArg);

SCB_nERROR SCB_BusFault__enSetPending(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_BusFault__enClearPending(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_BusFault__enGetPending(SCB_nMODULE enModuleArg, SCB_nPENDSTATE* enStateArg);

SCB_nERROR SCB_BusFault__enSetState(SCB_nMODULE enModuleArg, SCB_nSTATE enStateArg);
SCB_nERROR SCB_BusFault__enEnable(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_BusFault__enDisable(SCB_nMODULE enModuleArg);
SCB_nERROR SCB_BusFault__enGetState(SCB_nMODULE enModuleArg, SCB_nSTATE* penStateArg);

SCB_nERROR SCB_BusFault_enGetFaultAddress(SCB_nMODULE enModuleArg, uint32_t* pu32FaultAddressArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_BUSFAULT_H_ */
