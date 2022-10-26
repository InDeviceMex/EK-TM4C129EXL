/**
 *
 * @file UART_9BitAddress.c
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
#include <xDriver_MCU/UART/Driver/xHeader/UART_9BitAddress.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetMultiDropState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_BIT9ADDR_R_BIT9EN_BIT;
    stRegister.uxMask = UART_BIT9ADDR_BIT9EN_MASK;
    stRegister.uptrAddress = UART_BIT9ADDR_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetMultiDropState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg)
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
        stRegister.uxShift = UART_BIT9ADDR_R_BIT9EN_BIT;
        stRegister.uxMask = UART_BIT9ADDR_BIT9EN_MASK;
        stRegister.uptrAddress = UART_BIT9ADDR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enSetSelfAddress(UART_nMODULE enModuleArg, UBase_t uxAddressArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_BIT9ADDR_R_ADDR_BIT;
    stRegister.uxMask = UART_BIT9ADDR_ADDR_MASK;
    stRegister.uptrAddress = UART_BIT9ADDR_OFFSET;
    stRegister.uxValue = (UBase_t) uxAddressArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetSelfAddress(UART_nMODULE enModuleArg, UBase_t* puxAddressArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxAddressArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_BIT9ADDR_R_ADDR_BIT;
        stRegister.uxMask = UART_BIT9ADDR_ADDR_MASK;
        stRegister.uptrAddress = UART_BIT9ADDR_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *puxAddressArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enSetSelfAddressMask(UART_nMODULE enModuleArg, UBase_t uxAddressMaskArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_BIT9AMASK_R_MASK_BIT;
    stRegister.uxMask = UART_BIT9AMASK_MASK_MASK;
    stRegister.uptrAddress = UART_BIT9AMASK_OFFSET;
    stRegister.uxValue = (UBase_t) uxAddressMaskArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetSelfAddressMask(UART_nMODULE enModuleArg, UBase_t* puxAddressMaskArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxAddressMaskArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_BIT9AMASK_R_MASK_BIT;
        stRegister.uxMask = UART_BIT9AMASK_MASK_MASK;
        stRegister.uptrAddress = UART_BIT9AMASK_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *puxAddressMaskArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enSetSelfAddressWithMask(UART_nMODULE enModuleArg, UBase_t uxAddressArg, UBase_t uxAddressMaskArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetSelfAddress(enModuleArg, uxAddressArg);
    if(UART_enERROR_OK == enErrorReg)
    {
        UART__enSetSelfAddressMask(enModuleArg, uxAddressMaskArg);
    }
    return (enErrorReg);
}


UART_nERROR UART__enGetSelfAddressWithMask(UART_nMODULE enModuleArg, UBase_t* puxAddressArg, UBase_t* puxAddressMaskArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enGetSelfAddress(enModuleArg, puxAddressArg);
    if(UART_enERROR_OK == enErrorReg)
    {
        UART__enGetSelfAddressMask(enModuleArg, puxAddressMaskArg);
    }
    return (enErrorReg);
}
