/**
 *
 * @file TIMER_ModeReload.c
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/App/ModeReload/TIMER_ModeReload.h>

#include <xDriver_MCU/TIMER/App/Mode/TIMER_Mode.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Reload.h>

TIMER_nSTATUS TIMER__enSetMode_Reload(TIMER_nMODULE enModule, TIMER_nMODE enMode, uint64_t u64Reload)
{
    TIMER_nSTATUS enReturn = TIMER_enSTATUS_ERROR;
    enReturn = TIMER__enSetMode(enModule, enMode);
    if(TIMER_enSTATUS_OK == enReturn)
    {
        TIMER__vSetReload(enModule, u64Reload);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_Reload(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* pstMode, uint64_t u64Reload)
{
    TIMER_nSTATUS enReturn = TIMER_enSTATUS_ERROR;
    enReturn = TIMER__enSetModeStruct(enModule, pstMode);
    if(TIMER_enSTATUS_OK == enReturn)
    {
        TIMER__vSetReload(enModule, u64Reload);
    }
    return enReturn;
}
