/**
 *
 * @file SYSEXC_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/SYSEXC/Interrupt/InterruptRegister/xHeader/SYSEXC_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/SYSEXC/Interrupt/InterruptRoutine/SYSEXC_InterruptRoutine.h>
#include <xApplication_MCU/SYSEXC/Intrinsics/xHeader/SYSEXC_Dependencies.h>

void SYSEXC__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    SCB_nVECISR enVector = SCB_enVECISR_SYSEXC;
    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVector, pfIrqVectorHandler, SYSEXC__pvfGetIRQVectorHandlerPointer());
    }
}



