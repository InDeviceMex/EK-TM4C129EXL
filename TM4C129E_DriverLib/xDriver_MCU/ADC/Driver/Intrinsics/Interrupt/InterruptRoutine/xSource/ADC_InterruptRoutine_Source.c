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

void (*ADC_Sample__vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX][(uint32_t)ADC_enSEQ_MAX][(uint32_t)ADC_enINT_SOURCE_MAX])(void) =
{
 {
  {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy},
  {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy},
  {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy},
  {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy}
 },

 {
   {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy},
   {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy},
   {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy},
   {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy}
 },
};

void (*ADC_Comp__vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX][(uint32_t)ADC_enSEQ_MAX][(uint32_t)ADC_enCOMPARATOR_MAX])(void) =
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

void (*ADC_Sample__pvfGetIRQSourceHandler(ADC_nMODULE enADCSubmodule, ADC_nSEQUENCER enADCSequencerNum, ADC_nINT_SOURCE enADCIntSource))(void)
{
    return (ADC_Sample__vIRQSourceHandler[(uint32_t) enADCSubmodule][(uint32_t)enADCSequencerNum][(uint32_t)enADCIntSource]);
}

void (**ADC_Sample__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enADCSubmodule, ADC_nSEQUENCER enADCSequencerNum, ADC_nINT_SOURCE enADCIntSource))(void)
{
    return ((void(**)(void)) &ADC_Sample__vIRQSourceHandler[(uint32_t) enADCSubmodule][(uint32_t)enADCSequencerNum][(uint32_t)enADCIntSource]);
}

void (*ADC_Comp__pvfGetIRQSourceHandler(ADC_nMODULE enADCSubmodule, ADC_nSEQUENCER enADCSequencerNum, ADC_nCOMPARATOR enComparatorArg))(void)
{
    return (ADC_Comp__vIRQSourceHandler[(uint32_t) enADCSubmodule][(uint32_t)enADCSequencerNum][(uint32_t)enComparatorArg]);
}

void (**ADC_Comp__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enADCSubmodule, ADC_nSEQUENCER enADCSequencerNum, ADC_nCOMPARATOR enComparatorArg))(void)
{
    return ((void(**)(void)) &ADC_Comp__vIRQSourceHandler[(uint32_t) enADCSubmodule][(uint32_t)enADCSequencerNum][(uint32_t)enComparatorArg]);
}
