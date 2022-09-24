/**
 *
 * @file GPIO_InterruptRegisterIRQVector.h
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

#ifndef XAPPLICATION_MCU_GPIO_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_GPIO_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQVECTOR_H_

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Defines.h>

GPIO_nERROR GPIO__enRegisterIRQVectorHandler(GPIO_nPORT enPortArg, GPIO_pvfIRQVectorHandler_t pfIrqVectorHandlerArg);
GPIO_nERROR GPIO_PQ__enRegisterIRQVectorHandler(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_pvfIRQVectorHandler_t pfIrqVectorHandlerArg);

GPIO_nERROR GPIO__enRegisterAll_IRQVectorHandler(void);

#endif /* XAPPLICATION_MCU_GPIO_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQVECTOR_H_ */
