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
 * @verbatim 18 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/Interrupt/InterruptRegister/xHeader/SYSTICK_InterruptRegisterIRQVector.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/xHeader/SYSTICK_Dependencies.h>

void SYSTICK__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    SCB_nVECISR enVector = SCB_enVECISR_SYSTICK;
    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler, (void(**)(void)) 0UL, enVector);
    }
}




