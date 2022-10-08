/**
 *
 * @file TIMER_MatchEventAction.c
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
 * @verbatim 11 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_MatchEventAction.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetMatchEventAction(TIMER_nMODULE enModule, TIMER_nMATCH_EVENT enMatchEventParam)
{
    TIMER__vSetModeGeneric(enModule, (UBase_t) enMatchEventParam,
                       GPTM_TA_TnMR_TCACT_MASK, GPTM_TA_TnMR_R_TCACT_BIT);
}

TIMER_nMATCH_EVENT TIMER__enGetMatchEventAction(TIMER_nMODULE enModule)
{
    TIMER_nMATCH_EVENT enMatchEventReg = TIMER_enMATCH_EVENT_DISABLE;
    enMatchEventReg = (TIMER_nMATCH_EVENT) TIMER__uxGetModeGeneric(enModule,
                                 GPTM_TA_TnMR_TCACT_MASK, GPTM_TA_TnMR_R_TCACT_BIT);
    return (enMatchEventReg);
}



