/**
 *
 * @file TIMER_SubParams.c
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
 * @verbatim 31 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_SubParams.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER__vGetSubParams(TIMER_nMODULE enModule, UBase_t* puxSubModule,
                          UBase_t* puxModuleNumber)
{
    UBase_t uxModuleNumber = 0UL;
    UBase_t uxSubModule = 0UL;

    if(0UL != (UBase_t) puxSubModule)
    {
        uxSubModule = (UBase_t) enModule;
        uxSubModule >>= 8UL;
        uxSubModule &= 0x3UL;
        *puxSubModule = MCU__uxCheckParams(uxSubModule,
                                             (UBase_t) TIMER_enSUBMODULE_MAX);
    }

    if(0UL != (UBase_t) puxModuleNumber)
    {
        uxModuleNumber = (UBase_t) enModule;
        uxModuleNumber >>= 0UL;
        uxModuleNumber &= 0x7UL;
        *puxModuleNumber = MCU__uxCheckParams(uxModuleNumber,
                                                (UBase_t) TIMER_enMODULE_NUM_MAX);
    }
}


