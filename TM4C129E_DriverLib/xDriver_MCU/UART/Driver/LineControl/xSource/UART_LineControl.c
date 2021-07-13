/**
 *
 * @file UART_LineControl.c
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
 * @verbatim 6 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/UART/Driver/LineControl/UART_LineControl.h>


void UART__vSetLineControl(UART_nMODULE enModule, UART_nLENGTH enLengthDataArg, UART_nFIFO enFifoEnable, UART_nSTOP enStopBitsArg, UART_nPARITY enParityState, UART_nPARITY_TYPE enParityTypeArg, UART_nPARITY_STICK enParityStickArg)
{
    UART__vSetDataLength(enModule, enLengthDataArg);
    UART__vSetFifoEnable(enModule, enFifoEnable);
    UART__vSetStopBits(enModule, enStopBitsArg);
    UART__vSetParityEnable(enModule, enParityState);
    UART__vSetParityType(enModule, enParityTypeArg);
    UART__vSetParityStick(enModule, enParityStickArg);
}

void UART__vSetLineControlStruct(UART_nMODULE enModule, const UART_LINE_CONTROL_TypeDef stLineControl)
{
    UART__vSetDataLength(enModule, stLineControl.enLength);
    UART__vSetFifoEnable(enModule, stLineControl.enFifo);
    UART__vSetStopBits(enModule, stLineControl.enStop);
    UART__vSetParityEnable(enModule, stLineControl.enParity);
    UART__vSetParityType(enModule, stLineControl.enParityType);
    UART__vSetParityStick(enModule, stLineControl.enParityStick);
}

void UART__vSetLineControlStructPointer(UART_nMODULE enModule, const UART_LINE_CONTROL_TypeDef* pstLineControl)
{
    if((uint32_t) 0UL != (uint32_t) pstLineControl)
    {
        UART__vSetDataLength(enModule, pstLineControl->enLength);
        UART__vSetFifoEnable(enModule, pstLineControl->enFifo);
        UART__vSetStopBits(enModule, pstLineControl->enStop);
        UART__vSetParityEnable(enModule, pstLineControl->enParity);
        UART__vSetParityType(enModule, pstLineControl->enParityType);
        UART__vSetParityStick(enModule, pstLineControl->enParityStick);
    }
}

UART_nSTATUS UART__enSetBaudRateAndLineControl(UART_nMODULE enModule, UART_nLENGTH enLengthDataArg, UART_nFIFO enFifoEnable, UART_nSTOP enStopBitsArg, UART_nPARITY enParityState, UART_nPARITY_TYPE enParityTypeArg, UART_nPARITY_STICK enParityStickArg, uint32_t u32BaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_ERROR;
    enStatus = UART__enSetBaudRate(enModule, u32BaudRateArg);
    if(UART_enSTATUS_OK == enStatus)
    {
        UART__vSetLineControl(enModule, enLengthDataArg, enFifoEnable, enStopBitsArg, enParityState, enParityTypeArg, enParityStickArg);
    }
    return enStatus;
}

UART_nSTATUS UART__enSetBaudRateAndLineControlStruct(UART_nMODULE enModule, const UART_LINE_CONTROL_TypeDef stLineControl, uint32_t u32BaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_ERROR;
    enStatus = UART__enSetBaudRate(enModule, u32BaudRateArg);
    if(UART_enSTATUS_OK == enStatus)
    {
        UART__vSetLineControlStruct(enModule, stLineControl);
    }
    return enStatus;
}

UART_nSTATUS UART__enSetBaudRateAndLineControlStructPointer(UART_nMODULE enModule, const UART_LINE_CONTROL_TypeDef* pstLineControl, uint32_t u32BaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_ERROR;
    enStatus = UART__enSetBaudRate(enModule, u32BaudRateArg);
    if(UART_enSTATUS_OK == enStatus)
    {
        UART__vSetLineControlStructPointer(enModule, pstLineControl);
    }
    return enStatus;
}
