/**
 *
 * @file ADC_InterruptRoutine_Source.c
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
 * @verbatim 19 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>

static void ADC_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument);
static void ADC_vIRQSourceHandler_DummyNonBlocking(uintptr_t uptrModuleArg, void* pvArgument);


static ADC_pvfIRQSourceHandler_t ADC_Sequencer_vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX]
                                                               [(uint32_t)ADC_enSEQ_MAX]
                                                               [(uint32_t)ADC_enINT_TYPE_MAX] =
{
 {
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy
     }
 },

 {
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_DummyNonBlocking, &ADC_vIRQSourceHandler_DummyNonBlocking,
          &ADC_vIRQSourceHandler_DummyNonBlocking
     }
 },
};

static ADC_pvfIRQSourceHandler_t ADC_SW_vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX]
                                                           [(uint32_t)ADC_enSEQ_MAX] =
{
    {
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
    },

    {
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
    },
};


static ADC_pvfIRQSourceHandler_t ADC_Comparator_vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX]
                                                             [(uint32_t)ADC_enSEQ_MAX]
                                                             [(uint32_t)ADC_enCOMPARATOR_MAX] =
{
  {
   {
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
   },
   {
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
    },
    {
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
      },
  },
  {
   {
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
   },
   {
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
    },
    {
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
      },
  },
};


static void ADC_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument)
{
    (void) uptrModuleArg;
    (void) pvArgument;

    while(1UL){}
}

static void ADC_vIRQSourceHandler_DummyNonBlocking(uintptr_t uptrModuleArg, void* pvArgument)
{
    (void) uptrModuleArg;
    (void) pvArgument;
}

ADC_pvfIRQSourceHandler_t ADC_SW__pvfGetIRQSourceHandler(ADC_nMODULE enModuleArg,
                                                         ADC_nSEQUENCER enSequencerArg)
{
    ADC_pvfIRQSourceHandler_t pvfFunctionReg;

    pvfFunctionReg = ADC_SW_vIRQSourceHandler[(uint32_t) enModuleArg]
                                              [(uint32_t) enSequencerArg];

    return (pvfFunctionReg);
}


ADC_pvfIRQSourceHandler_t* ADC_SW__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enModuleArg,
                                                                 ADC_nSEQUENCER enSequencerArg)
{
    ADC_pvfIRQSourceHandler_t* pvfFunctionReg;

    pvfFunctionReg = &ADC_SW_vIRQSourceHandler[(uint32_t) enModuleArg]
                                               [(uint32_t) enSequencerArg];

    return (pvfFunctionReg);
}

ADC_pvfIRQSourceHandler_t ADC_Sequencer__pvfGetIRQSourceHandler(ADC_nMODULE enModuleArg,
                                                             ADC_nSEQUENCER enSequencerArg,
                                                             ADC_nINT_TYPE enIntTypeArg)
{
    ADC_pvfIRQSourceHandler_t pvfFunctionReg;

    pvfFunctionReg = ADC_Sequencer_vIRQSourceHandler[(uint32_t) enModuleArg]
                                                  [(uint32_t)enSequencerArg]
                                                  [(uint32_t)enIntTypeArg];

    return (pvfFunctionReg);
}


ADC_pvfIRQSourceHandler_t* ADC_Sequencer__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enModuleArg,
                                                                     ADC_nSEQUENCER enSequencerArg,
                                                                     ADC_nINT_TYPE enIntTypeArg)
{
    ADC_pvfIRQSourceHandler_t* pvfFunctionReg;

    pvfFunctionReg = &ADC_Sequencer_vIRQSourceHandler[(uint32_t) enModuleArg]
                                                    [(uint32_t)enSequencerArg]
                                                    [(uint32_t)enIntTypeArg];

    return (pvfFunctionReg);
}


ADC_pvfIRQSourceHandler_t ADC_Comparator__pvfGetIRQSourceHandler(ADC_nMODULE enModuleArg,
                                                             ADC_nSEQUENCER enSequencerArg,
                                                             ADC_nCOMPARATOR enComparatorArg)
{
    ADC_pvfIRQSourceHandler_t pvfFunctionReg;

    pvfFunctionReg = ADC_Comparator_vIRQSourceHandler[(uint32_t) enModuleArg]
                                                  [(uint32_t)enSequencerArg]
                                                  [(uint32_t)enComparatorArg];

    return (pvfFunctionReg);
}


ADC_pvfIRQSourceHandler_t* ADC_Comparator__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enModuleArg,
                                                                     ADC_nSEQUENCER enSequencerArg,
                                                                     ADC_nCOMPARATOR enComparatorArg)
{
    ADC_pvfIRQSourceHandler_t* pvfFunctionReg;

    pvfFunctionReg = &ADC_Comparator_vIRQSourceHandler[(uint32_t) enModuleArg]
                                                    [(uint32_t)enSequencerArg]
                                                    [(uint32_t)enComparatorArg];

    return (pvfFunctionReg);
}
