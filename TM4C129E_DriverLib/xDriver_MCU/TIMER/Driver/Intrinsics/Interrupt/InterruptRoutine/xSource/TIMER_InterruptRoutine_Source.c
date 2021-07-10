/**
 *
 * @file TIMER_InterruptRoutine_Source.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>

void TIMER_vIRQSourceHandler_Dummy(void);

void (*TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX - 1UL][(uint32_t) TIMER_enMODULE_NUM_MAX][(uint32_t) TIMER_enINTERRUPT_MAX]) (void) = {
{
    {
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy}
    },
    {
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy}
    }
},
{
    {
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy}
    },
    {
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy},
        { &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy}
    }
},
};

void TIMER_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}
