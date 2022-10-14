/**
 *
 * @file QEI_InterruptRoutine.h
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_QEI_INTERRUPT_INTERRUPTROUTINE_QEI_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_QEI_INTERRUPT_INTERRUPTROUTINE_QEI_INTERRUPTROUTINE_H_

#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Defines.h>
#include <xApplication_MCU/QEI/Interrupt/InterruptRoutine/xHeader/QEI_InterruptRoutine_Vector_Module0.h>

QEI_pvfIRQVectorHandler_t QEI__pvfGetIRQVectorHandler(QEI_nMODULE enModuleArg);
QEI_pvfIRQVectorHandler_t* QEI__pvfGetIRQVectorHandlerPointer(QEI_nMODULE enModuleArg);

#endif /* XAPPLICATION_MCU_QEI_INTERRUPT_INTERRUPTROUTINE_QEI_INTERRUPTROUTINE_H_ */
