

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

uint8_t pu8DMASourceBuffer[100UL] = {0UL};
uint8_t pu8DMADestBuffer[100UL] = {0UL};

uint32_t main(void)
{
    SYSCTL_CONFIG_TypeDef stClockConfig =
    {
        SYSCTL_enXTAL_25MHZ,
        SYSCTL_enOSC_MOSC,
        SYSCTL_enPLL,
        SYSCTL_enVCO_480MHZ,
    };
    SYSCTL__enSetSystemClock(120000000UL, stClockConfig);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);

    GPIO__enSetDigitalConfig(GPIO_enGPIOF2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);


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


