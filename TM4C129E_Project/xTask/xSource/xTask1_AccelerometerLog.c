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
#include <xApplication_MCU/UART/UART.h>
#include <xOS/xOS.h>

void xTask1_AccelerometerLog(void* pvParams)
{
    /*Period Handling*/
    UBase_t uxPeriodTask = (UBase_t) pvParams;
    UBase_t uxLastWakeTime;

    /*Accelerometer handling*/
    Base_t sxAccelValueXOld;
    Base_t sxAccelValueYOld;
    Base_t sxAccelValueZOld;
    Base_t sxAccelValue[3UL];
    Base_t sxAccelValueX;
    Base_t sxAccelValueY;
    Base_t sxAccelValueZ;
    uxLastWakeTime = OS_Task__uxGetTickCount ();

    sxAccelValueXOld = 0;
    sxAccelValueYOld = 0;
    sxAccelValueZOld = 0;
    sxAccelValueX = 0;
    sxAccelValueY = 0;
    sxAccelValueZ = 0;
    sxAccelValue[0U] = sxAccelValueX;
    sxAccelValue[1U] = sxAccelValueY;
    sxAccelValue[2U] = sxAccelValueZ;
    OS_Queue__boOverwrite(AccelerometerQueueHandle, sxAccelValue);
    UART__uxCustomPrintf(UART_enMODULE_0, "Task1 First Entry \n\r");
    while(1UL)
    {
        EDUMKII_Accelerometer_vSample(&sxAccelValueX, &sxAccelValueY, &sxAccelValueZ);
        if((sxAccelValueXOld != sxAccelValueX) || (sxAccelValueYOld != sxAccelValueY) || (sxAccelValueZOld != sxAccelValueZ))
        {
            sxAccelValueXOld = sxAccelValueX;
            sxAccelValueYOld = sxAccelValueY;
            sxAccelValueZOld = sxAccelValueZ;
            sxAccelValue[0U] = sxAccelValueX;
            sxAccelValue[1U] = sxAccelValueY;
            sxAccelValue[2U] = sxAccelValueZ;
            OS_Queue__boOverwrite(AccelerometerQueueHandle, sxAccelValue);
        }
        OS_Task__vDelayUntil(&uxLastWakeTime, uxPeriodTask);
    }
}
