/**
 *
 * @file TIMER_Stall.c
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
#include <xDriver_MCU/TIMER/Driver/Control/xHeader/TIMER_Stall.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Control/xHeader/TIMER_ControlGeneric.h>

void TIMER__vSetStall(TIMER_nMODULE enModule, TIMER_nSTALL enStallParam)
{
    TIMER__vSetControlGeneric(enModule, (uint32_t) enStallParam, GPTM_TA_TnCTL_TnSTALL_MASK, GPTM_TA_TnCTL_R_TnSTALL_BIT);
}

TIMER_nSTALL TIMER__enGetStall(TIMER_nMODULE enModule)
{
    return (TIMER_nSTALL) TIMER__u32GetControlGeneric(enModule, GPTM_TA_TnCTL_TnSTALL_MASK, GPTM_TA_TnCTL_R_TnSTALL_BIT);
}
