/**
 *
 * @file SSI_InterruptRoutine.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_SSI_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_SSI_INTERRUPTROUTINE_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module0.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module1.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module2.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module3.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Source.h>

void (*SSI__pvfGetIRQVectorHandler(SSI_nMODULE enSSIModule))(void);
void (**SSI__pvfGetIRQVectorHandlerPointer(SSI_nMODULE enSSIModule))(void);

#endif /* XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_SSI_INTERRUPTROUTINE_H_ */
