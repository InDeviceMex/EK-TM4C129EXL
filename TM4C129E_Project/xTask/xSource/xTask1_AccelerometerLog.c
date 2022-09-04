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
#include <xApplication_MCU/xApplication_MCU.h>

#include <xOS/xOS.h>

void xTask1_AccelerometerLog(void* pvParams)
{
    /*Period Handling*/
    uint32_t u32CurrentTime = 0UL;
    uint32_t u32NewTime = 0UL;
    uint32_t u32DiffTime = 0UL;
    uint32_t u32DiffPeriod = 0UL;
    uint32_t u32PeriodTask = (uint32_t) pvParams;

    /*Semaphore handling*/
    boolean_t boSemphoreReceived = FALSE;

    /*Accelerometer handling*/
    int32_t s32ADCValue[3UL] = {0UL};
    while(1UL)
    {
        u32CurrentTime = OS_Task__uxGetTickCount ();
        EDUMKII_Accelerometer_vSample(&s32ADCValue[0UL], &s32ADCValue[1UL], &s32ADCValue[2UL]);
        OS_Queue__boOverwrite(AccelerometerQueueHandle, s32ADCValue);
        if(0UL != UartSemaphoreHandle)
        {
            u32NewTime = OS_Task__uxGetTickCount();
            u32DiffTime = u32NewTime;
            u32DiffTime -= u32CurrentTime;
            u32DiffPeriod = u32PeriodTask;
            u32DiffPeriod -= u32DiffTime;

            boSemphoreReceived = OS_Semaphore__boTake(UartSemaphoreHandle, u32DiffPeriod);
            if(FALSE != boSemphoreReceived)
            {
                GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 3UL,
                                     "Accelerometer X: %d Y: %d Z: %d        ",
                                     s32ADCValue[0UL],
                                     s32ADCValue[1UL],
                                     s32ADCValue[2UL]
                                     );
                OS_Semaphore__boGive(UartSemaphoreHandle);
            }
        }

        u32NewTime = OS_Task__uxGetTickCount();
        u32DiffTime = u32NewTime;
        u32DiffTime -= u32CurrentTime;
        u32DiffPeriod = u32PeriodTask;
        u32DiffPeriod -= u32DiffTime;
        if(u32DiffPeriod > u32PeriodTask)
        {
            u32DiffPeriod = u32PeriodTask;
        }

        OS_Task__vDelayUntil(&u32NewTime, u32DiffPeriod);
    }
}
