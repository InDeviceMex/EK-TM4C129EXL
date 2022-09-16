/**
 *
 * @file xTask8_Debug.c
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
 * @verbatim 5 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#include <xTask/xHeader/xTask8_Debug.h>
#include <xTask/xHeader/xSemaphores.h>

#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication_MCU/xApplication_MCU.h>

#include <xOS/xOS.h>

void xTask8_Debug(void* pvParams)
{
    /*Period Handling*/
    uint32_t u32LastWakeTime;
    uint32_t u32PeriodTask = (uint32_t) pvParams;
    OS_Boolean_t boResult;

    uint32_t u32JostickValue[2UL];
    int32_t s32AccelValue[3UL];
    char* pcStateButton[3UL];

    GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 2UL,
                         "LCD POS Initializing...   "
                         );
    OS_Semaphore__boTake(MainSemaphoreHandle, 2000UL);
    u32LastWakeTime = OS_Task__uxGetTickCount ();
    while(1UL)
    {

        boResult = OS_Queue__boPeek(AccelerometerQueueHandle, s32AccelValue, 0UL);
        if(TRUE == boResult)
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 3UL,
                                 "Accelerometer X: %d Y: %d Z: %d        ",
                                 s32AccelValue[0UL],
                                 s32AccelValue[1UL],
                                 s32AccelValue[2UL]
                                 );
        }
        boResult = OS_Queue__boPeek(ButtonQueueHandle, pcStateButton, 0UL);
        if(TRUE == boResult)
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 1UL,
                                 "BUTTON1: %s BUTTON2: %s SELECT: %s     ",
                                 pcStateButton[0UL],
                                 pcStateButton[1UL],
                                 pcStateButton[2UL]
                                 );
        }
        boResult = OS_Queue__boPeek(YoystickQueueHandle, u32JostickValue, 0UL);
        if(TRUE == boResult)
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 2UL,
                                 "YOYSTICK POS X: %d Y: %d            ",
                                 u32JostickValue[0UL],
                                 u32JostickValue[1UL]
                                 );
        }

        OS_Task__vDelayUntil(&u32LastWakeTime, u32PeriodTask);
    }
}




