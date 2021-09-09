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

#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication/ST7735/ST7735.h>

#include <xApplication_MCU/xApplication_MCU.h>

#include <xUtils/Colors/Colors.h>
#include <xUtils/Math/Math.h>
#include <xImages/xImages.h>

#include <xOS/xOS.h>

void xTask2_JoystickLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    uint32_t u32ADCValueX = (uint32_t) pvParams;
    uint32_t u32ADCValueY = (uint32_t) pvParams;
    uint32_t u32LcdPosXCurrent = (uint32_t) pvParams;
    uint32_t u32LcdPosYCurrent = (uint32_t) pvParams;
    uint32_t u32LcdPosX= 0UL;
    uint32_t u32LcdPosY = 0UL;
    uint32_t u32Count = 0UL;
    uint32_t u32CountImage = 0UL;
    uint32_t u32Image = 0UL;
    static uint16_t u16BufferSPI[128UL * 128UL] = {0UL};
    const uint16_t* pu16Pointer = 0UL;
    u32LastWakeTime = OS_Task__uxGetTickCount ();
    GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 2UL,
                         "LCD POS Initializing...   "
                         );
    ST7735__vInitRModel(ST7735_enINITFLAGS_GREEN);
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enPIN_2);
    while(1UL)
    {

        EDUMKII_Joystick_vSampleXY(&u32ADCValueX, &u32ADCValueY);
        u32LcdPosXCurrent = Math__u32Map(u32ADCValueX, 4096UL, 0UL, 128UL - 120UL, 0UL);
        u32LcdPosYCurrent = (uint32_t) Math__s32Map((int32_t) u32ADCValueY,
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
                u16BufferSPI[u32LcdPosX + (u32LcdPosY * 128UL)] = *pu16Pointer;
                pu16Pointer += 1UL;
            }
        }
        ST7735__vDrawBuffer(0UL, 0UL, 128UL, 128UL, u16BufferSPI);
        OS_Task__vEnterCritical();

        GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 2UL,
                             "LCD POS X: %d Y: %d            ",
                             u32LcdPosXCurrent,
                             u32LcdPosYCurrent
                             );
        OS_Task__vExitCritical();
        u32CountImage++;
        if(u32CountImage > 50UL)
        {
            u32Image ^= 1UL;
            u32CountImage = 0UL;
        }
        u32Count++;
        OS_Task__vDelayUntil(&u32LastWakeTime, 20UL);
    }
}
