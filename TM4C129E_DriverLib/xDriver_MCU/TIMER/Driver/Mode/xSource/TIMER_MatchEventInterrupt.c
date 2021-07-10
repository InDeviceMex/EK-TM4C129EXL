/**
 *
 * @file TIMER_MatchEventInterrupt.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_MatchEventInterrupt.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetMatchEventInterrupt(TIMER_nMODULE enModule, TIMER_nEVENT_INT enEventInterruptParam)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enEventInterruptParam, GPTM_TA_TnMR_TnMIE_MASK, GPTM_TA_TnMR_R_TnMIE_BIT);
}

TIMER_nEVENT_INT TIMER__enGetMatchEventInterrupt(TIMER_nMODULE enModule)
{
    return (TIMER_nEVENT_INT) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnMIE_MASK, GPTM_TA_TnMR_R_TnMIE_BIT);
}
