/**
 * main.c
 */
#include <xTask/xTask.h>
#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xOS/xOS.h>


int main(void);

int main(void)
{
    SYSCTL_CONFIG_t stClockConfig =
    {
        SYSCTL_enXTAL_25MHZ,
        SYSCTL_enOSCCLK_SRC_MOSC,
        SYSCTL_enSYSCLK_SRC_PLLCLK,
        SYSCTL_enVCO_480MHZ,
    };
    SYSCTL__enSetSystemClock(SYSCTL_enMODULE_0, 120000000UL, &stClockConfig, 0UL);
    OS_Task_Handle_t TaskHandeler[7UL] = {0UL};

    OS_Task__uxCreate(&xTask1_PWM, "PWM Task", 2000UL, (void*) 100UL, 2UL, &TaskHandeler[1UL]);

    OS_Task__vStartScheduler(1000UL);
    return (0UL);
}

