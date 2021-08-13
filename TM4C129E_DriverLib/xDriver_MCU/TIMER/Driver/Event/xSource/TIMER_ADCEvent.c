/**
 *
 * @file TIMER_ADCEvent.c
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
#include <xDriver_MCU/TIMER/Driver/Event/xHeader/TIMER_ADCEvent.h>
#include <xDriver_MCU/TIMER/Driver/Event/xHeader/TIMER_EventCommon.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>


void TIMER__vSetADCEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam)
{
    TIMER__vSetEvent(enModule, enEventParam, GPTM_ADCEV_OFFSET);
}

TIMER_nEVENT TIMER__enGetADCEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam)
{
    TIMER_nEVENT enReturn = TIMER_enEVENT_TIMEOUT;
    enReturn = TIMER__enGetEvent(enModule, enEventParam, GPTM_ADCEV_OFFSET);
    return (enReturn);
}




