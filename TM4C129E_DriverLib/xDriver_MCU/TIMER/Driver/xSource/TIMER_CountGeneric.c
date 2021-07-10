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

TIMER_nSTATUS TIMER_enGet1Count32Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count32_TypeDef* pstCount)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_ERROR;
    uint32_t u32Reg = 0UL;
    uint32_t u32TimerBase = 0UL;
    if((0UL != (uint32_t) pstCount->pu32CountValue) && (0UL != (uint32_t) pstCount))
    {
        enStatus = TIMER_enSTATUS_OK;
        u32TimerBase = TIMER_BLOCK_BASE[(uint32_t) enModuleSize][(uint32_t) enModuleNumber];

        u32TimerBase += pstCount->u32CountRegister;

        u32Reg = *(volatile uint32_t*) (u32TimerBase);

        if(0xFFFFFFFFUL != pstCount->u32CountMask)
        {
            u32Reg >>= pstCount->u32CountShiftRight;
            u32Reg &= pstCount->u32CountMask;
        }
        *pstCount->pu32CountValue = u32Reg;
    }
    return enStatus;
}

void TIMER_vSet1Count32Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count32_TypeDef* pstCount)
{
    uint32_t u32Reg = 0UL;
    uint32_t u32TimerBase = 0UL;
    if((0UL != (uint32_t) pstCount->pu32CountValue) && (0UL != (uint32_t) pstCount))
    {
        u32Reg = *pstCount->pu32CountValue;
        u32TimerBase = TIMER_BLOCK_BASE[(uint32_t) enModuleSize][(uint32_t) enModuleNumber];

        u32TimerBase += pstCount->u32CountRegister;

        u32Reg >>= pstCount->u32CountShiftRight;
        u32Reg &= pstCount->u32CountMask;

        *(volatile uint32_t*) (u32TimerBase) = u32Reg;
    }
}

TIMER_nSTATUS TIMER_enGet2Count32Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count64_TypeDef* pstCount)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_ERROR;

    uint32_t u64RegHigh = 0ULL;
    uint32_t u64RegLow = 0ULL;

    uint32_t u32RegHigh = 0UL;
    uint32_t u32RegLow = 0UL;

    uint32_t u32TimerBase = 0UL;
    uint32_t u32TimerRegisterHigh = 0UL;
    uint32_t u32TimerRegisterLow = 0UL;

    if((0UL != (uint32_t) pstCount->pu64CountValue) && (0UL != (uint32_t) pstCount))
    {
        enStatus = TIMER_enSTATUS_OK;
        u32TimerBase = TIMER_BLOCK_BASE[(uint32_t) enModuleSize][(uint32_t) enModuleNumber];

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

        u64RegHigh = u32RegHigh;
        u64RegHigh <<= pstCount->u32CountHighShiftLeft;
        u64RegLow = u32RegLow;
        u64RegLow <<= pstCount->u32CountLowShiftLeft;

        *pstCount->pu64CountValue = u64RegHigh;
        *pstCount->pu64CountValue |= u64RegLow;
    }
    return enStatus;
}

void TIMER_vSet2Count32Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count64_TypeDef* pstCount)
{

    uint64_t u64Reg = 0ULL;

    uint64_t u64RegHigh = 0ULL;
    uint64_t u64RegLow = 0ULL;

    uint32_t u32RegHigh = 0UL;
    uint32_t u32RegLow = 0UL;

    uint32_t u32TimerBase = 0UL;
    uint32_t u32TimerRegisterHigh = 0UL;
    uint32_t u32TimerRegisterLow = 0UL;

    if((0UL != (uint32_t) pstCount->pu64CountValue) && (0UL != (uint32_t) pstCount))
    {
        u32TimerBase = TIMER_BLOCK_BASE[(uint32_t) enModuleSize][(uint32_t) enModuleNumber];

        u32TimerRegisterHigh = u32TimerBase + pstCount->u32CountHighRegister;
        u32TimerRegisterLow = u32TimerBase + pstCount->u32CountLowRegister;

        u64Reg = *pstCount->pu64CountValue;

        u64RegHigh = u64Reg;
        u64RegHigh >>= pstCount->u32CountHighShiftRight;
        u32RegHigh = (uint32_t) u64RegHigh;
        u32RegHigh &= pstCount->u32CountHighMask;
        u64RegHigh = (uint64_t) u32RegHigh;
        u64RegHigh <<= pstCount->u32CountHighShiftLeft;
        u32RegHigh = (uint32_t) u64RegHigh;

        u64RegLow = u64Reg;
        u64RegLow >>= pstCount->u32CountLowShiftRight;
        u32RegLow = (uint32_t) u64RegLow;
        u32RegLow &= pstCount->u32CountLowMask;
        u64RegLow = (uint64_t) u32RegLow;
        u64RegLow <<= pstCount->u32CountLowShiftLeft;
        u32RegLow = (uint32_t) u64RegLow;

        *(volatile uint32_t*) (u32TimerRegisterHigh) = u32RegHigh;
        *(volatile uint32_t*) (u32TimerRegisterLow) = u32RegLow;
    }
}

TIMER_nSTATUS TIMER_enGetCount64Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count64_TypeDef* pstCount)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_ERROR;

    uint32_t u64RegHigh = 0ULL;
    uint32_t u64RegLow = 0ULL;

    uint32_t u32RegHigh = 0UL;
    uint32_t u32RegHigh2 = 0UL;
    uint32_t u32RegLow = 0UL;

    uint32_t u32TimerBase = 0UL;
    uint32_t u32TimerRegisterHigh = 0UL;
    uint32_t u32TimerRegisterLow = 0UL;

    if((0UL != (uint32_t) pstCount->pu64CountValue) && (0UL != (uint32_t) pstCount))
    {
        enStatus = TIMER_enSTATUS_OK;
        u32TimerBase = TIMER_BLOCK_BASE[(uint32_t) enModuleSize][(uint32_t) enModuleNumber];

        u32TimerRegisterHigh = u32TimerBase + pstCount->u32CountHighRegister;
        u32TimerRegisterLow = u32TimerBase + pstCount->u32CountLowRegister;

        do
        {
            u32RegHigh = *(volatile uint32_t*) (u32TimerRegisterHigh);
            u32RegLow = *(volatile uint32_t*) (u32TimerRegisterLow);
            u32RegHigh2 = *(volatile uint32_t*) (u32TimerRegisterHigh);
        }while(u32RegHigh != u32RegHigh2);

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

        u64RegHigh = u32RegHigh;
        u64RegHigh <<= pstCount->u32CountHighShiftLeft;
        u64RegLow = u32RegLow;
        u64RegLow <<= pstCount->u32CountLowShiftLeft;

        *pstCount->pu64CountValue = u64RegHigh;
        *pstCount->pu64CountValue |= u64RegLow;
    }
    return enStatus;
}

uint64_t  TIMER_u64GetCount_RTC(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber)
{
    uint64_t u64Reg = 0ULL;
    volatile uint32_t u32RegPredivider = 0UL;
    uint32_t u32RegHigh = 0UL;
    uint32_t u32RegHigh2 = 0UL;
    uint32_t u32RegLow = 0UL;
    uint32_t u32RegLow2 = 0UL;

    uint32_t u32TimerBase = 0UL;
    uint32_t u32TimerRegisterHigh = 0UL;
    uint32_t u32TimerRegisterPredivider = 0UL;
    uint32_t u32TimerRegisterLow = 0UL;

    u32TimerBase = TIMER_BLOCK_BASE[(uint32_t) enModuleSize][(uint32_t) enModuleNumber];

    u32TimerRegisterHigh = u32TimerBase + GPTM_TBR_OFFSET;
    u32TimerRegisterPredivider = u32TimerBase + GPTM_RTCPD_OFFSET;
    u32TimerRegisterLow = u32TimerBase + GPTM_TAR_OFFSET;

    do
    {
        u32RegHigh = *(volatile uint32_t*) (u32TimerRegisterHigh);
        u32RegPredivider = *(volatile uint32_t*) (u32TimerRegisterPredivider);
        u32RegLow = *(volatile uint32_t*) (u32TimerRegisterLow);
        u32RegLow2= *(volatile uint32_t*) (u32TimerRegisterHigh);
    }while(u32RegLow != u32RegLow2);

    do
    {
        u32RegHigh2 = *(volatile uint32_t*) (u32TimerRegisterHigh);
    }while(u32RegHigh != u32RegHigh2);

    u64Reg = (uint64_t) u32RegHigh;
    u64Reg <<= 32ULL;
    u64Reg |= (uint64_t) u32RegLow;
    return u64Reg;
}

uint64_t  TIMER_u64GetFreeCount_RTC(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber)
{
    uint64_t u64Reg = 0ULL;
    volatile uint32_t u32RegPredivider = 0UL;
    uint32_t u32RegHigh = 0UL;
    uint32_t u32RegHigh2 = 0UL;
    uint32_t u32RegLow = 0UL;
    uint32_t u32RegLow2 = 0UL;

    uint32_t u32TimerBase = 0UL;
    uint32_t u32TimerRegisterHigh = 0UL;
    uint32_t u32TimerRegisterPredivider = 0UL;
    uint32_t u32TimerRegisterLow = 0UL;

    u32TimerBase = TIMER_BLOCK_BASE[(uint32_t) enModuleSize][(uint32_t) enModuleNumber];

    u32TimerRegisterHigh = u32TimerBase + GPTM_TBV_OFFSET;
    u32TimerRegisterPredivider = u32TimerBase + GPTM_RTCPD_OFFSET;
    u32TimerRegisterLow = u32TimerBase + GPTM_TAV_OFFSET;

    do
    {
        u32RegHigh = *(volatile uint32_t*) (u32TimerRegisterHigh);
        u32RegPredivider = *(volatile uint32_t*) (u32TimerRegisterPredivider);
        u32RegLow = *(volatile uint32_t*) (u32TimerRegisterLow);
        u32RegLow2= *(volatile uint32_t*) (u32TimerRegisterHigh);
    }while(u32RegLow != u32RegLow2);

    do
    {
        u32RegHigh2 = *(volatile uint32_t*) (u32TimerRegisterHigh);
    }while(u32RegHigh != u32RegHigh2);

    u64Reg = (uint64_t) u32RegHigh;
    u64Reg <<= 32ULL;
    u64Reg |= (uint64_t) u32RegLow;
    return u64Reg;
}
