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

UART_nERROR UART__enSetBaudRate(UART_nMODULE enModuleArg, UBase_t uxBaudRateArg)
{
    MCU_nSTATUS enFPUActive = MCU__enGetFPUContextActive();

    UART_nERROR enErrorReg;
    UART_nCLOCK enUartClock;
    UART_nSTATE enSmartCardMode;
    UART_nCLOCK_DIVIDER enClockDividerReg;
    UBase_t uxBaudRateInteger;
    UBase_t uxBaudRateFractional;
    UBase_t uxCurrentClock;
    float32_t f32BaudRateDivisor;

    uxCurrentClock = 0UL;
    uxBaudRateInteger = 0UL;
    uxBaudRateFractional = 0UL;
    f32BaudRateDivisor = 0.0f;
    enClockDividerReg = UART_enCLOCK_DIVIDER_8;
    enSmartCardMode = UART_enSTATE_DIS;
    enUartClock = UART_enCLOCK_SYSCLK;
    enErrorReg = UART__enGetClockSource(enModuleArg, &enUartClock);
    if(UART_enERROR_OK == enErrorReg)
    {
        if(UART_enCLOCK_SYSCLK == enUartClock)
        {
            enErrorReg = (UART_nERROR) SYSCTL__enGetSystemClockFrequency(SYSCTL_enMODULE_0, &uxCurrentClock);
        }
        else
        {
            enErrorReg = (UART_nERROR) SYSCTL__enGetAlternateClockFrequency(SYSCTL_enMODULE_0, &uxCurrentClock);
        }

    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetSmartCardState(enModuleArg, &enSmartCardMode);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        f32BaudRateDivisor = (float32_t) uxCurrentClock;
        f32BaudRateDivisor /= (float32_t) uxBaudRateArg;
        f32BaudRateDivisor /= 8.0f;

        if((65535.0f < f32BaudRateDivisor) || (UART_enSTATE_ENA == enSmartCardMode))
        {
            f32BaudRateDivisor /= 2.0f; /*Divisor by 2, 16 in total HighSpeed feature*/
            /*Set HSE to 16 */
            if(65535.0f < f32BaudRateDivisor)
            {
                enErrorReg = UART_enERROR_VALUE;
            }
            else
            {
                enClockDividerReg = UART_enCLOCK_DIVIDER_16;
            }
        }
    }

    if(UART_enERROR_OK == enErrorReg)
    {
        float32_t f32BaudRateFractional;
        float32_t f32DiffError1Reg;
        float32_t f32DiffError2Reg;
        UBase_t uxBaudRateFractional2;
        UBase_t uxBaudRateInteger2;

        uxBaudRateInteger = (UBase_t) f32BaudRateDivisor;
        f32BaudRateFractional = f32BaudRateDivisor;
        f32BaudRateFractional -= (float32_t) uxBaudRateInteger;
        f32BaudRateFractional *= 64.0f;
        f32BaudRateFractional += 0.5f;
        uxBaudRateFractional = (UBase_t) f32BaudRateFractional;

        f32DiffError1Reg = f32BaudRateFractional;
        f32DiffError1Reg -= (float32_t) uxBaudRateFractional;
        f32DiffError1Reg *= 100.0f;

        if(50.0f <= f32DiffError1Reg)
        {
            f32DiffError1Reg = 1.0f - f32DiffError1Reg;
        }

        if(UART_enCLOCK_DIVIDER_8 == enClockDividerReg)
        {
            f32BaudRateDivisor /= 2.0f;

            uxBaudRateInteger2 = (UBase_t) f32BaudRateDivisor;
            f32BaudRateFractional = f32BaudRateDivisor;
            f32BaudRateFractional -= (float32_t) uxBaudRateInteger2;
            f32BaudRateFractional *= 64.0f;
            f32BaudRateFractional += 0.5f;
            uxBaudRateFractional2 = (UBase_t) f32BaudRateFractional;

            f32DiffError2Reg = f32BaudRateFractional;
            f32DiffError2Reg -= (float32_t) uxBaudRateFractional2;
            f32DiffError2Reg *= 100.0f;

            if(50.0f <= f32DiffError2Reg)
            {
                f32DiffError2Reg = 1.0f - f32DiffError2Reg;
            }

            if(f32DiffError2Reg < f32DiffError1Reg)
            {
                enClockDividerReg = UART_enCLOCK_DIVIDER_16;
                /*Set HSE to 16*/
                uxBaudRateFractional = uxBaudRateFractional2;
                uxBaudRateInteger = uxBaudRateInteger2;
            }
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetClockSourceDivider(enModuleArg, enClockDividerReg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetBaudRateIntegerPart(enModuleArg, uxBaudRateInteger);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetBaudRateFractionalPart(enModuleArg, uxBaudRateFractional);
    }
    MCU__vSetFPUContextActive(enFPUActive);
    return (enErrorReg);
}

UART_nERROR UART__enGetBaudRate(UART_nMODULE enModuleArg, UBase_t* puxBaudRateArg)
{
    MCU_nSTATUS enFPUActive = MCU__enGetFPUContextActive();

    UART_nERROR enErrorReg;
    UART_nCLOCK_DIVIDER enClockDividerReg;
    UART_nCLOCK enUartClock;
    UART_nSTATE enSmartCardMode;
    UBase_t uxCurrentClock;
    UBase_t uxBaudRateFractional;
    UBase_t uxBaudRateInteger;
    UBase_t uxHSEDivider;

    uxCurrentClock = 0UL;
    uxBaudRateInteger = 0UL;
    uxBaudRateFractional = 0UL;
    enSmartCardMode = UART_enSTATE_DIS;
    enClockDividerReg = UART_enCLOCK_DIVIDER_16;
    enUartClock = UART_enCLOCK_SYSCLK;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxBaudRateArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetClockSource(enModuleArg, &enUartClock);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        if(UART_enCLOCK_SYSCLK == enUartClock)
        {
            enErrorReg = (UART_nERROR) SYSCTL__enGetSystemClockFrequency(SYSCTL_enMODULE_0, &uxCurrentClock);
        }
        else
        {
            enErrorReg = (UART_nERROR) SYSCTL__enGetAlternateClockFrequency(SYSCTL_enMODULE_0, &uxCurrentClock);
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetBaudRateIntegerPart(enModuleArg, &uxBaudRateInteger);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetBaudRateFractionalPart(enModuleArg, &uxBaudRateFractional);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetSmartCardState(enModuleArg, &enSmartCardMode);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetClockSourceDivider(enModuleArg, &enClockDividerReg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        if((UART_enCLOCK_DIVIDER_16 == enClockDividerReg) || (UART_enSTATE_ENA == enSmartCardMode))
        {
            uxHSEDivider = 16UL;
        }
        else
        {
            uxHSEDivider= 8UL;
        }
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        float32_t f32BaudRate;
        float32_t f32BaudRateDivisor;
        float32_t f32BaudRateFractional;

        f32BaudRateDivisor = (float32_t) uxBaudRateInteger;
        f32BaudRateFractional = (float32_t) uxBaudRateFractional;
        f32BaudRateFractional /= 64.0f;

        f32BaudRateDivisor += f32BaudRateFractional;
        f32BaudRateDivisor *= (float32_t) uxHSEDivider;
        f32BaudRate = (float32_t) uxCurrentClock;
        f32BaudRate /= f32BaudRateDivisor;

        *puxBaudRateArg = (UBase_t) f32BaudRate;
    }
    MCU__vSetFPUContextActive(enFPUActive);
    return (enErrorReg);
}
