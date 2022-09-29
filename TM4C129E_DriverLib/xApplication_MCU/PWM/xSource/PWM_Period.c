/**
 *
 * @file PWM_Period.c
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
 * @verbatim 25 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/PWM/xHeader/PWM_Period.h>

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

PWM_nERROR PWM_Generator__enSetPeriod_us(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32PeriodArg)
{
    PWM_nERROR enStatus = PWM_enERROR_POINTER;
    uint32_t u32SysClk = 0UL;
    uint32_t u32LoadValue = 0UL;
    uint32_t u32Divisor = 0UL;
    uint32_t u32DivShift = 0UL;
    PWM_nCLOCK_DIV enDivShift = PWM_enCLOCK_DIV_2;
    PWM_nCLOCK enClkSource = PWM_enCLOCK_SYSCLK;
    if(0UL != u32PeriodArg)
    {
        enStatus = PWM_enERROR_OK;
        enDivShift = PWM__enGetClockDivisor(enModule);
        enClkSource = PWM__enGetClockSource(enModule);
        /*First time this module will be configured*/
        if((PWM_enCLOCK_DIV_64 == enDivShift) &&
           (PWM_enCLOCK_SYSCLK == enClkSource))
        {

            u32SysClk = SYSCTL__u32GetSystemClock();
            u32SysClk /= 1000000UL;

            u32LoadValue =  u32SysClk * u32PeriodArg;
            if(0x10000UL < u32LoadValue)
            {
                u32LoadValue /= 2UL;
                while((0x10000UL < u32LoadValue) && ((uint32_t) PWM_enCLOCK_DIV_64 >= u32DivShift))
                {
                    u32LoadValue /= 2UL;
                    u32DivShift++;
                }
                if((0x10000UL >= u32LoadValue) && ((uint32_t) PWM_enCLOCK_DIV_64 >= u32DivShift))
                {
                    u32LoadValue -= 1UL;
                    PWM__vSetClockDivisor(enModule, (PWM_nCLOCK_DIV) u32DivShift);
                    PWM__vSetClockSource(enModule, PWM_enCLOCK_DIVIDER);
                    PWM_Generator__vSetLoad(enModule, enGenerator, u32LoadValue);
                }
                else
                {
                    enStatus = PWM_enERROR_POINTER;
                }

            }
            else
            {
                u32LoadValue -= 1UL;
                PWM__vSetClockDivisor(enModule, PWM_enCLOCK_DIV_2);
                PWM__vSetClockSource(enModule, PWM_enCLOCK_SYSCLK);
                PWM_Generator__vSetLoad(enModule, enGenerator, u32LoadValue);
            }
        }
        /*Divisor and Source can not be modified*/
        else
        {
            u32SysClk = SYSCTL__u32GetSystemClock();
            u32SysClk /= 1000000UL;
            u32LoadValue =  u32SysClk;
            u32LoadValue *= u32PeriodArg;
            if(PWM_enCLOCK_SYSCLK != enClkSource)
            {
                u32Divisor = 2UL;
                u32Divisor <<= (uint32_t) enDivShift;
                u32LoadValue /= u32Divisor;
            }

            if(0x10000UL >= u32LoadValue)
            {
                u32LoadValue -= 1UL;
                PWM_Generator__vSetLoad(enModule, enGenerator, u32LoadValue);
            }
            else
            {
                enStatus = PWM_enERROR_POINTER;
            }

        }
    }
    return (enStatus);

}

uint32_t PWM_Generator__u32GetPeriod_us(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32PeriodReg = 0UL;
    uint32_t u32SysClk = 0UL;
    uint32_t u32LoadValue = 0UL;
    uint32_t u32DivShift = 0UL;
    PWM_nCLOCK enClkSource = PWM_enCLOCK_SYSCLK;
    uint32_t u32Divisor = 2UL;

    u32SysClk = SYSCTL__u32GetSystemClock();
    u32SysClk /= 1000000UL;
    u32LoadValue = PWM_Generator__u32GetLoad(enModule, enGenerator);
    u32LoadValue++;
    enClkSource = PWM__enGetClockSource(enModule);
    u32PeriodReg = u32LoadValue;
    u32PeriodReg /= u32SysClk;
    if(PWM_enCLOCK_SYSCLK != enClkSource)
    {
        u32DivShift = (uint32_t) PWM__enGetClockDivisor(enModule);
        u32Divisor <<= u32DivShift;
        u32PeriodReg *= u32Divisor;
    }
    return (u32PeriodReg);
}

