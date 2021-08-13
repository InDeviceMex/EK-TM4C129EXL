/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_16_Module6.c
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
 * @verbatim 10 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module6.h>

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

void GPTM6B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = (uint32_t) GPTM6_TB_TnMIS_R;

    if((uint32_t) TIMER_enINT_TB_TIMEOUT & u32Reg)
    {
        GPTM6_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_TIMEOUT;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_6, TIMER_enINTERRUPT_TIMEOUT);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_MATCH & u32Reg)
    {
        GPTM6_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_MATCH;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_6, TIMER_enINTERRUPT_CAPTURE_MATCH);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_EVENT & u32Reg)
    {
        GPTM6_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_EVENT;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_6, TIMER_enINTERRUPT_CAPTURE_EVENT);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TB_MATCH & u32Reg)
    {
        GPTM6_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_MATCH;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_6, TIMER_enINTERRUPT_MATCH);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TB_DMA & u32Reg)
    {
        GPTM6_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_DMA;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_6, TIMER_enINTERRUPT_DMA);
        pfvCallback();
    }
}
