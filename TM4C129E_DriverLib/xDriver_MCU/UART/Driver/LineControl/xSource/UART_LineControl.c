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
#include <xDriver_MCU/UART/Driver/LineControl/UART_LineControl.h>


UART_nERROR UART__enSetLineControl(UART_nMODULE enModuleArg, UART_nLENGTH enDataLengthArg,
                           UART_nSTATE enFifoStateArg, UART_nSTOP enStopBitsArg,
                           UART_nPARITY enParityTypeArg)
{
    UART_nERROR enErrorReg;

    enErrorReg = UART__enSetDataLength(enModuleArg, enDataLengthArg);
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetFifoState(enModuleArg, enFifoStateArg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetStopBits(enModuleArg, enStopBitsArg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetParityType(enModuleArg, enParityTypeArg);
    }
    return (enErrorReg);
}

UART_nERROR UART__enSetLineControlStructure(UART_nMODULE enModuleArg, const UART_LINE_CONTROL_t stLineControlArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetLineControl(enModuleArg,
                                        stLineControlArg.enDataLength, stLineControlArg.enFifoState,
                                        stLineControlArg.enStopBits, stLineControlArg.enParityType);
    return (enErrorReg);
}

UART_nERROR UART__enSetLineControlStructurePointer(UART_nMODULE enModuleArg, const UART_LINE_CONTROL_t* pstLineControlArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) pstLineControlArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetLineControl(enModuleArg,
                                            pstLineControlArg->enDataLength, pstLineControlArg->enFifoState,
                                            pstLineControlArg->enStopBits, pstLineControlArg->enParityType);
    }
    return (enErrorReg);
}
