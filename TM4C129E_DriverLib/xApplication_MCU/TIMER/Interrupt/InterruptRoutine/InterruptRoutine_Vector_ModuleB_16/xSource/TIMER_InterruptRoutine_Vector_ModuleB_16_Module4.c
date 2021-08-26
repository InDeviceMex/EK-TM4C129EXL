/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_16_Module4.c
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
#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module4.h>

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

void GPTM4B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCTIMER_R;
    u32Enable |= SYSCTL_SCGCTIMER_R;
    u32Enable |= SYSCTL_DCGCTIMER_R;
    if(SYSCTL_RCGCTIMER_R_TIMER4_DIS == (SYSCTL_RCGCTIMER_R_TIMER4_MASK & u32Enable))
    {
        pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                    TIMER_enMODULE_NUM_4,
                                                    TIMER_enINTERRUPT_SW);
        pfvCallback();
    }
    else
    {
        u32Reg = (uint32_t) GPTM4_TB_TnMIS_R;

        if(0UL == ((uint32_t) TIMER_enINT_TB_ALL & u32Reg))
        {
            pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                        TIMER_enMODULE_NUM_4,
                                                        TIMER_enINTERRUPT_SW);
            pfvCallback();
        }
        else
        {
            if((uint32_t) TIMER_enINT_TB_TIMEOUT & u32Reg)
            {
                GPTM4_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_TIMEOUT;
                pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_4,
                                                            TIMER_enINTERRUPT_TIMEOUT);
                pfvCallback();
            }
            if((uint32_t) TIMER_enINT_TB_CAPTURE_MATCH & u32Reg)
            {
                GPTM4_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_MATCH;
                pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_4,
                                                            TIMER_enINTERRUPT_CAPTURE_MATCH);
                pfvCallback();
            }
            if((uint32_t) TIMER_enINT_TB_CAPTURE_EVENT & u32Reg)
            {
                GPTM4_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_EVENT;
                pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_4,
                                                            TIMER_enINTERRUPT_CAPTURE_EVENT);
                pfvCallback();
            }
            if((uint32_t) TIMER_enINT_TW_RTC & u32Reg)
            {
                GPTM4_TB_TnICR_R = (uint32_t) TIMER_enINT_TW_RTC;
                pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_4,
                                                            TIMER_enINTERRUPT_RTC);
                pfvCallback();
            }
            if((uint32_t) TIMER_enINT_TB_MATCH & u32Reg)
            {
                GPTM4_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_MATCH;
                pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_4,
                                                            TIMER_enINTERRUPT_MATCH);
                pfvCallback();
            }
            if((uint32_t) TIMER_enINT_TB_DMA & u32Reg)
            {
                GPTM4_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_DMA;
                pfvCallback = TIMER__pvfGetIRQSourceHandler(TIMER_enSUBMODULE_B,
                                                            TIMER_enMODULE_NUM_4,
                                                            TIMER_enINTERRUPT_DMA);
                pfvCallback();
            }
        }
    }
}
