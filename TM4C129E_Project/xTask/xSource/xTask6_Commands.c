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
    uint8_t pu8Datareceived [100] = {0};
    uint8_t u8DatareceivedSize = 0U;
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
    u32LastWakeTime = OS_Task__uxGetTickCount();

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOP);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART6);

    UART__vSetEnable(UART_enMODULE_6, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_6, UART_enMODE_NORMAL,
                      &enUart6Control, &enUart6LineControl, 9600UL, &enUart6Line );
    UART__vSetEnable(UART_enMODULE_6, UART_enENABLE_START);

    while(1UL)
    {

        UART__u32Printf(UART_enMODULE_6, "%c", 0x34);
        OS_Task__vSuspendAll();
        GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 5UL,
                             "Waiting For Data:\n\r"
                             );
        uint32_t u32Received = 0UL;
        u32Received = UART__u32ReceiveRaw(UART_enMODULE_6, &u8DatareceivedSize, 1UL, 10000UL);
        OS_Task__boResumeAll();
        if( u32Received != 0UL)
        {

            OS_Task__vSuspendAll();
            UART__u32ReceiveRaw(UART_enMODULE_6, pu8Datareceived, (uint32_t) u8DatareceivedSize, 10000UL);

            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 6UL,
                                 "Data Received: "
                                 );
            UART__vSendRaw(UART_enMODULE_0, pu8Datareceived,  (uint32_t) u8DatareceivedSize, 10000UL);
            OS_Task__boResumeAll();
        }
        OS_Task__vDelayUntil(&u32LastWakeTime, 1000UL);
    }

}



