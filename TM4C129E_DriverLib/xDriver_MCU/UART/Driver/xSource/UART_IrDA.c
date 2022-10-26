/**
 *
 * @file UART_IrDA.c
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
#include <xDriver_MCU/UART/Driver/xHeader/UART_IrDA.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetIrDALowPowerDivisor(UART_nMODULE enModuleArg, UBase_t uxDivisorArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_ILPR_R_ILPDVSR_BIT;
    stRegister.uxMask = UART_ILPR_ILPDVSR_MASK;
    stRegister.uptrAddress = UART_ILPR_OFFSET;
    stRegister.uxValue = (UBase_t) uxDivisorArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetIrDALowPowerDivisor(UART_nMODULE enModuleArg, UBase_t* puxDivisorArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxDivisorArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_ILPR_R_ILPDVSR_BIT;
        stRegister.uxMask = UART_ILPR_ILPDVSR_MASK;
        stRegister.uptrAddress = UART_ILPR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *puxDivisorArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}
