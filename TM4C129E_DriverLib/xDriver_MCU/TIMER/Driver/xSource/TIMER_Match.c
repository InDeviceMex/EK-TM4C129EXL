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

void TIMER__vSetMatch(TIMER_nMODULE enModule, uint32_t u32Match)
{
    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_UNDEF;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_UNDEF;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_UNDEF;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_UNDEF;

    TIMER_Count32_Preescale_TypeDef stMatch32PreescalerConfig = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_TypeDef stMatch32Config = {0UL, 0UL, 0UL, 0UL};

    static uint32_t u32TimerValue = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;

    TIMER__vSetReady((TIMER_nMODULE_NUM) u32ModuleNumber);
    enConfigVar = TIMER__enGetConfiguration(enModule);
    if(TIMER_enCONFIG_UNDEF != enConfigVar)
    {
        switch (enConfigVar)
        {
            case TIMER_enCONFIG_WIDE:
            case TIMER_enCONFIG_RTC:

                u32TimerValue = u32Match;
                stMatch32Config.u32CountRegister = GPTM_TAMATCHR_OFFSET;
                stMatch32Config.u32CountMask = 0xFFFFFFFFUL;
                stMatch32Config.u32CountShiftRight = 0UL;
                stMatch32Config.pu32CountValue = &u32TimerValue;
                TIMER_vSet1Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber, &stMatch32Config);
            break;

            case TIMER_enCONFIG_INDIVIDUAL:
                enSubModeVar = TIMER__enGetSubMode(enModule);
                enAltModeVar = TIMER__enGetAltMode(enModule);
                enDirectionVar = TIMER__enGetCountDir(enModule);

                u32TimerValue = u32Match;
                stMatch32PreescalerConfig.u32CountHighShiftLeft = 0UL;
                stMatch32PreescalerConfig.u32CountLowShiftRight = 0UL;
                stMatch32PreescalerConfig.u32CountLowShiftLeft = 0UL;
                stMatch32PreescalerConfig.pu32CountValue = (uint32_t*) &u32TimerValue;
                if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                {
                    stMatch32PreescalerConfig.u32CountHighRegister = GPTM_TAMATCHR_OFFSET + (4UL * u32SubModule);
                    stMatch32PreescalerConfig.u32CountHighMask = 0xFFFFUL;
                    stMatch32PreescalerConfig.u32CountHighShiftRight = 8UL;

                    stMatch32PreescalerConfig.u32CountLowRegister = GPTM_TAPMR_OFFSET + (4UL * u32SubModule);
                    stMatch32PreescalerConfig.u32CountLowMask = 0xFFUL;

                }
                else
                {
                    stMatch32PreescalerConfig.u32CountHighRegister = GPTM_TAPMR_OFFSET + (4UL * u32SubModule);
                    stMatch32PreescalerConfig.u32CountHighMask = 0xFFUL;
                    stMatch32PreescalerConfig.u32CountHighShiftRight = 16UL;

                    stMatch32PreescalerConfig.u32CountLowRegister = GPTM_TAMATCHR_OFFSET + (4UL * u32SubModule);
                    stMatch32PreescalerConfig.u32CountLowMask = 0xFFFFUL;
                }
                TIMER_vSet2Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber, &stMatch32PreescalerConfig);
            break;
            default:
            break;
        }
    }
}


TIMER_nSTATUS TIMER__enGetMatch(TIMER_nMODULE enModule, uint32_t* pu32Match)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_UNDEF;

    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_UNDEF;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_UNDEF;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_UNDEF;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_UNDEF;


    TIMER_Count32_Preescale_TypeDef stMatch32PreescalerConfig = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_TypeDef stMatch32Config = {0UL, 0UL, 0UL, 0UL};

    static uint32_t u32TimerValue = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;

    if(0UL != (uint32_t) pu32Match)
    {
        enConfigVar = TIMER__enGetConfiguration(enModule);
        if(TIMER_enCONFIG_UNDEF != enConfigVar)
        {
            enStatus = TIMER_enSTATUS_OK;
            switch (enConfigVar)
            {
                case TIMER_enCONFIG_WIDE:
                case TIMER_enCONFIG_RTC:
                    stMatch32Config.u32CountRegister = GPTM_TAMATCHR_OFFSET;
                    stMatch32Config.u32CountMask = 0xFFFFFFFFUL;
                    stMatch32Config.u32CountShiftRight = 0UL;
                    stMatch32Config.pu32CountValue = &u32TimerValue;

                    TIMER_enGet1Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber, &stMatch32Config);
                    *pu32Match = u32TimerValue;
                break;

                case TIMER_enCONFIG_INDIVIDUAL:
                    enSubModeVar = TIMER__enGetSubMode(enModule);
                    enAltModeVar = TIMER__enGetAltMode(enModule);
                    enDirectionVar = TIMER__enGetCountDir(enModule);

                    stMatch32PreescalerConfig.u32CountHighShiftRight = 0UL;
                    stMatch32PreescalerConfig.u32CountLowShiftRight = 0UL;
                    stMatch32PreescalerConfig.u32CountLowShiftLeft = 0UL;
                    stMatch32PreescalerConfig.pu32CountValue = &u32TimerValue;

                    /*One shot or Periodic*/
                    if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                    {

                        stMatch32PreescalerConfig.u32CountHighRegister = GPTM_TAMATCHR_OFFSET + (4UL * u32SubModule);
                        stMatch32PreescalerConfig.u32CountHighMask = 0xFFFFUL;
                        stMatch32PreescalerConfig.u32CountHighShiftLeft = 8UL;

                        stMatch32PreescalerConfig.u32CountLowRegister = GPTM_TAPMR_OFFSET + (4UL * u32SubModule);
                        stMatch32PreescalerConfig.u32CountLowMask = 0xFFUL;

                    }
                    /*Edge count, Edge Time or PWM*/
                    else
                    {

                        stMatch32PreescalerConfig.u32CountHighRegister = GPTM_TAPMR_OFFSET + (4UL * u32SubModule);
                        stMatch32PreescalerConfig.u32CountHighMask = 0xFFUL;
                        stMatch32PreescalerConfig.u32CountHighShiftLeft = 16UL;

                        stMatch32PreescalerConfig.u32CountLowRegister = GPTM_TAMATCHR_OFFSET + (4UL * u32SubModule);
                        stMatch32PreescalerConfig.u32CountLowMask = 0xFFFFUL;
                    }

                    TIMER_enGet2Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber, &stMatch32PreescalerConfig);
                    *pu32Match = u32TimerValue;
                break;
                default:
                break;
            }
        }
    }
    return (enStatus);
}
