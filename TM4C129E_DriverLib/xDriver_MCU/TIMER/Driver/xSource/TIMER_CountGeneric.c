/**
 *
 * @file TIMER_CountGeneric.c
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
 * @verbatim 3 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_CountGeneric.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

TIMER_nSTATUS TIMER_enGet1Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                                         const TIMER_Count32_TypeDef* pstCount)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_ERROR;
    uint32_t u32Reg = 0UL;
    uint32_t u32TimerBase = 0UL;
    if((0UL != (uint32_t) pstCount->pu32CountValue) && (0UL != (uint32_t) pstCount))
    {
        enStatus = TIMER_enSTATUS_OK;
        u32TimerBase = TIMER__u32BlockBaseAddress(enModuleNumber);

        u32TimerBase += pstCount->u32CountRegister;

        u32Reg = *(volatile uint32_t*) (u32TimerBase);

        if(0xFFFFFFFFUL != pstCount->u32CountMask)
        {
            u32Reg >>= pstCount->u32CountShiftRight;
            u32Reg &= pstCount->u32CountMask;
        }
        *pstCount->pu32CountValue = (uint32_t) u32Reg;
    }
    return (enStatus);
}

void TIMER_vSet1Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                               const TIMER_Count32_TypeDef* pstCount)
{
    uint32_t u32Reg = 0UL;
    uint32_t u32TimerBase = 0UL;
    if((0UL != (uint32_t) pstCount->pu32CountValue) && (0UL != (uint32_t) pstCount))
    {
        u32Reg = *pstCount->pu32CountValue;
        u32TimerBase = TIMER__u32BlockBaseAddress(enModuleNumber);

        u32TimerBase += pstCount->u32CountRegister;

        u32Reg >>= pstCount->u32CountShiftRight;
        u32Reg &= pstCount->u32CountMask;

        *(volatile uint32_t*) (u32TimerBase) = (uint32_t) u32Reg;
    }
}

TIMER_nSTATUS TIMER_enGet2Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                                         const TIMER_Count32_Preescale_TypeDef* pstCount)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_ERROR;

    uint32_t u32RegHigh = 0UL;
    uint32_t u32RegLow = 0UL;

    uint32_t u32TimerBase = 0UL;
    uint32_t u32TimerRegisterHigh = 0UL;
    uint32_t u32TimerRegisterLow = 0UL;

    if((0UL != (uint32_t) pstCount->pu32CountValue) && (0UL != (uint32_t) pstCount))
    {
        enStatus = TIMER_enSTATUS_OK;
        u32TimerBase = TIMER__u32BlockBaseAddress(enModuleNumber);

        u32TimerRegisterHigh = u32TimerBase + pstCount->u32CountHighRegister;
        u32TimerRegisterLow = u32TimerBase + pstCount->u32CountLowRegister;

        u32RegHigh = *(volatile uint32_t*) (u32TimerRegisterHigh);
        u32RegLow = *(volatile uint32_t*) (u32TimerRegisterLow);

        if(0xFFFFFFFFUL != pstCount->u32CountHighMask)
        {
            u32RegHigh >>= pstCount->u32CountHighShiftRight;
            u32RegHigh &= pstCount->u32CountHighMask;
        }
        if(0xFFFFFFFFUL != pstCount->u32CountLowMask)
        {
            u32RegLow >>= pstCount->u32CountLowShiftRight;
            u32RegLow &= pstCount->u32CountLowMask;
        }

        u32RegHigh <<= pstCount->u32CountHighShiftLeft;
        u32RegLow <<= pstCount->u32CountLowShiftLeft;

        *pstCount->pu32CountValue = (uint32_t) u32RegHigh;
        *pstCount->pu32CountValue |= (uint32_t) u32RegLow;
    }
    return (enStatus);
}

void TIMER_vSet2Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                               const TIMER_Count32_Preescale_TypeDef* pstCount)
{
    uint32_t u32Reg = 0ULL;

    uint32_t u32RegHigh = 0UL;
    uint32_t u32RegLow = 0UL;

    uint32_t u32TimerBase = 0UL;
    uint32_t u32TimerRegisterHigh = 0UL;
    uint32_t u32TimerRegisterLow = 0UL;

    if((0UL != (uint32_t) pstCount->pu32CountValue) && (0UL != (uint32_t) pstCount))
    {
        u32TimerBase = TIMER__u32BlockBaseAddress(enModuleNumber);

        u32TimerRegisterHigh = u32TimerBase + pstCount->u32CountHighRegister;
        u32TimerRegisterLow = u32TimerBase + pstCount->u32CountLowRegister;

        u32Reg = *pstCount->pu32CountValue;

        u32RegHigh = u32Reg;
        u32RegHigh >>= pstCount->u32CountHighShiftRight;
        u32RegHigh &= pstCount->u32CountHighMask;
        u32RegHigh <<= pstCount->u32CountHighShiftLeft;

        u32RegLow = u32Reg;
        u32RegLow >>= pstCount->u32CountLowShiftRight;
        u32RegLow &= pstCount->u32CountLowMask;
        u32RegLow <<= pstCount->u32CountLowShiftLeft;


        *(volatile uint32_t*) (u32TimerRegisterHigh) = (uint32_t) u32RegHigh;
        *(volatile uint32_t*) (u32TimerRegisterLow) = (uint32_t) u32RegLow;
    }
}
