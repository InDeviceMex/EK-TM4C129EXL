/**
 *
 * @file xTask3_ButtonsLog.c
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
#include <xTask/xHeader/xTask3_ButtonsLog.h>

#include <xApplication/EDUMKII/EDUMKII.h>

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>

#include <xOS/xOS.h>

void xTask3_ButtonsLog(void* pvParams)
{
    char* pcState[2UL] = {"OFF", "ON "};
    char* pcStateButton[3UL] = {(char*)0UL,(char*) 0UL,(char*) 0UL};
    uint32_t u32LastWakeTime = (uint32_t) pvParams;
    EDUMKII_nBUTTON enButtonSelect = EDUMKII_enBUTTON_NO;
    EDUMKII_nJOYSTICK enSelect = EDUMKII_enJOYSTICK_NOPRESS;
    static uint32_t u32CountTask = 0UL;
    u32LastWakeTime = OS_Task__u32GetTickCount ();
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPION0, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPION1, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        enButtonSelect = EDUMKII_Button_enRead(EDUMKII_enBUTTON_ALL);
        EDUMKII_Joystick_vSampleSelect(&enSelect);

        if((uint32_t) enButtonSelect & (uint32_t) EDUMKII_enBUTTON_1)
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_0, GPIO_enPIN_0);
            pcStateButton[0UL] = pcState[1UL];
        }
        else
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_0, 0UL);
            pcStateButton[0UL] = pcState[0UL];
        }
        if((uint32_t) enButtonSelect & (uint32_t) EDUMKII_enBUTTON_2)
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_1, GPIO_enPIN_1);
            pcStateButton[1UL] = pcState[1UL];
        }
        else
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_1, 0UL);
            pcStateButton[1UL] = pcState[0UL];
        }

        if(EDUMKII_enJOYSTICK_PRESS == enSelect)
        {
            GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_4, GPIO_enPIN_4);
            pcStateButton[2UL] = pcState[1UL];
        }
        else
        {
            GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_4, 0UL);
            pcStateButton[2UL] = pcState[0UL];
        }

        OS_Task__vEnterCritical();

        GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 1UL,
                             "BUTTON1: %s BUTTON2: %s SELECT: %s     ",
                             pcStateButton[0UL],
                             pcStateButton[1UL],
                             pcStateButton[2UL]
                             );
        OS_Task__vExitCritical();
        u32CountTask++;
        OS_Task__vDelayUntil(&u32LastWakeTime, 75UL);
    }
}
