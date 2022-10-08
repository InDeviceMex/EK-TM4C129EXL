/**
 *
 * @file TIMER_InterruptVector.c
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
#include <xApplication_MCU/TIMER/Interrupt/xHeader/TIMER_InterruptVector.h>

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

static NVIC_nVECTOR TIMER__enGetInterruptVector(TIMER_nMODULE enModule);

static NVIC_nVECTOR TIMER__enGetInterruptVector(TIMER_nMODULE enModule)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_TIMER0A;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    static NVIC_nVECTOR NVIC_VECTOR_TIMER[(UBase_t) TIMER_enSUBMODULE_MAX - 1UL][(UBase_t) TIMER_enMODULE_NUM_MAX] =
    {
            {NVIC_enVECTOR_TIMER0A, NVIC_enVECTOR_TIMER1A, NVIC_enVECTOR_TIMER2A, NVIC_enVECTOR_TIMER3A,
             NVIC_enVECTOR_TIMER4A, NVIC_enVECTOR_TIMER5A, NVIC_enVECTOR_TIMER6A, NVIC_enVECTOR_TIMER7A},
            {NVIC_enVECTOR_TIMER0B, NVIC_enVECTOR_TIMER1B, NVIC_enVECTOR_TIMER2B, NVIC_enVECTOR_TIMER3B,
             NVIC_enVECTOR_TIMER4B, NVIC_enVECTOR_TIMER5B, NVIC_enVECTOR_TIMER6B, NVIC_enVECTOR_TIMER7B},
    };
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    uxSubModule &= 0x1UL;
    enVector = NVIC_VECTOR_TIMER [uxSubModule][uxModuleNumber];
    return (enVector);
}

void TIMER__vEnInterruptVector(TIMER_nMODULE enModule, TIMER_nPRIORITY enTimerPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_TIMER0A;
    enVector = TIMER__enGetInterruptVector(enModule);
    NVIC__enEnableVector(NVIC_enMODULE_0, enVector, (NVIC_nPRIORITY) enTimerPriority);
}

void TIMER__vDisInterruptVector(TIMER_nMODULE enModule)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_TIMER0A;
    enVector = TIMER__enGetInterruptVector(enModule);
    NVIC__enDisableVector(NVIC_enMODULE_0, enVector);
}


