/*
 * SYSTICK_Init.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xApplication_MCU/Core/SYSTICK/Miscellaneous/xHeader/SYSTICK_Init.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/SYSCTL.h>
#include <xDriver_MCU/Core/SYSTICK/SYSTICK.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/SYSTICK_Intrinsics.h>

#define SYSTICK_PIOSC4_MHZ (4UL)
#define SYSTICK_MAXVALUE (0x1000000UL) /*24 bits*/

static void SYSTICK_vClarAllCounter(void);
void SYSTICK__vIRQVectorHandler(void);

void SYSTICK__vIRQVectorHandler(void)
{
    uint32_t u32Count = SYSTICK__u32GetFreeCount();
    u32Count++;
    SYSTICK__vSetFreeCount(u32Count);
    /*
    if(0U == u32Count)
    {
        uint32_t u32CountOv = SYSTICK__u32GetFreeCountOv();
        u32CountOv++;
        SYSTICK__vSetFreeCountOv(u32CountOv);
    }
    */
}

SYSTICK_nSTATUS SYSTICK__enInitTickVector(uint32_t u32Tick, SYSTICK_nPRIORITY enPriority,
                                          SYSTICK_nCLKSOURCE enClockSource, void(*pfvVector) (void))
{
    SYSTICK_nSTATUS enReturn = SYSTICK_enERROR;
    uint32_t u32SystemFrequencyMHz = SYSTICK_PIOSC4_MHZ;
    float32_t f32PicoSeconds = 1000000.0f;
    float32_t f32PicoSecondsTemp = 1000000.0f;
    MCU_nFPU_STATE enFPUActive = MCU_enFPU_STATE_INACTIVE;

    enFPUActive = MCU__enGetFPUContextActive();
    SYSTICK__vDisInterruptVector();
    SYSTICK__vDisable();
    SYSTICK__vClearCurrent();
    SYSTICK__vSetClockSource(enClockSource);

    SYSTICK_vClarAllCounter();

    if(SYSTICK_enPIOSC4 != enClockSource)
    {
        u32SystemFrequencyMHz = SYSCTL__u32GetSystemClock();
        u32SystemFrequencyMHz /= 1000000UL;
    }

    if(0UL != u32Tick)
    {
        if(SYSTICK_MAXVALUE < u32Tick)
        {
            u32Tick = SYSTICK_MAXVALUE;
        }
        f32PicoSeconds /= (float32_t) u32SystemFrequencyMHz;
        f32PicoSecondsTemp = f32PicoSeconds + 0.5f;
        SYSTICK__vSetTickPs((uint32_t) f32PicoSecondsTemp);

        f32PicoSeconds *=  (float32_t) u32Tick;
        f32PicoSeconds += 0.5f;
        SYSTICK__vSetPsPeriod((uint64_t) f32PicoSeconds);
        SYSTICK__vSetTickPeriod(u32Tick);


        SYSTICK__vRegisterIRQVectorHandler(pfvVector);
        SYSTICK__vEnInterruptVector(enPriority);
        SYSTICK__vSetReload(u32Tick);
        SYSTICK__vClearCurrent();
        SYSTICK__vEnable();
        enReturn = SYSTICK_enOK;
    }
    MCU__vSetFPUContextActive(enFPUActive);
    return (enReturn);
}

SYSTICK_nSTATUS SYSTICK__enInitTick(uint32_t u32Tick, SYSTICK_nPRIORITY enPriority, SYSTICK_nCLKSOURCE enClockSource)
{
    return (SYSTICK__enInitTickVector(u32Tick, enPriority, enClockSource, &SYSTICK__vIRQVectorHandler));
}

SYSTICK_nSTATUS SYSTICK__enInitUsVector(uint32_t u32TimeUs, SYSTICK_nPRIORITY enPriority, void(*pfvVector) (void))
{
    SYSTICK_nCLKSOURCE enClockSource = SYSTICK_enSYSCLK;
    SYSTICK_nSTATUS enReturn = SYSTICK_enERROR;
    uint32_t u32Tick_Sysclk = 0UL;
    uint32_t u32Tick_Piosc4 = 0UL;
    uint32_t u32Tick = 0UL;
    uint32_t u32SYSTICKFrequencyMHz_Sysclk = SYSCTL__u32GetSystemClock()/1000000UL;
    uint32_t u32SYSTICKFrequencyMHz_Piosc4 = SYSTICK_PIOSC4_MHZ;

    if(0UL != u32TimeUs)
    {

        SYSTICK_vClarAllCounter();

        u32Tick_Sysclk = u32SYSTICKFrequencyMHz_Sysclk * u32TimeUs;
        u32Tick_Piosc4 = u32SYSTICKFrequencyMHz_Piosc4 * u32TimeUs;
        u32Tick = u32Tick_Sysclk;
        enReturn = SYSTICK_enOK;
        if(SYSTICK_MAXVALUE < u32Tick_Sysclk)
        {
            enClockSource = SYSTICK_enPIOSC4;
            u32Tick = u32Tick_Piosc4;
            if(SYSTICK_MAXVALUE < u32Tick_Piosc4)
            {
                enReturn = SYSTICK_enERROR;
            }
        }
    }


    if(SYSTICK_enOK == enReturn)
    {
        enReturn = SYSTICK__enInitTickVector(u32Tick, enPriority, enClockSource, pfvVector);
    }
    return (enReturn);
}

SYSTICK_nSTATUS SYSTICK__enInitUs(uint32_t u32TimeUs, SYSTICK_nPRIORITY enPriority)
{
    return (SYSTICK__enInitUsVector(u32TimeUs, enPriority, &SYSTICK__vIRQVectorHandler));
}

static void SYSTICK_vClarAllCounter(void)
{
    SYSTICK__vClearFreeCount();
    SYSTICK__vClearFreeCountOv();
    SYSTICK__vClearPsPeriod();
    SYSTICK__vClearTickPs();
    SYSTICK__vClearTickPeriod();
}
