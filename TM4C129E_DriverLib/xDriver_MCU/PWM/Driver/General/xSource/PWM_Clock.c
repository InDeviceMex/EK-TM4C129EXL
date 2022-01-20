/**
 *
 * @file PWM_Clock.c
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/General/xHeader/PWM_Clock.h>

#include <xDriver_MCU/PWM/Driver/General/xHeader/PWM_GeneralGeneric.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM__vSetClockSource(PWM_nMODULE enModule, PWM_nCLOCK enClock)
{
    PWM__vSetGeneralGeneric((uint32_t) enModule, PWM_CC_OFFSET, (uint32_t) enClock,
                            PWM_CC_USEPWM_MASK, PWM_CC_R_USEPWM_BIT);
}

PWM_nCLOCK PWM__enGetClockSource(PWM_nMODULE enModule)
{
    return ((PWM_nCLOCK) PWM__u32GetGeneralGeneric((uint32_t) enModule, PWM_CC_OFFSET,
                                                   PWM_CC_USEPWM_MASK, PWM_CC_R_USEPWM_BIT));
}

void PWM__vSetClockDivisor(PWM_nMODULE enModule, PWM_nCLOCK_DIV enDivisorArg)
{
    PWM__vSetGeneralGeneric((uint32_t) enModule, PWM_CC_OFFSET, enDivisorArg,
                            PWM_CC_PWMDIV_MASK, PWM_CC_R_PWMDIV_BIT);
}

void PWM__vSetClockDivisorNum(PWM_nMODULE enModule, uint32_t u32DivisorArg)
{
    uint32_t u32CountReg = 0UL;
    uint32_t u32ValueReg = 0UL;
    uint32_t u32DivisorReg = u32DivisorArg;
    u32DivisorReg &= (uint32_t) PWM_enCLOCK_DIV_NUM_MASK;

    if(0UL != u32DivisorReg)
    {
        if(1UL == u32DivisorReg)
        {
            PWM__vSetClockSource(enModule, PWM_enCLOCK_SYSCLK);
        }
        else
        {

            PWM__vSetClockSource(enModule, PWM_enCLOCK_DIVIDER);
            u32DivisorReg >>= 1UL;
            while(0UL != u32DivisorReg)
            {
                if(1UL & u32DivisorReg)
                {
                    u32ValueReg = u32CountReg;
                }
                u32CountReg++;
                u32DivisorReg >>= 1UL;
            }
            PWM__vSetGeneralGeneric((uint32_t) enModule, PWM_CC_OFFSET, u32ValueReg,
                                    PWM_CC_PWMDIV_MASK, PWM_CC_R_PWMDIV_BIT);
        }
    }
}

PWM_nCLOCK_DIV PWM__enGetClockDivisor(PWM_nMODULE enModule)
{
    PWM_nCLOCK_DIV enDivisorArg = PWM_enCLOCK_DIV_2;
    enDivisorArg = (PWM_nCLOCK_DIV) PWM__u32GetGeneralGeneric((uint32_t) enModule, PWM_CC_OFFSET,
                                              PWM_CC_PWMDIV_MASK, PWM_CC_R_PWMDIV_BIT);
    return (enDivisorArg);
}

uint32_t PWM__u32GetClockDivisor(PWM_nMODULE enModule)
{
    PWM_nCLOCK enClockReg = PWM_enCLOCK_SYSCLK;
    uint32_t u32DivisorBitReg = 0UL;
    uint32_t u32DivisorReg = 1UL;

    enClockReg = PWM__enGetClockSource(enModule);
    if(PWM_enCLOCK_SYSCLK != enClockReg)
    {
        u32DivisorBitReg = PWM__u32GetGeneralGeneric((uint32_t) enModule, PWM_CC_OFFSET,
                                                  PWM_CC_PWMDIV_MASK, PWM_CC_R_PWMDIV_BIT);
        u32DivisorBitReg++;
        u32DivisorReg = 1UL;
        u32DivisorReg <<= (uint32_t) u32DivisorBitReg;
    }
    return (u32DivisorReg);
}
