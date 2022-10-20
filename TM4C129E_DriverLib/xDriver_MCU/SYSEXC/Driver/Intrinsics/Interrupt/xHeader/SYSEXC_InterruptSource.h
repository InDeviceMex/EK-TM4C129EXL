/**
 *
 * @file SYSEXC_InterruptSource.h
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
 * @verbatim 19 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SYSEXC_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SYSEXC_INTERRUPTSOURCE_H_

#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Enum.h>

SYSEXC_nERROR SYSEXC__enSetInterruptSourceStateByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg, SYSEXC_nSTATE enStateArg);
SYSEXC_nERROR SYSEXC__enSetInterruptSourceStateByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, SYSEXC_nSTATE enStateArg);

SYSEXC_nERROR SYSEXC__enGetInterruptSourceStateByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg, SYSEXC_nINTMASK* penInterruptGetArg);
SYSEXC_nERROR SYSEXC__enGetInterruptSourceStateByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, SYSEXC_nSTATE* penStateArg);

SYSEXC_nERROR SYSEXC__enEnableInterruptSourceByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg);
SYSEXC_nERROR SYSEXC__enEnableInterruptSourceByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg);

SYSEXC_nERROR SYSEXC__enDisableInterruptSourceByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg);
SYSEXC_nERROR SYSEXC__enDisableInterruptSourceByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg);

SYSEXC_nERROR SYSEXC__enClearInterruptSourceByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg);
SYSEXC_nERROR SYSEXC__enClearInterruptSourceByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg);

SYSEXC_nERROR SYSEXC__enStatusInterruptSourceByMaskByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg, SYSEXC_nINTMASK* penInterruptStatusArg);
SYSEXC_nERROR SYSEXC__enStatusInterruptSourceByMaskByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, SYSEXC_nSTATUS* penStatusArg);

SYSEXC_nERROR SYSEXC__enStatusMaskedInterruptSourceByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg, SYSEXC_nINTMASK* penInterruptStatusArg);
SYSEXC_nERROR SYSEXC__enStatusMaskedInterruptSourceByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, SYSEXC_nSTATUS* penStatusArg);


#endif /* XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SYSEXC_INTERRUPTSOURCE_H_ */
