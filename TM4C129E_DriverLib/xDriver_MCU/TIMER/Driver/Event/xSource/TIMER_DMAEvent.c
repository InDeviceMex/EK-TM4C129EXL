/**
 *
 * @file TIMER_DMAEvent.c
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
#include <xDriver_MCU/TIMER/Driver/Event/xHeader/TIMER_DMAEvent.h>
#include <xDriver_MCU/TIMER/Driver/Event/xHeader/TIMER_EventCommon.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>


void TIMER__vSetDMAEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam)
{

    TIMER__vSetEvent(enModule, enEventParam, GPTM_DMAEV_OFFSET);
}

TIMER_nEVENT TIMER__enGetDMAEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam)
{
    TIMER_nEVENT enReturn = TIMER_enEVENT_TIMEOUT;
    enReturn = TIMER__enGetEvent(enModule, enEventParam, GPTM_DMAEV_OFFSET);
    return (enReturn);
}
