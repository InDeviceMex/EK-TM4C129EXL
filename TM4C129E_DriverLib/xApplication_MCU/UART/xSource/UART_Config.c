/**
 *
 * @file UART_Config.c
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/UART/xHeader/UART_Config.h>

#include <xApplication_MCU/UART/LineControl/UART_LineControl.h>
#include <xApplication_MCU/UART/xHeader/UART_IrDA.h>
#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

#define RX_LINE (0UL)
#define TX_LINE (1UL)
#define CTS_LINE (2UL)
#define RTS_LINE (3UL)
#define DCD_LINE (4UL)
#define DSR_LINE (5UL)
#define DTR_LINE (6UL)
#define RI_LINE (7UL)
#define MAX_LINE (8UL)

#define MAX_CONFIG (3UL)

GPIO_nDIGITAL_FUNCTION UART_enGpioInput[MAX_CONFIG] [(UBase_t) UART_enMODULE_MAX]
                                                     [(UBase_t) MAX_LINE] =
{
    {
        {GPIO_enU0Rx_A0, GPIO_enU0Tx_A1, GPIO_enU0CTS_B4, GPIO_enU0RTS_B5,
         GPIO_enU0DCD_H2, GPIO_enU0DSR_H3, GPIO_enU0DTR_P2, GPIO_enU0RI_K7},

        {GPIO_enU1Rx_B0, GPIO_enU1Tx_B1, GPIO_enU1CTS_N1, GPIO_enU1RTS_E0,
         GPIO_enU1DCD_E2, GPIO_enU1DSR_E1, GPIO_enU1DTR_E3, GPIO_enU1RI_E4},

        {GPIO_enU2Rx_A6, GPIO_enU2Tx_A7, GPIO_enU2CTS_D7, GPIO_enU2RTS_D6,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU3Rx_A4, GPIO_enU3Tx_A5, GPIO_enU3CTS_N5, GPIO_enU3RTS_N4,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU4Rx_A2, GPIO_enU4Tx_A3, GPIO_enU4CTS_K3, GPIO_enU4RTS_K2,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU5Rx_C6, GPIO_enU5Tx_C7, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU6Rx_P0, GPIO_enU6Tx_P1, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU7Rx_C4, GPIO_enU7Tx_C5, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},
    },
    {
        {GPIO_enU0Rx_A0, GPIO_enU0Tx_A1, GPIO_enU0CTS_H1, GPIO_enU0RTS_H0,
         GPIO_enU0DCD_M5, GPIO_enU0DSR_M6, GPIO_enU0DTR_P2, GPIO_enU0RI_M7},

        {GPIO_enU1Rx_Q4, GPIO_enU1Tx_B1, GPIO_enU1CTS_P3, GPIO_enU1RTS_N0,
         GPIO_enU1DCD_N2, GPIO_enU1DSR_N3, GPIO_enU1DTR_N4, GPIO_enU1RI_N5},

        {GPIO_enU2Rx_D4, GPIO_enU2Tx_D5, GPIO_enU2CTS_N3, GPIO_enU2RTS_N2,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU3Rx_J0, GPIO_enU3Tx_J1, GPIO_enU3CTS_P5, GPIO_enU3RTS_P4,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU4Rx_K0, GPIO_enU4Tx_K1, GPIO_enU4CTS_K3, GPIO_enU4RTS_K2,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU5Rx_C6, GPIO_enU5Tx_C7, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU6Rx_P0, GPIO_enU6Tx_P1, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU7Rx_C4, GPIO_enU7Tx_C5, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},
    },
    {
        {GPIO_enU0Rx_A0, GPIO_enU0Tx_A1, GPIO_enU0CTS_M4, GPIO_enU0RTS_H0,
         GPIO_enU0DCD_P3, GPIO_enU0DSR_P4, GPIO_enU0DTR_P2, GPIO_enU0RI_M7},

        {GPIO_enU1Rx_Q4, GPIO_enU1Tx_B1, GPIO_enU1CTS_P3, GPIO_enU1RTS_N0,
         GPIO_enU1DCD_N2, GPIO_enU1DSR_N3, GPIO_enU1DTR_N4, GPIO_enU1RI_N5},

        {GPIO_enU2Rx_D4, GPIO_enU2Tx_D5, GPIO_enU2CTS_N3, GPIO_enU2RTS_N2,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU3Rx_J0, GPIO_enU3Tx_J1, GPIO_enU3CTS_P5, GPIO_enU3RTS_P4,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU4Rx_K0, GPIO_enU4Tx_K1, GPIO_enU4CTS_K3, GPIO_enU4RTS_K2,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU5Rx_C6, GPIO_enU5Tx_C7, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU6Rx_P0, GPIO_enU6Tx_P1, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},

        {GPIO_enU7Rx_C4, GPIO_enU7Tx_C5, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF,
         GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF, GPIO_enGPIO_UNDEF},
    },
 };

UART_nERROR UART__enSetConfig(UART_nMODULE enModule, UART_nMODE enModeArg  ,
                               const UART_CONTROL_t* pstControlConfig,
                               const UART_LINE_CONTROL_t* pstLineControlConfig,
                               UBase_t uxBaudRateArg,
                               const UART_LINE_t* pstLineConfig)
{
    UART_nERROR enReturn = UART_enERROR_POINTER;
    UART_nSTATE enEnableModule = UART_enSTATE_UNDEF;
    UART_nMODULE enModuleFilter = UART_enMODULE_0;
    UART_nBUSY enBusyModule = UART_enBUSY_UNDEF;
    UART_LINE_CONTROL_t stLineControlConfig;
    UBase_t uxLine[MAX_LINE] = {0UL};

    if((0UL != (UBase_t) pstControlConfig) &&
       (0UL != (UBase_t) pstLineControlConfig)  &&
       (0UL != (UBase_t) pstLineConfig))
    {
        enModuleFilter = (UART_nMODULE) MCU__uxCheckParams((UBase_t) enModule,
                                                            (UBase_t) UART_enMODULE_MAX);
        enEnableModule = UART__enGetEnable(enModuleFilter);
        if(UART_enSTATE_ENA == enEnableModule)
        {
            UART__vSetEnable(enModuleFilter, UART_enSTATE_DIS);
            do
            {
                enBusyModule = UART__enGetBusyState(enModuleFilter);
            }while (UART_enBUSY_IDLE != enBusyModule);
            UART__vSetFifoEnable(enModuleFilter, UART_enSTATE_DIS);
        }
        uxLine[RX_LINE] = MCU__uxCheckParams((UBase_t) pstLineConfig->enRx, MAX_CONFIG);
        uxLine[TX_LINE] = MCU__uxCheckParams((UBase_t) pstLineConfig->enTx, MAX_CONFIG);
        uxLine[CTS_LINE] = MCU__uxCheckParams((UBase_t) pstLineConfig->enCTS, MAX_CONFIG);
        uxLine[RTS_LINE] = MCU__uxCheckParams((UBase_t) pstLineConfig->enRTS, MAX_CONFIG);
        uxLine[DCD_LINE] = MCU__uxCheckParams((UBase_t) pstLineConfig->enDCD, MAX_CONFIG);
        uxLine[DSR_LINE] = MCU__uxCheckParams((UBase_t) pstLineConfig->enDSR, MAX_CONFIG);
        uxLine[DTR_LINE] = MCU__uxCheckParams((UBase_t) pstLineConfig->enDTR, MAX_CONFIG);
        uxLine[RI_LINE] = MCU__uxCheckParams((UBase_t) pstLineConfig->enRI, MAX_CONFIG);

        UART__vSetRxEnable(enModuleFilter, pstControlConfig->enRxLine);
        UART__vSetTxEnable(enModuleFilter, pstControlConfig->enTxLine);
        UART__vSetLoopback(enModuleFilter, pstControlConfig->enLoopback);
        UART__vSetEndTransmission(enModuleFilter, pstControlConfig->enEndOfTransmission);
        if(UART_enSTATE_ENA == pstControlConfig->enRxLine)
        {
            GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[RX_LINE]]
                                                     [(UBase_t) enModuleFilter]
                                                      [RX_LINE],
                                   GPIO_enCONFIG_INPUT_2MA_PUSHPULL);
        }
        if(UART_enSTATE_ENA == pstControlConfig->enTxLine)
        {
            GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[TX_LINE]]
                                                     [(UBase_t) enModuleFilter]
                                                     [TX_LINE],
                                     GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
        }

        UART__vSet9BitMode(enModuleFilter, UART_enSTATE_DIS);
        UART__vSetSIRLowPower(enModuleFilter, UART_enSTATE_DIS);
        UART__vSetSIR(enModuleFilter, UART_enSTATE_DIS);
        UART__vSetSMART(enModuleFilter, UART_enSTATE_DIS);
        UART__vSetCTSMode(enModuleFilter, UART_enLINE_MODE_SOFT);
        UART__vSetRTSMode(enModuleFilter, UART_enLINE_MODE_SOFT);
        UART__vSetRTSLevel(enModuleFilter, UART_enLEVEL_LOW);

        stLineControlConfig.enFifo = pstLineControlConfig->enFifo;
        stLineControlConfig.enStop = pstLineControlConfig->enStop;
        stLineControlConfig.enLength = pstLineControlConfig->enLength;
        stLineControlConfig.enParityType = pstLineControlConfig->enParityType;
        stLineControlConfig.enParity = pstLineControlConfig->enParity;
        stLineControlConfig.enParityStick = pstLineControlConfig->enParityStick;
        switch(enModeArg)
        {

        case UART_enMODE_NORMAL:
            stLineControlConfig.enParityStick = UART_enSTATE_DIS;
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig,
                                                    uxBaudRateArg);
            break;

        case UART_enMODE_MODEM:
            stLineControlConfig.enParityStick = UART_enSTATE_DIS;
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig,
                                                    uxBaudRateArg);

            if(UART_enLINE_MODE_HARD == pstControlConfig->enCTSMode)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[CTS_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [CTS_LINE],
                                          GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            if(UART_enLINE_MODE_HARD == pstControlConfig->enRTSMode)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[RTS_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [RTS_LINE],
                                           GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
            }
            if(UART_enSTATE_ENA == pstControlConfig->enDCDLine)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[DCD_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [DCD_LINE],
                                           GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            if(UART_enSTATE_ENA == pstControlConfig->enDSRLine)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[DSR_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [DSR_LINE],
                                           GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            if(UART_enSTATE_ENA == pstControlConfig->enRILine)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[RI_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [RI_LINE],
                                             GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            if(UART_enSTATE_ENA == pstControlConfig->enDTRLine)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[DTR_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [DTR_LINE],
                                         GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
            }
            UART__vSetCTSMode(enModuleFilter, pstControlConfig->enCTSMode);
            UART__vSetRTSMode(enModuleFilter, pstControlConfig->enRTSMode);
            break;

        case UART_enMODE_SIR:
            stLineControlConfig.enParityStick = UART_enSTATE_DIS;
            UART__vSetLineControlStruct(enModuleFilter, stLineControlConfig);
            UART__vEnIrDALowPowerFrequency(enModuleFilter);

            UART__vSetSIR(enModuleFilter, UART_enSTATE_ENA);
            break;

        case UART_enMODE_SIR_LP:
            stLineControlConfig.enParityStick = UART_enSTATE_DIS;
            UART__vSetLineControlStruct(enModuleFilter, stLineControlConfig);
            UART__vEnIrDALowPowerFrequency(enModuleFilter);

            UART__vSetSIR(enModuleFilter, UART_enSTATE_ENA);
            UART__vSetSIRLowPower(enModuleFilter, UART_enSTATE_ENA);
            break;

            /*Multiprocesor*/
        case UART_enMODE_NORMAL_MP:
            stLineControlConfig.enParity = UART_enSTATE_ENA;
            stLineControlConfig.enParityStick = UART_enSTATE_ENA;
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig,
                                                    uxBaudRateArg);

            UART__vSet9BitMode(enModuleFilter, UART_enSTATE_ENA);
            break;

        case UART_enMODE_SIR_MP:
            stLineControlConfig.enParity = UART_enSTATE_ENA;
            stLineControlConfig.enParityStick = UART_enSTATE_ENA;
            UART__vSetLineControlStruct(enModuleFilter, stLineControlConfig);
            UART__vEnIrDALowPowerFrequency(enModuleFilter);

            UART__vSetSIR(enModuleFilter, UART_enSTATE_ENA);

            UART__vSet9BitMode(enModuleFilter, UART_enSTATE_ENA);
            break;

        case UART_enMODE_SIR_LP_MP:
            stLineControlConfig.enParity = UART_enSTATE_ENA;
            stLineControlConfig.enParityStick = UART_enSTATE_ENA;
            UART__vSetLineControlStruct(enModuleFilter, stLineControlConfig);
            UART__vEnIrDALowPowerFrequency(enModuleFilter);

            UART__vSetSIR(enModuleFilter, UART_enSTATE_ENA);
            UART__vSetSIRLowPower(enModuleFilter, UART_enSTATE_ENA);

            UART__vSet9BitMode(enModuleFilter, UART_enSTATE_ENA);
            break;

        case UART_enMODE_MODEM_MP:
            stLineControlConfig.enParity = UART_enSTATE_ENA;
            stLineControlConfig.enParityStick = UART_enSTATE_ENA;
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig,
                                                    uxBaudRateArg);

            if(UART_enLINE_MODE_HARD == pstControlConfig->enCTSMode)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[CTS_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [CTS_LINE],
                                         GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            if(UART_enLINE_MODE_HARD == pstControlConfig->enRTSMode)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[RTS_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [RTS_LINE],
                                         GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
            }
            if(UART_enSTATE_ENA == pstControlConfig->enDCDLine)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[DCD_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [DCD_LINE],
                                         GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            if(UART_enSTATE_ENA == pstControlConfig->enDSRLine)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[DSR_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [DSR_LINE],
                                         GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            if(UART_enSTATE_ENA == pstControlConfig->enRILine)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[RI_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [RI_LINE],
                                         GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
            }
            if(UART_enSTATE_ENA == pstControlConfig->enDTRLine)
            {
                GPIO__enSetDigitalConfig(UART_enGpioInput[uxLine[DTR_LINE]]
                                                         [(UBase_t) enModuleFilter]
                                                         [DTR_LINE],
                                         GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
            }
            UART__vSetCTSMode(enModuleFilter, pstControlConfig->enCTSMode);
            UART__vSetRTSMode(enModuleFilter, pstControlConfig->enRTSMode);
            UART__vSet9BitMode(enModuleFilter, UART_enSTATE_ENA);
            break;

        case UART_enMODE_SMART_CARD:
            stLineControlConfig.enFifo = pstLineControlConfig->enFifo;
            stLineControlConfig.enStop = UART_enSTOP_TWO;
            stLineControlConfig.enLength = UART_enLENGTH_8BITS;
            stLineControlConfig.enParityType = UART_enPARITY_TYPE_EVEN;
            stLineControlConfig.enParity = UART_enSTATE_ENA;
            stLineControlConfig.enParityStick = UART_enSTATE_DIS;
            UART__vSetSMART(enModuleFilter, UART_enSTATE_ENA);
            UART__enSetBaudRateAndLineControlStruct(enModuleFilter, stLineControlConfig,
                                                    uxBaudRateArg);
            break;
        default:
            break;
        }
        if(UART_enSTATE_ENA == enEnableModule)
        {
            UART__vSetEnable(enModuleFilter, UART_enSTATE_ENA);
        }
        enReturn = UART_enERROR_OK;
    }
    return (enReturn);
}




