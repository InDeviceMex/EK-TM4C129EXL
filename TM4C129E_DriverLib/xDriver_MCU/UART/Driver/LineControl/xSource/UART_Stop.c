/**
 *
 * @file UART_Stop.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Stop.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetStopBits(UART_nMODULE enModuleArg, UART_nSTOP enNumberArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_LCRH_R_STP2_BIT;
    stRegister.uxMask = UART_LCRH_STP2_MASK;
    stRegister.uptrAddress = UART_LCRH_OFFSET;
    stRegister.uxValue = (UBase_t) enNumberArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetStopBits(UART_nMODULE enModuleArg, UART_nSTOP* penNumberArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penNumberArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_LCRH_R_STP2_BIT;
        stRegister.uxMask = UART_LCRH_STP2_MASK;
        stRegister.uptrAddress = UART_LCRH_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penNumberArg = (UART_nSTOP) stRegister.uxValue;
    }

    return (enErrorReg);
}

