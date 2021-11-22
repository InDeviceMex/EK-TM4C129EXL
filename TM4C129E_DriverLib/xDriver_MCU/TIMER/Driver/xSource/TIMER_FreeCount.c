/**
 *
 * @file TIMER_FreeCount.c
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
 * @verbatim 27 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_FreeCount.h>

#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_CountGeneric.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_AltMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_CountDir.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SubMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SnapShot.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Configuration.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

uint32_t TIMER__u32GetFreeCount(TIMER_nMODULE enModule)
{
    uint32_t u32FreeCount = 0UL;

    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_WIDE;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_DOWN;

    TIMER_Count32_t stFreeCount32Config = {0UL, 0UL, 0UL, 0UL};

    static uint32_t u32TimerValue = 0UL;
    static uint32_t u32u32TimerValue = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;

    enConfigVar = TIMER__enGetConfiguration(enModule);
    switch (enConfigVar)
    {
        case TIMER_enCONFIG_WIDE:
        case TIMER_enCONFIG_RTC:
            stFreeCount32Config.u32CountRegister = GPTM_TAV_OFFSET;
            stFreeCount32Config.u32CountMask = 0xFFFFFFFFUL;
            stFreeCount32Config.u32CountShiftRight = 0UL;
            stFreeCount32Config.pu32CountValue = &u32TimerValue;

            TIMER_enGet1Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber,
                                       &stFreeCount32Config);
        break;

        case TIMER_enCONFIG_INDIVIDUAL:
            enSubModeVar = TIMER__enGetSubMode(enModule);
            enAltModeVar = TIMER__enGetAltMode(enModule);
            enDirectionVar = TIMER__enGetCountDir(enModule);

            stFreeCount32Config.u32CountRegister = GPTM_TAV_OFFSET + (4UL * u32SubModule);
            stFreeCount32Config.u32CountMask = 0xFFFFFFUL;
            stFreeCount32Config.u32CountShiftRight = 0UL;
            stFreeCount32Config.pu32CountValue = &u32TimerValue;
            TIMER_enGet1Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber,
                                       &stFreeCount32Config);

            /*One shot or Periodic*/
            if((TIMER_enALT_MODE_CC == enAltModeVar) &&
               (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) &&
               (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
            {
                u32u32TimerValue = u32TimerValue;
                u32u32TimerValue >>= 16UL;
                u32u32TimerValue &= 0xFFUL;

                u32TimerValue &= 0xFFFFULL;
                u32TimerValue <<= 8UL;
                u32TimerValue |= u32u32TimerValue;
            }
        break;
        default:
        break;
    }
    u32FreeCount = u32TimerValue;
    return (u32FreeCount);
}

void TIMER__vSetFreeRunningCount(TIMER_nMODULE enModule, uint32_t u32Count)
{
    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_WIDE;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_DOWN;

    TIMER_Count32_t stFreeCount32Config = {0UL, 0UL, 0UL, 0UL};

    static uint32_t u32TimerValue = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;

    enConfigVar = TIMER__enGetConfiguration(enModule);
    switch (enConfigVar)
    {
        case TIMER_enCONFIG_WIDE:
        case TIMER_enCONFIG_RTC:
            u32TimerValue = u32Count;
            stFreeCount32Config.u32CountRegister = GPTM_TAV_OFFSET;
            stFreeCount32Config.u32CountMask = 0xFFFFFFFFUL;
            stFreeCount32Config.u32CountShiftRight = 0UL;
            stFreeCount32Config.pu32CountValue = &u32TimerValue;
            TIMER_vSet1Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber,
                                      &stFreeCount32Config);
        break;

        case TIMER_enCONFIG_INDIVIDUAL:
            enSubModeVar = TIMER__enGetSubMode(enModule);
            enAltModeVar = TIMER__enGetAltMode(enModule);
            enDirectionVar = TIMER__enGetCountDir(enModule);

            u32TimerValue = u32Count;
            stFreeCount32Config.u32CountRegister = GPTM_TAV_OFFSET + (4UL * u32SubModule);
            stFreeCount32Config.u32CountMask = 0xFFFFUL;
            stFreeCount32Config.u32CountShiftRight = 0UL;
            stFreeCount32Config.pu32CountValue = &u32TimerValue;
            /*One shot or Periodic*/
            if((TIMER_enALT_MODE_CC == enAltModeVar) &&
               (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) &&
               (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
            {
                stFreeCount32Config.u32CountShiftRight = 8UL;
            }
            TIMER_vSet1Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber,
                                      &stFreeCount32Config);
        break;
        default:
        break;
    }
}
