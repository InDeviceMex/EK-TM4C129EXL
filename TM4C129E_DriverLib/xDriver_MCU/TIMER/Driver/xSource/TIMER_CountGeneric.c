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
                                         const TIMER_Count32_t* pstCount)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_ERROR;
    UBase_t uxReg = 0UL;
    UBase_t uxTimerBase = 0UL;
    if((0UL != (UBase_t) pstCount->puxCountValue) && (0UL != (UBase_t) pstCount))
    {
        enStatus = TIMER_enSTATUS_OK;
        uxTimerBase = TIMER__uxBlockBaseAddress(enModuleNumber);

        uxTimerBase += pstCount->uxCountRegister;

        uxReg = *(volatile UBase_t*) (uxTimerBase);

        if(0xFFFFFFFFUL != pstCount->uxCountMask)
        {
            uxReg >>= pstCount->uxCountShiftRight;
            uxReg &= pstCount->uxCountMask;
        }
        *pstCount->puxCountValue = (UBase_t) uxReg;
    }
    return (enStatus);
}

void TIMER_vSet1Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                               const TIMER_Count32_t* pstCount)
{
    UBase_t uxReg = 0UL;
    UBase_t uxTimerBase = 0UL;
    if((0UL != (UBase_t) pstCount->puxCountValue) && (0UL != (UBase_t) pstCount))
    {
        uxReg = *pstCount->puxCountValue;
        uxTimerBase = TIMER__uxBlockBaseAddress(enModuleNumber);

        uxTimerBase += pstCount->uxCountRegister;

        uxReg >>= pstCount->uxCountShiftRight;
        uxReg &= pstCount->uxCountMask;

        *(volatile UBase_t*) (uxTimerBase) = (UBase_t) uxReg;
    }
}

TIMER_nSTATUS TIMER_enGet2Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                                         const TIMER_Count32_Preescale_t* pstCount)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_ERROR;

    UBase_t uxRegHigh = 0UL;
    UBase_t uxRegLow = 0UL;

    UBase_t uxTimerBase = 0UL;
    UBase_t uxTimerRegisterHigh = 0UL;
    UBase_t uxTimerRegisterLow = 0UL;

    if((0UL != (UBase_t) pstCount->puxCountValue) && (0UL != (UBase_t) pstCount))
    {
        enStatus = TIMER_enSTATUS_OK;
        uxTimerBase = TIMER__uxBlockBaseAddress(enModuleNumber);

        uxTimerRegisterHigh = uxTimerBase + pstCount->uxCountHighRegister;
        uxTimerRegisterLow = uxTimerBase + pstCount->uxCountLowRegister;

        uxRegHigh = *(volatile UBase_t*) (uxTimerRegisterHigh);
        uxRegLow = *(volatile UBase_t*) (uxTimerRegisterLow);

        if(0xFFFFFFFFUL != pstCount->uxCountHighMask)
        {
            uxRegHigh >>= pstCount->uxCountHighShiftRight;
            uxRegHigh &= pstCount->uxCountHighMask;
        }
        if(0xFFFFFFFFUL != pstCount->uxCountLowMask)
        {
            uxRegLow >>= pstCount->uxCountLowShiftRight;
            uxRegLow &= pstCount->uxCountLowMask;
        }

        uxRegHigh <<= pstCount->uxCountHighShiftLeft;
        uxRegLow <<= pstCount->uxCountLowShiftLeft;

        *pstCount->puxCountValue = (UBase_t) uxRegHigh;
        *pstCount->puxCountValue |= (UBase_t) uxRegLow;
    }
    return (enStatus);
}

void TIMER_vSet2Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                               const TIMER_Count32_Preescale_t* pstCount)
{
    UBase_t uxReg = 0ULL;

    UBase_t uxRegHigh = 0UL;
    UBase_t uxRegLow = 0UL;

    UBase_t uxTimerBase = 0UL;
    UBase_t uxTimerRegisterHigh = 0UL;
    UBase_t uxTimerRegisterLow = 0UL;

    if((0UL != (UBase_t) pstCount->puxCountValue) && (0UL != (UBase_t) pstCount))
    {
        uxTimerBase = TIMER__uxBlockBaseAddress(enModuleNumber);

        uxTimerRegisterHigh = uxTimerBase + pstCount->uxCountHighRegister;
        uxTimerRegisterLow = uxTimerBase + pstCount->uxCountLowRegister;

        uxReg = *pstCount->puxCountValue;

        uxRegHigh = uxReg;
        uxRegHigh >>= pstCount->uxCountHighShiftRight;
        uxRegHigh &= pstCount->uxCountHighMask;
        uxRegHigh <<= pstCount->uxCountHighShiftLeft;

        uxRegLow = uxReg;
        uxRegLow >>= pstCount->uxCountLowShiftRight;
        uxRegLow &= pstCount->uxCountLowMask;
        uxRegLow <<= pstCount->uxCountLowShiftLeft;


        *(volatile UBase_t*) (uxTimerRegisterHigh) = (UBase_t) uxRegHigh;
        *(volatile UBase_t*) (uxTimerRegisterLow) = (UBase_t) uxRegLow;
    }
}
