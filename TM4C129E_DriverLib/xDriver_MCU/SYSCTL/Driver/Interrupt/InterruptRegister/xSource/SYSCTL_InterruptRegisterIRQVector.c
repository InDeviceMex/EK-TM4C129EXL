/**
 *
 * @file SYSCTL_InterruptRegisterIRQVector.c
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
 * @verbatim 16 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRegister/xHeader/SYSCTL_InterruptRegisterIRQVector.h>

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Dependencies.h>
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRoutine/SYSCTL_InterruptRoutine.h>

void SYSCTL__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    SCB_nVECISR enVector = SCB_enVECISR_SYSCTL;
    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler, SYSCTL__pvfGetIRQVectorHandlerPointer(), enVector);
    }
}
