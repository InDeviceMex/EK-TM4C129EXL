/*
 * SYSCTL_MemoryTiming.c
 *
 *  Created on: 14 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_MemoryTiming.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

#define TIMING_SIZE (6UL)
static void SYSCTL__vGetPredefineMemoryTiming(UBase_t uxSysClock,
                                              SYSCTL_nMEM_HIGHTIME* penMemoryHighTime,
                                              SYSCTL_nMEM_WAITSTATE* penMemoryWaitState,
                                              SYSCTL_nMEM_CLOCKEDGE* penMemoryClockEdge);

typedef struct
{
    UBase_t uxFrequency;
    SYSCTL_nMEM_HIGHTIME enMemHighTimeTiming;
    SYSCTL_nMEM_WAITSTATE enMemoryWaitStateTiming;
    SYSCTL_nMEM_CLOCKEDGE enMemoryClockEdgeTiming;
}SYSCTL_MEM_t;

static void SYSCTL__vGetPredefineMemoryTiming(UBase_t uxSysClock,
                                              SYSCTL_nMEM_HIGHTIME* penMemoryHighTime,
                                              SYSCTL_nMEM_WAITSTATE* penMemoryWaitState,
                                              SYSCTL_nMEM_CLOCKEDGE* penMemoryClockEdge)
{
    UBase_t uxIter = 0UL;
    UBase_t uxFreq = 0UL;
    static const SYSCTL_MEM_t SYSCTL_stMemoryTiming[TIMING_SIZE] =
    {
        {
          16000000UL,
          SYSCTL_enMEM_HIGHTIME_0_5,
          SYSCTL_enMEM_WAITSTATE_0,
          SYSCTL_enMEM_CLOCKEDGE_FAILING,
        },
        {
         40000000UL,
          SYSCTL_enMEM_HIGHTIME_1_5,
          SYSCTL_enMEM_WAITSTATE_1,
          SYSCTL_enMEM_CLOCKEDGE_RISING,
        },
        {
         60000000UL,
          SYSCTL_enMEM_HIGHTIME_2_0,
          SYSCTL_enMEM_WAITSTATE_2,
          SYSCTL_enMEM_CLOCKEDGE_RISING,
        },
        {
         80000000UL,
          SYSCTL_enMEM_HIGHTIME_2_5,
          SYSCTL_enMEM_WAITSTATE_3,
          SYSCTL_enMEM_CLOCKEDGE_RISING,
        },
        {
         100000000UL,
          SYSCTL_enMEM_HIGHTIME_3_0,
          SYSCTL_enMEM_WAITSTATE_4,
          SYSCTL_enMEM_CLOCKEDGE_RISING,
        },
        {
         120000000UL,
          SYSCTL_enMEM_HIGHTIME_3_5,
          SYSCTL_enMEM_WAITSTATE_5,
          SYSCTL_enMEM_CLOCKEDGE_RISING,
        },
    };

    if((0UL != (UBase_t) penMemoryHighTime) &&
       (0UL != (UBase_t) penMemoryWaitState) &&
       (0UL != (UBase_t) penMemoryClockEdge))
    {
        for(uxIter = 0UL ; uxIter < TIMING_SIZE; uxIter++)
        {
            uxFreq = SYSCTL_stMemoryTiming[uxIter].uxFrequency;
            if(uxSysClock <= uxFreq)
            {
                *penMemoryHighTime = SYSCTL_stMemoryTiming[uxIter].enMemHighTimeTiming;
                *penMemoryWaitState = SYSCTL_stMemoryTiming[uxIter].enMemoryWaitStateTiming;
                *penMemoryClockEdge = SYSCTL_stMemoryTiming[uxIter].enMemoryClockEdgeTiming;
                break;
            }
        }
    }
}

void SYSCTL__vSetMemoryTiming(UBase_t uxSysClock)
{
    UBase_t uxReg = 0UL;
    SYSCTL_nMEM_HIGHTIME enMemoryHighTimeReg = SYSCTL_enMEM_HIGHTIME_0_5;
    SYSCTL_nMEM_WAITSTATE enMemoryWaitStateReg = SYSCTL_enMEM_WAITSTATE_0;
    SYSCTL_nMEM_CLOCKEDGE enMemoryClockEdge = SYSCTL_enMEM_CLOCKEDGE_FAILING;
    SYSCTL__vGetPredefineMemoryTiming(uxSysClock,
                                      &enMemoryHighTimeReg,
                                      &enMemoryWaitStateReg,
                                      &enMemoryClockEdge);


    uxReg = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET, 0xFFFFFFFFUL, 0UL);
    uxReg &= ~(SYSCTL_MEMTIM0_R_FWS_MASK | SYSCTL_MEMTIM0_R_FBCE_MASK |
            SYSCTL_MEMTIM0_R_FBCHT_MASK | SYSCTL_MEMTIM0_R_EWS_MASK |
            SYSCTL_MEMTIM0_R_EBCE_MASK | SYSCTL_MEMTIM0_R_EBCHT_MASK);

    uxReg |= (((UBase_t) enMemoryWaitStateReg << SYSCTL_MEMTIM0_R_FWS_BIT) |
                ((UBase_t) enMemoryWaitStateReg << SYSCTL_MEMTIM0_R_EWS_BIT) |
               ((UBase_t) enMemoryHighTimeReg << SYSCTL_MEMTIM0_R_FBCHT_BIT) |
               ((UBase_t) enMemoryHighTimeReg << SYSCTL_MEMTIM0_R_EBCHT_BIT) |
               ((UBase_t) enMemoryClockEdge << SYSCTL_MEMTIM0_R_FBCE_BIT) |
               ((UBase_t) enMemoryClockEdge << SYSCTL_MEMTIM0_R_EBCE_BIT));
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET, uxReg, 0xFFFFFFFFUL, 0UL);
}

void SYSCTL__vGetMemoryTiming(SYSCTL_nMEM_HIGHTIME* penMemoryHighTime,
                              SYSCTL_nMEM_WAITSTATE* penMemoryWaitState,
                              SYSCTL_nMEM_CLOCKEDGE* penMemoryClockEdge)
{
    UBase_t uxReg = 0UL;

    if((0UL != (UBase_t) penMemoryHighTime) &&
       (0UL != (UBase_t) penMemoryWaitState) &&
       (0UL != (UBase_t) penMemoryClockEdge))
    {
        uxReg = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET,
                      SYSCTL_MEMTIM0_FWS_MASK, SYSCTL_MEMTIM0_R_FWS_BIT);
        *penMemoryWaitState = (SYSCTL_nMEM_WAITSTATE)uxReg;
        uxReg = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET,
                      SYSCTL_MEMTIM0_FBCE_MASK, SYSCTL_MEMTIM0_R_FBCE_BIT);
        *penMemoryClockEdge = (SYSCTL_nMEM_CLOCKEDGE)uxReg;
        uxReg = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET,
                      SYSCTL_MEMTIM0_FBCHT_MASK, SYSCTL_MEMTIM0_R_FBCHT_BIT);
        *penMemoryHighTime = (SYSCTL_nMEM_HIGHTIME)uxReg;
    }
}



