/**
 *
 * @file SYSTICK_InterruptRegisterIRQVector.h
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_INTERRUPTREGISTER_XHEADER_SYSTICK_INTERRUPTREGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_INTERRUPTREGISTER_XHEADER_SYSTICK_INTERRUPTREGISTERIRQVECTOR_H_

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

SYSTICK_nERROR SYSTICK__enRegisterIRQVectorHandler(SYSTICK_nMODULE enModuleArg, SYSTICK_pvfIRQVectorHandler_t pfIrqVectorHandlerArg);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_INTERRUPTREGISTER_XHEADER_SYSTICK_INTERRUPTREGISTERIRQVECTOR_H_ */
