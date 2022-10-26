/**
 * main.c
 */
#include <xTask/xTask.h>

#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication/SHARP96_96/SHARP96_96.h>

#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xOS/xOS.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>

int main(void);

void NMISW(void);

void NMISW(void)
{
    MCU__vNoOperation();
}

int main(void)
{
    SYSCTL_CONFIG_t stClockConfig =
    {
        SYSCTL_enXTAL_25MHZ,
        SYSCTL_enOSC_MOSC,
        SYSCTL_enPLL,
        SYSCTL_enVCO_480MHZ,
    };
    UART_CONTROL_t enUart0Control =
    {
        UART_enEOT_ALL,
        UART_enSTATE_DIS,
        UART_enSTATE_ENA,
        UART_enSTATE_ENA,
        UART_enLINE_MODE_SOFT,
        UART_enLINE_MODE_SOFT,
        UART_enSTATE_DIS,
        UART_enSTATE_DIS,
        UART_enSTATE_DIS,
        UART_enSTATE_DIS,
    };

    UART_LINE_CONTROL_t enUart0LineControl =
    {
     UART_enSTATE_ENA,
     UART_enSTOP_ONE,
     UART_enPARITY_NONE,
     UART_enLENGTH_8BITS,
    };

    UART_LINE_t enUart0Line =
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
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDataByNumber(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enLEVEL_LOW);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDataByNumber(GPIO_enPORT_F, GPIO_enPIN_0, GPIO_enLEVEL_LOW);

    SYSCTL__enSetSystemClock(120000000UL, stClockConfig);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enEEPROM);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUDMA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOB);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOC);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOD);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOE);
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
    SYSCTL__vEnRunModePeripheral(SYSCTL_enTIMER1);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART2);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enADC0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enADC1);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enSSI0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enSSI2);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enSSI3);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enCAN0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enCAN1);
    EEPROM__enInit(EEPROM_enMODULE_0);
    DMA__enInit(DMA_enMODULE_0);
    GPIO__enInit();
    TIMER__vInit();
    ADC__enInit(ADC_enMODULE_0);
    ADC__enInit(ADC_enMODULE_1);
    UART__enInit(UART_enMODULE_0);
    SSI__enInit(SSI_enMODULE_0);
    SSI__enInit(SSI_enMODULE_2);
    SSI__enInit(SSI_enMODULE_3);
    PWM__enInit(PWM_enMODULE_0);

    FLASH_DMASZ_R = 512UL;
    FLASH_DMAST_R = 0UL;

    EDUMKII_Button_vInit(EDUMKII_enBUTTON_ALL);
    EDUMKII_Accelerometer_vInit();
    EDUMKII_Microphone_vInit();
    EDUMKII_Joystick_vInit();

    UART__enSetState(UART_enMODULE_0, UART_enSTATE_DIS);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, 921600UL, 0UL, 0UL,
                      &enUart0Control, &enUart0LineControl, &enUart0Line, 0UL);
    UART__enSetState(UART_enMODULE_0, UART_enSTATE_ENA);



    GraphTerm__vHideCursor(UART_enMODULE_0);
    GraphTerm__vSetFontColor(UART_enMODULE_0, 0xFFUL, 0UL,0UL );
    GraphTerm__vClearScreen(UART_enMODULE_0);
    GraphTerm__vSetCursorXY(UART_enMODULE_0, 0UL, 0UL);

    SYSCTL__vEnRunModePeripheral(SYSCTL_enPWM0);
    PWM_Generator__enSetPeriod_us(PWM_enMODULE_0, PWM_enGEN_0, 30000UL);
    SHARP_96_96__vInitDisplay();

    YoystickQueueHandle = OS_Queue__pvCreate(1UL, 2UL * sizeof(UBase_t));
    AccelerometerQueueHandle = OS_Queue__pvCreate(1UL, 3UL * sizeof(UBase_t));
    ButtonQueueHandle = OS_Queue__pvCreate(1UL, 3UL * sizeof(char*));
    TFTQueueSetHandle = OS_Queue__pvCreateSet(3UL);
    OS_Queue__boAddToSet(YoystickQueueHandle, TFTQueueSetHandle);
    OS_Queue__boAddToSet(AccelerometerQueueHandle, TFTQueueSetHandle);
    OS_Queue__boAddToSet(ButtonQueueHandle, TFTQueueSetHandle);
    MainSemaphoreHandle = OS_Semaphore__pvCreateBinary();
    TFTSemaphoreHandle = OS_Semaphore__pvCreateBinary();

    OS_Task_Handle_t TaskHandeler[7UL] = {0UL};
    if(OS_Task__uxCreate(&xTask8_Debug, "UART Task", 900UL, (void*) 100UL, 6UL, &TaskHandeler[3UL]))
    {
        UART__uxPrintf(UART_enMODULE_0, "Task8 Debug created correctly \n\r");
    }
    if(OS_Task__uxCreate(&xTask3_ButtonsLog, "Button Task", 400UL, (void*) 54UL, 5UL, &TaskHandeler[1UL]))
    {
        UART__uxPrintf(UART_enMODULE_0, "Task3 ButtonsLog created correctly \n\r");
    }
    if(OS_Task__uxCreate(&xTask1_AccelerometerLog, "Accelerometer Task", 400UL, (void*) 52UL, 4UL, &TaskHandeler[0UL]))
    {
        UART__uxPrintf(UART_enMODULE_0, "Task1 Accelerometer created correctly \n\r");
    }
    if(OS_Task__uxCreate(&xTask2_JoystickLog, "Joystick Task", 400UL, (void*) 50UL, 3UL, &TaskHandeler[2UL]))
    {
        UART__uxPrintf(UART_enMODULE_0, "Task2 Joystick created correctly \n\r");
    }
    if(OS_Task__uxCreate(&xTask9_TFT, "TFT Task", 900UL, (void*) 33UL, 2UL, &TaskHandeler[4UL]))
    {
        UART__uxPrintf(UART_enMODULE_0, "Task9 TFT created correctly \n\r");
    }

    OS_Task__vStartScheduler(1000UL);
    return (0UL);
}



