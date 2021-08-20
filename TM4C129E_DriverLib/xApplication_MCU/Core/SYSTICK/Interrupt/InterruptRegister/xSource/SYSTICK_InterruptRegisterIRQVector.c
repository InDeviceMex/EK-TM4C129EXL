/**
 *
 * @file SYSTICK_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/Core/SYSTICK/Interrupt/InterruptRegister/xHeader/SYSTICK_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/Core/SYSTICK/Interrupt/InterruptRoutine/SYSTICK_InterruptRoutine.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Dependencies.h>

void SYSTICK__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    SCB_nVECISR enVector = SCB_enVECISR_SYSTICK;
    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler,
                       SYSTICK__pvfGetIRQVectorHandlerPointer(),
                       enVector);
    }
}



