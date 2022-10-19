/**
 *
 * @file SSI_InterruptSource.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SSI_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SSI_INTERRUPTSOURCE_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

SSI_nERROR SSI__enSetInterruptSourceStateByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg, SSI_nSTATE enStateArg);
SSI_nERROR SSI__enSetInterruptSourceStateByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, SSI_nSTATE enStateArg);

SSI_nERROR SSI__enGetInterruptSourceStateByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg, SSI_nINTMASK* penInterruptGetArg);
SSI_nERROR SSI__enGetInterruptSourceStateByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, SSI_nSTATE* penStateArg);

SSI_nERROR SSI__enEnableInterruptSourceByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg);
SSI_nERROR SSI__enEnableInterruptSourceByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg);

SSI_nERROR SSI__enDisableInterruptSourceByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg);
SSI_nERROR SSI__enDisableInterruptSourceByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg);

SSI_nERROR SSI__enClearInterruptSourceByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg);
SSI_nERROR SSI__enClearInterruptSourceByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg);

SSI_nERROR SSI__enStatusInterruptSourceByMaskByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg, SSI_nINTMASK* penInterruptStatusArg);
SSI_nERROR SSI__enStatusInterruptSourceByMaskByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, SSI_nSTATUS* penStatusArg);

SSI_nERROR SSI__enStatusMaskedInterruptSourceByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg, SSI_nINTMASK* penInterruptStatusArg);
SSI_nERROR SSI__enStatusMaskedInterruptSourceByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, SSI_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SSI_INTERRUPTSOURCE_H_ */
