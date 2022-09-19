/**
 *
 * @file GPIO_InterruptEdge.h
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
 * @verbatim Apr 6, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 6, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_INTERRUPTEDGE_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_INTERRUPTEDGE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetInterruptEdgeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                           GPIO_nEDGE enEdgeArg);
GPIO_nERROR GPIO__enSetInterruptEdgeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                              GPIO_nEDGE enEdgeArg);

GPIO_nERROR GPIO__enGetInterruptEdgeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                              GPIO_nEDGE* penEdgeArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_INTERRUPTEDGE_H_ */
