/**
 *
 * @file SSI_InterruptRoutine.h
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

#ifndef XAPPLICATION_MCU_SSI_INTERRUPT_INTERRUPTROUTINE_SSI_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_SSI_INTERRUPT_INTERRUPTROUTINE_SSI_INTERRUPTROUTINE_H_

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Defines.h>
#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module0.h>
#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module1.h>
#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module2.h>
#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module3.h>

void (*SSI__pvfGetIRQVectorHandler(SSI_nMODULE enSSIModule))(void);
void (**SSI__pvfGetIRQVectorHandlerPointer(SSI_nMODULE enSSIModule))(void);

#endif /* XAPPLICATION_MCU_SSI_INTERRUPT_INTERRUPTROUTINE_SSI_INTERRUPTROUTINE_H_ */
