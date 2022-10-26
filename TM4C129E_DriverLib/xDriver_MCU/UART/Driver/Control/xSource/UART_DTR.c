/**
 *
 * @file UART_DTR.c
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
 * @verbatim 25 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_DTR.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetDataTerminalReadyLevel(UART_nMODULE enModuleArg, UART_nLEVEL enLevelArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_CTL_R_DTR_BIT;
    stRegister.uxMask = UART_CTL_DTR_MASK;
    stRegister.uptrAddress = UART_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enLevelArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetDataTerminalReadyLevel(UART_nMODULE enModuleArg, UART_nLEVEL* penLevelArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penLevelArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_CTL_R_DTR_BIT;
        stRegister.uxMask = UART_CTL_DTR_MASK;
        stRegister.uptrAddress = UART_CTL_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penLevelArg = (UART_nLEVEL) stRegister.uxValue;
    }

    return (enErrorReg);
}





