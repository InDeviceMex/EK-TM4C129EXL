/**
 *
 * @file UART_BaudRate.c
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
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/UART/LineControl/BaudRate/UART_BaudRate.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

UART_nSTATUS UART__enSetBaudRate(UART_nMODULE enModule, UBase_t uxBaudRateArg)
{
    MCU_nSTATUS enFPUActive = MCU_enSTATUS_INACTIVE;
    enFPUActive = MCU__enGetFPUContextActive();
    UART_nSTATUS enStatus = UART_enSTATUS_OK;
    UART_nCLOCK enUartClock = UART_enCLOCK_SYSCLK;
    float32_t f32BaudRateDivisor = 0.0f;
    float32_t f32BaudRateFractional = 0.0f;
    UBase_t uxBaudRateFractional = 0UL;
    UBase_t uxBaudRateFractional2 = 0UL;
    UBase_t uxBaudRateInteger = 0UL;
    UBase_t uxBaudRateInteger2 = 0UL;
    UART_nSMART enUartMode = UART_enSMART_DIS;
    UART_nHIGH_SPEED enHSEValue = UART_enHIGH_SPEED_ENA;
    UBase_t uxCurrentClock = 0UL;


    uxCurrentClock = SYSCTL__uxGetAlternateClock();
    enUartClock = UART__enGetClockConfig(enModule);
    if(UART_enCLOCK_SYSCLK == enUartClock)
    {
        uxCurrentClock = SYSCTL__uxGetSystemClock();
    }

    f32BaudRateDivisor = (float32_t) uxCurrentClock;
    f32BaudRateDivisor /= (float32_t) uxBaudRateArg;
    f32BaudRateDivisor /= 8.0f;

    /*get uart mode*/
    enUartMode = UART__enGetSMART(enModule);
    if((65535.0f < f32BaudRateDivisor) || (UART_enSMART_ENA == enUartMode))
    {
        f32BaudRateDivisor /= 2.0f; /*HSE feature*/
        /*Set HSE to 16 */
        if(65535.0f < f32BaudRateDivisor)
        {
            enStatus = UART_enSTATUS_ERROR;
        }
        else
        {
            enHSEValue = UART_enHIGH_SPEED_DIS;
        }
    }

    if(UART_enSTATUS_OK == enStatus)
    {
        uxBaudRateInteger = (UBase_t) f32BaudRateDivisor;

        f32BaudRateFractional = f32BaudRateDivisor;
        f32BaudRateFractional -= (float32_t) uxBaudRateInteger;
        f32BaudRateFractional *= 64.0f;
        f32BaudRateFractional += 0.5f;

        uxBaudRateFractional = (UBase_t) f32BaudRateFractional;
        if(UART_enHIGH_SPEED_ENA == enHSEValue)
        {
            f32BaudRateDivisor /= 2.0f;
            uxBaudRateInteger2 = (UBase_t) f32BaudRateDivisor;

            f32BaudRateFractional = f32BaudRateDivisor;
            f32BaudRateFractional -= (float32_t) uxBaudRateInteger2;
            f32BaudRateFractional *= 64.0f;
            f32BaudRateFractional += 0.5f;

            uxBaudRateFractional2 = (UBase_t) f32BaudRateFractional;

            if(uxBaudRateFractional2 < uxBaudRateFractional)
            {
                enHSEValue = UART_enHIGH_SPEED_DIS;
                /*Set HSE to 16*/
                uxBaudRateFractional = uxBaudRateFractional2;
                uxBaudRateInteger = uxBaudRateInteger2;
            }
        }
        UART__vSetHighSpeed(enModule, enHSEValue);
        UART__vSetBaudRateInteger(enModule, uxBaudRateInteger);
        UART__vSetBaudRateFractional(enModule, uxBaudRateFractional);
    }
    MCU__vSetFPUContextActive(enFPUActive);
    return (enStatus);
}

UBase_t UART__uxGetBaudRate(UART_nMODULE enModule)
{
    MCU_nSTATUS enFPUActive = MCU_enSTATUS_INACTIVE;
    enFPUActive = MCU__enGetFPUContextActive();
    UART_nCLOCK enUartClock = UART_enCLOCK_SYSCLK;
    UART_nHIGH_SPEED enHSEValue = UART_enHIGH_SPEED_DIS;
    UBase_t uxBaudRate = 0UL;
    float32_t f32BaudRate = 0.0f;
    float32_t f32BaudRateDivisor = 0.0f;
    float32_t f32BaudRateFractional = 0.0f;
    UBase_t uxBaudRateFractional = 0UL;
    UBase_t uxBaudRateInteger = 0UL;
    UBase_t uxHSEDivider= 8UL;
    UBase_t uxCurrentClock = 0UL;

    uxCurrentClock = SYSCTL__uxGetAlternateClock();
    enHSEValue = UART__enGetHighSpeed(enModule);
    if(UART_enHIGH_SPEED_UNDEF != enHSEValue)
    {
        if(UART_enHIGH_SPEED_DIS == enHSEValue)
        {
            uxHSEDivider = 16UL;
        }

        enUartClock = UART__enGetClockConfig(enModule);
        if(UART_enCLOCK_SYSCLK == enUartClock)
        {
            uxCurrentClock = SYSCTL__uxGetSystemClock();
        }

        uxBaudRateInteger = UART__uxGetBaudRateInteger(enModule);
        f32BaudRateDivisor = (float32_t) uxBaudRateInteger;
        uxBaudRateFractional = UART__uxGetBaudRateFractional(enModule);
        f32BaudRateFractional = (float32_t) uxBaudRateFractional;
        f32BaudRateFractional /= 64.0f;

        f32BaudRateDivisor += f32BaudRateFractional;
        f32BaudRateDivisor *= (float32_t) uxHSEDivider;
        f32BaudRate = (float32_t) uxCurrentClock;
        f32BaudRate /= f32BaudRateDivisor;

        uxBaudRate = (UBase_t) f32BaudRate;
    }
    MCU__vSetFPUContextActive(enFPUActive);
    return (uxBaudRate);
}
