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
    UBase_t uxCount = SYSTICK__uxGetFreeCount();
    uxCount++;
    SYSTICK__vSetFreeCount(uxCount);
}

SYSTICK_nERROR SYSTICK__enInitTickVector(SYSTICK_nMODULE enModuleArg, UBase_t uxTickArg, SYSTICK_nPRIORITY enPriorityArg,
                                          SYSTICK_nCLKSOURCE enClockSourceArg, SYSTICK_pvfIRQVectorHandler_t pvfVectorArg)
{
    MCU_nSTATUS enFPUActive = MCU__enGetFPUContextActive();
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK_enERROR_OK;
    if((2UL > uxTickArg) || (SYSTICK_MAXVALUE < uxTickArg))
    {
        enErrorReg = SYSTICK_enERROR_VALUE;
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        UBase_t uxSystemFrequencyMHz = 0U;
        float32_t f32PicoSeconds = 1000000.0f;
        float32_t f32PicoSecondsTemp = 1000000.0f;
        SYSTICK_vClarAllCounter();
        if(SYSTICK_enPIOSC4 != enClockSourceArg)
        {
            uxSystemFrequencyMHz = SYSCTL__uxGetSystemClock();
            uxSystemFrequencyMHz /= 1000000UL;
        }
        else
        {
            uxSystemFrequencyMHz = SYSTICK_PIOSC4_MHZ;
        }
        f32PicoSeconds /= (float32_t) uxSystemFrequencyMHz;
        f32PicoSecondsTemp = f32PicoSeconds + 0.5f;
        SYSTICK__vSetTickPs((UBase_t) f32PicoSecondsTemp);

        f32PicoSeconds *=  (float32_t) uxTickArg;
        f32PicoSeconds += 0.5f;
        SYSTICK__vSetPsPeriod((uint64_t) f32PicoSeconds);
        SYSTICK__vSetTickPeriod(uxTickArg);
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
        enErrorReg = SYSTICK__enSetReloadValue(enModuleArg, uxTickArg - 1U);
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

SYSTICK_nERROR SYSTICK__enInitTick(SYSTICK_nMODULE enModuleArg, UBase_t uxTickArg, SYSTICK_nPRIORITY enPriorityArg, SYSTICK_nCLKSOURCE enClockSourceArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enInitTickVector(enModuleArg, uxTickArg, enPriorityArg, enClockSourceArg, &SYSTICK_Delay__vIRQVectorHandler);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enInitUsVector(SYSTICK_nMODULE enModuleArg, UBase_t uxTimeUsArg, SYSTICK_nPRIORITY enPriorityArg, SYSTICK_pvfIRQVectorHandler_t pvfVectorArg)
{
    UBase_t uxTick;
    UBase_t uxTick_Sysclk;
    UBase_t uxTick_Piosc4;
    UBase_t uxSYSTICKFrequencyMHz_Sysclk;
    UBase_t uxSYSTICKFrequencyMHz_Piosc4;
    SYSTICK_nCLKSOURCE enClockSource;
    SYSTICK_nERROR enErrorReg;

    enClockSource = SYSTICK_enSYSCLK;
    enErrorReg = SYSTICK_enERROR_OK;
    if(0UL == uxTimeUsArg)
    {
        enErrorReg = SYSTICK_enERROR_VALUE;
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        uxSYSTICKFrequencyMHz_Piosc4 = SYSTICK_PIOSC4_MHZ;
        uxSYSTICKFrequencyMHz_Sysclk = SYSCTL__uxGetSystemClock();
        uxSYSTICKFrequencyMHz_Sysclk /= 1000000UL;
        SYSTICK_vClarAllCounter();

        uxTick_Sysclk = uxSYSTICKFrequencyMHz_Sysclk * uxTimeUsArg;
        uxTick_Piosc4 = uxSYSTICKFrequencyMHz_Piosc4 * uxTimeUsArg;
        uxTick = uxTick_Sysclk;
        if(SYSTICK_MAXVALUE < uxTick_Sysclk)
        {
            enClockSource = SYSTICK_enPIOSC4;
            uxTick = uxTick_Piosc4;
            if(SYSTICK_MAXVALUE < uxTick_Piosc4)
            {
                enErrorReg = SYSTICK_enERROR_VALUE;
            }
        }
    }

    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enInitTickVector(enModuleArg, uxTick, enPriorityArg, enClockSource, pvfVectorArg);
    }
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enInitUs(SYSTICK_nMODULE enModuleArg, UBase_t uxTimeUsArg, SYSTICK_nPRIORITY enPriorityArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enInitUsVector(enModuleArg, uxTimeUsArg, enPriorityArg, &SYSTICK_Delay__vIRQVectorHandler);
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
