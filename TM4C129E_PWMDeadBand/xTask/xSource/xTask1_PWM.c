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
#include <xTask/xHeader/xSemaphores.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xUtils/Math/Math.h>
#include <xUtils/Conversion/Conversion.h>
#include <xOS/xOS.h>
#include <xTask/xHeader/xTask1_PWM.h>
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

boolean_t TASK__boExecuteCommand(UBase_t uxCommand, const char* pcParameter);
void TASK__enSendWelcomeScreen(void);
void TASK__enSendHelp(void);

#define COMMAND_LENGTH (400UL)
char TASK_cString[COMMAND_LENGTH] = {0};
char* TASK_pcString = TASK_cString;

#define TASK_COMMANDS (18u)
char* TASK_cPwm0State="STATE0";
char* TASK_cPwm0Frequency="FREQ0";
char* TASK_cPwm0DeadBand="DEADBAND0";
char* TASK_cPwm0PulseWidth="WIDTH0";

char* TASK_cPwm1State="STATE1";
char* TASK_cPwm1Frequency="FREQ1";
char* TASK_cPwm1DeadBand="DEADBAND1";
char* TASK_cPwm1PulseWidth="WIDTH1";

char* TASK_cPwm2State="STATE2";
char* TASK_cPwm2Frequency="FREQ2";
char* TASK_cPwm2DeadBand="DEADBAND2";
char* TASK_cPwm2PulseWidth="WIDTH2";

char* TASK_cPwm3State="STATE3";
char* TASK_cPwm3Frequency="FREQ3";
char* TASK_cPwm3DeadBand="DEADBAND3";
char* TASK_cPwm3PulseWidth="WIDTH3";

char* TASK_cReset="RESET";
char* TASK_cHelp="HELP";

#define COMMAND_PWM0 (0U)
#define COMMAND_PWM1 (1U)
#define COMMAND_PWM2 (2U)
#define COMMAND_PWM3 (3U)

#define COMMAND_STATE (0U)
#define COMMAND_FREQUENCY (1U)
#define COMMAND_DEADBAND (2U)
#define COMMAND_PULSEWIDTH (3U)

UBase_t TASK_puxPulseWidth[4UL];
UBase_t TASK_puxFrequency[4UL];
float32_t TASK_pf32DeadBand[4UL];
UBase_t TASK_puxState[4UL];

char** TASK_pcCommands[TASK_COMMANDS]=
{
    &TASK_cPwm0State,
    &TASK_cPwm1State,
    &TASK_cPwm2State,
    &TASK_cPwm3State,

    &TASK_cPwm0Frequency,
    &TASK_cPwm1Frequency,
    &TASK_cPwm2Frequency,
    &TASK_cPwm3Frequency,

    &TASK_cPwm0DeadBand,
    &TASK_cPwm1DeadBand,
    &TASK_cPwm2DeadBand,
    &TASK_cPwm3DeadBand,

    &TASK_cPwm0PulseWidth,
    &TASK_cPwm1PulseWidth,
    &TASK_cPwm2PulseWidth,
    &TASK_cPwm3PulseWidth,

    &TASK_cReset,
    &TASK_cHelp,
};

void xTask1_PWM(void* pvParams)
{
    /*Period Handling*/
    UBase_t uxLastWakeTime;
    UBase_t uxPeriodTask = (UBase_t) pvParams;
    UART_CONTROL_t enUart0Control =
    {
        UART_enEOT_ALL,
        UART_enSTATE_DIS,
        UART_enSTATE_ENA,
        UART_enSTATE_ENA,
        UART_enSTATE_ENA,
        UART_enLINE_MODE_SOFT,
        UART_enLINE_MODE_SOFT,
        UART_enSTATE_DIS,
        UART_enSTATE_DIS,
        UART_enSTATE_DIS,
        UART_enSTATE_DIS,
        UART_enLEVEL_LOW,
        UART_enLEVEL_LOW,
        UART_enLEVEL_LOW,
    };

    UART_LINE_CONTROL_t enUart0LineControl =
    {
     UART_enSTATE_ENA,
     UART_enSTOP_ONE,
     UART_enPARITY_NONE,
     UART_enLENGTH_8BITS,
     UART_enFIFO_LEVEL_13_16,
     UART_enFIFO_LEVEL_13_16,
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
    boolean_t boCommandFound;
    UBase_t uxCount;
    error_t enErrorValue;
    float32_t f32Temp;
    UBase_t uxTemp;

    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPIOA);
    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPIOF);
    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPIOG);
    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPIOK);
    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enPWM0);

    GPIO__enSetDigitalConfig(GPIO_enM0PWM0_F0, GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM1_F1, GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM2_F2, GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM3_F3, GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM4_G0, GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM5_G1, GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM6_K4, GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM7_K5, GPIO_enCONFIG_OUTPUT_10MA_PUSHPULL_PULLUP);


    GPIO__enInit();
    UART__enInit(UART_enMODULE_0);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, 115200UL, 0UL, 0UL,
                      &enUart0Control, &enUart0LineControl, &enUart0Line, 0UL);

    TASK__enSendWelcomeScreen();


    PWM__enInit(PWM_enMODULE_0);

    PWM__enSetClockSource(PWM_enMODULE_0, PWM_enCLOCK_SYSCLK);
    PWM0_GEN0_CTL_R = 0UL;
    PWM0_GEN1_CTL_R = 0UL;
    PWM0_GEN2_CTL_R = 0UL;
    PWM0_GEN3_CTL_R = 0UL;
    TASK_puxFrequency[COMMAND_PWM0] = 12000UL;
    TASK_puxPulseWidth[COMMAND_PWM0] = 50UL;
    TASK_pf32DeadBand[COMMAND_PWM0] = 3.0f;
    TASK_puxState[COMMAND_PWM0] = 0UL;

    TASK_puxFrequency[COMMAND_PWM1] = 12000UL;
    TASK_puxPulseWidth[COMMAND_PWM1] = 50UL;
    TASK_pf32DeadBand[COMMAND_PWM1] = 3.0f;
    TASK_puxState[COMMAND_PWM1] = 0UL;

    TASK_puxFrequency[COMMAND_PWM2] = 12000UL;
    TASK_puxPulseWidth[COMMAND_PWM2] = 50UL;
    TASK_pf32DeadBand[COMMAND_PWM2] = 3.0f;
    TASK_puxState[COMMAND_PWM2] = 0UL;

    TASK_puxFrequency[COMMAND_PWM3] = 12000UL;
    TASK_puxPulseWidth[COMMAND_PWM3] = 50UL;
    TASK_pf32DeadBand[COMMAND_PWM3] = 3.0f;
    TASK_puxState[COMMAND_PWM3] = 0UL;

    PWM0_GEN0_LOAD_R = TASK_puxFrequency[COMMAND_PWM0];
    PWM0_GEN0_OUTA_CMP_R = TASK_puxFrequency[COMMAND_PWM0] * TASK_puxPulseWidth[COMMAND_PWM0] / 100UL;
    PWM0_GEN1_LOAD_R = TASK_puxFrequency[COMMAND_PWM1];
    PWM0_GEN1_OUTA_CMP_R = TASK_puxFrequency[COMMAND_PWM1] * TASK_puxPulseWidth[COMMAND_PWM1] / 100UL;
    PWM0_GEN2_LOAD_R = TASK_puxFrequency[COMMAND_PWM2];
    PWM0_GEN2_OUTA_CMP_R = TASK_puxFrequency[COMMAND_PWM2] * TASK_puxPulseWidth[COMMAND_PWM2] / 100UL;
    PWM0_GEN3_LOAD_R = TASK_puxFrequency[COMMAND_PWM3];
    PWM0_GEN3_OUTA_CMP_R = TASK_puxFrequency[COMMAND_PWM3] * TASK_puxPulseWidth[COMMAND_PWM3] / 100UL;

    PWM0_OUTPUT_ENUPD->GEN0_OUTA = 2UL;
    PWM0_OUTPUT_ENUPD->GEN0_OUTB = 2UL;
    PWM0_OUTPUT_INVERT->GEN0_OUTA = 0UL;
    PWM0_OUTPUT_INVERT->GEN0_OUTB = 0UL;
    PWM0_OUTPUT_ENABLE->GEN0_OUTA = TASK_puxState[COMMAND_PWM0];
    PWM0_OUTPUT_ENABLE->GEN0_OUTB = TASK_puxState[COMMAND_PWM0];

    PWM0_OUTPUT_ENUPD->GEN1_OUTA = 2UL;
    PWM0_OUTPUT_ENUPD->GEN1_OUTB = 2UL;
    PWM0_OUTPUT_INVERT->GEN1_OUTA = 0UL;
    PWM0_OUTPUT_INVERT->GEN1_OUTB = 0UL;
    PWM0_OUTPUT_ENABLE->GEN1_OUTA = TASK_puxState[COMMAND_PWM1];
    PWM0_OUTPUT_ENABLE->GEN1_OUTB = TASK_puxState[COMMAND_PWM1];

    PWM0_OUTPUT_ENUPD->GEN2_OUTA = 2UL;
    PWM0_OUTPUT_ENUPD->GEN2_OUTB = 2UL;
    PWM0_OUTPUT_INVERT->GEN2_OUTA = 0UL;
    PWM0_OUTPUT_INVERT->GEN2_OUTB = 0UL;
    PWM0_OUTPUT_ENABLE->GEN2_OUTA = TASK_puxState[COMMAND_PWM2];
    PWM0_OUTPUT_ENABLE->GEN2_OUTB = TASK_puxState[COMMAND_PWM2];

    PWM0_OUTPUT_ENUPD->GEN3_OUTA = 2UL;
    PWM0_OUTPUT_ENUPD->GEN3_OUTB = 2UL;
    PWM0_OUTPUT_INVERT->GEN3_OUTA = 0UL;
    PWM0_OUTPUT_INVERT->GEN3_OUTB = 0UL;
    PWM0_OUTPUT_ENABLE->GEN3_OUTA = TASK_puxState[COMMAND_PWM3];
    PWM0_OUTPUT_ENABLE->GEN3_OUTB = TASK_puxState[COMMAND_PWM3];



    PWM0_GEN0_OUTA_ACTION->ZERO = 0UL;
    PWM0_GEN0_OUTA_ACTION->LOAD = 2UL;
    PWM0_GEN0_OUTA_ACTION->OUTA_CMP_UP = 0UL;
    PWM0_GEN0_OUTA_ACTION->OUTA_CMP_DOWN = 3UL;
    PWM0_GEN0_OUTA_ACTION->OUTB_CMP_UP = 0UL;
    PWM0_GEN0_OUTA_ACTION->OUTB_CMP_DOWN = 0UL;

    PWM0_GEN1_OUTA_ACTION->ZERO = 0UL;
    PWM0_GEN1_OUTA_ACTION->LOAD = 2UL;
    PWM0_GEN1_OUTA_ACTION->OUTA_CMP_UP = 0UL;
    PWM0_GEN1_OUTA_ACTION->OUTA_CMP_DOWN = 3UL;
    PWM0_GEN1_OUTA_ACTION->OUTB_CMP_UP = 0UL;
    PWM0_GEN1_OUTA_ACTION->OUTB_CMP_DOWN = 0UL;

    PWM0_GEN2_OUTA_ACTION->ZERO = 0UL;
    PWM0_GEN2_OUTA_ACTION->LOAD = 2UL;
    PWM0_GEN2_OUTA_ACTION->OUTA_CMP_UP = 0UL;
    PWM0_GEN2_OUTA_ACTION->OUTA_CMP_DOWN = 3UL;
    PWM0_GEN2_OUTA_ACTION->OUTB_CMP_UP = 0UL;
    PWM0_GEN2_OUTA_ACTION->OUTB_CMP_DOWN = 0UL;

    PWM0_GEN3_OUTA_ACTION->ZERO = 0UL;
    PWM0_GEN3_OUTA_ACTION->LOAD = 2UL;
    PWM0_GEN3_OUTA_ACTION->OUTA_CMP_UP = 0UL;
    PWM0_GEN3_OUTA_ACTION->OUTA_CMP_DOWN = 3UL;
    PWM0_GEN3_OUTA_ACTION->OUTB_CMP_UP = 0UL;
    PWM0_GEN3_OUTA_ACTION->OUTB_CMP_DOWN = 0UL;

    PWM0_GEN0_DB_CTL->ENABLE = TASK_puxState[COMMAND_PWM0];
    PWM0_GEN1_DB_CTL->ENABLE = TASK_puxState[COMMAND_PWM1];
    PWM0_GEN2_DB_CTL->ENABLE = TASK_puxState[COMMAND_PWM2];
    PWM0_GEN3_DB_CTL->ENABLE = TASK_puxState[COMMAND_PWM3];

    f32Temp = TASK_pf32DeadBand[COMMAND_PWM3];
    f32Temp *= 120.0f;

    uxTemp = (UBase_t) f32Temp;

    PWM0_GEN0_DB_FALL_R = uxTemp;
    PWM0_GEN0_DB_RISE_R = uxTemp;

    PWM0_GEN1_DB_FALL_R = uxTemp;
    PWM0_GEN1_DB_RISE_R = uxTemp;

    PWM0_GEN2_DB_FALL_R = uxTemp;
    PWM0_GEN2_DB_RISE_R = uxTemp;

    PWM0_GEN3_DB_FALL_R = uxTemp;
    PWM0_GEN3_DB_RISE_R = uxTemp;

    PWM0_GEN0_CTL->DB_FALL_UPD = 2UL;
    PWM0_GEN0_CTL->DB_RISE_UPD = 2UL;
    PWM0_GEN0_CTL->DB_CTL_UPD = 2UL;
    PWM0_GEN0_CTL->OUTB_CMP_UPD = 0UL;
    PWM0_GEN0_CTL->OUTA_CMP_UPD = 0UL;
    PWM0_GEN0_CTL->OUTB_ACTION_UPD = 2UL;
    PWM0_GEN0_CTL->OUTA_ACTION_UPD = 2UL;
    PWM0_GEN0_CTL->LOAD_UPD = 0UL;
    PWM0_GEN0_CTL->DEBUG = 1UL;
    PWM0_GEN0_CTL->MODE = 0UL;
    PWM0_GEN0_CTL->ENABLE = 1UL;

    PWM0_GEN1_CTL->DB_FALL_UPD = 2UL;
    PWM0_GEN1_CTL->DB_RISE_UPD = 2UL;
    PWM0_GEN1_CTL->DB_CTL_UPD = 2UL;
    PWM0_GEN1_CTL->OUTB_CMP_UPD = 0UL;
    PWM0_GEN1_CTL->OUTA_CMP_UPD = 0UL;
    PWM0_GEN1_CTL->OUTB_ACTION_UPD = 2UL;
    PWM0_GEN1_CTL->OUTA_ACTION_UPD = 2UL;
    PWM0_GEN1_CTL->LOAD_UPD = 0UL;
    PWM0_GEN1_CTL->DEBUG = 1UL;
    PWM0_GEN1_CTL->MODE = 0UL;
    PWM0_GEN1_CTL->ENABLE = 1UL;

    PWM0_GEN2_CTL->DB_FALL_UPD = 2UL;
    PWM0_GEN2_CTL->DB_RISE_UPD = 2UL;
    PWM0_GEN2_CTL->DB_CTL_UPD = 2UL;
    PWM0_GEN2_CTL->OUTB_CMP_UPD = 0UL;
    PWM0_GEN2_CTL->OUTA_CMP_UPD = 0UL;
    PWM0_GEN2_CTL->OUTB_ACTION_UPD = 2UL;
    PWM0_GEN2_CTL->OUTA_ACTION_UPD = 2UL;
    PWM0_GEN2_CTL->LOAD_UPD = 0UL;
    PWM0_GEN2_CTL->DEBUG = 1UL;
    PWM0_GEN2_CTL->MODE = 0UL;
    PWM0_GEN2_CTL->ENABLE = 1UL;

    PWM0_GEN3_CTL->DB_FALL_UPD = 2UL;
    PWM0_GEN3_CTL->DB_RISE_UPD = 2UL;
    PWM0_GEN3_CTL->DB_CTL_UPD = 2UL;
    PWM0_GEN3_CTL->OUTB_CMP_UPD = 0UL;
    PWM0_GEN3_CTL->OUTA_CMP_UPD = 0UL;
    PWM0_GEN3_CTL->OUTB_ACTION_UPD = 2UL;
    PWM0_GEN3_CTL->OUTA_ACTION_UPD = 2UL;
    PWM0_GEN3_CTL->LOAD_UPD = 0UL;
    PWM0_GEN3_CTL->DEBUG = 1UL;
    PWM0_GEN3_CTL->MODE = 0UL;
    PWM0_GEN3_CTL->ENABLE = 1U;

    boCommandFound = FALSE;
    uxCount = 0UL;
    TASK_pcString = TASK_cString;
    uxLastWakeTime = OS_Task__uxGetTickCount ();
    while(1UL)
    {
        enErrorValue = (error_t) UART__enGetDataByte(UART_enMODULE_0, (uint8_t*) TASK_pcString);
        if(ERROR_OK == enErrorValue)
        {
            if((*(TASK_pcString - 1UL) == '\r') && (*(TASK_pcString) == '\n') && (TASK_pcString > (TASK_cString + 1UL)))
            {

                UBase_t uxCommandCount;
                char* pcDivisorString = 0;
                char* pcCommandString = 0;
                char* pcParameterString = 0;

                uxCount = 3UL;
                *TASK_pcString = 0;
                *(TASK_pcString - 1UL) = 0;

                pcDivisorString = strchr(TASK_cString, ' ');
                if(0UL != (uintptr_t) pcDivisorString)
                {
                    if(*(pcDivisorString + 1UL) != 0)
                    {
                        pcParameterString = pcDivisorString + 1UL;
                    }
                    *pcDivisorString = 0UL;
                }
                pcCommandString = TASK_cString;
                boCommandFound = FALSE;
                for(uxCommandCount = 0UL; uxCommandCount < TASK_COMMANDS; uxCommandCount++)
                {
                    if(0 == strcmp(pcCommandString, *TASK_pcCommands[uxCommandCount]))
                    {
                        //MAIN__vExecuteCommand(u8CommandCount);
                        boCommandFound = TRUE;
                        break;
                    }
                }
                if(TRUE == boCommandFound)
                {
                    UART__uxPrintf(UART_enMODULE_0,"\r\n    Command:   %s -> OK", pcCommandString);
                    if(uxCommandCount < (TASK_COMMANDS - 2))
                    {
                        if(0UL != (uintptr_t) pcParameterString)
                        {
                            boolean_t boResult;
                            boResult = TASK__boExecuteCommand(uxCommandCount, pcParameterString);
                            if(TRUE == boResult)
                            {
                                UART__uxPrintf(UART_enMODULE_0,"\r\n    Parameter: %s -> OK", pcParameterString);
                                UART__uxPrintf(UART_enMODULE_0,"\r\nDONE");
                            }
                            else
                            {
                                UART__uxPrintf(UART_enMODULE_0,"\r\n    Parameter: %s -> INVALID", pcParameterString);
                                UART__uxPrintf(UART_enMODULE_0,"\r\nERROR");
                            }
                        }
                        else
                        {
                            UART__uxPrintf(UART_enMODULE_0,"\r\n    Parameter: [EMPTY] -> INVALID");
                            UART__uxPrintf(UART_enMODULE_0,"\r\nERROR");
                        }
                    }
                    else
                    {
                        if(0UL != (uintptr_t) pcParameterString)
                        {
                            UART__uxPrintf(UART_enMODULE_0,"\r\n    Parameter: %s -> INVALID", pcParameterString);
                            UART__uxPrintf(UART_enMODULE_0,"\r\nERROR");
                        }
                        else
                        {
                            if(uxCommandCount == TASK_COMMANDS - 1UL)
                            {
                                TASK__enSendHelp();
                            }
                            if(uxCommandCount == TASK_COMMANDS - 2UL)
                            {
                                OS_Task__vDelay(100U);
                                SCB__enRequestSystemReset(SCB_enMODULE_0);
                            }
                        }
                    }
                }
                else
                {
                    UART__uxPrintf(UART_enMODULE_0,"\r\n    Command:   %s -> INVALID", pcCommandString);
                    UART__uxPrintf(UART_enMODULE_0,"\r\nERROR");
                }
                UART__uxPrintf(UART_enMODULE_0,"\r\n>", pcParameterString);

                TASK_pcString = TASK_cString;
                *TASK_pcString = 0;

            }
            else if((*(TASK_pcString - 1UL) == '\r') && (*(TASK_pcString) == '\n') && (TASK_pcString > TASK_cString))
            {
                *TASK_pcString = 0;
                *(TASK_pcString - 1UL) = 0;
                TASK_pcString = TASK_cString;
                *TASK_pcString = 0;

            }
            else if((*(TASK_pcString) == '\r') || (*(TASK_pcString) == '\n'))
            {
                if(TASK_pcString < &TASK_cString[99UL])
                {
                    TASK_pcString++;
                }
            }
            else if(*(TASK_pcString) == '>')
            {
                uxCount = 3UL;
                enErrorValue = (error_t) UART__enSetFifoDataByte(UART_enMODULE_0, (uint8_t*) "\r\n>", &uxCount);
                *TASK_pcString = 0;


                boCommandFound = FALSE;
                TASK_pcString = TASK_cString;
                *TASK_pcString = 0;

            }
            else if(*(TASK_pcString) == '\b')
            {
                if(TASK_pcString > TASK_cString)
                {

                    *TASK_pcString = 0;
                    TASK_pcString--;
                    *TASK_pcString = 0;
                    uxCount = 3UL;
                    enErrorValue = (error_t) UART__enSetFifoDataByte(UART_enMODULE_0, (uint8_t*) "\b \b", &uxCount);
                }
            }
            else if(((*(TASK_pcString) >= 'A') && (*(TASK_pcString) <= 'Z')) ||
                    ((*(TASK_pcString) >= 'a') && (*(TASK_pcString) <= 'z')) ||
                    ((*(TASK_pcString) >= '0') && (*(TASK_pcString) <= '9')) ||
                    (*(TASK_pcString) == ' ')  ||
                    (*(TASK_pcString) == '_')  ||
                    (*(TASK_pcString) == '.') )
            {


                if(TASK_pcString < &TASK_cString[COMMAND_LENGTH - 1UL])
                {
                    enErrorValue = (error_t) UART__enSetDataByte(UART_enMODULE_0, *TASK_pcString);
                    if((*(TASK_pcString) >= 'a') && (*(TASK_pcString) <= 'z'))
                    {
                        *(TASK_pcString) -= 'a';
                        *(TASK_pcString) += 'A';
                    }
                    TASK_pcString++;
                }
            }
        }
        /*OS_Task__vDelayUntil(&uxLastWakeTime, uxPeriodTask);*/
    }
}


void TASK__enSendWelcomeScreen(void)
{
    UART__uxPrintf(UART_enMODULE_0,
                   "Generator 0:              Generator 1:                 \r\n"
                   "           PWM_H Pin: PF0             PWM_H Pin: PF2   \r\n"
                   "           PWM_L Pin: PF1             PWM_L Pin: PF3   \r\n"
                   "Generator 2:              Generator 3:                 \r\n"
                   "           PWM_H Pin: PG0             PWM_H Pin: PK4   \r\n"
                   "           PWM_L Pin: PG1             PWM_L Pin: PK5   \r\n"
                   "\r\n"
                   "Commands structure:                                    \r\n"
                   "Please Configure [ENTER] as CR+LF (\\r\\n)             \r\n"
                   "Write a command and send it with [ENTER]               \r\n"
                   "If a command requires a parameter please add an [SPACE]\r\n"
                   "between the command and the parameter.                 \r\n"
                   "\r\n");
    UART__uxPrintf(UART_enMODULE_0,
                   "All the channels have the following default settings:  \r\n"
                   "State    [0 - 3] [  ON ,    OFF]:   OFF                \r\n"
                   "Frequency[0 - 3] [2000 - 120000]: 10000 Hz             \r\n"
                   "Deadband [0 - 3] [ 0.0 -  34.0]:   3.0 us              \r\n"
                   "Width    [0 - 3] [   1 -    100]:50 %% (minus deadband) \r\n"
                   "\r\n"
                   "Command examples:\r\n"
                   "        To Configure a Generator 0 with 3KHz frequency,\r\n"
                   "        1.5us of deadtime and 30%% duty cycle.\r\n"
                   "freq0 3000\r\n"
                   "deadband0 1.5\r\n"
                   "width0 30\r\n"
                   "state0 on\r\n"
                   "START\r\n"
                   "\r\n>");
}




void TASK__enSendHelp(void)
{
    UART__uxPrintf(UART_enMODULE_0,
                   "\r\n"
                   "Generator 0:              Generator 1:                 \r\n"
                   "           PWM_H Pin: PF0             PWM_H Pin: PF2   \r\n"
                   "           PWM_L Pin: PF1             PWM_L Pin: PF3   \r\n"
                   "Generator 2:              Generator 3:                 \r\n"
                   "           PWM_H Pin: PG0             PWM_H Pin: PK4   \r\n"
                   "           PWM_L Pin: PG1             PWM_L Pin: PK5   \r\n"
                   "Commands structure:                                    \r\n"
                   "     [Command][generator number][space][parameter]     \r\n");
    UART__uxPrintf(UART_enMODULE_0,
                   "Command Help [help]:                          \r\n"
                   "       This command shows this section.     \r\n"
                   "            help                         \r\n"
                   "       Example:            \r\n"
                   "             help                             \r\n");
    UART__uxPrintf(UART_enMODULE_0,
                   "Command Reset [reset]:                          \r\n"
                   "       This command resets the device.     \r\n"
                   "            reset                         \r\n"
                   "       Example:            \r\n"
                   "             reset                             \r\n");
    UART__uxPrintf(UART_enMODULE_0,
                   "Command Set State [state]:                          \r\n"
                   "       This command enables the generator function.     \r\n"
                   "            state[generator][space][OFF , ON]          \r\n"
                   "       Example, set disable Generator 0:            \r\n"
                   "            **************                               \r\n"
                   "            * state0 off *                               \r\n"
                   "            **************                             \r\n");
    UART__uxPrintf(UART_enMODULE_0,
                   "Command Set Frequency [freq]:                          \r\n"
                   "       This command changes the frequency of the        \r\n"
                   "       complementary outputs on a specific Generator.  \r\n"
                   "       The minimum frequency is 2000 Hz and the maximum\r\n"
                   "       is 120000 Hz.                                   \r\n"
                   "            freq[generator][space][2000 - 120000]      \r\n"
                   "       Example, set Generator 0 to 3000 Hz:            \r\n"
                   "            **************                              \r\n"
                   "            * freq0 3000 *                               \r\n"
                   "            **************                             \r\n"
                   " ________          ________          ________\r\n"
                   "|        |        |        |        |\r\n"
                   "|        |        |        |        |\r\n"
                   "|        |        |        |        |\r\n"
                   "|        |        |        |        |\r\n"
                   "|        |________|        |________|\r\n"

                   "|----Frequency----|                                \r\n");
    UART__uxPrintf(UART_enMODULE_0,
                   "Command Set DeadBand time [deadband]:                  \r\n"
                   "       This command change the time that both outputs  \r\n"
                   "       must have a value of 0.                         \r\n"
                   "       The minimum deadband time is 0.0 us and         \r\n"
                   "       the maximum is 34.0 us.                         \r\n"
                   "            deadband[generator][space][0.0 - 34.0]     \r\n"
                   "       Example, set Gen 0 with a dead time of 4.5 us:  \r\n"
                   "            *****************                           \r\n"
                   "            * deadband0 4.5 *                               \r\n"
                   "            *****************                 \r\n"
                   "                                         \r\n"
                   " ____            ____            ____   <- PWM_H   \r\n");
    UART__uxPrintf(UART_enMODULE_0,
                   "|    |          |    |          |          \r\n"
                   "|    |          |    |          |          \r\n"
                   "|    |  ******  |    |  ******  |       <- PWM_L   \r\n"
                   "|    |  *    *  |    |  *    *  |          \r\n"
                   "|    |__*____*__|    |__*____*__|          \r\n"
                   "        *    *          *    *             \r\n"
                   "*********    ************    *********     \r\n"
                   "      _        _                      \r\n"
                   "     /_\\      /_\\                     \r\n"
                   "      |        |                           \r\n"
                   "       DeadBand                            \r\n");
    UART__uxPrintf(UART_enMODULE_0,
                   "Command Set Width [width]:                          \r\n"
                   "       This command changes the Duty Cycle of the     \r\n"
                   "       complementary outputs.This means, it will change\r\n"
                   "       the high time of the PWM_H.                       \r\n"
                   "       The minimum width is 1 %% and the maximum 100%%   \r\n"
                   "            width[generator][space][1 - 100]           \r\n"
                   "       Example, set Generator 0 with 45%% duty cycle    \r\n"
                   "            *************                            \r\n"
                   "            * width0 45 *                               \r\n"
                   "            *************                 \r\n"
                   " ________          ________          ________\r\n"
                   "|        |        |        |        |\r\n"
                   "|        |        |        |        |\r\n"
                   "|        |        |        |        |\r\n"
                   "|        |        |        |        |\r\n"
                   "|        |________|        |________|\r\n"

                   "|-Width--|                                \r\n"
                   "          ENJOY!!                         \r\n");
}

boolean_t TASK__boExecuteCommand(UBase_t uxCommand, const char* pcParameter)
{
    UBase_t uxPwmNumber;
    UBase_t uxPwmAction;
    uint64_t u64Number;
    UBase_t u32Load;
    uint32_t u32Compare;
    UBase_t uxFrequency;
    UBase_t uxLength;
    float32_t f32Band;
    boolean_t boResult = FALSE;

    uxPwmNumber = uxCommand & 0x3UL;
    uxPwmAction = uxCommand >> 2UL;
    uxPwmAction &= 0x7UL;
    switch(uxPwmAction)
    {
    case COMMAND_STATE:
        if(0 == strcmp(pcParameter, "ON"))
        {
            boResult = TRUE;
            PWM_DeadBand__enSetStateByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enSTATE_ENA);
            PWM_Output__enSetStateByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enOUTPUT_BOTH, PWM_enSTATE_ENA);
            TASK_puxState[uxPwmNumber] =  1UL;
        }
        else if(0 == strcmp(pcParameter, "OFF"))
        {
            boResult = TRUE;
            PWM_DeadBand__enSetStateByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enSTATE_DIS);
            PWM_Output__enSetStateByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enOUTPUT_BOTH, PWM_enSTATE_DIS);
            TASK_puxState[uxPwmNumber] = 0UL;
        }
        break;
    case COMMAND_FREQUENCY:
        uxLength = 0UL;
        u64Number = 0UL;
        Conv__enString2UInteger(&pcParameter, &u64Number, &uxLength);
        if(0 != uxLength)
        {
            if((2000ULL <= u64Number) && (120000ULL >= u64Number))
            {
                uxFrequency = 0UL;
                SYSCTL__enGetSystemClockFrequency(SYSCTL_enMODULE_0, &uxFrequency);
                uxFrequency /= (UBase_t) u64Number;
                TASK_puxFrequency[uxPwmNumber] = uxFrequency;
                PWM_Output__enSetStateByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enOUTPUT_BOTH, PWM_enSTATE_DIS);
                PWM_Generator__enSetLoadValueByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, uxFrequency);
                PWM_Generator__enSetComparePorcentageByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enOUTPUT_A, TASK_puxPulseWidth[uxPwmNumber]);
                PWM_Output__enSetStateByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enOUTPUT_BOTH, TASK_puxState[uxPwmNumber]);
                boResult = TRUE;
            }
        }
        break;
    case COMMAND_DEADBAND:
        f32Band = strtof(pcParameter, (char**) 0UL);
        if(34.0f >= f32Band)
        {
            uxFrequency = 0UL;
            SYSCTL__enGetSystemClockFrequency(SYSCTL_enMODULE_0, &uxFrequency);
            TASK_pf32DeadBand[uxPwmNumber] = f32Band;
            f32Band *= (float32_t) uxFrequency;
            f32Band /= 1000000.0f;
            f32Band += 0.5f;
            uxFrequency = (UBase_t) f32Band;
            PWM_DeadBand__enSetFallingDelayByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber,uxFrequency);
            PWM_DeadBand__enSetRisingDelayByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, uxFrequency);
            boResult = TRUE;
        }
        break;
    case COMMAND_PULSEWIDTH:
        uxLength = 0UL;
        u64Number = 0UL;
        Conv__enString2UInteger(&pcParameter, &u64Number, &uxLength);
        if(0 != uxLength)
        {
            if((0ULL < u64Number) && (100ULL >= u64Number))
            {
                TASK_puxPulseWidth[uxPwmNumber] = (UBase_t) u64Number;
                PWM_Generator__enGetLoadValueByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, &u32Load);
                if (100UL == TASK_puxPulseWidth[uxPwmNumber])
                {
                    u32Compare = u32Load + 1UL;
                }
                else
                {
                    u32Compare = 100UL - TASK_puxPulseWidth[uxPwmNumber];
                    u32Compare = (u32Load * u32Compare) / 100UL;
                }
                PWM_Output__enSetStateByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enOUTPUT_BOTH, PWM_enSTATE_DIS);
                PWM_Generator__enSetCompareValueByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enOUTPUT_A, u32Compare);
                PWM_Output__enSetStateByNumber(PWM_enMODULE_0, (PWM_nGENERATOR) uxPwmNumber, PWM_enOUTPUT_BOTH, TASK_puxState[uxPwmNumber]);
                boResult = TRUE;
            }
        }
        break;
    default:
        break;
    }
    return (boResult);
}
