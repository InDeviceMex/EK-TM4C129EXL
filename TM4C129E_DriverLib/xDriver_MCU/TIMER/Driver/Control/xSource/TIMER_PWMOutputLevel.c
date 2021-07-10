/**
 *
 * @file TIMER_PWMOutputLevel.c
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
#include <xDriver_MCU/TIMER/Driver/Control/xHeader/TIMER_PWMOutputLevel.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Control/xHeader/TIMER_ControlGeneric.h>

void TIMER__vSetPWMOutputLevel(TIMER_nMODULE enModule, TIMER_nPWM_OUTPUT enPWMOutputLevel)
{
    TIMER__vSetControlGeneric(enModule, (uint32_t) enPWMOutputLevel, GPTM_TA_TnCTL_TnPWML_MASK, GPTM_TA_TnCTL_R_TnPWML_BIT);
}

TIMER_nPWM_OUTPUT TIMER__enGetPWMOutputLevel(TIMER_nMODULE enModule)
{
    return (TIMER_nPWM_OUTPUT) TIMER__u32GetControlGeneric(enModule, GPTM_TA_TnCTL_TnPWML_MASK, GPTM_TA_TnCTL_R_TnPWML_BIT);
}
