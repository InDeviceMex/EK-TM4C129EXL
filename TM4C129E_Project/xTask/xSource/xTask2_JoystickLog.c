/**
 *
 * @file xTask2_JoystickLog.c
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
 * @verbatim 19 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xTask/xHeader/xTask2_JoystickLog.h>
#include <xTask/xHeader/xSemaphores.h>

#include <xApplication/EDUMKII/EDUMKII.h>

#include <xOS/xOS.h>


void xTask2_JoystickLog(void* pvParams)
{
    /*Period Handling*/
    uint32_t u32LastWakeTime;
    uint32_t u32PeriodTask = (uint32_t) pvParams;
    uint32_t u32YostickValueOld[2UL];
    uint32_t u32YostickValue[2UL];

    u32LastWakeTime = OS_Task__uxGetTickCount ();

    u32YostickValueOld[0U] = 0UL;
    u32YostickValueOld[1U] = 0UL;
    u32YostickValue[0U] = 0UL;
    u32YostickValue[1U] = 0UL;
    OS_Queue__boOverwrite(YoystickQueueHandle, u32YostickValue);
    while(1UL)
    {
        EDUMKII_Joystick_vSampleXY(u32YostickValue, (u32YostickValue + 1UL));
        if((u32YostickValueOld[0UL] != u32YostickValue[0UL]) || (u32YostickValueOld[1UL] != u32YostickValue[1UL]))
        {
            u32YostickValueOld[0U] = u32YostickValueOld[0UL];
            u32YostickValueOld[1U] = u32YostickValueOld[1UL];
            OS_Queue__boOverwrite(YoystickQueueHandle, u32YostickValue);
        }
        OS_Task__vDelayUntil(&u32LastWakeTime, u32PeriodTask);
    }
}
