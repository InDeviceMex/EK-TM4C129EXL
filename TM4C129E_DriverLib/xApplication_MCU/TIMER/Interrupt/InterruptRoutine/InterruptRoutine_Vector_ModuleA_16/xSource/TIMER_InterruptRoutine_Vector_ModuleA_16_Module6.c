/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_16_Module6.c
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
#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_16_Module6.h>

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

void GPTM6A__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Ready = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRTIMER_R;
    if(SYSCTL_PRTIMER_R_TIMER6_NOREADY == (SYSCTL_PRTIMER_R_TIMER6_MASK & u32Ready))
    {
        pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                    TIMER_enMODULE_NUM_6,
                                                    TIMER_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        u32Reg = (uint32_t) GPTM6_TA_TnMIS_R;

        if(0UL == ((uint32_t) TIMER_enINT_TA_ALL & u32Reg))
        {
            pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                        TIMER_enMODULE_NUM_6,
                                                        TIMER_enINTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((uint32_t) TIMER_enINT_TA_TIMEOUT & u32Reg)
            {
                GPTM6_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_TIMEOUT;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_6,
                                                            TIMER_enINTERRUPT_TIMEOUT);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TA_CAPTURE_MATCH & u32Reg)
            {
                GPTM6_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_CAPTURE_MATCH;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_6,
                                                            TIMER_enINTERRUPT_CAPTURE_MATCH);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TA_CAPTURE_EVENT & u32Reg)
            {
                GPTM6_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_CAPTURE_EVENT;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_6,
                                                            TIMER_enINTERRUPT_CAPTURE_EVENT);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TW_RTC & u32Reg)
            {
                GPTM6_TA_TnICR_R = (uint32_t) TIMER_enINT_TW_RTC;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_6,
                                                            TIMER_enINTERRUPT_RTC);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TA_MATCH & u32Reg)
            {
                GPTM6_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_MATCH;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_6,
                                                            TIMER_enINTERRUPT_MATCH);
                pvfCallback();
            }
            if((uint32_t) TIMER_enINT_TA_DMA & u32Reg)
            {
                GPTM6_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_DMA;
                pvfCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_A,
                                                            TIMER_enMODULE_NUM_6,
                                                            TIMER_enINTERRUPT_DMA);
                pvfCallback();
            }
        }
    }
}
