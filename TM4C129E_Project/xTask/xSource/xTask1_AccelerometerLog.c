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
    Base_t sxAccelValueOld[3UL];
    Base_t sxAccelValue[3UL];
    uxLastWakeTime = OS_Task__uxGetTickCount ();

    sxAccelValueOld[0U] = 0;
    sxAccelValueOld[1U] = 0;
    sxAccelValueOld[2U] = 0;
    sxAccelValue[0U] = 0;
    sxAccelValue[1U] = 0;
    sxAccelValue[2U] = 0;
    OS_Queue__boOverwrite(AccelerometerQueueHandle, sxAccelValue);
    UART__uxPrintf(UART_enMODULE_0, "Task1 First Entry \n\r");
    while(1UL)
    {
        EDUMKII_Accelerometer_vSample(sxAccelValue, (sxAccelValue + 1UL), (sxAccelValue + 2UL));
        if((sxAccelValueOld[0UL] != sxAccelValue[0UL]) || (sxAccelValueOld[1UL] != sxAccelValue[1UL]) || (sxAccelValueOld[2UL] != sxAccelValue[2UL]))
        {
            sxAccelValueOld[0U] = sxAccelValue[0UL];
            sxAccelValueOld[1U] = sxAccelValue[1UL];
            sxAccelValueOld[2U] = sxAccelValue[2UL];
            OS_Queue__boOverwrite(AccelerometerQueueHandle, sxAccelValue);
        }
        OS_Task__vDelayUntil(&uxLastWakeTime, uxPeriodTask);
    }
}
