/**
 *
 * @file TIMER_WaitTrigger.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_WaitTrigger.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetWaitTrigger(TIMER_nMODULE enModule, TIMER_nWAIT enWaitTriggerParam)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enWaitTriggerParam, GPTM_TA_TnMR_TnWOT_MASK, GPTM_TA_TnMR_R_TnWOT_BIT);
}

TIMER_nWAIT TIMER__enGetWaitTrigger(TIMER_nMODULE enModule)
{
    return (TIMER_nWAIT) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnWOT_MASK, GPTM_TA_TnMR_R_TnWOT_BIT);
}
