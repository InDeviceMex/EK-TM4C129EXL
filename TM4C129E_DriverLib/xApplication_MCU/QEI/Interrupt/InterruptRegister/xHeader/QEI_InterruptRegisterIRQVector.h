/**
 *
 * @file QEI_InterruptRegisterIRQVector.h
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

#ifndef XAPPLICATION_MCU_QEI_INTERRUPT_INTERRUPTREGISTER_XHEADER_QEI_INTERRUPTREGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_QEI_INTERRUPT_INTERRUPTREGISTER_XHEADER_QEI_INTERRUPTREGISTERIRQVECTOR_H_

#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Defines.h>

QEI_nERROR QEI__enRegisterIRQVectorHandler(QEI_nMODULE enModuleArg, QEI_pvfIRQVectorHandler_t pfIrqVectorHandlerArg);

#endif /* XAPPLICATION_MCU_QEI_INTERRUPT_INTERRUPTREGISTER_XHEADER_QEI_INTERRUPTREGISTERIRQVECTOR_H_ */
