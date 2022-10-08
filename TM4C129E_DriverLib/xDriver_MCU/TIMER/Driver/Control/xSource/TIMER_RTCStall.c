/**
 *
 * @file TIMER_RTCStall.c
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Control/xHeader/TIMER_RTCStall.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_SubParams.h>
#include <xDriver_MCU/TIMER/Driver/Control/xHeader/TIMER_ControlGeneric.h>

void TIMER__vSetRTCStall(TIMER_nMODULE enModule, TIMER_nRTC_STALL enRTCStallParam)
{
    UBase_t uxSubmodule = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubmodule, (UBase_t*) 0UL);
    if((UBase_t) TIMER_enSUBMODULE_W == uxSubmodule)
    {
        TIMER__vSetControlGeneric(enModule, (UBase_t) enRTCStallParam,
                                  GPTM_TW_TnCTL_RTCEN_MASK, GPTM_TW_TnCTL_R_RTCEN_BIT);
    }
}

TIMER_nRTC_STALL TIMER__enGetRTCStall(TIMER_nMODULE enModule)
{
    TIMER_nRTC_STALL enRtcStallReg = TIMER_enRTC_STALL_FREEZE;
    UBase_t uxSubmodule = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubmodule, (UBase_t*) 0UL);
    if((UBase_t) TIMER_enSUBMODULE_W == uxSubmodule)
    {
        enRtcStallReg = (TIMER_nRTC_STALL) TIMER__uxGetControlGeneric(enModule,
                          GPTM_TW_TnCTL_RTCEN_MASK, GPTM_TW_TnCTL_R_RTCEN_BIT);
    }
    return (enRtcStallReg);
}
