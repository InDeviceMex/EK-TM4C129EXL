/**
 *
 * @file GPIO_InterruptSource.h
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
 * @verbatim 2 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTSOURCE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetInterruptSourceStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enGetInterruptSourceStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nPINMASK* penPinGetArg);
GPIO_nERROR GPIO__enEnableInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg);
GPIO_nERROR GPIO__enDisableInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg);
GPIO_nERROR GPIO__enClearInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg);
GPIO_nERROR GPIO__enStatusInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nPINMASK* penPinStatusArg);
GPIO_nERROR GPIO__enStatusMaskedInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nPINMASK* penPinStatusArg);

GPIO_nERROR GPIO__enSetInterruptSourceStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enGetInterruptSourceStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATE* penStateArg);
GPIO_nERROR GPIO__enEnableInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO__enDisableInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO__enClearInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO__enStatusInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATUS* penStatusArg);
GPIO_nERROR GPIO__enStatusMaskedInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATUS* penStatusArg);

GPIO_nERROR GPIO_DMA__enSetInterruptSourceState(GPIO_nPORT enPortArg, GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO_DMA__enGetInterruptSourceState(GPIO_nPORT enPortArg, GPIO_nSTATE* penStateArg);
GPIO_nERROR GPIO_DMA__enEnableInterruptSource(GPIO_nPORT enPortArg);
GPIO_nERROR GPIO_DMA__enDisableInterruptSource(GPIO_nPORT enPortArg);
GPIO_nERROR GPIO_DMA__enClearInterruptSource(GPIO_nPORT enPortArg);
GPIO_nERROR GPIO_DMA__enStatusInterruptSource(GPIO_nPORT enPortArg, GPIO_nSTATUS* penStatusArg);
GPIO_nERROR GPIO_DMA__enStatusMaskedInterruptSource(GPIO_nPORT enPortArg, GPIO_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTPIN_H_ */
