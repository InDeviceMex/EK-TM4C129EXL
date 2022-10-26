/**
 *
 * @file UART_LineControl.c
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
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/UART/LineControl/UART_LineControl.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

UART_nERROR UART__enSetLineControl_BaudRate(UART_nMODULE enModuleArg,
                                            UART_nLENGTH enLengthDataArg,
                                            UART_nSTATE enFifoEnable,
                                            UART_nSTOP enStopBitsArg,
                                            UART_nPARITY enParityTypeArg,
                                            UBase_t uxBaudRateArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetBaudRate(enModuleArg, uxBaudRateArg);
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetLineControl(enModuleArg, enLengthDataArg, enFifoEnable,
                                            enStopBitsArg, enParityTypeArg);
    }
    return (enErrorReg);
}

UART_nERROR UART__enSetLineControlStructure_BaudRate(UART_nMODULE enModuleArg,
                                             const UART_LINE_CONTROL_t stLineControl,
                                             UBase_t uxBaudRateArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetBaudRate(enModuleArg, uxBaudRateArg);
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetLineControlStructure(enModuleArg, stLineControl);
    }
    return (enErrorReg);
}

UART_nERROR UART__enSetLineControlStructurePointer_BaudRate(UART_nMODULE enModuleArg,
                                                const UART_LINE_CONTROL_t* pstLineControl,
                                                UBase_t uxBaudRateArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetBaudRate(enModuleArg, uxBaudRateArg);
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetLineControlStructurePointer(enModuleArg, pstLineControl);
    }
    return (enErrorReg);
}
