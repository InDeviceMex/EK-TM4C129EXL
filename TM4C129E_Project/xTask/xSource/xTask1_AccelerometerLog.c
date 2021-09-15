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

#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication_MCU/xApplication_MCU.h>

#include <xOS/xOS.h>

void xTask1_AccelerometerLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    int32_t s32ADCValueX = (int32_t) pvParams;
    int32_t s32ADCValueY = (int32_t) pvParams;
    int32_t s32ADCValueZ = (int32_t) pvParams;
    u32LastWakeTime = OS_Task__uxGetTickCount ();
    while(1UL)
    {
        EDUMKII_Accelerometer_vSample(&s32ADCValueX, &s32ADCValueY, &s32ADCValueZ);
        OS_Task__vSuspendAll();

        GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 3UL,
                             "Accelerometer X: %d Y: %d Z: %d       ",
                             s32ADCValueX,
                             s32ADCValueY,
                             s32ADCValueZ
                             );
        OS_Task__boResumeAll();
        OS_Task__vDelayUntil(&u32LastWakeTime, 160UL);
    }
}
