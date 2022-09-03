/**
 *
 * @file SCB_UnalignTrap.h
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
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_SCB_DRIVER_TRAPS_XHEADER_SCB_UNALIGNTRAP_H_
#define XDRIVER_MCU_CORE_SCB_DRIVER_TRAPS_XHEADER_SCB_UNALIGNTRAP_H_

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>

SCB_nERROR SCB__enSetUnalignTrapEnableState(SCB_nMODULE enModuleArg, SCB_nSTATE enStateArg);
SCB_nERROR SCB__enGetUnalignTrapEnableState(SCB_nMODULE enModuleArg, SCB_nSTATE* penStateArg);

SCB_nERROR SCB__enEnableUnalignTrap(SCB_nMODULE enModuleArg);
SCB_nERROR SCB__enDisableUnalignTrap(SCB_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_CORE_SCB_DRIVER_TRAPS_XHEADER_SCB_UNALIGNTRAP_H_ */
