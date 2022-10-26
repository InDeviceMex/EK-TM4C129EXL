/**
 *
 * @file UART_BaudRate.c
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
 * @verbatim 22 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/xHeader/UART_BaudRate.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetBaudRateIntegerPart(UART_nMODULE enModuleArg, UBase_t uxIntegerArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_IBRD_R_DIVINT_BIT;
    stRegister.uxMask = UART_IBRD_DIVINT_MASK;
    stRegister.uptrAddress = UART_IBRD_OFFSET;
    stRegister.uxValue = (UBase_t) uxIntegerArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetBaudRateIntegerPart(UART_nMODULE enModuleArg, UBase_t* puxIntegerArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxIntegerArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_IBRD_R_DIVINT_BIT;
        stRegister.uxMask = UART_IBRD_DIVINT_MASK;
        stRegister.uptrAddress = UART_IBRD_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *puxIntegerArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}


UART_nERROR UART__enSetBaudRateFractionalPart(UART_nMODULE enModuleArg, UBase_t uxFractionalArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_FBRD_R_DIVFRAC_BIT;
    stRegister.uxMask = UART_FBRD_DIVFRAC_MASK;
    stRegister.uptrAddress = UART_FBRD_OFFSET;
    stRegister.uxValue = (UBase_t) uxFractionalArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetBaudRateFractionalPart(UART_nMODULE enModuleArg, UBase_t* puxFractionalArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxFractionalArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_FBRD_R_DIVFRAC_BIT;
        stRegister.uxMask = UART_FBRD_DIVFRAC_MASK;
        stRegister.uptrAddress = UART_FBRD_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *puxFractionalArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}


