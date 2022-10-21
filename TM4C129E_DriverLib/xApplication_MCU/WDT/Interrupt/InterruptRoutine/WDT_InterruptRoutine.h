/**
 *
 * @file WDT_InterruptRoutine.h
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

#ifndef XAPPLICATION_MCU_WDT_INTERRUPT_INTERRUPTROUTINE_WDT_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_WDT_INTERRUPT_INTERRUPTROUTINE_WDT_INTERRUPTROUTINE_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>
#include <xApplication_MCU/WDT/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Vector.h>

WDT_pvfIRQVectorHandler_t WDT__pvfGetIRQVectorHandler(WDT_nMODULE enModuleArg);
WDT_pvfIRQVectorHandler_t* WDT__pvfGetIRQVectorHandlerPointer(WDT_nMODULE enModuleArg);

#endif /* XAPPLICATION_MCU_WDT_INTERRUPT_INTERRUPTROUTINE_WDT_INTERRUPTROUTINE_H_ */
