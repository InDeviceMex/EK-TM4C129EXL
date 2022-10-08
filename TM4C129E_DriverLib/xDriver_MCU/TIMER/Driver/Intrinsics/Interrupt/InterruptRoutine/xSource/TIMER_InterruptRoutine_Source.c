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

void TIMER_vIRQSourceHandler_Dummy_Blocking(void);
void TIMER_vIRQSourceHandler_Dummy(void);

void (*TIMER__vIRQSourceHandler [(UBase_t) TIMER_enSUBMODULE_MAX - 1UL]
                                [(UBase_t) TIMER_enMODULE_NUM_MAX]
                                 [(UBase_t) TIMER_enINTERRUPT_MAX]) (void) =
{
    {
        {
            &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
            &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
            &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
            &TIMER_vIRQSourceHandler_Dummy_Blocking
        },
        {
             &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking
        },
        {
             &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking
        },
        {
             &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking
        },
        {
             &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking
        },
        {
             &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking
        },
        {
             &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking
        },
        {
             &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking
        }
    },
    {
         {
             &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
             &TIMER_vIRQSourceHandler_Dummy_Blocking
         },
         {
              &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking
         },
         {
              &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking
         },
         {
              &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking
         },
         {
              &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking
         },
         {
              &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking
         },
         {
              &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking
         },
         {
              &TIMER_vIRQSourceHandler_Dummy, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking, &TIMER_vIRQSourceHandler_Dummy_Blocking,
              &TIMER_vIRQSourceHandler_Dummy_Blocking
         }
    }

};

void TIMER_vIRQSourceHandler_Dummy(void)
{
}

void TIMER_vIRQSourceHandler_Dummy_Blocking(void)
{
    while(1UL){}
}



void (*TIMER__pvfGetIRQSourceHandler(TIMER_nSUBMODULE enTIMERSubmodule,
                                     TIMER_nMODULE_NUM enTIMERModuleNumber,
                                     TIMER_nINTERRUPT enTIMERInterruptNum))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = TIMER__vIRQSourceHandler[(UBase_t) enTIMERSubmodule]
                                              [(UBase_t) enTIMERModuleNumber]
                                              [(UBase_t)enTIMERInterruptNum];
    return (pvfFunctionReg);
}

void (**TIMER__pvfGetIRQSourceHandlerPointer(TIMER_nSUBMODULE enTIMERSubmodule,
                                             TIMER_nMODULE_NUM enTIMERModuleNumber,
                                             TIMER_nINTERRUPT enTIMERInterruptNum))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &TIMER__vIRQSourceHandler[(UBase_t) enTIMERSubmodule]
                                                               [(UBase_t) enTIMERModuleNumber]
                                                                [(UBase_t)enTIMERInterruptNum];
    return (pvfFunctionReg);
}
