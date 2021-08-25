/**
 *
 * @file SSI_Config.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SSI/xHeader/SSI_Config.h>

#include <xApplication_MCU/SSI/xHeader/SSI_FrameControl.h>
#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

#define TX_LINE (0UL)
#define RX_LINE (1UL)
#define DAT2_LINE (2UL)
#define DAT3_LINE (3UL)
#define CLK_LINE (4UL)
#define FSS_LINE (5UL)
#define MAX_LINE (6UL)

#define MAX_CONFIG (2UL)

GPIO_nDIGITAL_FUNCTION SSI_enGpioInput[MAX_CONFIG]
                                      [(uint32_t) SSI_enMODULE_MAX]
                                      [(uint32_t) MAX_LINE] =
{
    {
        {
         GPIO_enSSI0Tx, GPIO_enSSI0Rx,
         GPIO_enSSI0XDAT2, GPIO_enSSI0XDAT3,
         GPIO_enSSI0Clk, GPIO_enSSI0Fss
        },
        {
         GPIO_enSSI1Tx, GPIO_enSSI1Rx,
         GPIO_enSSI1XDAT2, GPIO_enSSI1XDAT3,
         GPIO_enSSI1Clk, GPIO_enSSI1Fss
        },
        {
         GPIO_enSSI2Tx, GPIO_enSSI2Rx,
         GPIO_enSSI2XDAT2, GPIO_enSSI2XDAT3,
         GPIO_enSSI2Clk, GPIO_enSSI2Fss
        },
        {
         GPIO_enSSI3Tx, GPIO_enSSI3Rx,
         GPIO_enSSI3XDAT2, GPIO_enSSI3XDAT3,
         GPIO_enSSI3Clk, GPIO_enSSI3Fss
        },
    },
    {
        {
         GPIO_enSSI0Tx, GPIO_enSSI0Rx,
         GPIO_enSSI0XDAT2, GPIO_enSSI0XDAT3,
         GPIO_enSSI0Clk, GPIO_enSSI0Fss
        },
        {
         GPIO_enSSI1Tx, GPIO_enSSI1Rx,
         GPIO_enSSI1XDAT2, GPIO_enSSI1XDAT3,
         GPIO_enSSI1Clk, GPIO_enSSI1Fss
        },
        {
         GPIO_enSSI2Tx, GPIO_enSSI2Rx,
         GPIO_enSSI2XDAT2, GPIO_enSSI2XDAT3,
         GPIO_enSSI2Clk, GPIO_enSSI2Fss
        },
        {
         GPIO_enSSI3Tx_Q2, GPIO_enSSI3Rx_Q3,
         GPIO_enSSI3XDAT2_P0, GPIO_enSSI3XDAT3,
         GPIO_enSSI3Clk_Q0, GPIO_enSSI3Fss_Q1
        },
    },
 };

SSI_nSTATUS SSI__enSetConfig(SSI_nMODULE enModule, SSI_nMS enMasterSlaveArg , SSI_CONTROL_TypeDef* pstControlConfig, SSI_FRAME_CONTROL_TypeDef* pstFrameControlConfig, uint32_t u32ClockArg, const SSI_LINE_TypeDef* pstLineConfig)
{
    SSI_nSTATUS enReturn = SSI_enSTATUS_ERROR;
    SSI_nENABLE enEnableModule = SSI_enENABLE_UNDEF;
    SSI_nMODULE enModuleFilter = SSI_enMODULE_0;
    SSI_nBUSY enBusyModule = SSI_enBUSY_UNDEF;
    uint32_t u32Line[MAX_LINE] = {0UL};

    if((0UL != (uint32_t) pstControlConfig) &&
       (0UL != (uint32_t) pstFrameControlConfig) &&
       (0UL != (uint32_t) pstLineConfig))
    {
        enModuleFilter = (SSI_nMODULE) MCU__u32CheckParams((uint32_t) enModule,
                                                           (uint32_t) SSI_enMODULE_MAX);
        enEnableModule = SSI__enGetEnable(enModuleFilter);
        if(SSI_enENABLE_START == enEnableModule)
        {
            SSI__vSetEnable(enModuleFilter, SSI_enENABLE_STOP);
            do
            {
                enBusyModule = SSI__enGetBusyState(enModuleFilter);
            }while (SSI_enBUSY_IDLE != enBusyModule);
        }
        u32Line[TX_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enTx, MAX_CONFIG);
        u32Line[RX_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enRx, MAX_CONFIG);
        u32Line[DAT2_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enDat2, MAX_CONFIG);
        u32Line[DAT3_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enDat3, MAX_CONFIG);
        u32Line[CLK_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enClk, MAX_CONFIG);
        u32Line[FSS_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enFss, MAX_CONFIG);

        if(SSI_enLINE_ENA == pstControlConfig->enFssLine)
        {
            if(SSI_enMS_MASTER == enMasterSlaveArg)
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[FSS_LINE]]
                                                        [(uint32_t) enModuleFilter]
                                                        [FSS_LINE],
                                         GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
            }
            else
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[FSS_LINE]]
                                                        [(uint32_t) enModuleFilter]
                                                        [FSS_LINE],
                                         GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
            }
        }
        if(SSI_enLINE_ENA == pstControlConfig->enClkLine)
        {
            if(SSI_enMS_MASTER == enMasterSlaveArg)
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[CLK_LINE]]
                                                        [(uint32_t) enModuleFilter]
                                                        [CLK_LINE],
                                         GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP);
            }
            else
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[CLK_LINE]]
                                                        [(uint32_t) enModuleFilter]
                                                        [CLK_LINE],
                                         GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
            }
        }

        if(SSI_enMODE_LEGACY != pstControlConfig->enSSIMode)
        {
            pstFrameControlConfig->enClockPhase = SSI_enCLOCK_PHASE_FIRST;
            pstFrameControlConfig->enClockPolarity = SSI_enCLOCK_POLARITY_LOW;
            pstFrameControlConfig->enLengthData = SSI_enLENGTH_8BITS;
            pstFrameControlConfig->enFormat = SSI_enFORMAT_FREESCALE;

            switch(pstControlConfig->enDirection)
            {
            case SSI_enDIRECTION_TX:
                switch (pstControlConfig->enSSIMode)
                {
                case SSI_enMODE_BI:
                    if(SSI_enLINE_ENA == pstControlConfig->enTxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[TX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [TX_LINE],
                                                 GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP);
                    }
                    if(SSI_enLINE_ENA == pstControlConfig->enRxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[RX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [RX_LINE],
                                                 GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP);
                    }
                    break;
                case SSI_enMODE_QUAD:
                    if(SSI_enLINE_ENA == pstControlConfig->enTxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[TX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [TX_LINE],
                                                 GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP);
                    }
                    if(SSI_enLINE_ENA == pstControlConfig->enRxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[RX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [RX_LINE],
                                                 GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP);
                    }
                    if(SSI_enLINE_ENA == pstControlConfig->enDat2Line)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[DAT2_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [DAT2_LINE],
                                                 GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP);
                    }
                    if(SSI_enLINE_ENA == pstControlConfig->enDat3Line)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[DAT3_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [DAT3_LINE],
                                                 GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP);
                    }
                    break;
                case SSI_enMODE_ADVANCED:
                    if(SSI_enLINE_ENA == pstControlConfig->enTxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[TX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [TX_LINE],
                                                 GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
                    }
                    break;
                default:
                    break;
                }
                break;
            case SSI_enDIRECTION_RX:
                switch (pstControlConfig->enSSIMode)
                {
                case SSI_enMODE_BI:

                    if(SSI_enLINE_ENA == pstControlConfig->enTxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[TX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [TX_LINE],
                                                 GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
                    }
                    if(SSI_enLINE_ENA == pstControlConfig->enRxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[RX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [RX_LINE],
                                                 GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
                    }
                    break;
                case SSI_enMODE_QUAD:
                    if(SSI_enLINE_ENA == pstControlConfig->enTxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[TX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [TX_LINE],
                                                 GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
                    }
                    if(SSI_enLINE_ENA == pstControlConfig->enRxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[RX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [RX_LINE],
                                                 GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
                    }
                    if(SSI_enLINE_ENA == pstControlConfig->enDat2Line)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[DAT2_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [DAT2_LINE],
                                                 GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
                    }
                    if(SSI_enLINE_ENA == pstControlConfig->enDat3Line)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[DAT3_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [DAT3_LINE],
                                                 GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
                    }
                    break;
                case SSI_enMODE_ADVANCED:
                    if(SSI_enLINE_ENA == pstControlConfig->enRxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[RX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [RX_LINE],
                                                 GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
                    }
                    if(SSI_enLINE_ENA == pstControlConfig->enTxLine)
                    {
                        GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[TX_LINE]]
                                                                [(uint32_t) enModuleFilter]
                                                                [TX_LINE],
                                                 GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
                    }
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
        }
        else
        {
            pstControlConfig->enDirection = SSI_enDIRECTION_TX;
            if(SSI_enLENGTH_8BITS != pstFrameControlConfig->enLengthData)
            {
                pstControlConfig->enFssHold = SSI_enFSSHOLD_DIS;
            }

            if(SSI_enLINE_ENA == pstControlConfig->enRxLine)
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[RX_LINE]]
                                                        [(uint32_t) enModuleFilter]
                                                        [RX_LINE],
                                         GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
            }
            if(SSI_enLINE_ENA == pstControlConfig->enTxLine)
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[TX_LINE]]
                                                        [(uint32_t) enModuleFilter]
                                                        [TX_LINE],
                                         GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
            }
        }

        SSI__vSetClockAndFormatControlStructPointer(enModuleFilter,
                                                    pstFrameControlConfig,
                                                    u32ClockArg);

        SSI__vSetFssHold(enModuleFilter, pstControlConfig->enFssHold);
        SSI__vSetDirection(enModuleFilter, pstControlConfig->enDirection);
        SSI__vSetMode(enModuleFilter, pstControlConfig->enSSIMode);
        SSI__vSetEndTransmission(enModuleFilter, pstControlConfig->enEndOfTransmission);
        SSI__vSetMasterSlave(enModuleFilter, enMasterSlaveArg);
        SSI__vSetLoopback(enModuleFilter, pstControlConfig->enLoopback);


        if(SSI_enENABLE_START == enEnableModule)
        {
            SSI__vSetEnable(enModuleFilter, SSI_enENABLE_START);
        }
        enReturn = SSI_enSTATUS_OK;
    }
    return (enReturn);
}
