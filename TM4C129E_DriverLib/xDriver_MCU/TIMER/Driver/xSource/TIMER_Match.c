/**
 *
 * @file TIMER_Match.c
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Match.h>

#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_CountGeneric.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_AltMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_CountDir.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SubMode.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Configuration.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

void TIMER__vSetMatch(TIMER_nMODULE enModule, UBase_t uxMatch)
{
    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_WIDE;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_DOWN;

    TIMER_Count32_Preescale_t stMatch32PreescalerConfig =
    {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_t stMatch32Config = {0UL, 0UL, 0UL, 0UL};

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
            uxTimerValue = uxMatch;
            stMatch32Config.uxCountRegister = GPTM_TAMATCHR_OFFSET;
            stMatch32Config.uxCountMask = 0xFFFFFFFFUL;
            stMatch32Config.uxCountShiftRight = 0UL;
            stMatch32Config.puxCountValue = &uxTimerValue;
            TIMER_vSet1Count32Generic((TIMER_nMODULE_NUM) uxModuleNumber,
                                      &stMatch32Config);
        break;

        case TIMER_enCONFIG_INDIVIDUAL:
            enSubModeVar = TIMER__enGetSubMode(enModule);
            enAltModeVar = TIMER__enGetAltMode(enModule);
            enDirectionVar = TIMER__enGetCountDir(enModule);

            uxTimerValue = uxMatch;
            stMatch32PreescalerConfig.uxCountHighShiftLeft = 0UL;
            stMatch32PreescalerConfig.uxCountLowShiftRight = 0UL;
            stMatch32PreescalerConfig.uxCountLowShiftLeft = 0UL;
            stMatch32PreescalerConfig.puxCountValue = (UBase_t*) &uxTimerValue;
            if((TIMER_enALT_MODE_CC == enAltModeVar) &&
               (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) &&
               (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
            {
                stMatch32PreescalerConfig.uxCountHighRegister = GPTM_TAMATCHR_OFFSET +
                                                                (4UL * uxSubModule);
                stMatch32PreescalerConfig.uxCountHighMask = 0xFFFFUL;
                stMatch32PreescalerConfig.uxCountHighShiftRight = 8UL;

                stMatch32PreescalerConfig.uxCountLowRegister = GPTM_TAPMR_OFFSET +
                                                                (4UL * uxSubModule);
                stMatch32PreescalerConfig.uxCountLowMask = 0xFFUL;

            }
            else
            {
                stMatch32PreescalerConfig.uxCountHighRegister = GPTM_TAPMR_OFFSET +
                                                                (4UL * uxSubModule);
                stMatch32PreescalerConfig.uxCountHighMask = 0xFFUL;
                stMatch32PreescalerConfig.uxCountHighShiftRight = 16UL;

                stMatch32PreescalerConfig.uxCountLowRegister = GPTM_TAMATCHR_OFFSET +
                                                                (4UL * uxSubModule);
                stMatch32PreescalerConfig.uxCountLowMask = 0xFFFFUL;
            }
            TIMER_vSet2Count32Generic((TIMER_nMODULE_NUM) uxModuleNumber,
                                      &stMatch32PreescalerConfig);
        break;
        default:
        break;
    }
}


UBase_t TIMER__uxGetMatch(TIMER_nMODULE enModule)
{
    UBase_t uxMatchReg = 0UL;
    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_WIDE;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_DOWN;


    TIMER_Count32_Preescale_t stMatch32PreescalerConfig =
    {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_t stMatch32Config = {0UL, 0UL, 0UL, 0UL};

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
            stMatch32Config.uxCountRegister = GPTM_TAMATCHR_OFFSET;
            stMatch32Config.uxCountMask = 0xFFFFFFFFUL;
            stMatch32Config.uxCountShiftRight = 0UL;
            stMatch32Config.puxCountValue = &uxTimerValue;

            TIMER_enGet1Count32Generic((TIMER_nMODULE_NUM) uxModuleNumber,
                                       &stMatch32Config);
        break;

        case TIMER_enCONFIG_INDIVIDUAL:
            enSubModeVar = TIMER__enGetSubMode(enModule);
            enAltModeVar = TIMER__enGetAltMode(enModule);
            enDirectionVar = TIMER__enGetCountDir(enModule);

            stMatch32PreescalerConfig.uxCountHighShiftRight = 0UL;
            stMatch32PreescalerConfig.uxCountLowShiftRight = 0UL;
            stMatch32PreescalerConfig.uxCountLowShiftLeft = 0UL;
            stMatch32PreescalerConfig.puxCountValue = &uxTimerValue;

            /*One shot or Periodic*/
            if((TIMER_enALT_MODE_CC == enAltModeVar) &&
               (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) &&
               (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
            {

                stMatch32PreescalerConfig.uxCountHighRegister = GPTM_TAMATCHR_OFFSET +
                                                                (4UL * uxSubModule);
                stMatch32PreescalerConfig.uxCountHighMask = 0xFFFFUL;
                stMatch32PreescalerConfig.uxCountHighShiftLeft = 8UL;

                stMatch32PreescalerConfig.uxCountLowRegister = GPTM_TAPMR_OFFSET +
                                                                (4UL * uxSubModule);
                stMatch32PreescalerConfig.uxCountLowMask = 0xFFUL;

            }
            /*Edge count, Edge Time or PWM*/
            else
            {

                stMatch32PreescalerConfig.uxCountHighRegister = GPTM_TAPMR_OFFSET +
                                                                (4UL * uxSubModule);
                stMatch32PreescalerConfig.uxCountHighMask = 0xFFUL;
                stMatch32PreescalerConfig.uxCountHighShiftLeft = 16UL;

                stMatch32PreescalerConfig.uxCountLowRegister = GPTM_TAMATCHR_OFFSET +
                                                                (4UL * uxSubModule);
                stMatch32PreescalerConfig.uxCountLowMask = 0xFFFFUL;
            }

            TIMER_enGet2Count32Generic((TIMER_nMODULE_NUM) uxModuleNumber,
                                       &stMatch32PreescalerConfig);
        break;
        default:
        break;
    }
    uxMatchReg = uxTimerValue;
    return (uxMatchReg);
}
