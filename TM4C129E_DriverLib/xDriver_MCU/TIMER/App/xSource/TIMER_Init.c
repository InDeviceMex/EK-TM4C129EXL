/**
 *
 * @file TIMER_Init.c
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/App/xHeader/TIMER_Init.h>

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/TIMER_InterruptRegisterIRQVector.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>

void TIMER__vInit(void)
{
    TIMER__vRegisterIRQVectorHandler( &TIMER0A__vIRQVectorHandler, TIMER_enT0A);
    TIMER__vRegisterIRQVectorHandler( &TIMER0B__vIRQVectorHandler, TIMER_enT0B);
    TIMER__vRegisterIRQVectorHandler( &TIMER1A__vIRQVectorHandler, TIMER_enT1A);
    TIMER__vRegisterIRQVectorHandler( &TIMER1B__vIRQVectorHandler, TIMER_enT1B);
    TIMER__vRegisterIRQVectorHandler( &TIMER2A__vIRQVectorHandler, TIMER_enT2A);
    TIMER__vRegisterIRQVectorHandler( &TIMER2B__vIRQVectorHandler, TIMER_enT2B);
    TIMER__vRegisterIRQVectorHandler( &TIMER3A__vIRQVectorHandler, TIMER_enT3A);
    TIMER__vRegisterIRQVectorHandler( &TIMER3B__vIRQVectorHandler, TIMER_enT3B);
    TIMER__vRegisterIRQVectorHandler( &TIMER4A__vIRQVectorHandler, TIMER_enT4A);
    TIMER__vRegisterIRQVectorHandler( &TIMER4B__vIRQVectorHandler, TIMER_enT4B);
    TIMER__vRegisterIRQVectorHandler( &TIMER5A__vIRQVectorHandler, TIMER_enT5A);
    TIMER__vRegisterIRQVectorHandler( &TIMER5B__vIRQVectorHandler, TIMER_enT5B);

    TIMER__vRegisterIRQVectorHandler( &WTIMER0A__vIRQVectorHandler, TIMER_enWT0A);
    TIMER__vRegisterIRQVectorHandler( &WTIMER0B__vIRQVectorHandler, TIMER_enWT0B);
    TIMER__vRegisterIRQVectorHandler( &WTIMER1A__vIRQVectorHandler, TIMER_enWT1A);
    TIMER__vRegisterIRQVectorHandler( &WTIMER1B__vIRQVectorHandler, TIMER_enWT1B);
    TIMER__vRegisterIRQVectorHandler( &WTIMER2A__vIRQVectorHandler, TIMER_enWT2A);
    TIMER__vRegisterIRQVectorHandler( &WTIMER2B__vIRQVectorHandler, TIMER_enWT2B);
    TIMER__vRegisterIRQVectorHandler( &WTIMER3A__vIRQVectorHandler, TIMER_enWT3A);
    TIMER__vRegisterIRQVectorHandler( &WTIMER3B__vIRQVectorHandler, TIMER_enWT3B);
    TIMER__vRegisterIRQVectorHandler( &WTIMER4A__vIRQVectorHandler, TIMER_enWT4A);
    TIMER__vRegisterIRQVectorHandler( &WTIMER4B__vIRQVectorHandler, TIMER_enWT4B);
    TIMER__vRegisterIRQVectorHandler( &WTIMER5A__vIRQVectorHandler, TIMER_enWT5A);
    TIMER__vRegisterIRQVectorHandler( &WTIMER5B__vIRQVectorHandler, TIMER_enWT5B);
}
