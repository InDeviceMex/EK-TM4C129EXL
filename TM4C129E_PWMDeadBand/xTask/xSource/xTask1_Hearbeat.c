/**
 *
 * @file xTask1_Hearbeat.c
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
 * @verbatim 23 nov. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 nov. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xTask/xHeader/xSemaphores.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xUtils/Math/Math.h>
#include <xUtils/Conversion/Conversion.h>
#include <xOS/xOS.h>
#include <xTask/xHeader/xTask1_PWM.h>
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

void xTask2_Heartbeat(void* pvParams)
{
    /*Period Handling*/
    UBase_t uxLastWakeTime;
    UBase_t uxPeriodTask = (UBase_t) pvParams;

    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPION);

    GPIO__enSetDigitalConfig(GPIO_enGPION1, GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP);
    GPIO__enSetDataByNumber(GPIO_enPORT_N, GPIO_enPIN_1, GPIO_enLEVEL_LOW);

    uxLastWakeTime = OS_Task__uxGetTickCount ();
    while(1UL)
    {
        GPION->DATA_Bit.PIN1 ^= 1UL;
        OS_Task__vDelayUntil(&uxLastWakeTime, uxPeriodTask);
    }
}




