/**
 *
 * @file TIMER_InterruptRegisterIRQVector.c
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/TIMER/Interrupt/InterruptRegister/xHeader/TIMER_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>
#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

void TIMER__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),TIMER_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_TIMER0A;
    uint32_t u32ModuleNumber = 0UL;
    uint32_t u32SubModule = 0UL;

    const SCB_nVECISR SCB_enVECISR_TIMER[(uint32_t) TIMER_enSUBMODULE_MAX - 1UL][(uint32_t) TIMER_enMODULE_NUM_MAX] =
    {
        { SCB_enVECISR_TIMER0A, SCB_enVECISR_TIMER1A, SCB_enVECISR_TIMER2A, SCB_enVECISR_TIMER3A,
          SCB_enVECISR_TIMER4A, SCB_enVECISR_TIMER5A, SCB_enVECISR_TIMER6A, SCB_enVECISR_TIMER7A},
        { SCB_enVECISR_TIMER0B, SCB_enVECISR_TIMER1B, SCB_enVECISR_TIMER2B, SCB_enVECISR_TIMER3B,
          SCB_enVECISR_TIMER4B, SCB_enVECISR_TIMER5B, SCB_enVECISR_TIMER6B, SCB_enVECISR_TIMER7B}
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        TIMER__vGetSubParams(enModule, &u32SubModule, &u32ModuleNumber);
        u32SubModule &= 0x1UL;
        enVector = SCB_enVECISR_TIMER[u32SubModule][u32ModuleNumber];
        SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVector, pfIrqVectorHandler,
                                       TIMER__pvfGetIRQVectorHandlerPointer((TIMER_nSUBMODULE) u32SubModule,
                                                                            (TIMER_nMODULE_NUM) u32ModuleNumber));
    }
}
