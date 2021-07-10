/**
 *
 * @file TIMER_PWMOutputInit.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_PWMOutputInit.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetPWMOutputInit(TIMER_nMODULE enModule, TIMER_nPWM_OUT_INIT enPWMOutputInit)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enPWMOutputInit, GPTM_TA_TnMR_TnPLO_MASK, GPTM_TA_TnMR_R_TnPLO_BIT);
}

TIMER_nPWM_OUT_INIT TIMER__enGetPWMOutputInit(TIMER_nMODULE enModule)
{
    return (TIMER_nPWM_OUT_INIT) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnPLO_MASK, GPTM_TA_TnMR_R_TnPLO_BIT);
}
