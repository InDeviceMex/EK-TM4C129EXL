/**
 *
 * @file WDT_InterruptRegisterIRQVector.h
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
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_WDT_INTERRUPT_INTERRUPTREGISTER_XHEADER_WDT_INTERRUPTREGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_WDT_INTERRUPT_INTERRUPTREGISTER_XHEADER_WDT_INTERRUPTREGISTERIRQVECTOR_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>

WDT_nERROR WDT__enRegisterIRQVectorHandler(WDT_nMODULE enModuleArg, WDT_pvfIRQVectorHandler_t pfIrqVectorHandlerArg);

#endif /* XAPPLICATION_MCU_WDT_INTERRUPT_INTERRUPTREGISTER_XHEADER_WDT_INTERRUPTREGISTERIRQVECTOR_H_ */
