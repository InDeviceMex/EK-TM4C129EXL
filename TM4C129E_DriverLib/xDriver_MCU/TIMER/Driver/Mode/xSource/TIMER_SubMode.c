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
    UBase_t uxSubmodule = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubmodule, (UBase_t*) 0UL);
    if((UBase_t) TIMER_enSUBMODULE_W != uxSubmodule)
    {
        TIMER__vSetModeGeneric(enModule, (UBase_t) enSubModeParam,
                               GPTM_TA_TnMR_TnMR_MASK, GPTM_TA_TnMR_R_TnMR_BIT);
    }
    else
    {
        if((UBase_t) TIMER_enSUB_MODE_CAPTURE > (UBase_t) enSubModeParam)
        {
            TIMER__vSetModeGeneric(enModule, (UBase_t) enSubModeParam,
                                   GPTM_TA_TnMR_TnMR_MASK, GPTM_TA_TnMR_R_TnMR_BIT);
        }
    }
}

TIMER_nSUB_MODE TIMER__enGetSubMode(TIMER_nMODULE enModule)
{
    TIMER_nSUB_MODE enSubModeReg = TIMER_enSUB_MODE_RESERVED;
    enSubModeReg = (TIMER_nSUB_MODE) TIMER__uxGetModeGeneric(enModule,
                              GPTM_TA_TnMR_TnMR_MASK, GPTM_TA_TnMR_R_TnMR_BIT);
    return (enSubModeReg);
}
