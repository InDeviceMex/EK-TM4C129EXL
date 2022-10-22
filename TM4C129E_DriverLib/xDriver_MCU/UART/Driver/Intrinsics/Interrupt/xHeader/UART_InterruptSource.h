/**
 *
 * @file UART_InterruptSource.h
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_XHEADER_UART_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_XHEADER_UART_INTERRUPTSOURCE_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enSetInterruptSourceStateByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg, UART_nSTATE enStateArg);
UART_nERROR UART__enSetInterruptSourceStateByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UART_nSTATE enStateArg);

UART_nERROR UART__enGetInterruptSourceStateByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg, UART_nINTMASK* penInterruptGetArg);
UART_nERROR UART__enGetInterruptSourceStateByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UART_nSTATE* penStateArg);

UART_nERROR UART__enEnableInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg);
UART_nERROR UART__enEnableInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg);

UART_nERROR UART__enDisableInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg);
UART_nERROR UART__enDisableInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg);

UART_nERROR UART__enClearInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg);
UART_nERROR UART__enClearInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg);

UART_nERROR UART__enStatusInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg, UART_nINTMASK* penInterruptStatusArg);
UART_nERROR UART__enStatusInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UART_nSTATUS* penStatusArg);

UART_nERROR UART__enStatusMaskedInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg, UART_nINTMASK* penInterruptStatusArg);
UART_nERROR UART__enStatusMaskedInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UART_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_XHEADER_UART_INTERRUPTSOURCE_H_ */
