

/**
 * main.c
 */
#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xOS/xOS.h>

#include <xUtils/DataStructure/LinkedList/LinkedList.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>

uint32_t main(void);

void Task1(void* pvParams);
void Task2(void* pvParams);
void Task3(void* pvParams);
void Task4(void* pvParams);
void Task5(void* pvParams);
void Task6(void* pvParams);
void Led2ON(void);

volatile uint32_t uartState= 0;

void Task1(void* pvParams)
{
    while(1UL)
    {
    }
}

void Task2(void* pvParams)
{
    while(1UL)
    {
    }
}

void Task3(void* pvParams)
{
    while(1UL)
    {
    }
}

void Task4(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    GPIO__enSetDigitalConfig(GPIO_enGPIOG0, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_G, GPIO_enPIN_0, u32PinValue);
        u32PinValue ^= GPIO_enPIN_0;
        UART__u32SetFifoDataByte(UART_enMODULE_0,(const uint8_t*)"TASK4 \n\r", 8UL);
        OS_Task__vDelay(5UL);
    }
}

void Task5(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, u32PinValue);
        u32PinValue ^= GPIO_enPIN_3;
        UART__u32SetFifoDataByte(UART_enMODULE_0,(const uint8_t*)"TASK5 \n\r", 8UL);
        OS_Task__vDelay(50UL);
    }
}

void Task6(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, u32PinValue);
        u32PinValue ^= GPIO_enPIN_2;
        UART__u32SetFifoDataByte(UART_enMODULE_0,(const uint8_t*)"TASK6 \n\r", 8UL);
        OS_Task__vDelay(500UL);
    }
}

void Led2ON(void)
{
    /*
    static uint32_t u32PinValue = (uint32_t) GPIO_enPIN_2;
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, u32PinValue);
    u32PinValue ^= (uint32_t) GPIO_enPIN_2;
    */
}

uint8_t pu8DMASourceBuffer[100UL] = {0UL};
uint8_t pu8DMADestBuffer[100UL] = {0UL};

uint32_t main(void)
{
    volatile TIMER_nEVENT enEvent = TIMER_enEVENT_ALL;
    SYSCTL_CONFIG_TypeDef stClockConfig =
    {
        SYSCTL_enXTAL_25MHZ,
        SYSCTL_enOSC_MOSC,
        SYSCTL_enPLL,
        SYSCTL_enVCO_480MHZ,
    };
    UART_CONTROL_TypeDef enUart0Control =
    {
        UART_enEOT_ALL,
        UART_enLOOPBACK_DIS,
        UART_enLINE_ENA,
        UART_enLINE_ENA,
        UART_enRTS_MODE_SOFT,
        UART_enCTS_MODE_SOFT,
    };

    UART_LINE_CONTROL_TypeDef enUart0LineControl =
    {
     UART_enFIFO_ENA,
     UART_enSTOP_ONE,
     UART_enPARITY_DIS,
     UART_enPARITY_TYPE_EVEN,
     UART_enPARITY_STICK_DIS ,
     UART_enLENGTH_8BITS,
    };

    UART_LINE_TypeDef enUart0Line =
    {
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
    };

    CDLinkedList_TypeDef stListMaster ={0UL};
    CDLinkedList_TypeDef stListMaster2 ={0UL};

    CDLinkedListItem_TypeDef stListMasterItems[10UL] ={0UL};
    uint32_t u32Value[10UL] = {0UL};

    SYSCTL__enSetSystemClock(120000000UL, stClockConfig);
    EEPROM__enInit();
    DMA__vInit();
    GPIO__vInit();
    TIMER__vInit();
    UART__vInit();

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOG);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enTIMER0);


    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, &enUart0Control, &enUart0LineControl, 115200UL, &enUart0Line );
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_START);

    TIMER__vRegisterIRQSourceHandler(&Led2ON, TIMER_enT0W, TIMER_enINTERRUPT_TIMEOUT);
    TIMER__vSetClockSource(TIMER_enT0W, TIMER_enCLOCK_SYSCLK);
    TIMER__vEnInterruptVector(TIMER_enT0W, TIMER_enPRI6);
    TIMER__vEnInterruptSource(TIMER_enT0W, TIMER_enINT_TIMEOUT);
    TIMER__vSetStall(TIMER_enT0W, TIMER_enSTALL_FREEZE);
    TIMER__enSetMode_ReloadMatch(TIMER_enT0W, TIMER_enMODE_PERIODIC_WIDE_DOWN, 30000000UL - 1UL, 0UL);
    TIMER__vSetEnable(TIMER_enT0W, TIMER_enENABLE_START);

    CDLinkedList_Item__vSetValue(&stListMasterItems[0UL], 0UL);
    CDLinkedList_Item__vSetValue(&stListMasterItems[1UL], 10UL);
    CDLinkedList_Item__vSetValue(&stListMasterItems[2UL], 20UL);
    CDLinkedList_Item__vSetValue(&stListMasterItems[3UL], 30UL);
    CDLinkedList_Item__vSetValue(&stListMasterItems[4UL], 40UL);
    CDLinkedList_Item__vSetValue(&stListMasterItems[5UL], 50UL);
    CDLinkedList_Item__vSetValue(&stListMasterItems[6UL], 50UL);
    CDLinkedList_Item__vSetValue(&stListMasterItems[7UL], 70UL);
    CDLinkedList_Item__vSetValue(&stListMasterItems[8UL], 80UL);
    CDLinkedList_Item__vSetValue(&stListMasterItems[9UL], 90UL);

    CDLinkedList__enInsertNextLastItemRead(&stListMaster, &stListMasterItems[7UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertNextLastItemRead(&stListMaster, &stListMasterItems[8UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertNextLastItemRead(&stListMaster, &stListMasterItems[5UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertInDescendingOrderByValue(&stListMaster, &stListMasterItems[5UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertInDescendingOrderByValue(&stListMaster, &stListMasterItems[4UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertInDescendingOrderByValue(&stListMaster, &stListMasterItems[3UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertInDescendingOrderByValue(&stListMaster, &stListMasterItems[1UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertInDescendingOrderByValue(&stListMaster, &stListMasterItems[2UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertInDescendingOrderByValue(&stListMaster, &stListMasterItems[6UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertInDescendingOrderByValue(&stListMaster, &stListMasterItems[9UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);
    CDLinkedList__enInsertInDescendingOrderByValue(&stListMaster, &stListMasterItems[0UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster, u32Value, 10UL);

    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[7UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);
    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[8UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);
    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[5UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);
    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[4UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);
    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[3UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);
    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[1UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);
    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[2UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);
    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[6UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);
    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[9UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);
    CDLinkedList__enInsertInAscendingOrderByValue(&stListMaster2, &stListMasterItems[0UL]);
    CDLinkedList__u32GetAllItem_Value(&stListMaster2, u32Value, 10UL);

    OS_Task_Handle_TypeDef TaskHandeler[5UL] = {0UL};
    OS_Task__u32TaskGenericCreate(&Task1, "Task 1", 300UL, (void*) 0UL, 1UL, &TaskHandeler[0UL]);
    OS_Task__u32TaskGenericCreate(&Task3, "Task 3", 300UL, (void*) 0UL, 2UL, &TaskHandeler[1UL]);
    OS_Task__u32TaskGenericCreate(&Task4, "Task 4", 300UL, (void*) 0UL, 3UL, &TaskHandeler[2UL]);
    OS_Task__u32TaskGenericCreate(&Task5, "Task 5", 300UL, (void*) 0UL, 4UL, &TaskHandeler[3UL]);
    OS_Task__u32TaskGenericCreate(&Task6, "Task 6", 300UL, (void*) 0UL, 5UL, &TaskHandeler[4UL]);

    OS_Adapt__u32StartScheduler(1000UL);
    while(1UL)
    {

    }
}


