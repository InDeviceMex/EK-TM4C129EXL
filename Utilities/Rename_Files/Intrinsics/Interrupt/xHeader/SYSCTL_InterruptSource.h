/**
 *
 * @file SYSCTL_InterruptSource.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SYSCTL_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SYSCTL_INTERRUPTSOURCE_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enSetInterruptSourceStateByMask(SYSCTL_nMODULE enModuleArg, SYSCTL_nINTMASK enInterruptMaskArg, SYSCTL_nSTATE enStateArg);
SYSCTL_nERROR SYSCTL__enSetInterruptSourceStateByNumber(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT enInterruptArg, SYSCTL_nSTATE enStateArg);

SYSCTL_nERROR SYSCTL__enGetInterruptSourceStateByMask(SYSCTL_nMODULE enModuleArg, SYSCTL_nINTMASK enInterruptMaskArg, SYSCTL_nINTMASK* penInterruptGetArg);
SYSCTL_nERROR SYSCTL__enGetInterruptSourceStateByNumber(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT enInterruptArg, SYSCTL_nSTATE* penStateArg);

SYSCTL_nERROR SYSCTL__enEnableInterruptSourceByMask(SYSCTL_nMODULE enModuleArg, SYSCTL_nINTMASK enInterruptMaskArg);
SYSCTL_nERROR SYSCTL__enEnableInterruptSourceByNumber(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT enInterruptArg);

SYSCTL_nERROR SYSCTL__enDisableInterruptSourceByMask(SYSCTL_nMODULE enModuleArg, SYSCTL_nINTMASK enInterruptMaskArg);
SYSCTL_nERROR SYSCTL__enDisableInterruptSourceByNumber(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT enInterruptArg);

SYSCTL_nERROR SYSCTL__enClearInterruptSourceByMask(SYSCTL_nMODULE enModuleArg, SYSCTL_nINTMASK enInterruptMaskArg);
SYSCTL_nERROR SYSCTL__enClearInterruptSourceByNumber(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT enInterruptArg);

SYSCTL_nERROR SYSCTL__enStatusInterruptSourceByMask(SYSCTL_nMODULE enModuleArg, SYSCTL_nINTMASK enInterruptMaskArg, SYSCTL_nINTMASK* penInterruptStatusArg);
SYSCTL_nERROR SYSCTL__enStatusInterruptSourceByNumber(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT enInterruptArg, SYSCTL_nSTATUS* penStatusArg);

SYSCTL_nERROR SYSCTL__enStatusMaskedInterruptSourceByMask(SYSCTL_nMODULE enModuleArg, SYSCTL_nINTMASK enInterruptMaskArg, SYSCTL_nINTMASK* penInterruptStatusArg);
SYSCTL_nERROR SYSCTL__enStatusMaskedInterruptSourceByNumber(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT enInterruptArg, SYSCTL_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SYSCTL_INTERRUPTSOURCE_H_ */
