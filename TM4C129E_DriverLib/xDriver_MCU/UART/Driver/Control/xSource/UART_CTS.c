/**
 *
 * @file UART_CTS.c
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
 * @verbatim 8 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_CTS.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetClearToSendMode(UART_nMODULE enModuleArg, UART_nLINE_MODE enModeArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_CTL_R_CTSEN_BIT;
    stRegister.uxMask = UART_CTL_CTSEN_MASK;
    stRegister.uptrAddress = UART_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enModeArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetClearToSendMode(UART_nMODULE enModuleArg, UART_nLINE_MODE* penModeArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_CTL_R_CTSEN_BIT;
        stRegister.uxMask = UART_CTL_CTSEN_MASK;
        stRegister.uptrAddress = UART_CTL_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penModeArg = (UART_nLINE_MODE) stRegister.uxValue;
    }

    return (enErrorReg);
}

