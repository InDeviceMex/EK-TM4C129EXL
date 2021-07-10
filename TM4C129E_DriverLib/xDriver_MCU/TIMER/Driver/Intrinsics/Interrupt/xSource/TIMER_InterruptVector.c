/**
 *
 * @file TIMER_InterruptVector.c
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/xHeader/TIMER_InterruptVector.h>

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

static NVIC_nSTIR TIMER__enGetInterruptVector(TIMER_nMODULE enModule);

static NVIC_nSTIR TIMER__enGetInterruptVector(TIMER_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_TIMER0A;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    static NVIC_nSTIR NVIC_VECTOR_TIMER[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX - 1UL][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
        {
            {NVIC_enSTIR_TIMER0A, NVIC_enSTIR_TIMER1A, NVIC_enSTIR_TIMER2A, NVIC_enSTIR_TIMER3A, NVIC_enSTIR_TIMER4A, NVIC_enSTIR_TIMER5A},
            {NVIC_enSTIR_TIMER0B, NVIC_enSTIR_TIMER1B, NVIC_enSTIR_TIMER2B, NVIC_enSTIR_TIMER3B, NVIC_enSTIR_TIMER4B, NVIC_enSTIR_TIMER5B},
        },
        {
            {NVIC_enSTIR_WTIMER0A, NVIC_enSTIR_WTIMER1A, NVIC_enSTIR_WTIMER2A, NVIC_enSTIR_WTIMER3A, NVIC_enSTIR_WTIMER4A, NVIC_enSTIR_WTIMER5A},
            {NVIC_enSTIR_WTIMER0B, NVIC_enSTIR_WTIMER1B, NVIC_enSTIR_WTIMER2B, NVIC_enSTIR_WTIMER3B, NVIC_enSTIR_WTIMER4B, NVIC_enSTIR_WTIMER5B},
        }
    };
    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;
    enVector = NVIC_VECTOR_TIMER[u32ModuleSize][u32SubModule][u32ModuleNumber];
    return enVector;
}

void TIMER__vEnInterruptVector(TIMER_nMODULE enModule, TIMER_nPRIORITY enTimerPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_TIMER0A;
    enVector = TIMER__enGetInterruptVector(enModule);
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enTimerPriority);
}

void TIMER__vDisInterruptVector(TIMER_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_TIMER0A;
    enVector = TIMER__enGetInterruptVector(enModule);
    NVIC__vClearEnableIRQ(enVector);
}
