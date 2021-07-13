/**
 *
 * @file UART_Config.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/App/xHeader/UART_Config.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/UART_Driver.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>

#define RX_LINE (0UL)
#define TX_LINE (1UL)
#define CTS_LINE (2UL)
#define RTS_LINE (3UL)

GPIO_nDIGITAL_FUNCTION UART_enGpioInput[2UL] [(uint32_t) UART_enMODULE_MAX][(uint32_t) 4UL] =
{
    {
        {GPIO_enU0Rx, GPIO_enU0Tx, GPIO_enU0CTS, GPIO_enU0RTS},
        {GPIO_enU1Rx, GPIO_enU1Tx, GPIO_enU1CTS, GPIO_enU1RTS},
        {GPIO_enU2Rx, GPIO_enU2Tx, GPIO_enU2CTS, GPIO_enU2RTS},
        {GPIO_enU3Rx, GPIO_enU3Tx, GPIO_enU3CTS, GPIO_enU3RTS},
        {GPIO_enU4Rx, GPIO_enU4Tx, GPIO_enU4CTS, GPIO_enU4RTS},
        {GPIO_enU5Rx, GPIO_enU5Tx, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},
        {GPIO_enU6Rx, GPIO_enU6Tx, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},
        {GPIO_enU7Rx, GPIO_enU7Tx, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},
    },
    {
        {GPIO_enU0Rx, GPIO_enU0Tx, GPIO_enU0CTS_H1, GPIO_enU0RTS_H0},
        {GPIO_enU1Rx_Q4, GPIO_enU1Tx, GPIO_enU1CTS_P3, GPIO_enU1RTS_N0},
        {GPIO_enU2Rx_D4, GPIO_enU2Tx_D5, GPIO_enU2CTS_N3, GPIO_enU2RTS_N2},
        {GPIO_enU3Rx_J0, GPIO_enU3Tx_J1, GPIO_enU3CTS_P5, GPIO_enU3RTS_P4},
        {GPIO_enU4Rx_K0, GPIO_enU4Tx_K1, GPIO_enU4CTS, GPIO_enU4RTS},
        {GPIO_enU5Rx, GPIO_enU5Tx, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},
        {GPIO_enU6Rx, GPIO_enU6Tx, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},
        {GPIO_enU7Rx, GPIO_enU7Tx, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},
    },
 };

UART_nSTATUS UART__enSetConfig(UART_nMODULE enModule, UART_nMODE enModeArg  , const UART_CONTROL_TypeDef* pstControlConfig, const UART_LINE_CONTROL_TypeDef* pstLineControlConfig, uint32_t u32BaudRateArg, const UART_LINE_TypeDef* pstLineConfig)
{
    UART_nSTATUS enReturn = UART_enSTATUS_ERROR;
    UART_nENABLE enEnableModule = UART_enENABLE_UNDEF;
    UART_nMODULE enModuleFilter = UART_enMODULE_0;
    UART_nBUSY enBusyModule = UART_enBUSY_UNDEF;
    UART_LINE_CONTROL_TypeDef stLineControlConfig;
    uint32_t u32Line[4UL] = {0UL};

    if((0UL != (uint32_t) pstControlConfig) && (0UL != (uint32_t) pstLineControlConfig)  && (0UL != (uint32_t) pstLineConfig))
    {
        enModuleFilter = (UART_nMODULE) MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);
        enEnableModule = UART__enGetEnable(enModuleFilter);
        if(UART_enENABLE_START == enEnableModule)
        {
            UART__vSetEnable(enModuleFilter, UART_enENABLE_STOP);
            do
            {
                enBusyModule = UART__enGetBusyState(enModuleFilter);
            }while (UART_enBUSY_IDLE != enBusyModule);
            UART__vSetFifoEnable(enModuleFilter, UART_enFIFO_DIS);
        }
        u32Line[RX_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enRx, 2UL);
        u32Line[TX_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enTx, 2UL);
        u32Line[CTS_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enCTS, 2UL);
        u32Line[RTS_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enRTS, 2UL);

        UART__vSetRxEnable(enModuleFilter, pstControlConfig->enRxLine);
        UART__vSetTxEnable(enModuleFilter, pstControlConfig->enTxLine);
        UART__vSetLoopback(enModuleFilter, pstControlConfig->enLoopback);
        UART__vSetEndTransmission(enModuleFilter, pstControlConfig->enEndOfTransmission);
        if(UART_enLINE_ENA == pstControlConfig->enRxLine)
        {
            GPIO__enSetDigitalConfig(UART_enGpioInput[u32Line[RX_LINE]][(uint32_t) enModuleFilter][RX_LINE], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
        }
        if(UART_enLINE_ENA == pstControlConfig->enTxLine)
        {
            GPIO__enSetDigitalConfig(UART_enGpioInput[u32Line[TX_LINE]][(uint32_t) enModuleFilter][TX_LINE], GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
        }

        UART__vSet9BitMode(enModuleFilter, UART_en9BIT_DIS);
        UART__vSetSIRLowPower(enModuleFilter, UART_enSIR_LP_DIS);
        UART__vSetSIR(enModuleFilter, UART_enSIR_DIS);
        UART__vSetSMART(enModuleFilter, UART_enSMART_DIS);
        UART__vSetCTSMode(enModuleFilter, UART_enCTS_MODE_SOFT);
        UART__vSetRTSMode(enModuleFilter, UART_enRTS_MODE_SOFT);
        UART__vSetRTSLevel(enModuleFilter, UART_enRTS_LEVEL_LOW);

        stLineControlConfig.enFifo = pstLineControlConfig->enFifo;
        stLineControlConfig.enStop = pstLineControlConfig->enStop;
        stLineControlConfig.enLength = pstLineControlConfig->enLength;
        stLineControlConfig.enParityType = pstLineControlConfig->enParityType;
        stLineControlConfig.enParity = pstLineControlConfig->enParity;
        stLineControlConfig.enParityStick = pstLineControlConfig->enParityStick;
        switch(enModeArg)
        {

        case UART_enMODE_NORMAL:
            stLineControlConfig.enParityStick = UART_enPARITY_STICK_DIS;
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig, u32BaudRateArg);
            break;

        case UART_enMODE_MODEM:
            stLineControlConfig.enParityStick = UART_enPARITY_STICK_DIS;
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig, u32BaudRateArg);

            UART__vSetCTSMode(enModuleFilter, pstControlConfig->enCTSMode);
            UART__vSetRTSMode(enModuleFilter, pstControlConfig->enRTSMode);
            if(UART_enCTS_MODE_HARD == pstControlConfig->enCTSMode)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[u32Line[CTS_LINE]][(uint32_t) enModuleFilter][CTS_LINE], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            GPIO__enSetDigitalConfig(UART_enGpioInput[u32Line[RTS_LINE]][(uint32_t) enModuleFilter][RTS_LINE], GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
            break;

        case UART_enMODE_SIR:
            stLineControlConfig.enParityStick = UART_enPARITY_STICK_DIS;
            UART__vSetLineControlStruct(enModuleFilter, stLineControlConfig);
            UART__vEnIrDALowPowerFrequency(enModuleFilter);

            UART__vSetSIR(enModuleFilter, UART_enSIR_ENA);
            break;

        case UART_enMODE_SIR_LP:
            stLineControlConfig.enParityStick = UART_enPARITY_STICK_DIS;
            UART__vSetLineControlStruct(enModuleFilter, stLineControlConfig);
            UART__vEnIrDALowPowerFrequency(enModuleFilter);

            UART__vSetSIR(enModuleFilter, UART_enSIR_ENA);
            UART__vSetSIRLowPower(enModuleFilter, UART_enSIR_LP_ENA);
            break;

            /*Multiprocesor*/
        case UART_enMODE_NORMAL_MP:
            stLineControlConfig.enParity = UART_enPARITY_ENA;
            stLineControlConfig.enParityStick = UART_enPARITY_STICK_ENA;
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig, u32BaudRateArg);

            UART__vSet9BitMode(enModuleFilter, UART_en9BIT_ENA);
            break;

        case UART_enMODE_SIR_MP:
            stLineControlConfig.enParity = UART_enPARITY_ENA;
            stLineControlConfig.enParityStick = UART_enPARITY_STICK_ENA;
            UART__vSetLineControlStruct(enModuleFilter, stLineControlConfig);
            UART__vEnIrDALowPowerFrequency(enModuleFilter);

            UART__vSetSIR(enModuleFilter, UART_enSIR_ENA);

            UART__vSet9BitMode(enModuleFilter, UART_en9BIT_ENA);
            break;

        case UART_enMODE_SIR_LP_MP:
            stLineControlConfig.enParity = UART_enPARITY_ENA;
            stLineControlConfig.enParityStick = UART_enPARITY_STICK_ENA;
            UART__vSetLineControlStruct(enModuleFilter, stLineControlConfig);
            UART__vEnIrDALowPowerFrequency(enModuleFilter);

            UART__vSetSIR(enModuleFilter, UART_enSIR_ENA);
            UART__vSetSIRLowPower(enModuleFilter, UART_enSIR_LP_ENA);

            UART__vSet9BitMode(enModuleFilter, UART_en9BIT_ENA);
            break;

        case UART_enMODE_MODEM_MP:
            stLineControlConfig.enParity = UART_enPARITY_ENA;
            stLineControlConfig.enParityStick = UART_enPARITY_STICK_ENA;
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig, u32BaudRateArg);

            UART__vSetCTSMode(enModuleFilter, pstControlConfig->enCTSMode);
            UART__vSetRTSMode(enModuleFilter, pstControlConfig->enRTSMode);
            if(UART_enCTS_MODE_HARD == pstControlConfig->enCTSMode)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[u32Line[CTS_LINE]][(uint32_t) enModuleFilter][CTS_LINE], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            GPIO__enSetDigitalConfig(UART_enGpioInput[u32Line[RTS_LINE]][(uint32_t) enModuleFilter][RTS_LINE], GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

            UART__vSet9BitMode(enModuleFilter, UART_en9BIT_ENA);
            break;

        case UART_enMODE_SMART_CARD:
            stLineControlConfig.enFifo = pstLineControlConfig->enFifo;
            stLineControlConfig.enStop = UART_enSTOP_TWO;
            stLineControlConfig.enLength = UART_enLENGTH_8BITS;
            stLineControlConfig.enParityType = UART_enPARITY_TYPE_EVEN;
            stLineControlConfig.enParity = UART_enPARITY_ENA;
            stLineControlConfig.enParityStick = UART_enPARITY_STICK_DIS;
            UART__vSetSMART(enModuleFilter, UART_enSMART_ENA);
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig, u32BaudRateArg);
            break;
        default:
            break;
        }
        if(UART_enENABLE_START == enEnableModule)
        {
            UART__vSetEnable(enModuleFilter, UART_enENABLE_START);
        }
        enReturn = UART_enSTATUS_OK;
    }
    return enReturn;
}
