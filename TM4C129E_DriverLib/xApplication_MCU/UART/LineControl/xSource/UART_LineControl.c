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

UART_nSTATUS UART__enSetBaudRateAndLineControl(UART_nMODULE enModule,
                                               UART_nLENGTH enLengthDataArg,
                                               UART_nFIFO enFifoEnable,
                                               UART_nSTOP enStopBitsArg,
                                               UART_nPARITY enParityState,
                                               UART_nPARITY_TYPE enParityTypeArg,
                                               UART_nPARITY_STICK enParityStickArg,
                                               UBase_t uxBaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_ERROR;
    enStatus = UART__enSetBaudRate(enModule, uxBaudRateArg);
    if(UART_enSTATUS_OK == enStatus)
    {
        UART__vSetLineControl(enModule, enLengthDataArg, enFifoEnable,
                              enStopBitsArg, enParityState, enParityTypeArg, enParityStickArg);
    }
    return (enStatus);
}

UART_nSTATUS UART__enSetBaudRateAndLineControlStruct(UART_nMODULE enModule,
                                             const UART_LINE_CONTROL_t stLineControl,
                                             UBase_t uxBaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_ERROR;
    enStatus = UART__enSetBaudRate(enModule, uxBaudRateArg);
    if(UART_enSTATUS_OK == enStatus)
    {
        UART__vSetLineControlStruct(enModule, stLineControl);
    }
    return (enStatus);
}

UART_nSTATUS UART__enSetBaudRateAndLineControlStructPointer(UART_nMODULE enModule,
                                                const UART_LINE_CONTROL_t* pstLineControl,
                                                UBase_t uxBaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_ERROR;
    enStatus = UART__enSetBaudRate(enModule, uxBaudRateArg);
    if(UART_enSTATUS_OK == enStatus)
    {
        UART__vSetLineControlStructPointer(enModule, pstLineControl);
    }
    return (enStatus);
}
