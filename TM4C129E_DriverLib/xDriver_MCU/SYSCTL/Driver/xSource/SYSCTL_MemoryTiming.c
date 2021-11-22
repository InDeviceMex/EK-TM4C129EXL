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
static void SYSCTL__vGetPredefineMemoryTiming(uint32_t u32SysClock,
                                              SYSCTL_nMEM_HIGHTIME* penMemoryHighTime,
                                              SYSCTL_nMEM_WAITSTATE* penMemoryWaitState,
                                              SYSCTL_nMEM_CLOCKEDGE* penMemoryClockEdge);

typedef struct
{
    uint32_t u32Frequency;
    SYSCTL_nMEM_HIGHTIME enMemHighTimeTiming;
    SYSCTL_nMEM_WAITSTATE enMemoryWaitStateTiming;
    SYSCTL_nMEM_CLOCKEDGE enMemoryClockEdgeTiming;
}SYSCTL_MEM_t;

static void SYSCTL__vGetPredefineMemoryTiming(uint32_t u32SysClock,
                                              SYSCTL_nMEM_HIGHTIME* penMemoryHighTime,
                                              SYSCTL_nMEM_WAITSTATE* penMemoryWaitState,
                                              SYSCTL_nMEM_CLOCKEDGE* penMemoryClockEdge)
{
    uint32_t u32Iter = 0UL;
    uint32_t u32Freq = 0UL;
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

    if((0UL != (uint32_t) penMemoryHighTime) &&
       (0UL != (uint32_t) penMemoryWaitState) &&
       (0UL != (uint32_t) penMemoryClockEdge))
    {
        for(u32Iter = 0UL ; u32Iter < TIMING_SIZE; u32Iter++)
        {
            u32Freq = SYSCTL_stMemoryTiming[u32Iter].u32Frequency;
            if(u32SysClock <= u32Freq)
            {
                *penMemoryHighTime = SYSCTL_stMemoryTiming[u32Iter].enMemHighTimeTiming;
                *penMemoryWaitState = SYSCTL_stMemoryTiming[u32Iter].enMemoryWaitStateTiming;
                *penMemoryClockEdge = SYSCTL_stMemoryTiming[u32Iter].enMemoryClockEdgeTiming;
                break;
            }
        }
    }
}

void SYSCTL__vSetMemoryTiming(uint32_t u32SysClock)
{
    uint32_t u32Reg = 0UL;
    SYSCTL_nMEM_HIGHTIME enMemoryHighTimeReg = SYSCTL_enMEM_HIGHTIME_0_5;
    SYSCTL_nMEM_WAITSTATE enMemoryWaitStateReg = SYSCTL_enMEM_WAITSTATE_0;
    SYSCTL_nMEM_CLOCKEDGE enMemoryClockEdge = SYSCTL_enMEM_CLOCKEDGE_FAILING;
    SYSCTL__vGetPredefineMemoryTiming(u32SysClock,
                                      &enMemoryHighTimeReg,
                                      &enMemoryWaitStateReg,
                                      &enMemoryClockEdge);


    u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET, 0xFFFFFFFFUL, 0UL);
    u32Reg &= ~(SYSCTL_MEMTIM0_R_FWS_MASK | SYSCTL_MEMTIM0_R_FBCE_MASK |
            SYSCTL_MEMTIM0_R_FBCHT_MASK | SYSCTL_MEMTIM0_R_EWS_MASK |
            SYSCTL_MEMTIM0_R_EBCE_MASK | SYSCTL_MEMTIM0_R_EBCHT_MASK);

    u32Reg |= (((uint32_t) enMemoryWaitStateReg << SYSCTL_MEMTIM0_R_FWS_BIT) |
                ((uint32_t) enMemoryWaitStateReg << SYSCTL_MEMTIM0_R_EWS_BIT) |
               ((uint32_t) enMemoryHighTimeReg << SYSCTL_MEMTIM0_R_FBCHT_BIT) |
               ((uint32_t) enMemoryHighTimeReg << SYSCTL_MEMTIM0_R_EBCHT_BIT) |
               ((uint32_t) enMemoryClockEdge << SYSCTL_MEMTIM0_R_FBCE_BIT) |
               ((uint32_t) enMemoryClockEdge << SYSCTL_MEMTIM0_R_EBCE_BIT));
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET, u32Reg, 0xFFFFFFFFUL, 0UL);
}

void SYSCTL__vGetMemoryTiming(SYSCTL_nMEM_HIGHTIME* penMemoryHighTime,
                              SYSCTL_nMEM_WAITSTATE* penMemoryWaitState,
                              SYSCTL_nMEM_CLOCKEDGE* penMemoryClockEdge)
{
    uint32_t u32Reg = 0UL;

    if((0UL != (uint32_t) penMemoryHighTime) &&
       (0UL != (uint32_t) penMemoryWaitState) &&
       (0UL != (uint32_t) penMemoryClockEdge))
    {
        u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET,
                      SYSCTL_MEMTIM0_FWS_MASK, SYSCTL_MEMTIM0_R_FWS_BIT);
        *penMemoryWaitState = (SYSCTL_nMEM_WAITSTATE)u32Reg;
        u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET,
                      SYSCTL_MEMTIM0_FBCE_MASK, SYSCTL_MEMTIM0_R_FBCE_BIT);
        *penMemoryClockEdge = (SYSCTL_nMEM_CLOCKEDGE)u32Reg;
        u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MEMTIM0_OFFSET,
                      SYSCTL_MEMTIM0_FBCHT_MASK, SYSCTL_MEMTIM0_R_FBCHT_BIT);
        *penMemoryHighTime = (SYSCTL_nMEM_HIGHTIME)u32Reg;
    }
}



