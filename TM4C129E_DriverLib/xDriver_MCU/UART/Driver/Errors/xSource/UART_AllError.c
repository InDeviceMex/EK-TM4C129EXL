/**
 *
 * @file UART_AllError.c
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
#include <xDriver_MCU/UART/Driver/Errors/xHeader/UART_AllError.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>


UART_nERROR UART__enGetReceiveErrorStatus(UART_nMODULE enModuleArg, UART_nRECEIVE_ERROR* penStatusArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_RSR_R_FE_BIT;
        stRegister.uxMask = UART_RSR_R_BE_MASK | UART_RSR_R_FE_MASK | UART_RSR_R_OE_MASK | UART_RSR_R_PE_MASK;
        stRegister.uptrAddress = UART_RSR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (UART_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enClearReceiveError(UART_nMODULE enModuleArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = 0UL;
    stRegister.uxMask = MCU_MASK_32;
    stRegister.uptrAddress = UART_ECR_OFFSET;
    stRegister.uxValue = (UBase_t) 0UL;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}
