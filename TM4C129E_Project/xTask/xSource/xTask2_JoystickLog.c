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

#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication/ST7735/ST7735.h>
#include <xApplication/SHARP96_96/SHARP96_96.h>

#include <xApplication_MCU/xApplication_MCU.h>

#include <xUtils/Colors/Colors.h>
#include <xUtils/Math/Math.h>
#include <xImages/xImages.h>

#include <xOS/xOS.h>

#define OFFSET_VALUE (100UL)

void xTask2_JoystickLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    uint32_t u32ADCValueX = (uint32_t) pvParams;
    uint32_t u32ADCValueY = (uint32_t) pvParams;
    uint32_t u32LcdPosXCurrent = (uint32_t) pvParams;
    uint32_t u32LcdPosYCurrent = (uint32_t) pvParams;
    uint32_t u32FirstValueX = 0UL;
    uint32_t u32FirstValueY = 0UL;
    uint32_t u32LcdPosX= 0UL;
    uint32_t u32LcdPosY = 0UL;
    uint32_t u32Count = 0UL;
    uint32_t u32CountImage = 0UL;
    uint32_t u32Image = 0UL;
    static uint16_t u16BufferSPI[128UL * 128UL] = {0UL};
    const uint16_t* pu16Pointer = 0UL;
    uint8_t pu8Command [100] = {0};
    uint8_t u8DatareceivedSize[100UL] = {0U};
    UART_CONTROL_t enUart6Control =
    {
        UART_enEOT_ALL,
        UART_enLOOPBACK_DIS,
        UART_enLINE_ENA,
        UART_enLINE_ENA,
        UART_enRTS_MODE_SOFT,
        UART_enCTS_MODE_SOFT,
        UART_enLINE_DIS,
        UART_enLINE_DIS,
        UART_enLINE_DIS,
        UART_enLINE_DIS,
    };

    UART_LINE_CONTROL_t enUart6LineControl =
    {
     UART_enFIFO_ENA,
     UART_enSTOP_ONE,
     UART_enPARITY_DIS,
     UART_enPARITY_TYPE_EVEN,
     UART_enPARITY_STICK_DIS ,
     UART_enLENGTH_8BITS,
    };

    UART_LINE_t enUart6Line =
    {
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
    };


    u32LastWakeTime = OS_Task__uxGetTickCount ();


    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOP);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART6);

    EDUMKII_Joystick_vSampleXY(&u32FirstValueX, &u32FirstValueY);


    UART__vSetEnable(UART_enMODULE_6, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_6, UART_enMODE_NORMAL,
                      &enUart6Control, &enUart6LineControl, 921600UL, &enUart6Line );
    UART__vSetEnable(UART_enMODULE_6, UART_enENABLE_START);

    /*Status*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOK4, GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP);


    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, 0UL);
    OS_Task__vSuspendAll();
    GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 2UL,
                         "LCD POS Initializing...   "
                         );
    OS_Task__boResumeAll();
    ST7735__vInitRModel(ST7735_enINITFLAGS_GREEN);
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enPIN_2);
    while(1UL)
    {

        EDUMKII_Joystick_vSampleXY(&u32ADCValueX, &u32ADCValueY);

        uint32_t u32PairedDevice = GPIO__u32GetData(GPIO_enPORT_K, GPIO_enPIN_4);
        if(0UL != u32PairedDevice)
        {
            UART_nFIFO_EMPTY EnIsEmpty = UART__enIsFifoReceiveEmpty(UART_enMODULE_6);
            if(UART_enFIFO_EMPTY != EnIsEmpty)
            {
                uint32_t u32Direction = 0UL;
                UART_nFIFO_EMPTY enIsEmpty = UART__enIsFifoReceiveEmpty(UART_enMODULE_6);

                if(UART_enFIFO_EMPTY != enIsEmpty)
                {
                    uint32_t u32DataReceived = UART__u32GetData(UART_enMODULE_6);
                    if(0x55UL == u32DataReceived)
                    {

                        u64PWMValue = Math__u32Map(u32ADCValueX, 4096UL, 0UL, 180UL, 0UL);
                        pu8Command[0UL] = 0xFFUL;
                        pu8Command[1UL] = 0xFFUL;
                        pu8Command[2UL] = 0xFFUL;
                        pu8Command[3UL] = 0xFFUL;
                        pu8Command[4UL] = 0x04UL;
                        pu8Command[5UL] = 0x04UL;
                        pu8Command[6UL] = (uint8_t) u64PWMValue;
                        pu8Command[7UL] = 0xFFUL;
                        pu8Command[8UL] = 0xFFUL;
                        pu8Command[9UL] = 0xFFUL;
                        pu8Command[10UL] = 0xFFUL;
                        UART__u32SetFifoDataByte(UART_enMODULE_6, pu8Command, 11UL, 1000000UL);
                    }
                    if(0xAAUL == u32DataReceived)
                    {

                        if((u32FirstValueY + OFFSET_VALUE) <= u32ADCValueY)
                        {
                            u32Direction =1UL;
                        }
                        else if ((u32FirstValueY - OFFSET_VALUE) >= u32ADCValueY)
                        {
                            u32Direction = 2UL;
                        }
                        else
                        {
                            u32Direction = 3UL;
                        }
                        pu8Command[0UL] = 0xFFUL;
                        pu8Command[1UL] = 0xFFUL;
                        pu8Command[2UL] = 0xFFUL;
                        pu8Command[3UL] = 0xFFUL;
                        pu8Command[4UL] = 0x03UL;
                        pu8Command[5UL] = (uint8_t) u32Direction;
                        pu8Command[6UL] = 0xFFUL;
                        pu8Command[7UL] = 0xFFUL;
                        pu8Command[8UL] = 0xFFUL;
                        pu8Command[9UL] = 0xFFUL;
                        UART__u32SetFifoDataByte(UART_enMODULE_6, pu8Command, 10UL, 1000000UL);
                    }
                    if(0x22UL == u32DataReceived)
                    {

                        if(u32ADCValueY >= (u32FirstValueY + OFFSET_VALUE))
                        {
                            u64PWMValue = Math__u32Map(u32ADCValueY, 4096UL , (u32FirstValueX + OFFSET_VALUE), 100UL, 0UL);
                        }
                        else if ((u32FirstValueY - OFFSET_VALUE) >= u32ADCValueY)
                        {
                            u64PWMValue = (uint64_t) Math__s32Map((int32_t) u32ADCValueY,
                                                                  (u32FirstValueX - OFFSET_VALUE), 0, 0, 100);
                        }
                        else
                        {
                            u64PWMValue = 1UL;
                        }
                        pu8Command[0UL] = 0xFFUL;
                        pu8Command[1UL] = 0xFFUL;
                        pu8Command[2UL] = 0xFFUL;
                        pu8Command[3UL] = 0xFFUL;
                        pu8Command[4UL] = 0x03UL;
                        pu8Command[5UL] = 0x04UL;
                        pu8Command[6UL] = (uint8_t) u64PWMValue;
                        pu8Command[7UL] = 0xFFUL;
                        pu8Command[8UL] = 0xFFUL;
                        pu8Command[9UL] = 0xFFUL;
                        pu8Command[10UL] = 0xFFUL;
                        UART__u32SetFifoDataByte(UART_enMODULE_6, pu8Command, 11UL, 1000000UL);
                    }
                }
            }

        }

        if(1UL == u32ConfigurationDone)
        {
            u64PWMValue = Math__u32Map(u32ADCValueX, 4096UL, 0UL, 120UL, 0UL);
            u32CountTask = u64PWMValue;
            u32CountTask *= 157UL;
            TIMER__vClearInterruptSource(TIMER_enT4W, TIMER_enINT_TIMEOUT);
            TIMER__vEnInterruptSource(TIMER_enT4W, TIMER_enINT_TIMEOUT);
        }

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
        OS_Task__vSuspendAll();

        GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 2UL,
                             "YOYSTICK POS X: %d Y: %d            ",
                             u32ADCValueX,
                             u32ADCValueY
                             );
        OS_Task__boResumeAll();
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
