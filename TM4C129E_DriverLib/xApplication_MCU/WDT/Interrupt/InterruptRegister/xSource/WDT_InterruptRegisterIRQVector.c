/**
 *
 * @file WDT_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/WDT/Interrupt/InterruptRegister/xHeader/WDT_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/WDT/Interrupt/InterruptRoutine/WDT_InterruptRoutine.h>
#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Dependencies.h>

void WDT__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    SCB_nVECISR enVector = SCB_enVECISR_WDT01;

    if(0UL != (UBase_t) pfIrqVectorHandler)
    {
        SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVector, pfIrqVectorHandler, WDT__pvfGetIRQVectorHandlerPointer());
    }
}
