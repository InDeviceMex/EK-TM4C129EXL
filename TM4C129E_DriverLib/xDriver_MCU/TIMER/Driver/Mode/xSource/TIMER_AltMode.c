/**
 *
 * @file TIMER_AltMode.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_AltMode.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetAltMode(TIMER_nMODULE enModule, TIMER_nALT_MODE enAltModeVar)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enAltModeVar, GPTM_TA_TnMR_TnAMS_MASK, GPTM_TA_TnMR_R_TnAMS_BIT);
}

TIMER_nALT_MODE TIMER__enGetAltMode(TIMER_nMODULE enModule)
{
    return (TIMER_nALT_MODE) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnAMS_MASK, GPTM_TA_TnMR_R_TnAMS_BIT);
}
