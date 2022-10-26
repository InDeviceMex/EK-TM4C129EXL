/**
 *
 * @file UART_FifoTx.c
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
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_FifoTx.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enIsTransmitFifoEmpty(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_FR_R_TXFE_BIT;
        stRegister.uxMask = UART_FR_TXFE_MASK;
        stRegister.uptrAddress = UART_FR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        if(UART_FR_TXFE_NOEMPTY == stRegister.uxValue)
        {
            *penStateArg = UART_enFALSE;
        }
        else
        {
            *penStateArg = UART_enTRUE;
        }
    }

    return (enErrorReg);
}

UART_nERROR UART__enIsTransmitFifoFull(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_FR_R_TXFF_BIT;
        stRegister.uxMask = UART_FR_TXFF_MASK;
        stRegister.uptrAddress = UART_FR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        if(UART_FR_TXFF_NOFULL == stRegister.uxValue)
        {
            *penStateArg = UART_enFALSE;
        }
        else
        {
            *penStateArg = UART_enTRUE;
        }
    }

    return (enErrorReg);
}
