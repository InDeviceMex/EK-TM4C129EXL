/**
 *
 * @file UART_Fifo.c
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
#include <xDriver_MCU/UART/Driver/xHeader/UART_Fifo.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetReceiveFifoLevel(UART_nMODULE enModuleArg, UART_nFIFO_LEVEL enFifoLevelArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_IFLS_R_RXIFLSEL_BIT;
    stRegister.uxMask = UART_IFLS_RXIFLSEL_MASK;
    stRegister.uptrAddress = UART_IFLS_OFFSET;
    stRegister.uxValue = (UBase_t) enFifoLevelArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetReceiveFifoLevel(UART_nMODULE enModuleArg, UART_nFIFO_LEVEL* penFifoLevelArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penFifoLevelArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_IFLS_R_RXIFLSEL_BIT;
        stRegister.uxMask = UART_IFLS_RXIFLSEL_MASK;
        stRegister.uptrAddress = UART_IFLS_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penFifoLevelArg = (UART_nFIFO_LEVEL) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enSetTransmitFifoLevel(UART_nMODULE enModuleArg, UART_nFIFO_LEVEL enFifoLevelArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_IFLS_R_TXIFLSEL_BIT;
    stRegister.uxMask = UART_IFLS_TXIFLSEL_MASK;
    stRegister.uptrAddress = UART_IFLS_OFFSET;
    stRegister.uxValue = (UBase_t) enFifoLevelArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetTransmitFifoLevel(UART_nMODULE enModuleArg, UART_nFIFO_LEVEL* penFifoLevelArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penFifoLevelArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_IFLS_R_TXIFLSEL_BIT;
        stRegister.uxMask = UART_IFLS_TXIFLSEL_MASK;
        stRegister.uptrAddress = UART_IFLS_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penFifoLevelArg = (UART_nFIFO_LEVEL) stRegister.uxValue;
    }

    return (enErrorReg);
}
