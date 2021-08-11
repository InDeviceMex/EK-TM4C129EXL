/**
 *
 * @file GPIO_Ready.h
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_GPIO_INTRINSICS_XHEADER_GPIO_READY_H_
#define XAPPLICATION_MCU_GPIO_INTRINSICS_XHEADER_GPIO_READY_H_

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Defines.h>

void GPIO__vSetReady(GPIO_nPORT enPort);
void GPIO__vClearReady(GPIO_nPORT enPort);
GPIO_nREADY GPIO__enIsReady(GPIO_nPORT enPort);

#endif /* XAPPLICATION_MCU_GPIO_INTRINSICS_XHEADER_GPIO_READY_H_ */
