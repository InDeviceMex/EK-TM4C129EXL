/**
 *
 * @file xTask6_Commands.c
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
 * @verbatim 2 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xTask/xHeader/xTask6_Commands.h>

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>

#include <xOS/xOS.h>

void xTask6_Commands(void* pvParams)
{
    uint32_t u32LastWakeTime = (uint32_t) pvParams;
    u32LastWakeTime = OS_Task__uxGetTickCount();



    while(1UL)
    {
        OS_Task__vDelayUntil(&u32LastWakeTime, 1000UL);
    }

}



