/**
 *
 * @file UART_Modem.c
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
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_Modem.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enIsClearToSendAsserted(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg)
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
        stRegister.uxShift = UART_FR_R_CTS_BIT;
        stRegister.uxMask = UART_FR_CTS_MASK;
        stRegister.uptrAddress = UART_FR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enIsDataSetReadyAsserted(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg)
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
        stRegister.uxShift = UART_FR_R_DSR_BIT;
        stRegister.uxMask = UART_FR_DSR_MASK;
        stRegister.uptrAddress = UART_FR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enIsDataCarrierDetectAsserted(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg)
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
        stRegister.uxShift = UART_FR_R_DCD_BIT;
        stRegister.uxMask = UART_FR_DCD_MASK;
        stRegister.uptrAddress = UART_FR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}


UART_nERROR UART__enIsRingIndicatorAsserted(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg)
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
        stRegister.uxShift = UART_FR_R_RI_BIT;
        stRegister.uxMask = UART_FR_RI_MASK;
        stRegister.uptrAddress = UART_FR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}
