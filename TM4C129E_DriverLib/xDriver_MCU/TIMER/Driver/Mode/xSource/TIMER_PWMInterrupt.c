/**
 *
 * @file TIMER_PWMInterrupt.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_PWMInterrupt.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetPWMInterrupt(TIMER_nMODULE enModule, TIMER_nPWM_INT enPWMInterruptParam)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enPWMInterruptParam, GPTM_TA_TnMR_TnPWMIE_MASK, GPTM_TA_TnMR_R_TnPWMIE_BIT);
}

TIMER_nPWM_INT TIMER__enGetPWMInterrupt(TIMER_nMODULE enModule)
{
    return (TIMER_nPWM_INT) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnPWMIE_MASK, GPTM_TA_TnMR_R_TnPWMIE_BIT);
}
