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

UBase_t TIMER__uxGetCount(TIMER_nMODULE enModule)
{
    UBase_t uxCountReg = 0UL;
    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_WIDE;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_DOWN;

    TIMER_nSNAPSHOT enSnapshotVar = TIMER_enSNAPSHOT_DIS;

    TIMER_Count32_Preescale_t stMatch32PreescalerConfig =
    {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};

    TIMER_Count32_t stCount32Config = {0UL, 0UL, 0UL, 0UL};

    static UBase_t uxTimerValue = 0UL;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    uxSubModule &= 0x1UL;

    enConfigVar = TIMER__enGetConfiguration(enModule);
    switch (enConfigVar)
    {
        case TIMER_enCONFIG_WIDE:
        case TIMER_enCONFIG_RTC:
            stCount32Config.uxCountRegister = GPTM_TAR_OFFSET;
            stCount32Config.uxCountMask = 0xFFFFFFFFUL;
            stCount32Config.uxCountShiftRight = 0UL;
            stCount32Config.puxCountValue = &uxTimerValue;

            TIMER_enGet1Count32Generic((TIMER_nMODULE_NUM) uxModuleNumber, &stCount32Config);
        break;

        case TIMER_enCONFIG_INDIVIDUAL:
            enSubModeVar = TIMER__enGetSubMode(enModule);
            enAltModeVar = TIMER__enGetAltMode(enModule);
            /*One shot or Periodic*/
            if((TIMER_enALT_MODE_CC == enAltModeVar) &&
               (TIMER_enSUB_MODE_CAPTURE != enSubModeVar))
            {
                enDirectionVar = TIMER__enGetCountDir(enModule);
                enSnapshotVar = TIMER__enGetSnapShot(enModule);

                stMatch32PreescalerConfig.uxCountHighRegister = GPTM_TAR_OFFSET +
                                                                (4UL * uxSubModule);
                stMatch32PreescalerConfig.uxCountHighMask = 0xFFFFUL;
                stMatch32PreescalerConfig.uxCountLowMask = 0xFFUL;
                stMatch32PreescalerConfig.uxCountHighShiftRight = 0UL;
                stMatch32PreescalerConfig.puxCountValue = &uxTimerValue;

                if(TIMER_enCOUNT_DIR_DOWN == enDirectionVar)
                {
                    stMatch32PreescalerConfig.uxCountHighShiftLeft = 8UL;
                    stMatch32PreescalerConfig.uxCountLowShiftLeft = 0UL;
                    if(TIMER_enSNAPSHOT_DIS == enSnapshotVar)
                    {
                        stMatch32PreescalerConfig.uxCountLowRegister = GPTM_TAV_OFFSET +
                                                                        (4UL * uxSubModule);
                        stMatch32PreescalerConfig.uxCountLowShiftRight = 16UL;
                    }
                    else
                    {
                        stMatch32PreescalerConfig.uxCountLowRegister = GPTM_TAPS_OFFSET +
                                                                        (4UL * uxSubModule);
                        stMatch32PreescalerConfig.uxCountLowShiftRight = 0UL;

                    }
                }
                else
                {
                    stMatch32PreescalerConfig.uxCountHighShiftLeft = 0UL;
                    stMatch32PreescalerConfig.uxCountLowShiftLeft = 16UL;
                    if(TIMER_enSNAPSHOT_DIS == enSnapshotVar)
                    {
                        stMatch32PreescalerConfig.uxCountLowRegister = GPTM_TAV_OFFSET +
                                                                        (4UL * uxSubModule);
                        stMatch32PreescalerConfig.uxCountLowShiftRight = 16UL;
                    }
                    else
                    {
                        stMatch32PreescalerConfig.uxCountLowRegister = GPTM_TAPS_OFFSET +
                                                                        (4UL * uxSubModule);
                        stMatch32PreescalerConfig.uxCountLowShiftRight = 0UL;
                    }
                }
                TIMER_enGet2Count32Generic((TIMER_nMODULE_NUM) uxModuleNumber,
                                           &stMatch32PreescalerConfig);
            }
            /*Edge count, Edge Time or PWM*/
            else
            {
                stCount32Config.uxCountRegister = GPTM_TAR_OFFSET + (4UL * uxSubModule);
                stCount32Config.uxCountMask = 0xFFFFFFUL;
                stCount32Config.uxCountShiftRight = 0UL;
                stCount32Config.puxCountValue = &uxTimerValue;

                TIMER_enGet1Count32Generic((TIMER_nMODULE_NUM) uxModuleNumber,
                                           &stCount32Config);
            }
        break;
        default:
        break;
    }
    uxCountReg = uxTimerValue;
    return (uxCountReg);
}
