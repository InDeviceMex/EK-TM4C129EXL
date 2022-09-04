/**
 *
 * @file xTask2_JoystickLog.c
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
#include <xTask/xHeader/xTask2_JoystickLog.h>
#include <xTask/xHeader/xTask4_LedBlueLog.h>
#include <xTask/xHeader/xSemaphores.h>

#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication/ST7735/ST7735.h>
#include <xApplication/SHARP96_96/SHARP96_96.h>

#include <xApplication_MCU/xApplication_MCU.h>

#include <xUtils/Colors/Colors.h>
#include <xUtils/Math/Math.h>
#include <xImages/xImages.h>

#include <xOS/xOS.h>


void xTask2_JoystickLog(void* pvParams)
{
    /*Period Handling*/
    uint32_t u32CurrentTime = 0UL;
    uint32_t u32NewTime = 0UL;
    uint32_t u32DiffTime = 0UL;
    uint32_t u32DiffPeriod = 0UL;
    uint32_t u32PeriodTask = (uint32_t) pvParams;

    boolean_t boSemphoreReceived = FALSE;

    uint32_t u32ADCValue[2UL] = {0UL};
    int32_t s32AccelValue[3UL] = {0L};
    char* pcButtonValue[3UL] = {0UL};
    uint32_t u32LcdPosXCurrent = 0UL;
    uint32_t u32LcdPosYCurrent = 0UL;
    uint32_t u32LcdPosX= 0UL;
    uint32_t u32LcdPosY = 0UL;
    uint32_t u32Count = 0UL;
    uint32_t u32CountImage = 0UL;
    uint32_t u32Image = 0UL;
    uint16_t u16IndexReg;
    static uint16_t u16BufferSPI[128UL * 128UL] = {0UL};
    char pcConvert[100UL] = {0UL};
    const uint16_t* pu16Pointer = 0UL;

    GPIO__vSetReady(GPIO_enPORT_F);


    EDUMKII_Joystick_vSampleXY(&u32ADCValue[0UL], &u32ADCValue[1UL]);
    OS_Semaphore__boGive(YoystickSemaphoreHandle);

    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, 0UL);
    if(0UL != (uintptr_t) UartSemaphoreHandle)
    {
        boSemphoreReceived = OS_Semaphore__boTake(UartSemaphoreHandle, 100UL);
        if(FALSE != boSemphoreReceived)
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 2UL,
                                 "LCD POS Initializing...   "
                                 );
            OS_Semaphore__boGive(UartSemaphoreHandle);
        }
    }
    ST7735__vInitRModel(ST7735_enINITFLAGS_GREEN);
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enPIN_2);

    while(1UL)
    {
        u32CurrentTime = OS_Task__uxGetTickCount ();
        EDUMKII_Joystick_vSampleXY(&u32ADCValue[0UL], &u32ADCValue[1UL]);
        OS_Queue__boOverwrite(YoystickQueueHandle, u32ADCValue);
        u32NewTime = OS_Task__uxGetTickCount();
        u32DiffTime = u32NewTime;
        u32DiffTime -= u32CurrentTime;
        u32DiffPeriod = u32PeriodTask;
        u32DiffPeriod -= u32DiffTime;
        OS_Queue__boPeek(AccelerometerQueueHandle, s32AccelValue, u32DiffPeriod);
        u32NewTime = OS_Task__uxGetTickCount();
        u32DiffTime = u32NewTime;
        u32DiffTime -= u32CurrentTime;
        u32DiffPeriod = u32PeriodTask;
        u32DiffPeriod -= u32DiffTime;
        OS_Queue__boPeek(ButtonQueueHandle, pcButtonValue, u32DiffPeriod);
        if(1UL == u32ConfigurationDone)
        {
            u64PWMValue = Math__u32Map(u32ADCValue[0UL], 4096UL, 0UL, 120UL, 0UL);
            u32CountTask = u64PWMValue;
            u32CountTask *= 157UL;
            TIMER__vClearInterruptSource(TIMER_enT4W, TIMER_enINT_TIMEOUT);
            TIMER__vEnInterruptSource(TIMER_enT4W, TIMER_enINT_TIMEOUT);
        }

        u32LcdPosXCurrent = Math__u32Map(u32ADCValue[0UL], 4096UL, 0UL, 128UL - 120UL, 0UL);
        u32LcdPosYCurrent = (uint32_t) Math__s32Map((int32_t) u32ADCValue[1UL],
                                                    4096, 0, 0, 128 - 76);
        if(u32Image)
        {
            pu16Pointer = (const uint16_t*) Images__pu8DolphinPointer();
        }
        else
        {
            pu16Pointer = (const uint16_t*) Images__pu8BicyclePointer();
        }
        for(u32LcdPosY = 0UL; u32LcdPosY < 128UL *128UL; u32LcdPosY++)
        {
            u16BufferSPI[u32LcdPosY] = 0UL;
        }
        for(u32LcdPosY = u32LcdPosYCurrent ;
            u32LcdPosY < (u32LcdPosYCurrent + 76UL);
            u32LcdPosY++)
        {
            for(u32LcdPosX = u32LcdPosXCurrent ;
                u32LcdPosX < (u32LcdPosXCurrent + 120UL);
                u32LcdPosX++)
            {
                u16IndexReg = u32LcdPosY;
                u16IndexReg *= 128UL;
                u16IndexReg += u32LcdPosX;
                u16BufferSPI[u16IndexReg] = (uint16_t) *pu16Pointer;
                pu16Pointer += 1UL;
            }
        }
        sprintf__u32User(pcConvert, "BUTTON\n\r1:%s 2:%s 3:%s",
                         pcButtonValue[0UL],
                         pcButtonValue[1UL],
                         pcButtonValue[2UL]
                         );
        ST7735__vBufferString(u16BufferSPI, 0UL, 0UL, pcConvert, 0xFFFFUL, &FONT_s5x7);
        sprintf__u32User(pcConvert, "YOYSTICK\n\rX:%4d Y:%4d",
                         u32ADCValue[0UL],
                         u32ADCValue[1UL]
                         );
        ST7735__vBufferString(u16BufferSPI, 0UL, 16UL, pcConvert, 0xFFFFUL, &FONT_s5x7);
        sprintf__u32User(pcConvert, "ACCELEROMETER\n\rX:%4dY:%4dZ:%4d",
                         s32AccelValue[0UL],
                         s32AccelValue[1UL],
                         s32AccelValue[2UL]
                         );
        ST7735__vBufferString(u16BufferSPI, 0UL, 32UL, pcConvert, 0xFFFFUL, &FONT_s5x7);
        ST7735__vDrawBuffer(0UL, 0UL, 128UL, 128UL, u16BufferSPI);
        if(0UL != (uintptr_t) UartSemaphoreHandle)
        {
            u32NewTime = OS_Task__uxGetTickCount();
            u32DiffTime = u32NewTime;
            u32DiffTime -= u32CurrentTime;
            u32DiffPeriod = u32PeriodTask;
            u32DiffPeriod -= u32DiffTime;
            boSemphoreReceived = OS_Semaphore__boTake(UartSemaphoreHandle, u32DiffPeriod);
            if(FALSE != boSemphoreReceived)
            {
                GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 2UL,
                                     "YOYSTICK POS X: %d Y: %d            ",
                                     u32ADCValue[0UL],
                                     u32ADCValue[1UL]
                                     );
                OS_Semaphore__boGive(UartSemaphoreHandle);
            }
        }

        u32CountImage++;
        if(u32CountImage > 50UL)
        {
            u32Image ^= 1UL;
            u32CountImage = 0UL;
        }
        u32Count++;
        u32NewTime = OS_Task__uxGetTickCount();
        u32DiffTime = u32NewTime;
        u32DiffTime -= u32CurrentTime;
        u32DiffPeriod = u32PeriodTask;
        u32DiffPeriod -= u32DiffTime;
        if(u32DiffPeriod > u32PeriodTask)
        {
            u32DiffPeriod = u32PeriodTask;
        }
        OS_Task__vDelayUntil(&u32NewTime, u32DiffPeriod);
    }
}
