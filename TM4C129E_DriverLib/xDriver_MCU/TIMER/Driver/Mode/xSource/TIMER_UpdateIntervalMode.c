/**
 *
 * @file TIMER_UpdateIntervalMode.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_UpdateIntervalMode.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetUpdateIntervalMode(TIMER_nMODULE enModule, TIMER_nUPDATE_INTERVAL enUpdateIntervalMode)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enUpdateIntervalMode, GPTM_TA_TnMR_TnILD_MASK, GPTM_TA_TnMR_R_TnILD_BIT);
}

TIMER_nUPDATE_INTERVAL TIMER__enGetUpdateIntervalMode(TIMER_nMODULE enModule)
{
    return (TIMER_nUPDATE_INTERVAL) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnILD_MASK, GPTM_TA_TnMR_R_TnILD_BIT);
}
