/**
 *
 * @file WDT_InterruptSource.h
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
 * @verbatim 23 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_nERROR WDT__enSetInterruptSourceStateByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg, WDT_nSTATE enStateArg);
WDT_nERROR WDT__enSetInterruptSourceStateByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, WDT_nSTATE enStateArg);

WDT_nERROR WDT__enGetInterruptSourceStateByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg, WDT_nINTMASK* penInterruptGetArg);
WDT_nERROR WDT__enGetInterruptSourceStateByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, WDT_nSTATE* penStateArg);

WDT_nERROR WDT__enEnableInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg);
WDT_nERROR WDT__enEnableInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg);

WDT_nERROR WDT__enClearInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg);
WDT_nERROR WDT__enClearInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg);

WDT_nERROR WDT__enStatusInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg, WDT_nINTMASK* penInterruptStatusArg);
WDT_nERROR WDT__enStatusInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, WDT_nSTATUS* penStatusArg);

WDT_nERROR WDT__enStatusMaskedInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg, WDT_nINTMASK* penInterruptStatusArg);
WDT_nERROR WDT__enStatusMaskedInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, WDT_nSTATUS* penStatusArg);


#endif /* XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_H_ */
