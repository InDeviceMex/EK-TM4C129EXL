/**
 *
 * @file xTask9_TFT.c
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
#include <xTask/xHeader/xTask9_TFT.h>
#include <xTask/xHeader/xSemaphores.h>

#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication/ST7735/ST7735.h>
#include <xApplication/SHARP96_96/SHARP96_96.h>

#include <xApplication_MCU/xApplication_MCU.h>

#include <xUtils/Colors/Colors.h>
#include <xUtils/Math/Math.h>
#include <xImages/xImages.h>

#include <xOS/xOS.h>


void xTask9_TFT(void* pvParams)
{
    /*Period Handling*/
    uint32_t u32LastWakeTime;
    uint32_t u32PeriodTask = (uint32_t) pvParams;

    uint32_t u32JostickValue[2UL];
    int32_t s32AccelValue[3UL];
    char* pcStateButton[3UL];

    uint32_t u32LcdPosXCurrent = 0UL;
    uint32_t u32LcdPosYCurrent = 0UL;
    uint32_t u32LcdPosX;
    uint32_t u32LcdPosY;
    uint32_t u32Count= 0U;
    uint32_t u32CountImage = 0UL;
    uint32_t u32Image= 0U;
    uint16_t u16IndexReg;
    static uint16_t u16BufferSPI[128UL * 128UL];
    char pcConvert1[50UL];
    char pcConvert2[50UL];
    char pcConvert3[50UL];
    const uint16_t* pu16Pointer = (const uint16_t*) Images__pu8BicyclePointer();
    OS_Boolean_t boResult;

    GPIO__vSetReady(GPIO_enPORT_F);
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPINMASK_2, 0UL);
    ST7735__vInitRModel(ST7735_enINITFLAGS_GREEN);
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPINMASK_2, GPIO_enPINMASK_2);
    OS_Semaphore__boGive(MainSemaphoreHandle);

    u32LastWakeTime = OS_Task__uxGetTickCount ();
    while(1UL)
    {
        boResult = OS_Queue__boPeek(AccelerometerQueueHandle, s32AccelValue, 0UL);
        if(TRUE == boResult)
        {
            sprintf__u32User(pcConvert3, "ACCELEROMETER\n\rX:%4dY:%4dZ:%4d",
                             s32AccelValue[0UL],
                             s32AccelValue[1UL],
                             s32AccelValue[2UL]
                             );
        }
        boResult = OS_Queue__boPeek(ButtonQueueHandle, pcStateButton, 0UL);
        if(TRUE == boResult)
        {
            sprintf__u32User(pcConvert1, "BUTTON\n\r1:%s 2:%s 3:%s",
                             pcStateButton[0UL],
                             pcStateButton[1UL],
                             pcStateButton[2UL]
                             );
        }
        boResult = OS_Queue__boPeek(YoystickQueueHandle, u32JostickValue, 0UL);
        if(TRUE == boResult)
        {
            sprintf__u32User(pcConvert2, "YOYSTICK\n\rX:%4d Y:%4d",
                             u32JostickValue[0UL],
                             u32JostickValue[1UL]
                             );
            u32LcdPosXCurrent = Math__u32Map(u32JostickValue[0UL], 4096UL, 0UL, 128UL - 120UL, 0UL);
            u32LcdPosYCurrent = (uint32_t) Math__s32Map((int32_t) u32JostickValue[1UL],
                                                        4096, 0, 0, 128 - 76);
        }

        if(u32Image)
        {
            pu16Pointer = (const uint16_t*) Images__pu8DolphinPointer();
        }
        else
        {
            pu16Pointer = (const uint16_t*) Images__pu8BicyclePointer();
        }
        uint32_t* u32ValueP = (uint32_t*)(&u16BufferSPI[0UL]);
        for(u32LcdPosY = 0UL; u32LcdPosY < 128UL *128UL / 2UL; u32LcdPosY++)
        {
            *u32ValueP = 0UL;
            u32ValueP += 1U;
        }
        for(u32LcdPosY = u32LcdPosYCurrent ;
            u32LcdPosY < (u32LcdPosYCurrent + 76UL);
            u32LcdPosY++)
        {
            for(u32LcdPosX = u32LcdPosXCurrent ;
                u32LcdPosX < (u32LcdPosXCurrent + 120UL);
                u32LcdPosX++)
            {
                u16IndexReg = (uint16_t) u32LcdPosY;
                u16IndexReg *= 128UL;
                u16IndexReg += u32LcdPosX;
                u16BufferSPI[u16IndexReg] = (uint16_t) *pu16Pointer;
                pu16Pointer += 1UL;
            }
        }

        ST7735__vBufferString(u16BufferSPI, 0UL, 0UL, pcConvert1, 0xFFFFUL, &FONT_s5x7);
        ST7735__vBufferString(u16BufferSPI, 0UL, 16UL, pcConvert2, 0xFFFFUL, &FONT_s5x7);
        ST7735__vBufferString(u16BufferSPI, 0UL, 32UL, pcConvert3, 0xFFFFUL, &FONT_s5x7);
        ST7735__vDrawBuffer(0UL, 0UL, 128UL, 128UL, u16BufferSPI);

        u32CountImage++;
        if(u32CountImage > 50UL)
        {
            u32Image ^= 1UL;
            u32CountImage = 0UL;
        }
        u32Count++;
        OS_Task__vDelayUntil(&u32LastWakeTime, u32PeriodTask);
    }
}




