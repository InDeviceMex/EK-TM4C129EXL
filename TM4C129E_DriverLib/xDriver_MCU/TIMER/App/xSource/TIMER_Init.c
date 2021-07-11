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
    TIMER__vRegisterIRQVectorHandler( &GPTM0A__vIRQVectorHandler, TIMER_enT0A);
    TIMER__vRegisterIRQVectorHandler( &GPTM0B__vIRQVectorHandler, TIMER_enT0B);
    TIMER__vRegisterIRQVectorHandler( &GPTM1A__vIRQVectorHandler, TIMER_enT1A);
    TIMER__vRegisterIRQVectorHandler( &GPTM1B__vIRQVectorHandler, TIMER_enT1B);
    TIMER__vRegisterIRQVectorHandler( &GPTM2A__vIRQVectorHandler, TIMER_enT2A);
    TIMER__vRegisterIRQVectorHandler( &GPTM2B__vIRQVectorHandler, TIMER_enT2B);
    TIMER__vRegisterIRQVectorHandler( &GPTM3A__vIRQVectorHandler, TIMER_enT3A);
    TIMER__vRegisterIRQVectorHandler( &GPTM3B__vIRQVectorHandler, TIMER_enT3B);
    TIMER__vRegisterIRQVectorHandler( &GPTM4A__vIRQVectorHandler, TIMER_enT4A);
    TIMER__vRegisterIRQVectorHandler( &GPTM4B__vIRQVectorHandler, TIMER_enT4B);
    TIMER__vRegisterIRQVectorHandler( &GPTM5A__vIRQVectorHandler, TIMER_enT5A);
    TIMER__vRegisterIRQVectorHandler( &GPTM5B__vIRQVectorHandler, TIMER_enT5B);
    TIMER__vRegisterIRQVectorHandler( &GPTM6A__vIRQVectorHandler, TIMER_enT6A);
    TIMER__vRegisterIRQVectorHandler( &GPTM6B__vIRQVectorHandler, TIMER_enT6B);
    TIMER__vRegisterIRQVectorHandler( &GPTM7A__vIRQVectorHandler, TIMER_enT7A);
    TIMER__vRegisterIRQVectorHandler( &GPTM7B__vIRQVectorHandler, TIMER_enT7B);
}
