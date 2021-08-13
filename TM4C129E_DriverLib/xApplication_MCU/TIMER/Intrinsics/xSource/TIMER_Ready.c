/**
 *
 * @file TIMER_Ready.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Ready.h>

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Dependencies.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_TIMER [(uint32_t) TIMER_enMODULE_NUM_MAX] =
{
 SYSCTL_enTIMER0, SYSCTL_enTIMER1, SYSCTL_enTIMER2, SYSCTL_enTIMER3, SYSCTL_enTIMER4, SYSCTL_enTIMER5, SYSCTL_enTIMER6, SYSCTL_enTIMER7
};
#endif

void TIMER__vSetReady(TIMER_nMODULE_NUM enModuleNumber)
{
#if !defined(Opt_Check)
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enTIMER0;
    uint32_t u32ModuleNumber = 0UL;

     TIMER__vCheckParams( 0UL, (uint32_t) enModuleNumber, (uint32_t*)0UL, &u32ModuleNumber);

    enPeripheral = SYSCTL_VECTOR_TIMER [u32ModuleNumber];
    SYSCTL__vSetReady(enPeripheral);
#endif
}

void TIMER__vClearReady(TIMER_nMODULE_NUM enModuleNumber)
{
#if defined(Opt_Check)
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_TIMER [(uint32_t) TIMER_enMODULE_NUM_MAX] =
    {
     SYSCTL_enTIMER0, SYSCTL_enTIMER1, SYSCTL_enTIMER2, SYSCTL_enTIMER3, SYSCTL_enTIMER4, SYSCTL_enTIMER5, SYSCTL_enTIMER6, SYSCTL_enTIMER7
    };
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enTIMER0;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vCheckParams(0UL, (uint32_t) enModuleNumber, (uint32_t*)0UL, &u32ModuleNumber);

    enPeripheral = SYSCTL_VECTOR_TIMER [u32ModuleNumber];
    SYSCTL__vClearReady(enPeripheral);
}

TIMER_nREADY TIMER__enIsReady(TIMER_nMODULE_NUM enModuleNumber)
{
#if !defined(Opt_Check)
    TIMER_nREADY enReady = TIMER_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enTIMER0;
    uint32_t u32ModuleNumber = 0UL;

     TIMER__vCheckParams( 0UL, (uint32_t) enModuleNumber, (uint32_t*)0UL, &u32ModuleNumber);

    enPeripheral = SYSCTL_VECTOR_TIMER [u32ModuleNumber];
    enReady = (TIMER_nREADY) SYSCTL__enIsReady(enPeripheral);
#else
    TIMER_nREADY enReady = TIMER_enREADY;
#endif
    return enReady;
}
