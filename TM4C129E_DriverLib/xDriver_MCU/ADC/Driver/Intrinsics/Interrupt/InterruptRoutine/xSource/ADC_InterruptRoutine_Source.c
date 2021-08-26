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

static void ADC_vIRQSourceHandler_Dummy(void);

void (*ADC_Sample__vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX]
                                    [(uint32_t)ADC_enSEQ_MAX]
                                    [(uint32_t)ADC_enINT_SOURCE_MAX])(void) =
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
             &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
             &ADC_vIRQSourceHandler_Dummy
        }
    },
};

void (*ADC_SW__vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX]
                                    [(uint32_t)ADC_enSEQ_MAX])(void) =
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


void (*ADC_Comp__vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX]
                                  [(uint32_t)ADC_enSEQ_MAX]
                                  [(uint32_t)ADC_enCOMPARATOR_MAX])(void) =
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

static void ADC_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}

void (*ADC_SW__pvfGetIRQSourceHandler(ADC_nMODULE enADCSubmodule,
                                          ADC_nSEQUENCER enADCSequencerNum))(void)
{
    void(*pvfReg)(void) = (void(*)(void)) 0UL;
    pvfReg = ADC_SW__vIRQSourceHandler[(uint32_t) enADCSubmodule]
                                          [(uint32_t)enADCSequencerNum];
    return (pvfReg);
}

void (**ADC_SW__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enADCSubmodule,
                                              ADC_nSEQUENCER enADCSequencerNum))(void)
{
    void(**pvfReg)(void) = (void(**)(void)) 0UL;
    pvfReg = (void(**)(void)) &ADC_SW__vIRQSourceHandler[(uint32_t) enADCSubmodule]
                                                            [(uint32_t)enADCSequencerNum];
    return (pvfReg);
}

void (*ADC_Sample__pvfGetIRQSourceHandler(ADC_nMODULE enADCSubmodule,
                                          ADC_nSEQUENCER enADCSequencerNum,
                                          ADC_nINT_SOURCE enADCIntSource))(void)
{
    void(*pvfReg)(void) = (void(*)(void)) 0UL;
    pvfReg = ADC_Sample__vIRQSourceHandler[(uint32_t) enADCSubmodule]
                                          [(uint32_t)enADCSequencerNum]
                                          [(uint32_t)enADCIntSource];
    return (pvfReg);
}

void (**ADC_Sample__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enADCSubmodule,
                                                  ADC_nSEQUENCER enADCSequencerNum,
                                                  ADC_nINT_SOURCE enADCIntSource))(void)
{
    void(**pvfReg)(void) = (void(**)(void)) 0UL;
    pvfReg = (void(**)(void)) &ADC_Sample__vIRQSourceHandler[(uint32_t) enADCSubmodule]
                                                            [(uint32_t)enADCSequencerNum]
                                                            [(uint32_t)enADCIntSource];
    return (pvfReg);
}

void (*ADC_Comp__pvfGetIRQSourceHandler(ADC_nMODULE enADCSubmodule,
                                        ADC_nSEQUENCER enADCSequencerNum,
                                        ADC_nCOMPARATOR enComparatorArg))(void)
{
    void(*pvfReg)(void) = (void(*)(void)) 0UL;
    pvfReg = ADC_Comp__vIRQSourceHandler[(uint32_t) enADCSubmodule]
                                        [(uint32_t)enADCSequencerNum]
                                        [(uint32_t)enComparatorArg];
    return (pvfReg);
}

void (**ADC_Comp__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enADCSubmodule, ADC_nSEQUENCER enADCSequencerNum, ADC_nCOMPARATOR enComparatorArg))(void)
{
    void(**pvfReg)(void) = (void(**)(void)) 0UL;
    pvfReg = (void(**)(void)) &ADC_Comp__vIRQSourceHandler[(uint32_t) enADCSubmodule]
                                                          [(uint32_t)enADCSequencerNum]
                                                          [(uint32_t)enComparatorArg];
    return (pvfReg);
}
