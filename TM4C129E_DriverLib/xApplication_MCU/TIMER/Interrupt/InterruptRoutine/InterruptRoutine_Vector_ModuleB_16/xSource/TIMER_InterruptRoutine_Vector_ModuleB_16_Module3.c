/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_16_Module3.c
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
#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module3.h>

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

void GPTM3B__vIRQVectorHandler(void)
{
    volatile UBase_t uxReg = 0UL;
    volatile UBase_t uxReady = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReady = SYSCTL_PRTIMER_R;
    if(SYSCTL_PRTIMER_R_TIMER3_NOREADY == (SYSCTL_PRTIMER_R_TIMER3_MASK & uxReady))
    {
        pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                    TIMER_enMODULE_NUM_3,
                                                    TIMER_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        uxReg = (UBase_t) GPTM3_TB_TnMIS_R;

        if(0UL == ((UBase_t) TIMER_enINT_TB_ALL & uxReg))
        {
            pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                        TIMER_enMODULE_NUM_3,
                                                        TIMER_enINTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((UBase_t) TIMER_enINT_TB_TIMEOUT & uxReg)
            {
                GPTM3_TB_TnICR_R = (UBase_t) TIMER_enINT_TB_TIMEOUT;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_3,
                                                            TIMER_enINTERRUPT_TIMEOUT);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TB_CAPTURE_MATCH & uxReg)
            {
                GPTM3_TB_TnICR_R = (UBase_t) TIMER_enINT_TB_CAPTURE_MATCH;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_3,
                                                            TIMER_enINTERRUPT_CAPTURE_MATCH);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TB_CAPTURE_EVENT & uxReg)
            {
                GPTM3_TB_TnICR_R = (UBase_t) TIMER_enINT_TB_CAPTURE_EVENT;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_3,
                                                            TIMER_enINTERRUPT_CAPTURE_EVENT);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TW_RTC & uxReg)
            {
                GPTM3_TB_TnICR_R = (UBase_t) TIMER_enINT_TW_RTC;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_3,
                                                            TIMER_enINTERRUPT_RTC);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TB_MATCH & uxReg)
            {
                GPTM3_TB_TnICR_R = (UBase_t) TIMER_enINT_TB_MATCH;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_3,
                                                            TIMER_enINTERRUPT_MATCH);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TB_DMA & uxReg)
            {
                GPTM3_TB_TnICR_R = (UBase_t) TIMER_enINT_TB_DMA;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_3,
                                                            TIMER_enINTERRUPT_DMA);
                pvfCallback();
            }
        }
    }
}
