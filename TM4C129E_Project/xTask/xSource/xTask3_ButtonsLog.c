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
#include <xTask/xHeader/xSemaphores.h>

#include <xApplication/EDUMKII/EDUMKII.h>

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>

#include <xOS/xOS.h>

void xTask3_ButtonsLog(void* pvParams)
{
    /*Period Handling*/
    uint32_t u32LastWakeTime;
    uint32_t u32PeriodTask = (uint32_t) pvParams;


    /*Buttons and Led handling*/
    char* pcState[2UL] = {"OFF", "ON "};
    char* pcStateButton[3UL];
    EDUMKII_nBUTTON enButtonSelect;
    EDUMKII_nJOYSTICK enSelect;
    EDUMKII_nBUTTON enButtonSelectOld;
    EDUMKII_nJOYSTICK enSelectOld;

    u32LastWakeTime = OS_Task__uxGetTickCount ();
    GPIO__vSetReady(GPIO_enPORT_N);
    GPIO__vSetReady(GPIO_enPORT_F);

    GPIO__enSetDigitalConfig(GPIO_enGPIOF4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPION0, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPION1, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    enButtonSelectOld = EDUMKII_enBUTTON_NO;
    enSelectOld = EDUMKII_enJOYSTICK_NOPRESS;
    pcStateButton[0UL] = pcState[0UL];
    pcStateButton[1UL] = pcState[0UL];
    pcStateButton[2UL] = pcState[0UL];
    OS_Queue__boOverwrite(ButtonQueueHandle, pcStateButton);
    while(1UL)
    {
        enButtonSelect = EDUMKII_Button_enRead(EDUMKII_enBUTTON_ALL);
        EDUMKII_Joystick_vSampleSelect(&enSelect);

        if((enButtonSelectOld != enButtonSelect) || (enSelectOld != enSelect))
        {
            if(enButtonSelectOld != enButtonSelect)
            {
                enButtonSelectOld = enButtonSelect;
                if((uint32_t) enButtonSelect & (uint32_t) EDUMKII_enBUTTON_1)
                {
                    GPIO__vSetData(GPIO_enPORT_N, GPIO_enPINMASK_0, GPIO_enPINMASK_0);
                    pcStateButton[0UL] = pcState[1UL];
                }
                else
                {
                    GPIO__vSetData(GPIO_enPORT_N, GPIO_enPINMASK_0, 0UL);
                    pcStateButton[0UL] = pcState[0UL];
                }

                if((uint32_t) enButtonSelect & (uint32_t) EDUMKII_enBUTTON_2)
                {
                    GPIO__vSetData(GPIO_enPORT_N, GPIO_enPINMASK_1, GPIO_enPINMASK_1);
                    pcStateButton[1UL] = pcState[1UL];
                }
                else
                {
                    GPIO__vSetData(GPIO_enPORT_N, GPIO_enPINMASK_1, 0UL);
                    pcStateButton[1UL] = pcState[0UL];
                }
            }

            if(enSelectOld != enSelect)
            {
                enSelectOld = enSelect;
                if(EDUMKII_enJOYSTICK_PRESS == enSelect)
                {
                    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPINMASK_4, GPIO_enPINMASK_4);
                    pcStateButton[2UL] = pcState[1UL];
                }
                else
                {
                    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPINMASK_4, 0UL);
                    pcStateButton[2UL] = pcState[0UL];
                }
            }
            OS_Queue__boOverwrite(ButtonQueueHandle, pcStateButton);
        }
        OS_Task__vDelayUntil(&u32LastWakeTime, u32PeriodTask);
    }
}
