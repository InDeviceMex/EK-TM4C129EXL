/**
 *
 * @file TIMER_SnapShot.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SnapShot.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetSnapShot(TIMER_nMODULE enModule, TIMER_nSNAPSHOT enSnapShotParam)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enSnapShotParam, GPTM_TA_TnMR_TnSNAPS_MASK, GPTM_TA_TnMR_R_TnSNAPS_BIT);
}

TIMER_nSNAPSHOT TIMER__enGetSnapShot(TIMER_nMODULE enModule)
{
    return (TIMER_nSNAPSHOT) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnSNAPS_MASK, GPTM_TA_TnMR_R_TnSNAPS_BIT);
}
