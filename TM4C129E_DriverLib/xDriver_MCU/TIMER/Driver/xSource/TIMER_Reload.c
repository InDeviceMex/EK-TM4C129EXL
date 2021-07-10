/**
 *
 * @file TIMER_Reload.c
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
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Reload.h>

#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_CountGeneric.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_AltMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_CountDir.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SubMode.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Configuration.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>
void TIMER__vSetReload(TIMER_nMODULE enModule, uint64_t u64Reload)
{
    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_UNDEF;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_UNDEF;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_UNDEF;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_UNDEF;

    TIMER_Count64_TypeDef stReload64Config = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_TypeDef stReload32Config = {0UL, 0UL, 0UL, 0UL};

    static uint64_t u64TimerValue = 0ULL;
    static uint32_t TimerValue = 0UL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;

    TIMER__vSetReady((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber);
    enConfigVar = TIMER__enGetConfiguration(enModule);
    if(TIMER_enCONFIG_UNDEF != enConfigVar)
    {
        if((uint32_t) TIMER_enSIZE_32 == (uint32_t) u32ModuleSize)
        {
            switch (enConfigVar)
            {
                case TIMER_enCONFIG_WIDE:
                case TIMER_enCONFIG_RTC:

                    TimerValue = (uint32_t) u64Reload;
                    stReload32Config.u32CountRegister = GPTM_TAILR_OFFSET;
                    stReload32Config.u32CountMask = 0xFFFFFFFFUL;
                    stReload32Config.u32CountShiftRight = 0UL;
                    stReload32Config.pu32CountValue = &TimerValue;
                    TIMER_vSet1Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stReload32Config);
                break;

                case TIMER_enCONFIG_INDIVIDUAL:
                    enSubModeVar = TIMER__enGetSubMode(enModule);
                    enAltModeVar = TIMER__enGetAltMode(enModule);
                    enDirectionVar = TIMER__enGetCountDir(enModule);

                    TimerValue = (uint32_t) u64Reload;
                    stReload64Config.u32CountHighShiftLeft = 0UL;
                    stReload64Config.u32CountLowShiftRight = 0UL;
                    stReload64Config.u32CountLowShiftLeft = 0UL;
                    stReload64Config.pu64CountValue = (uint64_t*) &TimerValue;
                    if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                    {
                        stReload64Config.u32CountHighRegister = GPTM_TAILR_OFFSET + (4UL * u32SubModule);
                        stReload64Config.u32CountHighMask = 0xFFFFUL;
                        stReload64Config.u32CountHighShiftRight = 8UL;

                        stReload64Config.u32CountLowRegister = GPTM_TAPR_OFFSET + (4UL * u32SubModule);
                        stReload64Config.u32CountLowMask = 0xFFUL;

                    }
                    else
                    {
                        stReload64Config.u32CountHighRegister = GPTM_TAPR_OFFSET + (4UL * u32SubModule);
                        stReload64Config.u32CountHighMask = 0xFFUL;
                        stReload64Config.u32CountHighShiftRight = 16UL;

                        stReload64Config.u32CountLowRegister = GPTM_TAILR_OFFSET + (4UL * u32SubModule);
                        stReload64Config.u32CountLowMask = 0xFFFFUL;
                    }
                    TIMER_vSet2Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stReload64Config);
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
                case TIMER_enCONFIG_RTC:

                    u64TimerValue = u64Reload;
                    stReload64Config.u32CountHighRegister = GPTM_TBILR_OFFSET;
                    stReload64Config.u32CountHighMask = 0xFFFFFFFFUL;
                    stReload64Config.u32CountHighShiftRight = 32UL;
                    stReload64Config.u32CountHighShiftLeft = 0UL;

                    stReload64Config.u32CountLowRegister = GPTM_TAILR_OFFSET;
                    stReload64Config.u32CountLowMask = 0xFFFFFFFFUL;
                    stReload64Config.u32CountLowShiftRight = 0UL;
                    stReload64Config.u32CountLowShiftLeft = 0UL;

                    stReload64Config.pu64CountValue = &u64TimerValue;

                    TIMER_vSet2Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stReload64Config);
                break;
                case TIMER_enCONFIG_INDIVIDUAL:
                    enSubModeVar = TIMER__enGetSubMode(enModule);
                    enAltModeVar = TIMER__enGetAltMode(enModule);
                    enDirectionVar = TIMER__enGetCountDir(enModule);

                    u64TimerValue = u64Reload;
                    stReload64Config.u32CountHighShiftLeft = 0UL;
                    stReload64Config.u32CountLowShiftRight = 0UL;
                    stReload64Config.u32CountLowShiftLeft = 0UL;
                    stReload64Config.pu64CountValue = &u64TimerValue;
                    if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                    {
                        stReload64Config.u32CountHighRegister = GPTM_TAILR_OFFSET + (4UL * u32SubModule);
                        stReload64Config.u32CountHighMask = 0xFFFFFFFFUL;
                        stReload64Config.u32CountHighShiftRight = 16UL;

                        stReload64Config.u32CountLowRegister = GPTM_TAPR_OFFSET + (4UL * u32SubModule);
                        stReload64Config.u32CountLowMask = 0xFFFFUL;
                    }
                    else
                    {
                        stReload64Config.u32CountHighRegister = GPTM_TAPR_OFFSET + (4UL * u32SubModule);
                        stReload64Config.u32CountHighMask = 0xFFFFUL;
                        stReload64Config.u32CountHighShiftRight = 32UL;

                        stReload64Config.u32CountLowRegister = GPTM_TAILR_OFFSET + (4UL * u32SubModule);
                        stReload64Config.u32CountLowMask = 0xFFFFFFFFUL;
                    }
                    TIMER_vSet2Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stReload64Config);
                    break;
                default:
                break;
            }
        }
    }
}

TIMER_nSTATUS TIMER__enGetReload(TIMER_nMODULE enModule, uint64_t* pu64Reload)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_UNDEF;

    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_UNDEF;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_UNDEF;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_UNDEF;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_UNDEF;


    TIMER_Count64_TypeDef stReload64Config = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_TypeDef stReload32Config = {0UL, 0UL, 0UL, 0UL};

    static uint32_t TimerValue = 0UL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;

    if(0UL != (uint32_t) pu64Reload)
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
                        stReload32Config.u32CountRegister = GPTM_TAILR_OFFSET;
                        stReload32Config.u32CountMask = 0xFFFFFFFFUL;
                        stReload32Config.u32CountShiftRight = 0UL;
                        stReload32Config.pu32CountValue = &TimerValue;

                        TIMER_enGet1Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stReload32Config);
                        *pu64Reload = (uint64_t)TimerValue;
                    break;

                    case TIMER_enCONFIG_INDIVIDUAL:
                        enSubModeVar = TIMER__enGetSubMode(enModule);
                        enAltModeVar = TIMER__enGetAltMode(enModule);
                        enDirectionVar = TIMER__enGetCountDir(enModule);
                        /*One shot or Periodic*/
                        if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                        {

                            stReload64Config.u32CountHighRegister = GPTM_TAILR_OFFSET + (4UL * u32SubModule);
                            stReload64Config.u32CountHighMask = 0xFFFFUL;
                            stReload64Config.u32CountHighShiftRight = 0UL;
                            stReload64Config.u32CountHighShiftLeft = 8UL;

                            stReload64Config.u32CountLowRegister = GPTM_TAPR_OFFSET + (4UL * u32SubModule);
                            stReload64Config.u32CountLowMask = 0xFFUL;
                            stReload64Config.u32CountLowShiftLeft = 0UL;
                            stReload64Config.u32CountLowShiftRight = 0UL;

                            stReload64Config.pu64CountValue = pu64Reload;
                        }
                        /*Edge count, Edge Time or PWM*/
                        else
                        {

                            stReload64Config.u32CountHighRegister = GPTM_TAPR_OFFSET + (4UL * u32SubModule);
                            stReload64Config.u32CountHighMask = 0xFFUL;
                            stReload64Config.u32CountHighShiftRight = 0UL;
                            stReload64Config.u32CountHighShiftLeft = 16UL;

                            stReload64Config.u32CountLowRegister = GPTM_TAILR_OFFSET + (4UL * u32SubModule);
                            stReload64Config.u32CountLowMask = 0xFFFFUL;
                            stReload64Config.u32CountLowShiftRight = 0UL;
                            stReload64Config.u32CountLowShiftLeft = 0UL;

                            stReload64Config.pu64CountValue = pu64Reload;
                        }

                        TIMER_enGet2Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stReload64Config);
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
                    case TIMER_enCONFIG_RTC:

                        stReload64Config.u32CountHighRegister = GPTM_TBILR_OFFSET;
                        stReload64Config.u32CountHighMask = 0xFFFFFFFFUL;
                        stReload64Config.u32CountHighShiftRight = 0UL;
                        stReload64Config.u32CountHighShiftLeft = 32UL;

                        stReload64Config.u32CountLowRegister = GPTM_TAILR_OFFSET;
                        stReload64Config.u32CountLowMask = 0xFFFFFFFFUL;
                        stReload64Config.u32CountLowShiftRight = 0UL;
                        stReload64Config.u32CountLowShiftLeft = 0UL;

                        stReload64Config.pu64CountValue = pu64Reload;

                        TIMER_enGet2Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stReload64Config);
                    break;
                    case TIMER_enCONFIG_INDIVIDUAL:
                        enSubModeVar = TIMER__enGetSubMode(enModule);
                        enAltModeVar = TIMER__enGetAltMode(enModule);
                        enDirectionVar = TIMER__enGetCountDir(enModule);

                        stReload64Config.u32CountHighShiftRight = 0UL;
                        stReload64Config.u32CountLowShiftRight = 0UL;
                        stReload64Config.u32CountLowShiftLeft = 0UL;
                        stReload64Config.pu64CountValue = pu64Reload;
                        /*Prescaler*/
                        /*One shot and periodic Down, no PWM no Capture*/
                        if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                        {
                            stReload64Config.u32CountHighRegister = GPTM_TAILR_OFFSET + (4UL * u32SubModule);
                            stReload64Config.u32CountHighMask = 0xFFFFFFFFUL;
                            stReload64Config.u32CountHighShiftLeft = 16UL;

                            stReload64Config.u32CountLowRegister = GPTM_TAPR_OFFSET + (4UL * u32SubModule);
                            stReload64Config.u32CountLowMask = 0xFFFFUL;
                        }
                        /*Time Extension*/
                        /*PWM, capture, One shot UP or periodic UP*/
                        else
                        {
                            stReload64Config.u32CountHighRegister = GPTM_TAPR_OFFSET + (4UL * u32SubModule);
                            stReload64Config.u32CountHighMask = 0xFFFFUL;
                            stReload64Config.u32CountHighShiftLeft = 32UL;

                            stReload64Config.u32CountLowRegister = GPTM_TAILR_OFFSET + (4UL * u32SubModule);
                            stReload64Config.u32CountLowMask = 0xFFFFFFFFUL;

                        }
                        TIMER_enGetCount64Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &stReload64Config);
                    break;

                    default:
                    break;

                }
            }
        }
    }
    return enStatus;
}

