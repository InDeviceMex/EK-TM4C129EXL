/**
 *
 * @file TIMER_WriteRegister.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_CheckParams.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER__vWriteRegister(TIMER_nMODULE_NUM enModuleNumber, UBase_t uxOffsetRegister,
                           UBase_t uxFeatureValue, UBase_t uxMaskFeature,
                           UBase_t uxBitFeature)
{
    UBase_t uxTimerBase = 0UL;
    UBase_t uxModuleNumber = 0UL;

    TIMER__vCheckParams(0UL, (UBase_t) enModuleNumber, (UBase_t*)0UL, &uxModuleNumber);

    uxTimerBase = TIMER__uxBlockBaseAddress((TIMER_nMODULE_NUM) uxModuleNumber);

    MCU__vWriteRegister(uxTimerBase, uxOffsetRegister, uxFeatureValue,
                        uxMaskFeature, uxBitFeature);
}
