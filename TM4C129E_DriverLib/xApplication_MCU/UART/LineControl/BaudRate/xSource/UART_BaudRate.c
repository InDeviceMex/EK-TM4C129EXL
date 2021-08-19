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

UART_nSTATUS UART__enSetBaudRate(UART_nMODULE enModule, uint32_t u32BaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_OK;
    UART_nCLOCK enUartClock = UART_enCLOCK_SYSCLK;
    float32_t f32BaudRateDivisor = 0.0f;
    float32_t f32BaudRateFractional = 0.0f;
    uint32_t u32BaudRateFractional = 0UL;
    uint32_t u32BaudRateFractional2 = 0UL;
    uint32_t u32BaudRateInteger = 0UL;
    uint32_t u32BaudRateInteger2 = 0UL;
    UART_nSMART enUartMode = UART_enSMART_DIS;
    UART_nHIGH_SPEED enHSEValue = UART_enHIGH_SPEED_ENA;
    uint32_t u32CurrentClock = 0UL;
    MCU_nFPU_STATE enFPUActive = MCU_enFPU_STATE_INACTIVE;

    enFPUActive = MCU__enGetFPUContextActive();


    u32CurrentClock = SYSCTL__u32GetAlternateClock();
    enUartClock = UART__enGetClockConfig(enModule);
    if(UART_enCLOCK_SYSCLK == enUartClock)
    {
        u32CurrentClock = SYSCTL__u32GetSystemClock();
    }

    f32BaudRateDivisor = (float32_t) u32CurrentClock;
    f32BaudRateDivisor /= (float32_t) u32BaudRateArg;
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
        u32BaudRateInteger = (uint32_t) f32BaudRateDivisor;

        f32BaudRateFractional = f32BaudRateDivisor;
        f32BaudRateFractional -= (float32_t) u32BaudRateInteger;
        f32BaudRateFractional *= 64.0f;
        f32BaudRateFractional += 0.5f;

        u32BaudRateFractional = (uint32_t) f32BaudRateFractional;
        if(UART_enHIGH_SPEED_ENA == enHSEValue)
        {
            f32BaudRateDivisor /= 2.0f;
            u32BaudRateInteger2 = (uint32_t) f32BaudRateDivisor;

            f32BaudRateFractional = f32BaudRateDivisor;
            f32BaudRateFractional -= (float32_t) u32BaudRateInteger2;
            f32BaudRateFractional *= 64.0f;
            f32BaudRateFractional += 0.5f;

            u32BaudRateFractional2 = (uint32_t) f32BaudRateFractional;

            if(u32BaudRateFractional2 < u32BaudRateFractional)
            {
                enHSEValue = UART_enHIGH_SPEED_DIS;
                /*Set HSE to 16*/
                u32BaudRateFractional = u32BaudRateFractional2;
                u32BaudRateInteger = u32BaudRateInteger2;
            }
        }
        UART__vSetHighSpeed(enModule, enHSEValue);
        UART__vSetBaudRateInteger(enModule, u32BaudRateInteger);
        UART__vSetBaudRateFractional(enModule, u32BaudRateFractional);
    }
    MCU__vSetFPUContextActive(enFPUActive);
    return (enStatus);
}

uint32_t UART__u32GetBaudRate(UART_nMODULE enModule)
{
    UART_nCLOCK enUartClock = UART_enCLOCK_SYSCLK;
    UART_nHIGH_SPEED enHSEValue = UART_enHIGH_SPEED_DIS;
    uint32_t u32BaudRate = 0UL;
    float32_t f32BaudRate = 0.0f;
    float32_t f32BaudRateDivisor = 0.0f;
    float32_t f32BaudRateFractional = 0.0f;
    uint32_t u32BaudRateFractional = 0UL;
    uint32_t u32BaudRateInteger = 0UL;
    uint32_t u32HSEDivider= 8UL;
    uint32_t u32CurrentClock = 0UL;
    MCU_nFPU_STATE enFPUActive = MCU_enFPU_STATE_INACTIVE;

    enFPUActive = MCU__enGetFPUContextActive();

    u32CurrentClock = SYSCTL__u32GetAlternateClock();
    enHSEValue = UART__enGetHighSpeed(enModule);
    if(UART_enHIGH_SPEED_UNDEF != enHSEValue)
    {
        if(UART_enHIGH_SPEED_DIS == enHSEValue)
        {
            u32HSEDivider = 16UL;
        }

        enUartClock = UART__enGetClockConfig(enModule);
        if(UART_enCLOCK_SYSCLK == enUartClock)
        {
            u32CurrentClock = SYSCTL__u32GetSystemClock();
        }

        u32BaudRateInteger = UART__u32GetBaudRateInteger(enModule);
        f32BaudRateDivisor = (float32_t) u32BaudRateInteger;
        u32BaudRateFractional = UART__u32GetBaudRateFractional(enModule);
        f32BaudRateFractional = (float32_t) u32BaudRateFractional;
        f32BaudRateFractional /= 64.0f;

        f32BaudRateDivisor += f32BaudRateFractional;
        f32BaudRateDivisor *= (float32_t) u32HSEDivider;
        f32BaudRate = (float32_t) u32CurrentClock;
        f32BaudRate /= f32BaudRateDivisor;

        u32BaudRate = (uint32_t) f32BaudRate;
    }
    MCU__vSetFPUContextActive(enFPUActive);
    return (u32BaudRate);
}
