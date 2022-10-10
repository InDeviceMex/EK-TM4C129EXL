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
#include <xApplication_MCU/UART/UART.h>

#include <xOS/xOS.h>


void xTask2_JoystickLog(void* pvParams)
{
    /*Period Handling*/
    UBase_t uxLastWakeTime;
    UBase_t uxPeriodTask = (UBase_t) pvParams;
    UBase_t uxYostickValueXOld;
    UBase_t uxYostickValueYOld;
    UBase_t uxYostickValue[2UL];
    UBase_t uxYostickValueX;
    UBase_t uxYostickValueY;

    uxLastWakeTime = OS_Task__uxGetTickCount ();

    uxYostickValueXOld = 0UL;
    uxYostickValueYOld = 0UL;
    uxYostickValueX = 0UL;
    uxYostickValueY = 0UL;
    uxYostickValue[0U] = uxYostickValueX;
    uxYostickValue[1U] = uxYostickValueY;
    OS_Queue__boOverwrite(YoystickQueueHandle, uxYostickValue);
    UART__uxPrintf(UART_enMODULE_0, "Task2 First Entry \n\r");
    while(1UL)
    {
        EDUMKII_Joystick_vSampleXY(&uxYostickValueX, &uxYostickValueY);
        if((uxYostickValueXOld != uxYostickValueX) || (uxYostickValueYOld != uxYostickValueY))
        {
            uxYostickValueXOld = uxYostickValueX;
            uxYostickValueYOld = uxYostickValueY;
            uxYostickValue[0U] = uxYostickValueX;
            uxYostickValue[1U] = uxYostickValueY;
            OS_Queue__boOverwrite(YoystickQueueHandle, uxYostickValue);
        }
        OS_Task__vDelayUntil(&uxLastWakeTime, uxPeriodTask);
    }
}
