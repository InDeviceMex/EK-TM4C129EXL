/**
 *
 * @file TIMER_Count.c
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
 * @verbatim 26 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Count.h>

#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_CountGeneric.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_AltMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_CountDir.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SubMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SnapShot.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Configuration.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

TIMER_nSTATUS TIMER__enGetCount(TIMER_nMODULE enModule, uint64_t* pu64Count)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_UNDEF;

    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_UNDEF;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_UNDEF;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_UNDEF;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_UNDEF;

    TIMER_nSNAPSHOT enSnapshotVar = TIMER_enSNAPSHOT_UNDEF;

    TIMER_Count64_TypeDef stCount64Config = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_TypeDef stCount32Config = {0UL, 0UL, 0UL, 0UL};

    static uint32_t TimerValue = 0UL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;

    if(0UL != (uint32_t) pu64Count)
    {
        enConfigVar = TIMER__enGetConfiguration(enModule);
        if(TIMER_enCONFIG_UNDEF != enConfigVar)
        {
            enStatus = TIMER_enSTATUS_OK;
            if((uint32_t) TIMER_enSIZE_32 == (uint32_t) u32ModuleSize)
            {
                switch (enConfigVar)
                {
                    case TIMER_enCONFIG_WIDE:
                    case TIMER_enCONFIG_RTC:
                        stCount32Config.u32CountRegister = GPTM_TAR_OFFSET;
                        stCount32Config.u32CountMask = 0xFFFFFFFFUL;
                        stCount32Config.u32CountShiftRight = 0UL;
                        stCount32Config.pu32CountValue = &TimerValue;

                        TIMER_enGet1Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stCount32Config);
                        *pu64Count = (uint64_t)TimerValue;
                    break;

                    case TIMER_enCONFIG_INDIVIDUAL:
                        enSubModeVar = TIMER__enGetSubMode(enModule);
                        enAltModeVar = TIMER__enGetAltMode(enModule);
                        /*One shot or Periodic*/
                        if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar))
                        {
                            enDirectionVar = TIMER__enGetCountDir(enModule);
                            enSnapshotVar = TIMER__enGetSnapShot(enModule);

                            stCount64Config.u32CountHighRegister = GPTM_TAR_OFFSET + (4UL * u32SubModule);
                            stCount64Config.u32CountHighMask = 0xFFFFUL;
                            stCount64Config.u32CountLowMask = 0xFFUL;
                            stCount64Config.u32CountHighShiftRight = 0UL;
                            stCount64Config.pu64CountValue = pu64Count;

                            if(TIMER_enCOUNT_DIR_DOWN == enDirectionVar)
                            {
                                stCount64Config.u32CountHighShiftLeft = 8UL;
                                stCount64Config.u32CountLowShiftLeft = 0UL;
                                if(TIMER_enSNAPSHOT_DIS == enSnapshotVar)
                                {
                                    stCount64Config.u32CountLowRegister = GPTM_TAV_OFFSET + (4UL * u32SubModule);
                                    stCount64Config.u32CountLowShiftRight = 16UL;
                                }
                                else
                                {
                                    stCount64Config.u32CountLowRegister = GPTM_TAPS_OFFSET + (4UL * u32SubModule);
                                    stCount64Config.u32CountLowShiftRight = 0UL;

                                }
                            }
                            else
                            {
                                stCount64Config.u32CountHighShiftLeft = 0UL;
                                stCount64Config.u32CountLowShiftLeft = 16UL;
                                if(TIMER_enSNAPSHOT_DIS == enSnapshotVar)
                                {
                                    stCount64Config.u32CountLowRegister = GPTM_TAV_OFFSET + (4UL * u32SubModule);
                                    stCount64Config.u32CountLowShiftRight = 16UL;
                                }
                                else
                                {
                                    stCount64Config.u32CountLowRegister = GPTM_TAPS_OFFSET + (4UL * u32SubModule);
                                    stCount64Config.u32CountLowShiftRight = 0UL;
                                }
                            }
                            TIMER_enGet2Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stCount64Config);
                        }
                        /*Edge count, Edge Time or PWM*/
                        else
                        {
                            stCount32Config.u32CountRegister = GPTM_TAR_OFFSET + (4UL * u32SubModule);
                            stCount32Config.u32CountMask = 0xFFFFFFUL;
                            stCount32Config.u32CountShiftRight = 0UL;
                            stCount32Config.pu32CountValue = &TimerValue;

                            TIMER_enGet1Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stCount32Config);
                            *pu64Count = (uint64_t)TimerValue;
                        }

                    break;
                    default:
                    break;
                }
            }
            else
            {
                switch (enConfigVar)
                {
                    case TIMER_enCONFIG_WIDE:
                        stCount64Config.u32CountHighRegister = GPTM_TBR_OFFSET;
                        stCount64Config.u32CountHighMask = 0xFFFFFFFFUL;
                        stCount64Config.u32CountHighShiftRight = 0UL;
                        stCount64Config.u32CountHighShiftLeft = 32UL;

                        stCount64Config.u32CountLowRegister = GPTM_TAR_OFFSET;
                        stCount64Config.u32CountLowMask = 0xFFFFFFFFUL;
                        stCount64Config.u32CountLowShiftRight = 0UL;
                        stCount64Config.u32CountLowShiftLeft = 0UL;

                        stCount64Config.pu64CountValue = pu64Count;

                        TIMER_enGetCount64Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stCount64Config);
                    break;

                    case TIMER_enCONFIG_RTC:
                        *pu64Count = TIMER_u64GetCount_RTC((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber);
                    break;


                    case TIMER_enCONFIG_INDIVIDUAL:
                        enSubModeVar = TIMER__enGetSubMode(enModule);
                        enAltModeVar = TIMER__enGetAltMode(enModule);
                        enDirectionVar = TIMER__enGetCountDir(enModule);

                        stCount64Config.u32CountHighShiftRight = 0UL;
                        stCount64Config.u32CountLowShiftRight = 0UL;
                        stCount64Config.u32CountLowShiftLeft = 0UL;
                        stCount64Config.pu64CountValue = pu64Count;
                        /*Prescaler*/
                        /*One shot and periodic Down, no PWM no Capture*/
                        if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                        {
                            stCount64Config.u32CountHighRegister = GPTM_TAR_OFFSET + (4UL * u32SubModule);
                            stCount64Config.u32CountHighMask = 0xFFFFFFFFUL;
                            stCount64Config.u32CountHighShiftLeft = 16UL;

                            stCount64Config.u32CountLowRegister = GPTM_TAPS_OFFSET + (4UL * u32SubModule);
                            stCount64Config.u32CountLowMask = 0xFFFFUL;
                        }
                        /*Time Extension*/
                        /*PWM, capture, One shot UP or periodic UP*/
                        else
                        {
                            stCount64Config.u32CountHighRegister = GPTM_TAPS_OFFSET + (4UL * u32SubModule);
                            stCount64Config.u32CountHighMask = 0xFFFFUL;
                            stCount64Config.u32CountHighShiftLeft = 32UL;

                            stCount64Config.u32CountLowRegister = GPTM_TAR_OFFSET + (4UL * u32SubModule);
                            stCount64Config.u32CountLowMask = 0xFFFFFFFFUL;

                        }
                        TIMER_enGetCount64Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stCount64Config);
                    break;

                    default:
                    break;

                }
            }
        }
    }
    return enStatus;
}



