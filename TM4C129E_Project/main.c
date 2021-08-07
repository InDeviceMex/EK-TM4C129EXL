

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

void Task1(void* pvParams)
{
    int32_t s32ADCValueX = (int32_t) pvParams;
    int32_t s32ADCValueY = (int32_t) pvParams;
    int32_t s32ADCValueZ = (int32_t) pvParams;
    while(1UL)
    {
        ADC__vSetSequencerInitConv(ADC_enMODULE_1, ADC_enSEQMASK_1);
        OS_Task__vDelay(250UL);
        s32ADCValueX = (int32_t) ADC__u32GetSampleValue(ADC_enMODULE_1, ADC_enSEQ_1);
        s32ADCValueY = (int32_t) ADC__u32GetSampleValue(ADC_enMODULE_1, ADC_enSEQ_1);
        s32ADCValueZ = (int32_t) ADC__u32GetSampleValue(ADC_enMODULE_1, ADC_enSEQ_1);
        s32ADCValueX -= 0x7FF;
        s32ADCValueY -= 0x7FF;
        s32ADCValueZ -= 0x7FF;

        OS_Task__vEnterCritical();
        UART__u32Printf(UART_enMODULE_0, "Accelerometer: \n\r\t\tX: %d Y: %d Z: %d\n\r", s32ADCValueX,s32ADCValueY,s32ADCValueZ);
        OS_Task__vExitCritical();
    }
}

void Task2(void* pvParams)
{
    uint32_t u32ADCValueX = (uint32_t) pvParams;
    uint32_t u32ADCValueY = (uint32_t) pvParams;
    while(1UL)
    {
        ADC__vSetSequencerInitConv(ADC_enMODULE_1, ADC_enSEQMASK_0);
        OS_Task__vDelay(250UL);
        u32ADCValueX = ADC__u32GetSampleValue(ADC_enMODULE_1, ADC_enSEQ_0);
        u32ADCValueY = ADC__u32GetSampleValue(ADC_enMODULE_1, ADC_enSEQ_0);

        OS_Task__vEnterCritical();
        UART__u32Printf(UART_enMODULE_0, "Yoystick: \n\r\t\tX: %d Y: %d\n\r", u32ADCValueX,u32ADCValueY);
        OS_Task__vExitCritical();
    }
}


void Task3(void* pvParams)
{
    uint32_t u32PinValue = (uint32_t) pvParams;
    uint32_t u32PinValue1 = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0UL;
    GPIO__enSetDigitalConfig(GPIO_enGPIOC6, GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOL1, GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOL2, GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPION0, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPION1, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    while(1UL)
    {
        GPIO__enGetData(GPIO_enPORT_L, (GPIO_nPIN)(GPIO_enPIN_1 | GPIO_enPIN_2), &u32PinValue);
        GPIO__enGetData(GPIO_enPORT_C, (GPIO_nPIN)(GPIO_enPIN_6), &u32PinValue1);
        u32PinValue |= u32PinValue1;
        u32PinValue ^= (GPIO_nPIN)(GPIO_enPIN_1 | GPIO_enPIN_2 | GPIO_enPIN_6);
        if(u32PinValue & (uint32_t) GPIO_enPIN_1)
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_0, GPIO_enPIN_0);
        }
        else
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_0, 0UL);
        }
        if(u32PinValue & (uint32_t) GPIO_enPIN_2)
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_1, GPIO_enPIN_1);
        }
        else
        {
            GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_1, 0UL);
        }

        if(u32PinValue & (uint32_t) GPIO_enPIN_6)
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

    ADC_SAMPLE_CONFIG_Typedef sADC1SampleConfig =
    {
     ADC_enSEQ_INPUT_9,
     ADC_enSEQ_INPUT_DIFF_DIS,
     ADC_enSEQ_INPUT_ENDED_DIS,
     ADC_enSEQ_INPUT_INT_DIS,
     ADC_enSEQ_INPUT_TEMP_DIS,
     ADC_enSEQ_INPUT_OPERATION_SAMPLE,
     ADC_enSEQ_SAMPLE_HOLD_256,
     ADC_enCOMPARATOR_0,
    };

    ADC_SAMPLE_CONFIG_Typedef sADC1SampleAccConfig =
    {
     ADC_enSEQ_INPUT_3,
     ADC_enSEQ_INPUT_DIFF_DIS,
     ADC_enSEQ_INPUT_ENDED_DIS,
     ADC_enSEQ_INPUT_INT_DIS,
     ADC_enSEQ_INPUT_TEMP_DIS,
     ADC_enSEQ_INPUT_OPERATION_SAMPLE,
     ADC_enSEQ_SAMPLE_HOLD_256,
     ADC_enCOMPARATOR_0,
    };

    SYSCTL__enSetSystemClock(120000000UL, stClockConfig);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enEEPROM);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUDMA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOG);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enTIMER0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enADC1);
    EEPROM__enInit();
    DMA__vInit();
    GPIO__vInit();
    TIMER__vInit();
    UART__vInit();
    ADC__vInit();

    ADC__vSetConversionRate(ADC_enMODULE_1, ADC_enCONVERSION_RATE_112);
    ADC__vSetVCODivisor(ADC_enMODULE_1, 480UL/32UL);
    ADC__vSetClockSource(ADC_enMODULE_1, ADC_enCLOCK_PLL_VCO);
    ADC__vSetAverage(ADC_enMODULE_1, ADC_enAVERAGE_64);

    ADC__vSetSequencerEnable(ADC_enMODULE_1,(ADC_nSEQMASK)(ADC_enSEQMASK_0 | ADC_enSEQMASK_1),ADC_enSEQ_ENABLE_DIS);
    ADC__vSetSequencerTrigger(ADC_enMODULE_1, ADC_enSEQ_0, ADC_enSEQ_TRIGGER_SOFTWARE);
    ADC__vSetSequencerTrigger(ADC_enMODULE_1, ADC_enSEQ_1, ADC_enSEQ_TRIGGER_SOFTWARE);

    ADC__enSetSampleConfigGpio(ADC_enMODULE_1, ADC_enSEQ_0, ADC_enMUX_0,&sADC1SampleConfig);
    sADC1SampleConfig.enInput = ADC_enSEQ_INPUT_0;
    sADC1SampleConfig.enEnded = ADC_enSEQ_INPUT_ENDED_ENA;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_1, ADC_enSEQ_0, ADC_enMUX_1,&sADC1SampleConfig);

    ADC__enSetSampleConfigGpio(ADC_enMODULE_1, ADC_enSEQ_1, ADC_enMUX_0,&sADC1SampleAccConfig);
    sADC1SampleAccConfig.enInput = ADC_enSEQ_INPUT_2;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_1, ADC_enSEQ_1, ADC_enMUX_1,&sADC1SampleAccConfig);
    sADC1SampleAccConfig.enInput = ADC_enSEQ_INPUT_1;
    sADC1SampleAccConfig.enEnded = ADC_enSEQ_INPUT_ENDED_ENA;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_1, ADC_enSEQ_1, ADC_enMUX_2,&sADC1SampleAccConfig);

    ADC__vSetSequencerEnable(ADC_enMODULE_1,(ADC_nSEQMASK)(ADC_enSEQMASK_0 | ADC_enSEQMASK_1),ADC_enSEQ_ENABLE_ENA);

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


