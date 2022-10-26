/**
 *
 * @file UART_HighSpeed.c
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
 * @verbatim 7 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_HighSpeed.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetClockSourceDivider(UART_nMODULE enModuleArg, UART_nCLOCK_DIVIDER enDividerArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_CTL_R_HSE_BIT;
    stRegister.uxMask = UART_CTL_HSE_MASK;
    stRegister.uptrAddress = UART_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enDividerArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetClockSourceDivider(UART_nMODULE enModuleArg, UART_nCLOCK_DIVIDER* penDividerArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penDividerArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_CTL_R_HSE_BIT;
        stRegister.uxMask = UART_CTL_HSE_MASK;
        stRegister.uptrAddress = UART_CTL_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penDividerArg = (UART_nCLOCK_DIVIDER) stRegister.uxValue;
    }

    return (enErrorReg);
}
