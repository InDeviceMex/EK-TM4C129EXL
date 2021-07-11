/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_16_Module7.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module7.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void GPTM7B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;

    u32Reg = (uint32_t) GPTM7_TB_TnMIS_R;

    if((uint32_t) TIMER_enINT_TB_TIMEOUT & u32Reg)
    {
        GPTM7_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_TIMEOUT;
        TIMER__vIRQSourceHandler [(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_7][(uint32_t) TIMER_enINTERRUPT_TIMEOUT]();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_MATCH & u32Reg)
    {
        GPTM7_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler [(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_7][(uint32_t) TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_EVENT & u32Reg)
    {
        GPTM7_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler [(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_7][(uint32_t) TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if((uint32_t) TIMER_enINT_TB_MATCH & u32Reg)
    {
        GPTM7_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_MATCH;
        TIMER__vIRQSourceHandler [(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_7][(uint32_t) TIMER_enINTERRUPT_MATCH]();
    }
    if((uint32_t) TIMER_enINT_TB_DMA & u32Reg)
    {
        GPTM7_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_DMA;
        TIMER__vIRQSourceHandler [(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_7][(uint32_t) TIMER_enINTERRUPT_DMA]();
    }
}
