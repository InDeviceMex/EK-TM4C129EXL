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

void (*TIMER__pvIRQVectorHandler [(uint32_t) TIMER_enSUBMODULE_MAX - 1UL][(uint32_t) TIMER_enMODULE_NUM_MAX]) (void) =
{
    {
      &GPTM0A__vIRQVectorHandler, &GPTM1A__vIRQVectorHandler, &GPTM2A__vIRQVectorHandler, &GPTM3A__vIRQVectorHandler,
      &GPTM4A__vIRQVectorHandler, &GPTM5A__vIRQVectorHandler, &GPTM6A__vIRQVectorHandler, &GPTM7A__vIRQVectorHandler
    },

    {
      &GPTM0B__vIRQVectorHandler, &GPTM1B__vIRQVectorHandler, &GPTM2B__vIRQVectorHandler, &GPTM3B__vIRQVectorHandler,
      &GPTM4B__vIRQVectorHandler, &GPTM5B__vIRQVectorHandler, &GPTM6B__vIRQVectorHandler, &GPTM7B__vIRQVectorHandler
    },
};

void (*TIMER__pvfGetIRQVectorHandler(TIMER_nSUBMODULE enTIMERSubmodule, TIMER_nMODULE_NUM enTIMERModuleNumber))(void)
{
    return (TIMER__pvIRQVectorHandler[(uint32_t) enTIMERSubmodule][(uint32_t) enTIMERModuleNumber]);
}

void (**TIMER__pvfGetIRQVectorHandlerPointer(TIMER_nSUBMODULE enTIMERSubmodule, TIMER_nMODULE_NUM enTIMERModuleNumber))(void)
{
    return ((void(**)(void)) &TIMER__pvIRQVectorHandler[(uint32_t) enTIMERSubmodule][(uint32_t) enTIMERModuleNumber]);
}
