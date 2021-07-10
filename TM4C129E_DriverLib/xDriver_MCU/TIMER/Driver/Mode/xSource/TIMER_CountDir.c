/**
 *
 * @file TIMER_CountDir.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_CountDir.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetCountDir(TIMER_nMODULE enModule, TIMER_nCOUNT_DIR enCountDir)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enCountDir, GPTM_TA_TnMR_TnCDIR_MASK, GPTM_TA_TnMR_R_TnCDIR_BIT);
}

TIMER_nCOUNT_DIR TIMER__enGetCountDir(TIMER_nMODULE enModule)
{
    return (TIMER_nCOUNT_DIR) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnCDIR_MASK, GPTM_TA_TnMR_R_TnCDIR_BIT);
}
