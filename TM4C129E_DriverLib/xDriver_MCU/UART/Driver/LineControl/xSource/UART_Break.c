/**
 *
 * @file UART_Break.c
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
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Break.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetBreakCharacterState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_LCRH_R_BRK_BIT;
    stRegister.uxMask = UART_LCRH_BRK_MASK;
    stRegister.uptrAddress = UART_LCRH_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetBreakCharacterState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg)
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
        stRegister.uxShift = UART_LCRH_R_BRK_BIT;
        stRegister.uxMask = UART_LCRH_BRK_MASK;
        stRegister.uptrAddress = UART_LCRH_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enSendBreakCharacter(UART_nMODULE enModuleArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetBreakCharacterState(enModuleArg, UART_enSTATE_ENA);
    return (enErrorReg);
}

UART_nERROR UART__enStopBreakCharacter(UART_nMODULE enModuleArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetBreakCharacterState(enModuleArg, UART_enSTATE_DIS);
    return (enErrorReg);
}
