/**
 *
 * @file TIMER_TimeOutInterrupt.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_TimeOutInterrupt.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetTimeOutIntFunctionality(TIMER_nMODULE enModule, TIMER_nTIMEOUT_INT enTimeoutFuncionArg)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enTimeoutFuncionArg, GPTM_TA_TnMR_TnCINTD_MASK, GPTM_TA_TnMR_R_TnCINTD_BIT);
}

TIMER_nTIMEOUT_INT TIMER__enGetTimeOutIntFunctionality(TIMER_nMODULE enModule)
{
    TIMER_nTIMEOUT_INT enReturn = TIMER_enTIMEOUT_INT_NORMAL;
    enReturn = (TIMER_nTIMEOUT_INT) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnCINTD_MASK, GPTM_TA_TnMR_R_TnCINTD_BIT);
    return (enReturn);
}




