/**
 *
 * @file UART_Propierties.c
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
#include <xDriver_MCU/UART/Driver/xHeader/UART_Propierties.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enIsMultiDropSupported(UART_nMODULE enModuleArg, UART_nBOOLEAN* pboStatusArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) pboStatusArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_PP_R_NB_BIT;
        stRegister.uxMask = UART_PP_NB_MASK;
        stRegister.uptrAddress = UART_PP_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *pboStatusArg = (UART_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enIsSmartCardSupported(UART_nMODULE enModuleArg, UART_nBOOLEAN* pboStatusArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) pboStatusArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_PP_R_SC_BIT;
        stRegister.uxMask = UART_PP_SC_MASK;
        stRegister.uptrAddress = UART_PP_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *pboStatusArg = (UART_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enIsModemSupported(UART_nMODULE enModuleArg, UART_nBOOLEAN* pboStatusArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) pboStatusArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_PP_R_MS_BIT;
        stRegister.uxMask = UART_PP_MS_MASK;
        stRegister.uptrAddress = UART_PP_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *pboStatusArg = (UART_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enIsModemExtendedSupported(UART_nMODULE enModuleArg, UART_nBOOLEAN* pboStatusArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) pboStatusArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_PP_R_MSE_BIT;
        stRegister.uxMask = UART_PP_MSE_MASK;
        stRegister.uptrAddress = UART_PP_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *pboStatusArg = (UART_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}
