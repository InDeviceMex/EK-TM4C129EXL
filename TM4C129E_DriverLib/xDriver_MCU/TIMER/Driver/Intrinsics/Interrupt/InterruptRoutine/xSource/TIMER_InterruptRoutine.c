/**
 *
 * @file TIMER_InterruptRoutine.c
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
 * @verbatim 14 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void (*TIMER__pvIRQVectorHandler[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX - 1UL][(uint32_t) TIMER_enMODULE_NUM_MAX]) (void) = {
    {
        { &TIMER0A__vIRQVectorHandler, &TIMER1A__vIRQVectorHandler, &TIMER2A__vIRQVectorHandler, &TIMER3A__vIRQVectorHandler, &TIMER4A__vIRQVectorHandler, &TIMER5A__vIRQVectorHandler},
        { &TIMER0B__vIRQVectorHandler, &TIMER1B__vIRQVectorHandler, &TIMER2B__vIRQVectorHandler, &TIMER3B__vIRQVectorHandler, &TIMER4B__vIRQVectorHandler, &TIMER5B__vIRQVectorHandler},
    },
    {
        { &WTIMER0A__vIRQVectorHandler, &WTIMER1A__vIRQVectorHandler, &WTIMER2A__vIRQVectorHandler, &WTIMER3A__vIRQVectorHandler, &WTIMER4A__vIRQVectorHandler, &WTIMER5A__vIRQVectorHandler},
        { &WTIMER0B__vIRQVectorHandler, &WTIMER1B__vIRQVectorHandler, &WTIMER2B__vIRQVectorHandler, &WTIMER3B__vIRQVectorHandler, &WTIMER4B__vIRQVectorHandler, &WTIMER5B__vIRQVectorHandler}
    }
};
