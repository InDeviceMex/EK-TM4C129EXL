/**
 *
 * @file SYSTICK_Init.c
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SYSTICK/xHeader/SYSTICK_Init.h>

#include <xApplication_MCU/Core/SYSTICK/Interrupt/SYSTICK_Interrupt.h>
#include <xApplication_MCU/Core/SYSTICK/Delay/SYSTICK_Delay.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Dependencies.h>

#define SYSTICK_PIOSC4_MHZ (4UL)
#define SYSTICK_MAXVALUE (0x1000000UL) /*24 bits*/

static void SYSTICK_vClarAllCounter(void);
void SYSTICK_Delay__vIRQVectorHandler(void);

void SYSTICK_Delay__vIRQVectorHandler(void)
{
    uint32_t u32Count = SYSTICK__u32GetFreeCount();
    u32Count++;
    SYSTICK__vSetFreeCount(u32Count);
}

SYSTICK_nERROR SYSTICK__enInitTickVector(SYSTICK_nMODULE enModuleArg, uint32_t u32TickArg, SYSTICK_nPRIORITY enPriorityArg,
                                          SYSTICK_nCLKSOURCE enClockSourceArg, SYSTICK_pvfIRQVectorHandler_t pvfVectorArg)
{
    MCU_nSTATUS enFPUActive;
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK_enERROR_OK;
    if((2UL > u32TickArg) || (SYSTICK_MAXVALUE < u32TickArg))
    {
        enErrorReg = SYSTICK_enERROR_VALUE;
    }
    enFPUActive = MCU__enGetFPUContextActive();
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        uint32_t u32SystemFrequencyMHz = 0U;
        float32_t f32PicoSeconds = 1000000.0f;
        float32_t f32PicoSecondsTemp = 1000000.0f;
        SYSTICK_vClarAllCounter();
        if(SYSTICK_enPIOSC4 != enClockSourceArg)
        {
            u32SystemFrequencyMHz = SYSCTL__u32GetSystemClock();
            u32SystemFrequencyMHz /= 1000000UL;
        }
        else
        {
            u32SystemFrequencyMHz = SYSTICK_PIOSC4_MHZ;
        }
        f32PicoSeconds /= (float32_t) u32SystemFrequencyMHz;
        f32PicoSecondsTemp = f32PicoSeconds + 0.5f;
        SYSTICK__vSetTickPs((uint32_t) f32PicoSecondsTemp);

        f32PicoSeconds *=  (float32_t) u32TickArg;
        f32PicoSeconds += 0.5f;
        SYSTICK__vSetPsPeriod((uint64_t) f32PicoSeconds);
        SYSTICK__vSetTickPeriod(u32TickArg);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enDisableInterruptVector(enModuleArg);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enDisable(enModuleArg);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enClearCurrentValue(enModuleArg);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enSetClockSource(enModuleArg, enClockSourceArg);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enRegisterIRQVectorHandler(enModuleArg, pvfVectorArg);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enEnableInterruptVectorWithPriority(enModuleArg, enPriorityArg);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enSetReloadValue(enModuleArg, u32TickArg - 1U);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enClearCurrentValue(enModuleArg);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enEnable(SYSTICK_enMODULE_0);
    }
    MCU__vSetFPUContextActive(enFPUActive);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enInitTick(SYSTICK_nMODULE enModuleArg, uint32_t u32TickArg, SYSTICK_nPRIORITY enPriorityArg, SYSTICK_nCLKSOURCE enClockSourceArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enInitTickVector(enModuleArg, u32TickArg, enPriorityArg, enClockSourceArg, &SYSTICK_Delay__vIRQVectorHandler);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enInitUsVector(SYSTICK_nMODULE enModuleArg, uint32_t u32TimeUsArg, SYSTICK_nPRIORITY enPriorityArg, SYSTICK_pvfIRQVectorHandler_t pvfVectorArg)
{
    uint32_t u32Tick;
    uint32_t u32Tick_Sysclk;
    uint32_t u32Tick_Piosc4;
    uint32_t u32SYSTICKFrequencyMHz_Sysclk;
    uint32_t u32SYSTICKFrequencyMHz_Piosc4;
    SYSTICK_nCLKSOURCE enClockSource;
    SYSTICK_nERROR enErrorReg;

    enClockSource = SYSTICK_enSYSCLK;
    enErrorReg = SYSTICK_enERROR_OK;
    if(0UL == u32TimeUsArg)
    {
        enErrorReg = SYSTICK_enERROR_VALUE;
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        u32SYSTICKFrequencyMHz_Piosc4 = SYSTICK_PIOSC4_MHZ;
        u32SYSTICKFrequencyMHz_Sysclk = SYSCTL__u32GetSystemClock();
        u32SYSTICKFrequencyMHz_Sysclk /= 1000000UL;
        SYSTICK_vClarAllCounter();

        u32Tick_Sysclk = u32SYSTICKFrequencyMHz_Sysclk * u32TimeUsArg;
        u32Tick_Piosc4 = u32SYSTICKFrequencyMHz_Piosc4 * u32TimeUsArg;
        u32Tick = u32Tick_Sysclk;
        if(SYSTICK_MAXVALUE < u32Tick_Sysclk)
        {
            enClockSource = SYSTICK_enPIOSC4;
            u32Tick = u32Tick_Piosc4;
            if(SYSTICK_MAXVALUE < u32Tick_Piosc4)
            {
                enErrorReg = SYSTICK_enERROR_VALUE;
            }
        }
    }

    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enInitTickVector(enModuleArg, u32Tick, enPriorityArg, enClockSource, pvfVectorArg);
    }
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enInitUs(SYSTICK_nMODULE enModuleArg, uint32_t u32TimeUsArg, SYSTICK_nPRIORITY enPriorityArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enInitUsVector(enModuleArg, u32TimeUsArg, enPriorityArg, &SYSTICK_Delay__vIRQVectorHandler);
    return (enErrorReg);
}

static void SYSTICK_vClarAllCounter(void)
{
    SYSTICK__vClearFreeCount();
    SYSTICK__vClearFreeCountOv();
    SYSTICK__vClearPsPeriod();
    SYSTICK__vClearTickPs();
    SYSTICK__vClearTickPeriod();
}
