/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_16_Module2.c
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
#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_16_Module2.h>

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

void GPTM2A__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = (uint32_t) GPTM2_TA_TnMIS_R;

    if((uint32_t) TIMER_enINT_TA_TIMEOUT & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_TIMEOUT;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_2, TIMER_enINTERRUPT_TIMEOUT);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TA_CAPTURE_MATCH & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_CAPTURE_MATCH;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_2, TIMER_enINTERRUPT_CAPTURE_MATCH);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TA_CAPTURE_EVENT & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_CAPTURE_EVENT;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_2, TIMER_enINTERRUPT_CAPTURE_EVENT);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TW_RTC & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TW_RTC;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_2, TIMER_enINTERRUPT_RTC);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TA_MATCH & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_MATCH;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_2, TIMER_enINTERRUPT_MATCH);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TA_DMA & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_DMA;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A, TIMER_enMODULE_NUM_2, TIMER_enINTERRUPT_DMA);
        pfvCallback();
    }
}
