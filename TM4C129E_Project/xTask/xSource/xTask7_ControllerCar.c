/**
 *
 * @file xTask7_ControllerCar.c
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
 * @verbatim 20 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xTask/xHeader/xTask7_ControllerCar.h>
#include <xTask/xHeader/xSemaphores.h>

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>

#include <xUtils/Math/Math.h>

#include <xOS/xOS.h>

#define OFFSET_VALUE (100UL)

void xTask7_ControllerCar (void* pvParams)
{
    /*Period Handling*/
    uint32_t u32CurrentTime = 0UL;
    uint32_t u32NewTime = 0UL;
    uint32_t u32DiffTime = 0UL;
    uint32_t u32DiffPeriod = 0UL;
    uint32_t u32PeriodTask = (uint32_t) pvParams;


    boolean_t boSyncCorrect = FALSE;
    uint32_t u32FirstValue[2UL] = {0UL};
    uint32_t u32ADCValue[2UL] = {0UL};

    uint8_t pu8Command [100] = {0};
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

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOP);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART6);

    UART__vSetEnable(UART_enMODULE_6, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_6, UART_enMODE_NORMAL,
                      &enUart6Control, &enUart6LineControl, 921600UL, &enUart6Line );
    UART__vSetEnable(UART_enMODULE_6, UART_enENABLE_START);

    /*Status*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOK4, GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP);

    boSyncCorrect = OS_Semaphore__boTake(YoystickSemaphoreHandle, 2000UL);
    OS_Queue__boPeek(YoystickQueueHandle, u32FirstValue, 100UL);
    while(1UL)
    {
        u32CurrentTime = OS_Task__uxGetTickCount ();
        if(TRUE == boSyncCorrect)
        {
            u32NewTime = OS_Task__uxGetTickCount();
            u32DiffTime = u32NewTime;
            u32DiffTime -= u32CurrentTime;
            u32DiffPeriod = u32PeriodTask;
            u32DiffPeriod -= u32DiffTime;
            OS_Queue__boReceive(YoystickQueueHandle, u32ADCValue, u32DiffPeriod);
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

                            uint32_t u32PWMValue = Math__u32Map(u32ADCValue[0UL], 4096UL, 0UL, 180UL, 0UL);
                            pu8Command[0UL] = 0xFFUL;
                            pu8Command[1UL] = 0xFFUL;
                            pu8Command[2UL] = 0xFFUL;
                            pu8Command[3UL] = 0xFFUL;
                            pu8Command[4UL] = 0x04UL;
                            pu8Command[5UL] = 0x04UL;
                            pu8Command[6UL] = (uint8_t) u32PWMValue;
                            pu8Command[7UL] = 0xFFUL;
                            pu8Command[8UL] = 0xFFUL;
                            pu8Command[9UL] = 0xFFUL;
                            pu8Command[10UL] = 0xFFUL;
                            UART__u32SetFifoDataByte(UART_enMODULE_6, pu8Command, 11UL, 1000000UL);
                        }
                        if(0xAAUL == u32DataReceived)
                        {

                            if((u32FirstValue[1UL] + OFFSET_VALUE) <= u32ADCValue[1UL])
                            {
                                u32Direction =1UL;
                            }
                            else if ((u32FirstValue[1UL] - OFFSET_VALUE) >= u32ADCValue[1UL])
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
                            uint32_t u32PWMValue = 0UL;
                            if(u32ADCValue[1UL] >= (u32FirstValue[1UL] + OFFSET_VALUE))
                            {
                                u32PWMValue = Math__u32Map(u32ADCValue[1UL], 4096UL , (u32FirstValue[1UL] + OFFSET_VALUE), 100UL, 0UL);
                            }
                            else if ((u32FirstValue[1UL] - OFFSET_VALUE) >= u32ADCValue[1UL])
                            {
                                u32PWMValue = (uint64_t) Math__s32Map((int32_t) u32ADCValue[1UL],
                                                                      (u32FirstValue[1UL] - OFFSET_VALUE), 0, 0, 100);
                            }
                            else
                            {
                                u32PWMValue = 1UL;
                            }
                            pu8Command[0UL] = 0xFFUL;
                            pu8Command[1UL] = 0xFFUL;
                            pu8Command[2UL] = 0xFFUL;
                            pu8Command[3UL] = 0xFFUL;
                            pu8Command[4UL] = 0x03UL;
                            pu8Command[5UL] = 0x04UL;
                            pu8Command[6UL] = (uint8_t) u32PWMValue;
                            pu8Command[7UL] = 0xFFUL;
                            pu8Command[8UL] = 0xFFUL;
                            pu8Command[9UL] = 0xFFUL;
                            pu8Command[10UL] = 0xFFUL;
                            UART__u32SetFifoDataByte(UART_enMODULE_6, pu8Command, 11UL, 1000000UL);
                        }
                    }
                }
            }
        }

        u32NewTime = OS_Task__uxGetTickCount();
        u32DiffTime = u32NewTime;
        u32DiffTime -= u32CurrentTime;
        u32DiffPeriod = u32PeriodTask;
        u32DiffPeriod -= u32DiffTime;

        OS_Task__vDelayUntil(&u32NewTime, u32DiffPeriod);
    }
}



