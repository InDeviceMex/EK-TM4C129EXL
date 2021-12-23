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
#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module0.h>

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

void GPTM0B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Ready = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRTIMER_R;
    if(SYSCTL_PRTIMER_R_TIMER0_NOREADY == (SYSCTL_PRTIMER_R_TIMER0_MASK & u32Ready))
    {
        pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                    TIMER_enMODULE_NUM_0,
                                                    TIMER_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        u32Reg = (uint32_t) GPTM0_TB_TnMIS_R;

        if(0UL == ((uint32_t) TIMER_enINT_TB_ALL & u32Reg))
        {
            pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                        TIMER_enMODULE_NUM_0,
                                                        TIMER_enINTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((uint32_t) TIMER_enINT_TB_TIMEOUT & u32Reg)
            {
                GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_TIMEOUT;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_0,
                                                            TIMER_enINTERRUPT_TIMEOUT);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TB_CAPTURE_MATCH & u32Reg)
            {
                GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_MATCH;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_0,
                                                            TIMER_enINTERRUPT_CAPTURE_MATCH);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TB_CAPTURE_EVENT & u32Reg)
            {
                GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_EVENT;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_0,
                                                            TIMER_enINTERRUPT_CAPTURE_EVENT);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TW_RTC & u32Reg)
            {
                GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TW_RTC;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_0,
                                                            TIMER_enINTERRUPT_RTC);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TB_MATCH & u32Reg)
            {
                GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_MATCH;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_0,
                                                            TIMER_enINTERRUPT_MATCH);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TB_DMA & u32Reg)
            {
                GPTM0_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_DMA;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_0,
                                                            TIMER_enINTERRUPT_DMA);
                pvfCallback();
            }
        }
    }
}
