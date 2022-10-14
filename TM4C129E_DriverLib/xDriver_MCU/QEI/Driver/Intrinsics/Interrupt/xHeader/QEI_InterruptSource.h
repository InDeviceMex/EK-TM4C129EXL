/**
 *
 * @file QEI_InterruptSource.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_QEI_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_QEI_INTERRUPTSOURCE_H_

#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

QEI_nERROR QEI__enSetInterruptSourceStateByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nSTATE enStateArg);
QEI_nERROR QEI__enSetInterruptSourceStateByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATE enStateArg);

QEI_nERROR QEI__enGetInterruptSourceStateByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nINTMASK* penInterruptGetArg);
QEI_nERROR QEI__enGetInterruptSourceStateByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATE* penStateArg);

QEI_nERROR QEI__enEnableInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg);
QEI_nERROR QEI__enEnableInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg);

QEI_nERROR QEI__enDisableInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg);
QEI_nERROR QEI__enDisableInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg);

QEI_nERROR QEI__enClearInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg);
QEI_nERROR QEI__enClearInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg);

QEI_nERROR QEI__enStatusInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nINTMASK* penInterruptStatusArg);
QEI_nERROR QEI__enStatusInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATUS* penStatusArg);

QEI_nERROR QEI__enStatusMaskedInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nINTMASK* penInterruptStatusArg);
QEI_nERROR QEI__enStatusMaskedInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_QEI_INTERRUPTSOURCE_H_ */
