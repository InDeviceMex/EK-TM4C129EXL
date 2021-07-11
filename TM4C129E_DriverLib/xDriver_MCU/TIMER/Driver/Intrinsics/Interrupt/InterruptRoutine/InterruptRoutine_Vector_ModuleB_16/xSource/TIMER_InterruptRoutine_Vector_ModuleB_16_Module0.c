/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_16_Module0.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module0.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void GPTM0B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = (uint32_t) GPTM0_TB_TnMIS_R;

    if((uint32_t) TIMER_enINT_TB_TIMEOUT & u32Reg)
    {
        GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_TIMEOUT;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_0, TIMER_enINTERRUPT_TIMEOUT);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_MATCH & u32Reg)
    {
        GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_MATCH;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_0, TIMER_enINTERRUPT_CAPTURE_MATCH);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_EVENT & u32Reg)
    {
        GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_EVENT;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_0, TIMER_enINTERRUPT_CAPTURE_EVENT);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TB_MATCH & u32Reg)
    {
        GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_MATCH;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_0, TIMER_enINTERRUPT_MATCH);
        pfvCallback();
    }
    if((uint32_t) TIMER_enINT_TB_DMA & u32Reg)
    {
        GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_DMA;
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B, TIMER_enMODULE_NUM_0, TIMER_enINTERRUPT_DMA);
        pfvCallback();
    }
}
