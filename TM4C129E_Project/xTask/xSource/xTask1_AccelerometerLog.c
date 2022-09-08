/**
 *
 * @file xTask1_AccelerometerLog.c
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
#include <xTask/xHeader/xTask1_AccelerometerLog.h>
#include <xTask/xHeader/xSemaphores.h>

#include <xApplication/EDUMKII/EDUMKII.h>

#include <xOS/xOS.h>

void xTask1_AccelerometerLog(void* pvParams)
{
    /*Period Handling*/
    uint32_t u32PeriodTask = (uint32_t) pvParams;
    uint32_t u32LastWakeTime;

    /*Accelerometer handling*/
    int32_t s32AccelValue[3UL];
    u32LastWakeTime = OS_Task__uxGetTickCount ();

    while(1UL)
    {
        EDUMKII_Accelerometer_vSample(&s32AccelValue[0UL], &s32AccelValue[1UL], &s32AccelValue[2UL]);
        OS_Queue__boOverwrite(AccelerometerQueueHandle, s32AccelValue);
        OS_Task__vDelayUntil(&u32LastWakeTime, u32PeriodTask);
    }
}
