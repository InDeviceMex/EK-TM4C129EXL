/**
 *
 * @file TIMER_EdgeEvent.c
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
#include <xDriver_MCU/TIMER/Driver/Control/xHeader/TIMER_EdgeEvent.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Control/xHeader/TIMER_ControlGeneric.h>

void TIMER__vSetEdgeEvent(TIMER_nMODULE enModule, TIMER_nEDGE_EVENT enEdgeEventVar)
{
    TIMER__vSetControlGeneric(enModule, (uint32_t) enEdgeEventVar, GPTM_TA_TnCTL_TnEVENT_MASK, GPTM_TA_TnCTL_R_TnEVENT_BIT);
}

TIMER_nEDGE_EVENT TIMER__enGetEdgeEvent(TIMER_nMODULE enModule)
{
    return (TIMER_nEDGE_EVENT) TIMER__u32GetControlGeneric(enModule, GPTM_TA_TnCTL_TnEVENT_MASK, GPTM_TA_TnCTL_R_TnEVENT_BIT);
}
