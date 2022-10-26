/**
 *
 * @file UART_Parity.c
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
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Parity.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetParityType(UART_nMODULE enModuleArg, UART_nPARITY enParityArg)
{
    UART_Register_t stRegister;
    UBase_t uxParityStateReg;
    UBase_t uxParityTypeReg;
    UBase_t uxParityStickReg;
    UART_nERROR enErrorReg;

    stRegister.uxMask = UART_LCRH_SPS_MASK;

    uxParityStateReg = (UBase_t) enParityArg;
    uxParityStateReg >>= 2UL;
    uxParityStateReg &= 1UL;
    uxParityStateReg ^= uxParityStateReg;

    uxParityStickReg = (UBase_t) enParityArg;
    uxParityStickReg >>= 1UL;
    uxParityStickReg &= 1UL;

    uxParityTypeReg = (UBase_t) enParityArg;
    uxParityTypeReg &= 1UL;

    stRegister.uxShift = UART_LCRH_R_PEN_BIT;
    stRegister.uptrAddress = UART_LCRH_OFFSET;
    stRegister.uxValue = (UBase_t) uxParityStateReg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_LCRH_R_SPS_BIT;
        stRegister.uptrAddress = UART_LCRH_OFFSET;
        stRegister.uxValue = (UBase_t) uxParityStickReg;
        enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_LCRH_R_EPS_BIT;
        stRegister.uptrAddress = UART_LCRH_OFFSET;
        stRegister.uxValue = (UBase_t) uxParityTypeReg;
        enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}


UART_nERROR UART__enGetParityType(UART_nMODULE enModuleArg, UART_nPARITY* enParityArg)
{
    UART_Register_t stRegister;
    UBase_t uxParityReg;
    UART_nERROR enErrorReg;

    uxParityReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) enParityArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_LCRH_R_PEN_BIT;
        stRegister.uxMask = UART_LCRH_PEN_MASK;
        stRegister.uptrAddress = UART_LCRH_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxParityReg ^= stRegister.uxValue;
        uxParityReg <<= 2UL;
        stRegister.uxShift = UART_LCRH_R_SPS_BIT;
        stRegister.uxMask = UART_LCRH_SPS_MASK;
        stRegister.uptrAddress = UART_LCRH_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxValue <<= 1UL;
        uxParityReg |= stRegister.uxValue;
        stRegister.uxShift = UART_LCRH_R_EPS_BIT;
        stRegister.uxMask = UART_LCRH_EPS_MASK;
        stRegister.uptrAddress = UART_LCRH_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxParityReg |= stRegister.uxValue;
        *enParityArg = (UART_nPARITY) uxParityReg;
    }

    return (enErrorReg);
}
