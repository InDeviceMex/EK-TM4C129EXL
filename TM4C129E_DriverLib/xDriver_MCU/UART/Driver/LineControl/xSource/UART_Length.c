/**
 *
 * @file UART_Length.c
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
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Length.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetDataLength(UART_nMODULE enModuleArg, UART_nLENGTH enLengthArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_LCRH_R_WLEN_BIT;
    stRegister.uxMask = UART_LCRH_WLEN_MASK;
    stRegister.uptrAddress = UART_LCRH_OFFSET;
    stRegister.uxValue = (UBase_t) enLengthArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetDataLength(UART_nMODULE enModuleArg, UART_nLENGTH* penLengthArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penLengthArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_LCRH_R_WLEN_BIT;
        stRegister.uxMask = UART_LCRH_WLEN_MASK;
        stRegister.uptrAddress = UART_LCRH_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penLengthArg = (UART_nLENGTH) stRegister.uxValue;
    }

    return (enErrorReg);
}
