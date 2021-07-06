/**
 *
 * @file SCB_RegisterIRQVector.h
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

#ifndef XAPPLICATION_MCU_CORE_SCB_XHEADER_SCB_REGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_CORE_SCB_XHEADER_SCB_REGISTERIRQVECTOR_H_

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>

void SCB__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), void (**pfIrqVectorHandlerExtern) (void), SCB_nVECISR enVector);
void SCB__vUnRegisterIRQVectorHandler(SCB_nVECISR enVector);

#endif /* XAPPLICATION_MCU_CORE_SCB_XHEADER_SCB_REGISTERIRQVECTOR_H_ */
