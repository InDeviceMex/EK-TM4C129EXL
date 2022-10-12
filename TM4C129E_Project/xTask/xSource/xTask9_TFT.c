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

__attribute__((aligned(4))) uint16_t u16BufferSPI[128UL * 128UL];

void xTask9_TFT(void* pvParams)
{
    /*Period Handling*/
    UBase_t uxLastWakeTime;
    UBase_t uxPeriodTask = (UBase_t) pvParams;

    UBase_t uxJostickValue[2UL];
    Base_t sxAccelValue[3UL];
    char* pcStateButton[3UL];

    UBase_t uxLcdPosXCurrent = 0UL;
    UBase_t uxLcdPosYCurrent = 0UL;
    UBase_t uxLcdPosX;
    UBase_t uxLcdPosY;
    UBase_t uxCount= 0U;
    UBase_t uxCountImage = 0UL;
    UBase_t uxImage= 0U;
    uint16_t u16IndexReg;
    char pcConvert1[50UL];
    char pcConvert2[50UL];
    char pcConvert3[50UL];
    const uint16_t* pu16Pointer = (const uint16_t*) Images__pu8BicyclePointer();
    OS_Boolean_t boResult;

    GPIO__vSetReady(GPIO_enPORT_F);
    GPIO__enSetDataByNumber(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enLEVEL_LOW);
    ST7735__enInitRModel(ST7735_enINITFLAGS_GREEN);
    GPIO__enSetDataByNumber(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enLEVEL_HIGH);
    OS_Semaphore__boGive(MainSemaphoreHandle);

    uxLastWakeTime = OS_Task__uxGetTickCount ();
    UART__uxPrintf(UART_enMODULE_0, "Task9 First Entry \n\r");
    while(1UL)
    {
        boResult = OS_Queue__boPeek(AccelerometerQueueHandle, sxAccelValue, 0UL);
        if(TRUE == boResult)
        {
            sprintf__uxUser(pcConvert3, "ACCELEROMETER\n\rX:%4dY:%4dZ:%4d",
                             sxAccelValue[0UL],
                             sxAccelValue[1UL],
                             sxAccelValue[2UL]
                             );
        }
        boResult = OS_Queue__boPeek(ButtonQueueHandle, pcStateButton, 0UL);
        if(TRUE == boResult)
        {
            sprintf__uxUser(pcConvert1, "BUTTON\n\r1:%s 2:%s 3:%s",
                             pcStateButton[0UL],
                             pcStateButton[1UL],
                             pcStateButton[2UL]
                             );
        }
        boResult = OS_Queue__boPeek(YoystickQueueHandle, uxJostickValue, 0UL);
        if(TRUE == boResult)
        {
            sprintf__uxUser(pcConvert2, "YOYSTICK\n\rX:%4d Y:%4d",
                             uxJostickValue[0UL],
                             uxJostickValue[1UL]
                             );
             Math__enMapUnsigned(uxJostickValue[0UL], &uxLcdPosXCurrent, 4096UL, 0UL, 128UL - 120UL, 0UL);
             Math__enMapSigned((Base_t) uxJostickValue[1UL], (Base_t*) &uxLcdPosYCurrent, 4096, 0, 0, 128 - 76);
        }

        if(uxImage)
        {
            pu16Pointer = (const uint16_t*) Images__pu8DolphinPointer();
        }
        else
        {
            pu16Pointer = (const uint16_t*) Images__pu8BicyclePointer();
        }
        UBase_t* uxValueP = (UBase_t*)(&u16BufferSPI[0UL]);
        for(uxLcdPosY = 0UL; uxLcdPosY < 128UL *128UL / 2UL; uxLcdPosY++)
        {
            *uxValueP = 0UL;
            uxValueP += 1U;
        }
        for(uxLcdPosY = uxLcdPosYCurrent ;
            uxLcdPosY < (uxLcdPosYCurrent + 76UL);
            uxLcdPosY++)
        {
            for(uxLcdPosX = uxLcdPosXCurrent ;
                uxLcdPosX < (uxLcdPosXCurrent + 120UL);
                uxLcdPosX++)
            {
                u16IndexReg = (uint16_t) uxLcdPosY;
                u16IndexReg *= 128UL;
                u16IndexReg += uxLcdPosX;
                u16BufferSPI[u16IndexReg] = (uint16_t) *pu16Pointer;
                pu16Pointer += 1UL;
            }
        }

        uxCountImage++;
        if(uxCountImage > 58UL)
        {
            uxImage ^= 1UL;
            uxCountImage = 0UL;
        }
        uxCount++;

        ST7735__vBufferString(u16BufferSPI, 0UL, 0UL, pcConvert1, 0xFFFFUL, &FONT_s5x7);
        ST7735__vBufferString(u16BufferSPI, 0UL, 16UL, pcConvert2, 0xFFFFUL, &FONT_s5x7);
        ST7735__vBufferString(u16BufferSPI, 0UL, 32UL, pcConvert3, 0xFFFFUL, &FONT_s5x7);
        ST7735__vDrawBuffer(0UL, 0UL, 128UL, 128UL, u16BufferSPI);

        OS_Task__vDelayUntil(&uxLastWakeTime, uxPeriodTask);
    }
}




