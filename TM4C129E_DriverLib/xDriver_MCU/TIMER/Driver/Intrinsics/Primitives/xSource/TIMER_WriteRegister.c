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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_Ready.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER__vWriteRegister(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32TimerBase = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    uint32_t u32ModuleSize = 0UL;

     TIMER__vCheckParams( (uint32_t) enModuleSize, 0UL, (uint32_t) enModuleNumber, &u32ModuleSize, (uint32_t*)0UL, &u32ModuleNumber);
    TIMER__vSetReady( (TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber);

    u32TimerBase = TIMER_BLOCK_BASE [u32ModuleSize][u32ModuleNumber];

    MCU__vWriteRegister(u32TimerBase, u32OffsetRegister, u32FeatureValue, u32MaskFeature, u32BitFeature);
}
