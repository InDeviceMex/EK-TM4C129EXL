

/**
 * main.c
 */
#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>

uint32_t main(void);
uint64_t MAIN_u64ElpasedTime(uint64_t u64TimeStart, uint64_t u64TimeEnd);
void SYSTICKHandler(void);
void Handler1(void);
void Handler2(void);
void SVCHandler(void);
void MAIN_DMA_SW_vIRQVectorHandler(void);

volatile uint32_t u32CyclesNoInit;
volatile uint32_t u32Cycles = 0UL;
void SYSTICKHandler(void)
{
    NVIC__vTriggerIRQ(NVIC_enSTIR_GPIOE);
    NVIC__vTriggerIRQ(NVIC_enSTIR_GPIOD);
    u32Cycles++;
}

uint32_t u32Cycles1 = 0UL;
void Handler1(void)
{
    u32Cycles1++;
    MCU__vWriteRegister(0x4005D000UL, 0x3FCUL, 0x0UL, 0x1UL, 0UL);
}

uint32_t u32Cycles2 = 0UL;
void Handler2(void)
{
    u32Cycles2++;
    MCU__vWriteRegister(0x4005D000UL, 0x3FCUL, 0x1UL, 0x1UL, 0UL);
}

void SVCHandler(void)
{
    {__asm(" ubfx    r0, LR, #2, #1\n");}
    {__asm(" cmp    r0, #0\n");}
    {__asm(" beq    MainStack\n");}
    {__asm(" b    ProcessStack\n");}

    {__asm("MainStack:\n");}
    {__asm(" mrs    r0, MSP \n");}

    {__asm("ProcessStack:\n");}
    {__asm(" mrs    r0, PSP \n");}

    {__asm(" ldr    r1, [r0,#0x18] \n");}
    {__asm(" sub    r1, #2 \n");}
    {__asm(" ldr    r0, [r1] \n");}
    {__asm(" and    r0, #0xFF \n");}

    u32Cycles++;
}


uint8_t pu8DMASourceBuffer[100UL] = {0UL};
uint8_t pu8DMADestBuffer[100UL] = {0UL};

uint32_t main(void)
{
    volatile uint64_t u64TimeStart = 0ULL;
    volatile uint64_t u64TimeEnd = 0ULL;
    volatile uint64_t u64TimeDiff = 0ULL;
    uint32_t u32Eeprom0Dir = 0ULL;
    uint8_t u8Eeprom0Dir = 0ULL;

    uint32_t u32CountVector = 0UL;
    uint32_t u32Led1 = 1UL;
    volatile uint32_t u32Count = 0U;
    SYSCTL_CONFIG_TypeDef stClockConfig =
    {
        SYSCTL_enXTAL_25MHZ,
        SYSCTL_enOSC_MOSC,
        SYSCTL_enPLL,
        SYSCTL_enVCO_480MHZ,
    };

    DMA_CONFIG_Typedef stDMAConfig =
    {
         DMA_enCH_REQTYPE_BOTH,
         DMA_enCH_PERIPHERAL_DIS,
         DMA_enCH_CTL_PRIMARY,
         DMA_enCH_PRIO_DEFAULT,
         DMA_enCH_ENCODER_1
    };
    DMACHCTL_TypeDef stDMAControl =
    {
         1UL,
         0UL,
         100UL - 1UL,
         7UL,
         0UL,
         0UL,
         0UL,
         0UL,
         0UL,
         0UL,
         0UL,
         0UL
    };
    FPU__vInit();
    SCB__vInit();
    FLASH__enInit();
    EEPROM__enInit();

    SYSCTL__enSetSystemClock(120000000UL, stClockConfig);
    SYSTICK__enInitUs(100000UL, SYSTICK_enPRI7);
    MCU__enEnGlobalInterrupt();
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);

    /*
    EEPROM__enReadWorld((uint32_t*)&u32Eeprom0Dir, 0x0UL);
    EEPROM__enWriteByte(0xAAU,1UL);
    */
    EEPROM__enReadWorld(&u32Eeprom0Dir, 0x0UL);

    MCU__vWriteRegister(0x4005D000UL, 0x400UL, 0x1DUL, 0xFFUL, 0UL); /*DIR OUTPUT PF0 PF2, PF3 and PF4*/
    MCU__vWriteRegister(0x4005D000UL, 0x420UL, 0x00UL, 0xFFUL, 0UL); /*ALTERNATIVE DIS PF0, PF2, PF3 and PF4*/
    MCU__vWriteRegister(0x4005D000UL, 0x50CUL, 0x00UL, 0xFFUL, 0UL); /*PUSH-PULL PF0, PF2, PF3 and PF4*/
    MCU__vWriteRegister(0x4005D000UL, 0x51CUL, 0x1DUL, 0xFFUL, 0UL); /*DIGITAL ENABLE PF0, PF2, PF3 and PF4*/

    /*PIOSC(Internal Oscillator) = 16MHz, PIOSC/4 = 4MHz */
    /*0xFFFFFF+1 = 16777216 Ticks , Time_Min = 16777216 Ticks * 1/4000000s = 4.194304s   */
    /* 1/4 us = tick ~ 1s = 4000000*/
   /* SYSTICK->RVR_Bit.RELOAD = 4000000UL - 1UL;
    SYSTICK->CSR_Bit.CLKSOURCE = SYSTICK_CSR_CLKSOURCE_PIOSC4;
    SYSTICK->CSR_Bit.TICKINT = SYSTICK_CSR_TICKINT_ENA;
    SYSTICK->CSR_Bit.ENABLE = SYSTICK_CSR_ENABLE_ENA;
*/
    /*Trigger GPIOD manually*/

    SCB__vRegisterIRQVectorHandler( &Handler1, (void (**) (void)) 0UL, SCB_enVECISR_GPIOD);

    NVIC__vSetEnableIRQ(NVIC_enSTIR_GPIOD, NVIC_enPRI6);
    NVIC__vSetEnableIRQ(NVIC_enSTIR_GPIOE, NVIC_enPRI7);

    for(u32Count = 0UL; u32Count < 100UL; u32Count++)
    {
        pu8DMASourceBuffer[u32Count] = (uint8_t) u32Count;
    }

    DMA__vInit();

    DMA__vRegisterIRQSourceHandler_Software(&MAIN_DMA_SW_vIRQVectorHandler, DMA_enCH_INT_SOFT_22);
    DMA__vEnInterruptVector(DMA_enVECTOR_SW, DMA_enPRI7);
    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_22, (uint32_t) &pu8DMADestBuffer[100UL-1UL]);
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_22, (uint32_t) &pu8DMASourceBuffer[100UL-1UL]);
    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_22, stDMAConfig);
    DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_22, stDMAControl);
    DMA_CH__vSetEnable(DMA_enCH_MODULE_22, DMA_enCH_ENA_ENA);

    DMA_CH__vSetSoftwareRequest(DMA_enCH_MODULE_22);
    while(1UL)
    {
        u64TimeEnd = SYSTICK__u64GetTimePs();
        u64TimeDiff = MAIN_u64ElpasedTime(u64TimeStart, u64TimeEnd);
        if(u64TimeDiff >= 1000000000000ULL)
        {

            u64TimeStart = SYSTICK__u64GetTimePs();
            if(0UL ==u32CountVector)
            {
                SCB__vRegisterIRQVectorHandler( &Handler1, (void (**) (void)) 0UL, SCB_enVECISR_GPIOD);
            }
            else
            {
                SCB__vRegisterIRQVectorHandler( &Handler2, (void (**) (void)) 0UL, SCB_enVECISR_GPIOD);
            }
            u32CountVector ^= 1UL;
            NVIC__vTriggerIRQ(NVIC_enSTIR_GPIOD);
        }
    }
}


uint64_t MAIN_u64ElpasedTime(uint64_t u64TimeStart, uint64_t u64TimeEnd)
{
    uint64_t u64TimeDiff = 0UL;
    if(u64TimeEnd >= u64TimeStart)
    {
        u64TimeDiff = u64TimeEnd;
        u64TimeDiff -= u64TimeStart;

    }
    else
    {
        u64TimeDiff = 0xFFFFFFFFFFFFFFFFUL;
        u64TimeDiff -= u64TimeStart;
        u64TimeDiff += u64TimeEnd;
        u64TimeDiff += 1UL;
    }
    return u64TimeDiff;
}


void MAIN_DMA_SW_vIRQVectorHandler(void)
{
    u32CyclesNoInit++;
}

