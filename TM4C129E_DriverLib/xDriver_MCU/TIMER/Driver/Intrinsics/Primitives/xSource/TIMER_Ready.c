/**
 *
 * @file TIMER_Ready.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_Ready.h>

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_CheckParams.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_TIMER[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
    { SYSCTL_enTIMER0, SYSCTL_enTIMER1, SYSCTL_enTIMER2, SYSCTL_enTIMER3, SYSCTL_enTIMER4, SYSCTL_enTIMER5},
    { SYSCTL_enWTIMER0, SYSCTL_enWTIMER1, SYSCTL_enWTIMER2, SYSCTL_enWTIMER3, SYSCTL_enWTIMER4, SYSCTL_enWTIMER5}
};
#endif

void TIMER__vSetReady(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber)
{
#if !defined(Opt_Check)
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enTIMER0;
    uint32_t u32ModuleNumber = 0UL;
     uint32_t u32ModuleSize = 0UL;

     TIMER__vCheckParams( (uint32_t) enModuleSize, 0UL, (uint32_t) enModuleNumber, &u32ModuleSize, (uint32_t*)0UL, &u32ModuleNumber);

    enPeripheral = SYSCTL_VECTOR_TIMER [u32ModuleSize][u32ModuleNumber];
    SYSCTL__vSetReady(enPeripheral);
#endif
}

void TIMER__vClearReady(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber)
{
#if defined(Opt_Check)
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_TIMER[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
        { SYSCTL_enTIMER0, SYSCTL_enTIMER1, SYSCTL_enTIMER2, SYSCTL_enTIMER3, SYSCTL_enTIMER4, SYSCTL_enTIMER5},
        { SYSCTL_enWTIMER0, SYSCTL_enWTIMER1, SYSCTL_enWTIMER2, SYSCTL_enWTIMER3, SYSCTL_enWTIMER4, SYSCTL_enWTIMER5}
    };
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enTIMER0;
    uint32_t u32ModuleNumber = 0UL;
    uint32_t u32ModuleSize = 0UL;

    TIMER__vCheckParams( (uint32_t) enModuleSize, 0UL, (uint32_t) enModuleNumber, &u32ModuleSize, (uint32_t*)0UL, &u32ModuleNumber);

    enPeripheral = SYSCTL_VECTOR_TIMER [u32ModuleSize][u32ModuleNumber];
    SYSCTL__vClearReady(enPeripheral);
}

TIMER_nREADY TIMER__enIsReady(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber)
{
#if !defined(Opt_Check)
    TIMER_nREADY enReady = TIMER_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enTIMER0;
    uint32_t u32ModuleNumber = 0UL;
     uint32_t u32ModuleSize = 0UL;

     TIMER__vCheckParams( (uint32_t) enModuleSize, 0UL, (uint32_t) enModuleNumber, &u32ModuleSize, (uint32_t*)0UL, &u32ModuleNumber);

    enPeripheral = SYSCTL_VECTOR_TIMER[u32ModuleSize][u32ModuleNumber];
    enReady = (TIMER_nREADY) SYSCTL__enIsReady(enPeripheral);
#else
    TIMER_nREADY enReady = TIMER_enREADY;
#endif
    return enReady;
}
