/**
 *
 * @file TIMER_SubMode.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SubMode.h>

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_SubParams.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

void TIMER__vSetSubMode(TIMER_nMODULE enModule, TIMER_nSUB_MODE enSubModeParam)
{
    uint32_t u32Submodule = 0UL;
    TIMER__vGetSubParams(enModule, (uint32_t*) 0UL, &u32Submodule, (uint32_t*) 0UL);
    if((uint32_t) TIMER_enSUBMODULE_W != u32Submodule)
    {
        TIMER__vSetModeGeneric(enModule, (uint32_t) enSubModeParam, GPTM_TA_TnMR_TnMR_MASK, GPTM_TA_TnMR_R_TnMR_BIT);
    }
    else
    {
        if((uint32_t) TIMER_enSUB_MODE_CAPTURE > (uint32_t) enSubModeParam)
        {
            TIMER__vSetModeGeneric(enModule, (uint32_t) enSubModeParam, GPTM_TA_TnMR_TnMR_MASK, GPTM_TA_TnMR_R_TnMR_BIT);
        }
    }
}

TIMER_nSUB_MODE TIMER__enGetSubMode(TIMER_nMODULE enModule)
{
    return (TIMER_nSUB_MODE) TIMER__u32GetModeGeneric(enModule, GPTM_TA_TnMR_TnMR_MASK, GPTM_TA_TnMR_R_TnMR_BIT);
}
