/**
 *
 * @file xTask5_LedGreenLog.c
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
#include <xTask/xHeader/xTask5_LedGreenLog.h>

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>

#include <xOS/xOS.h>

void xTask5_LedGreenLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0UL;
    u32LastWakeTime = OS_Task__uxGetTickCount();
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, u32PinValue);
        u32PinValue ^= GPIO_enPIN_3;
        OS_Task__vEnterCritical();
        if(0UL == u32PinValue)
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 0UL, "LED GREEN: ON  ");
        }
        else
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 0UL, "LED GREEN: OFF ");
        }
        OS_Task__vExitCritical();
        u32CountTask++;
        OS_Task__vDelayUntil(&u32LastWakeTime, 1000UL);
    }
}
