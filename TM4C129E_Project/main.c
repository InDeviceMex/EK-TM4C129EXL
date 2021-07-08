

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
    while(1UL)
    {
        MCU__vWriteRegister(0x4005D000UL, 0x3FCUL, (uint32_t) pvParams, 0x1UL, 0UL);

    }
}

void Task2(void* pvParams)
{
    while(1UL)
    {
        MCU__vWriteRegister(0x4005D000UL, 0x3FCUL, (uint32_t) pvParams, 0x1UL, 0UL);
    }
}

void Task3(void* pvParams)
{
    while(1UL)
    {
        MCU__vWriteRegister(0x4005D000UL, 0x3FCUL, (uint32_t) pvParams, 0x1UL, 4UL);
    }
}

void Task4(void* pvParams)
{
    while(1UL)
    {
        MCU__vWriteRegister(0x4005D000UL, 0x3FCUL, (uint32_t) pvParams, 0x1UL, 4UL);
    }
}

void Task5(void* pvParams)
{
    while(1UL)
    {
        MCU__vWriteRegister(0x4005D000UL, 0x3FCUL, (uint32_t) pvParams, 0x1UL, 3UL);
    }
}

void Task6(void* pvParams)
{
    while(1UL)
    {
        MCU__vWriteRegister(0x4005D000UL, 0x3FCUL, (uint32_t) pvParams, 0x1UL, 3UL);
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


    MCU__vWriteRegister(0x4005D000UL, 0x400UL, 0x1DUL, 0xFFUL, 0UL); /*DIR OUTPUT PF0 PF2, PF3 and PF4*/
    MCU__vWriteRegister(0x4005D000UL, 0x420UL, 0x00UL, 0xFFUL, 0UL); /*ALTERNATIVE DIS PF0, PF2, PF3 and PF4*/
    MCU__vWriteRegister(0x4005D000UL, 0x50CUL, 0x00UL, 0xFFUL, 0UL); /*PUSH-PULL PF0, PF2, PF3 and PF4*/
    MCU__vWriteRegister(0x4005D000UL, 0x51CUL, 0x1DUL, 0xFFUL, 0UL); /*DIGITAL ENABLE PF0, PF2, PF3 and PF4*/


    OS_Kernel__vInit();
    OS_Kernel__CreateThread(&Task1, "Task 1", 40UL, (void*) 0UL, 0UL);
    OS_Kernel__CreateThread(&Task2, "Task 2", 40UL, (void*) 1UL, 0UL);
    OS_Kernel__CreateThread(&Task3, "Task 3", 40UL, (void*) 0UL, 0UL);
    OS_Kernel__CreateThread(&Task4, "Task 4", 40UL, (void*) 1UL, 0UL);
    OS_Kernel__CreateThread(&Task5, "Task 5", 40UL, (void*) 0UL, 0UL);
    OS_Kernel__CreateThread(&Task6, "Task 6", 40UL, (void*) 1UL, 0UL);

    OS_Kernel__vLaunchMs(100UL);
    while(1UL)
    {

    }
}


