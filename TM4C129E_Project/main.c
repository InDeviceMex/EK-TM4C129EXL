

/**
 * main.c
 */
#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication/ST7735/ST7735.h>
#include <xOS/xOS.h>

#include <xUtils/DataStructure/LinkedList/LinkedList.h>
#include <xUtils/Colors/Colors.h>
#include <xUtils/Math/Math.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>

uint32_t main(void);

void Task0(void* pvParams);
void Task1(void* pvParams);
void Task2(void* pvParams);
void Task3(void* pvParams);
void Task4(void* pvParams);
void Task5(void* pvParams);
void Task6(void* pvParams);
void Led2ON(void);

void Task0(void* pvParams)
{
    int32_t s32ADCValueX = (int32_t) pvParams;
    int32_t s32ADCValueY = (int32_t) pvParams;
    int32_t s32ADCValueZ = (int32_t) pvParams;
    while(1UL)
    {

        OS_Task__vDelay(500UL);

    }
}
void Task1(void* pvParams)
{
    int32_t s32ADCValueX = (int32_t) pvParams;
    int32_t s32ADCValueY = (int32_t) pvParams;
    int32_t s32ADCValueZ = (int32_t) pvParams;
    while(1UL)
    {
        EDUMKII_Accelerometer_vSample(&s32ADCValueX, &s32ADCValueY, &s32ADCValueZ);
        OS_Task__vEnterCritical();
        UART__u32Printf(UART_enMODULE_0, "Accelerometer: \n\r\t\tX: %d Y: %d Z: %d\n\r",
                        s32ADCValueX,s32ADCValueY,s32ADCValueZ);
        OS_Task__vExitCritical();
        OS_Task__vDelay(150UL);

    }
}

void Task2(void* pvParams)
{
    uint32_t u32ADCValueX = (uint32_t) pvParams;
    uint32_t u32ADCValueY = (uint32_t) pvParams;
    uint32_t u32LcdPosXCurrent = (uint32_t) pvParams;
    uint32_t u32LcdPosYCurrent = (uint32_t) pvParams;
    uint32_t u32LcdPosX= 0UL;
    uint32_t u32LcdPosY = 0UL;
    uint32_t u32Count = 0UL;
    static uint16_t u16BufferSPI[128UL * 128UL] = {0UL};
    ST7735__vInitRModel(ST7735_enINITFLAGS_GREEN);
    while(1UL)
    {
        EDUMKII_Joystick_vSampleXY(&u32ADCValueX, &u32ADCValueY);
        u32LcdPosXCurrent = Math__u32Map(u32ADCValueX, 4096UL, 0UL, 128UL - 10UL, 10UL);
        u32LcdPosYCurrent = (uint32_t) Math__s32Map((int32_t) u32ADCValueY, 4096, 0, 10, 128 - 10);
        for(u32LcdPosX = 0UL ; u32LcdPosX < 128UL * 128UL; u32LcdPosX++)
        {
            u16BufferSPI[u32LcdPosX] = COLORS_u16Values[(u32LcdPosX + u32Count) & 0x7F];
        }
        for(u32LcdPosY = u32LcdPosYCurrent - 10UL ; u32LcdPosY < (u32LcdPosYCurrent - 10UL) + 20UL; u32LcdPosY++)
        {
            for(u32LcdPosX = u32LcdPosXCurrent - 10UL ; u32LcdPosX < ( u32LcdPosXCurrent - 10UL) + 20UL; u32LcdPosX++)
            {
                u16BufferSPI[u32LcdPosX + (u32LcdPosY * 128UL)] = (uint32_t) COLORS_enGREEN;
            }
        }
        ST7735__vDrawBuffer(0UL, 0UL, 128UL, 128UL, u16BufferSPI);
        OS_Task__vEnterCritical();
        UART__u32Printf(UART_enMODULE_0, "Yoystick: \n\r\t\tX: %d Y: %d\n\r", u32ADCValueX,u32ADCValueY);
        OS_Task__vExitCritical();
        OS_Task__vDelay(60UL);
        u32Count++;
    }
}


void Task3(void* pvParams)
{
    EDUMKII_nBUTTON enButtonSelect = EDUMKII_enBUTTON_NO;
    EDUMKII_nJOYSTICK enSelect = EDUMKII_enJOYSTICK_NOPRESS;
    static uint32_t u32CountTask = 0UL;
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
        }
        else
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_0, 0UL);
        }
        if((uint32_t) enButtonSelect & (uint32_t) EDUMKII_enBUTTON_2)
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_1, GPIO_enPIN_1);
        }
        else
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_1, 0UL);
        }

        if(EDUMKII_enJOYSTICK_PRESS == enSelect)
        {
            GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_4, GPIO_enPIN_4);
        }
        else
        {
            GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_4, 0UL);
        }

        OS_Task__vEnterCritical();
        //UART__u32Printf(UART_enMODULE_0, "Task3: Esto ha ocurrido %d veces\n\r", u32CountTask);
        OS_Task__vExitCritical();
        u32CountTask++;
        OS_Task__vDelay(75UL);
    }
}

void Task4(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOG0, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_G, GPIO_enPIN_0, u32PinValue);
        u32PinValue ^= GPIO_enPIN_0;
        OS_Task__vEnterCritical();
        //UART__u32Printf(UART_enMODULE_0, "Task4: Esto ha ocurrido %d veces\n\r", u32CountTask);
        OS_Task__vExitCritical();
        u32CountTask++;
        OS_Task__vDelay(500UL);
    }
}

void Task5(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, u32PinValue);
        u32PinValue ^= GPIO_enPIN_3;
        OS_Task__vEnterCritical();
        //UART__u32Printf(UART_enMODULE_0, "Task5: Esto ha ocurrido %d veces\n\r", u32CountTask);
        OS_Task__vExitCritical();
        u32CountTask++;
        OS_Task__vDelay(1000UL);
    }
}

void Task6(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, u32PinValue);
        u32PinValue ^= GPIO_enPIN_2;
        OS_Task__vEnterCritical();
        //UART__u32Printf(UART_enMODULE_0, "Task6: Esto ha ocurrido %d veces\n\r", u32CountTask);
        OS_Task__vExitCritical();
        u32CountTask++;
        OS_Task__vDelay(2000UL);
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
        UART_enLINE_DIS,
        UART_enLINE_DIS,
        UART_enLINE_DIS,
        UART_enLINE_DIS,
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
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
    };

    SYSCTL__enSetSystemClock(120000000UL, stClockConfig);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enEEPROM);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUDMA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOB);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOC);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOD);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOE);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOG);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOH);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOJ);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOK);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOL);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOM);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPION);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOP);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOQ);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enTIMER0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enADC0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enADC1);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enSSI2);
    EEPROM__enInit();
    DMA__vInit();
    GPIO__vInit();
    TIMER__vInit();
    ADC__vInit();
    UART__vInit();
    SSI__vInit();

    EDUMKII_Button_vInit(EDUMKII_enBUTTON_ALL);
    EDUMKII_Microphone_vInit();
    EDUMKII_Joystick_vInit();
    EDUMKII_Accelerometer_vInit();

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

    OS_Task_Handle_TypeDef TaskHandeler[5UL] = {0UL};
    OS_Task__u32TaskGenericCreate(&Task0, "Task 0", 300UL, (void*) 0UL, 3UL, &TaskHandeler[0UL]);
    OS_Task__u32TaskGenericCreate(&Task1, "Task 1", 300UL, (void*) 0UL, 2UL, &TaskHandeler[1UL]);
    OS_Task__u32TaskGenericCreate(&Task2, "Task 2", 300UL, (void*) 0UL, 2UL, &TaskHandeler[1UL]);
    OS_Task__u32TaskGenericCreate(&Task3, "Task 3", 300UL, (void*) 0UL, 1UL, &TaskHandeler[2UL]);
    OS_Task__u32TaskGenericCreate(&Task4, "Task 4", 300UL, (void*) 0UL, 3UL, &TaskHandeler[3UL]);
    OS_Task__u32TaskGenericCreate(&Task5, "Task 5", 300UL, (void*) 0UL, 4UL, &TaskHandeler[4UL]);
    OS_Task__u32TaskGenericCreate(&Task6, "Task 6", 300UL, (void*) 0UL, 5UL, &TaskHandeler[5UL]);
    OS_Task__vStartScheduler(1000UL);
    while(1UL)
    {

    }
}


