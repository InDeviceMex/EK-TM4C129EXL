/**
 *
 * @file SYSEXC_InterruptRegisterIRQVector.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Driver/Interrupt/InterruptRegister/xHeader/SYSEXC_InterruptRegisterIRQVector.h>

#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Dependencies.h>
#include <xDriver_MCU/SYSEXC/Driver/Interrupt/InterruptRoutine/SYSEXC_InterruptRoutine.h>

void SYSEXC__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    SCB_nVECISR enVector = SCB_enVECISR_SYSEXC;
    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler, SYSEXC__pvfGetIRQVectorHandlerPointer(),
                                       enVector);
    }
}
