

/**
 * main.c
 */
#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xOS/xOS.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>

uint32_t main(void);

void Task1(void* pvParams);
void Task2(void* pvParams);
void Task3(void* pvParams);
void Task4(void* pvParams);
void Task5(void* pvParams);
void Task6(void* pvParams);
void Led2ON(void);


void Task1(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    u32PinValue <<= 3UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, u32PinValue);
    }
}

void Task2(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    u32PinValue <<= 3UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, u32PinValue);
    }
}

void Task3(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    u32PinValue <<= 0UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_0, u32PinValue);
    }
}

void Task4(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    u32PinValue <<= 0UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_0, u32PinValue);
    }
}

void Task5(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    u32PinValue <<= 4UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_4, u32PinValue);
    }
}

void Task6(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    u32PinValue <<= 4UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_4, u32PinValue);
    }
}

void Led2ON(void)
{
    static uint32_t u32PinValue = (uint32_t) GPIO_enPIN_2;
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, u32PinValue);
    u32PinValue ^= (uint32_t) GPIO_enPIN_2;
}

uint8_t pu8DMASourceBuffer[100UL] = {0UL};
uint8_t pu8DMADestBuffer[100UL] = {0UL};

uint32_t main(void)
{
    volatile TIMER_nEVENT enEvent = TIMER_enEVENT_ALL;
    SYSCTL_CONFIG_TypeDef stClockConfig =
    {
        SYSCTL_enXTAL_25MHZ,
        SYSCTL_enOSC_MOSC,
        SYSCTL_enPLL,
        SYSCTL_enVCO_480MHZ,
    };
    SYSCTL__enSetSystemClock(120000000UL, stClockConfig);
    GPIO__vInit();
    TIMER__vInit();

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enTIMER0);

    GPIO__enSetDigitalConfig(GPIO_enGPIOF2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    TIMER__vSetDMAEvent(TIMER_enT0B, TIMER_enEVENT_MATCH);
    TIMER__vSetDMAEvent(TIMER_enT0A, TIMER_enEVENT_MATCH);
    enEvent = TIMER__enGetDMAEvent(TIMER_enT0B, TIMER_enEVENT_MATCH);
    enEvent = TIMER__enGetDMAEvent(TIMER_enT0A, TIMER_enEVENT_MATCH);
    TIMER__vRegisterIRQSourceHandler(&Led2ON, TIMER_enT0W, TIMER_enINTERRUPT_TIMEOUT);
    TIMER__vEnInterruptVector(TIMER_enT0W, TIMER_enPRI6);
    TIMER__vEnInterruptSource(TIMER_enT0W, TIMER_enINT_TIMEOUT);
    TIMER__vSetStall(TIMER_enT0W, TIMER_enSTALL_FREEZE);
    TIMER__enSetMode_ReloadMatch(TIMER_enT0W, TIMER_enMODE_PERIODIC_WIDE_DOWN, 30000000UL - 1UL, 0UL);
    TIMER__vSetEnable(TIMER_enT0W, TIMER_enENABLE_START);

    OS_Kernel__vInit();
    OS_Kernel__CreateThread(&Task1, "Task 1", 100UL, (void*) 0UL, 0UL);
    OS_Kernel__CreateThread(&Task2, "Task 2", 100UL, (void*) 1UL, 0UL);
    OS_Kernel__CreateThread(&Task3, "Task 3", 100UL, (void*) 0UL, 0UL);
    OS_Kernel__CreateThread(&Task4, "Task 4", 100UL, (void*) 1UL, 0UL);
    OS_Kernel__CreateThread(&Task5, "Task 5", 100UL, (void*) 0UL, 0UL);
    OS_Kernel__CreateThread(&Task6, "Task 6", 100UL, (void*) 1UL, 0UL);

    OS_Kernel__vLaunchMs(1000UL);
    while(1UL)
    {

    }
}


