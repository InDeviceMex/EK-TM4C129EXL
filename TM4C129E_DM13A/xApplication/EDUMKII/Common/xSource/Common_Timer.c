/**
 *
 * @file Common_Timer.c
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
 * @verbatim 17 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/EDUMKII/Common/xHeader/Common_Timer.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/TIMER.h>



void EDUMKII_Common_vTimerInit(void)
{
    TIMER_EXTRAMODE_Typedef pstExtraMode;
    static uint32_t u32Init = 0UL;
    if(0UL == u32Init)
    {
        pstExtraMode.enWaitTrigger = TIMER_enWAIT_NOTRIGGER;
        pstExtraMode.enPWMInterrupt = TIMER_enPWM_INT_DIS;
        pstExtraMode.enEventInterrupt = TIMER_enEVENT_INT_DIS;
        pstExtraMode.enUpdateMatch = TIMER_enUPDATE_MATCH_TIMEOUT;
        pstExtraMode.enStall = TIMER_enSTALL_FREEZE;
        pstExtraMode.enRTCStall = TIMER_enRTC_STALL_FREEZE;
        pstExtraMode.enADCTrigger = TIMER_enADC_TRIGGER_ENA;

        TIMER__enSetExtraModeStruct(TIMER_enT5A, &pstExtraMode);
        TIMER__enSetMode_Reload(TIMER_enT5A, TIMER_enMODE_PERIODIC_INDIVIDUAL_UP, 800000U-1U);
        TIMER__vSetEnable(TIMER_enT5A, TIMER_enENABLE_START);
        u32Init = 1UL;
    }
}


