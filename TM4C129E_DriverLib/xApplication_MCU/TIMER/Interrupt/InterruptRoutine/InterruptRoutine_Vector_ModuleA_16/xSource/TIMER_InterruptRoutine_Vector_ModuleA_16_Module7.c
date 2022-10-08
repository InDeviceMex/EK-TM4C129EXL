/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_16_Module7.c
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
#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_16_Module7.h>

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

void GPTM7A__vIRQVectorHandler(void)
{
    volatile UBase_t uxReg = 0UL;
    volatile UBase_t uxReady = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReady = SYSCTL_PRTIMER_R;
    if(SYSCTL_PRTIMER_R_TIMER7_NOREADY == (SYSCTL_PRTIMER_R_TIMER7_MASK & uxReady))
    {
        pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                    TIMER_enMODULE_NUM_7,
                                                    TIMER_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        uxReg = (UBase_t) GPTM7_TA_TnMIS_R;

        if(0UL == ((UBase_t) TIMER_enINT_TA_ALL & uxReg))
        {
            pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                        TIMER_enMODULE_NUM_7,
                                                        TIMER_enINTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((UBase_t) TIMER_enINT_TA_TIMEOUT & uxReg)
            {
                GPTM7_TA_TnICR_R = (UBase_t) TIMER_enINT_TA_TIMEOUT;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_7,
                                                            TIMER_enINTERRUPT_TIMEOUT);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TA_CAPTURE_MATCH & uxReg)
            {
                GPTM7_TA_TnICR_R = (UBase_t) TIMER_enINT_TA_CAPTURE_MATCH;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_7,
                                                            TIMER_enINTERRUPT_CAPTURE_MATCH);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TA_CAPTURE_EVENT & uxReg)
            {
                GPTM7_TA_TnICR_R = (UBase_t) TIMER_enINT_TA_CAPTURE_EVENT;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_7,
                                                            TIMER_enINTERRUPT_CAPTURE_EVENT);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TW_RTC & uxReg)
            {
                GPTM7_TA_TnICR_R = (UBase_t) TIMER_enINT_TW_RTC;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_7,
                                                            TIMER_enINTERRUPT_RTC);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TA_MATCH & uxReg)
            {
                GPTM7_TA_TnICR_R = (UBase_t) TIMER_enINT_TA_MATCH;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_7,
                                                            TIMER_enINTERRUPT_MATCH);
                pvfCallback();
            }
            if((UBase_t) TIMER_enINT_TA_DMA & uxReg)
            {
                GPTM7_TA_TnICR_R = (UBase_t) TIMER_enINT_TA_DMA;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_7,
                                                            TIMER_enINTERRUPT_DMA);
                pvfCallback();
            }
        }
    }
}
