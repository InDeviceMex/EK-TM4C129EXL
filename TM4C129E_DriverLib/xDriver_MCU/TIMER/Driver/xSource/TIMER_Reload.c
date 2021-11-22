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

void TIMER__vSetReload(TIMER_nMODULE enModule, uint32_t u32Reload)
{
    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_WIDE;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_DOWN;

    TIMER_Count32_Preescale_t stMatch32PreescalerConfig =
    {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_t stReload32Config = {0UL, 0UL, 0UL, 0UL};

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

            u32TimerValue = u32Reload;
            stReload32Config.u32CountRegister = GPTM_TAILR_OFFSET;
            stReload32Config.u32CountMask = 0xFFFFFFFFUL;
            stReload32Config.u32CountShiftRight = 0UL;
            stReload32Config.pu32CountValue = &u32TimerValue;
            TIMER_vSet1Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber,
                                      &stReload32Config);
        break;

        case TIMER_enCONFIG_INDIVIDUAL:
            enSubModeVar = TIMER__enGetSubMode(enModule);
            enAltModeVar = TIMER__enGetAltMode(enModule);
            enDirectionVar = TIMER__enGetCountDir(enModule);

            u32TimerValue = u32Reload;
            stMatch32PreescalerConfig.u32CountHighShiftLeft = 0UL;
            stMatch32PreescalerConfig.u32CountLowShiftRight = 0UL;
            stMatch32PreescalerConfig.u32CountLowShiftLeft = 0UL;
            stMatch32PreescalerConfig.pu32CountValue = (uint32_t*) &u32TimerValue;
            if((TIMER_enALT_MODE_CC == enAltModeVar) &&
               (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) &&
               (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
            {
                stMatch32PreescalerConfig.u32CountHighRegister = GPTM_TAILR_OFFSET +
                                                                (4UL * u32SubModule);
                stMatch32PreescalerConfig.u32CountHighMask = 0xFFFFUL;
                stMatch32PreescalerConfig.u32CountHighShiftRight = 8UL;

                stMatch32PreescalerConfig.u32CountLowRegister = GPTM_TAPR_OFFSET +
                                                                (4UL * u32SubModule);
                stMatch32PreescalerConfig.u32CountLowMask = 0xFFUL;

            }
            else
            {
                stMatch32PreescalerConfig.u32CountHighRegister = GPTM_TAPR_OFFSET +
                                                                (4UL * u32SubModule);
                stMatch32PreescalerConfig.u32CountHighMask = 0xFFUL;
                stMatch32PreescalerConfig.u32CountHighShiftRight = 16UL;

                stMatch32PreescalerConfig.u32CountLowRegister = GPTM_TAILR_OFFSET +
                                                                (4UL * u32SubModule);
                stMatch32PreescalerConfig.u32CountLowMask = 0xFFFFUL;
            }
            TIMER_vSet2Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber,
                                      &stMatch32PreescalerConfig);
        break;
        default:
        break;
    }
}

uint32_t TIMER__u32GetReload(TIMER_nMODULE enModule)
{
    uint32_t u32ReloadReg = 0UL;
    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_WIDE;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_DOWN;


    TIMER_Count32_Preescale_t stMatch32PreescalerConfig =
    {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_t stReload32Config = {0UL, 0UL, 0UL, 0UL};

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
            stReload32Config.u32CountRegister = GPTM_TAILR_OFFSET;
            stReload32Config.u32CountMask = 0xFFFFFFFFUL;
            stReload32Config.u32CountShiftRight = 0UL;
            stReload32Config.pu32CountValue = &u32TimerValue;

            TIMER_enGet1Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber,
                                       &stReload32Config);
        break;

        case TIMER_enCONFIG_INDIVIDUAL:
            enSubModeVar = TIMER__enGetSubMode(enModule);
            enAltModeVar = TIMER__enGetAltMode(enModule);
            enDirectionVar = TIMER__enGetCountDir(enModule);

            stMatch32PreescalerConfig.u32CountHighShiftRight = 0UL;
            stMatch32PreescalerConfig.u32CountLowShiftRight = 0UL;
            stMatch32PreescalerConfig.u32CountLowShiftLeft = 0UL;
            /*One shot or Periodic*/
            if((TIMER_enALT_MODE_CC == enAltModeVar) &&
               (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) &&
               (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
            {

                stMatch32PreescalerConfig.u32CountHighRegister = GPTM_TAILR_OFFSET +
                                                                (4UL * u32SubModule);
                stMatch32PreescalerConfig.u32CountHighMask = 0xFFFFUL;
                stMatch32PreescalerConfig.u32CountHighShiftLeft = 8UL;

                stMatch32PreescalerConfig.u32CountLowRegister = GPTM_TAPR_OFFSET +
                                                                (4UL * u32SubModule);
                stMatch32PreescalerConfig.u32CountLowMask = 0xFFUL;

                stMatch32PreescalerConfig.pu32CountValue = &u32TimerValue;
            }
            /*Edge count, Edge Time or PWM*/
            else
            {

                stMatch32PreescalerConfig.u32CountHighRegister = GPTM_TAPR_OFFSET +
                                                                (4UL * u32SubModule);
                stMatch32PreescalerConfig.u32CountHighMask = 0xFFUL;
                stMatch32PreescalerConfig.u32CountHighShiftLeft = 16UL;

                stMatch32PreescalerConfig.u32CountLowRegister = GPTM_TAILR_OFFSET +
                                                            (4UL * u32SubModule);
                stMatch32PreescalerConfig.u32CountLowMask = 0xFFFFUL;

                stMatch32PreescalerConfig.pu32CountValue = &u32TimerValue;
            }

            TIMER_enGet2Count32Generic((TIMER_nMODULE_NUM) u32ModuleNumber,
                                       &stMatch32PreescalerConfig);
        break;
        default:
        break;
    }
    u32ReloadReg = u32TimerValue;
    return (u32ReloadReg);
}

