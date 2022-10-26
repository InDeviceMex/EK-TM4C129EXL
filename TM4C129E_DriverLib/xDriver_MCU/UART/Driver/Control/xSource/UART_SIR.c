/**
 *
 * @file UART_SIR.c
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
 * @verbatim 8 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_SIR.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetIrDAState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_CTL_R_SIREN_BIT;
    stRegister.uxMask = UART_CTL_SIREN_MASK;
    stRegister.uptrAddress = UART_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetIrDAState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg)
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
        stRegister.uxShift = UART_CTL_R_SIREN_BIT;
        stRegister.uxMask = UART_CTL_SIREN_MASK;
        stRegister.uptrAddress = UART_CTL_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}


UART_nERROR UART__enSetIrDALowPowerState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_CTL_R_SIRLP_BIT;
    stRegister.uxMask = UART_CTL_SIRLP_MASK;
    stRegister.uptrAddress = UART_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetIrDALowPowerState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg)
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
        stRegister.uxShift = UART_CTL_R_SIRLP_BIT;
        stRegister.uxMask = UART_CTL_SIRLP_MASK;
        stRegister.uptrAddress = UART_CTL_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}


UART_nERROR UART__enSetIrDAMode(UART_nMODULE enModuleArg, UART_nIRDA enModeArg)
{
    UBase_t uxIrdaStateReg;
    UBase_t uxIrdaLowPowerReg;
    UART_nERROR enErrorReg;

    uxIrdaStateReg = (UBase_t) enModeArg;
    uxIrdaStateReg &= 0x1UL;

    uxIrdaLowPowerReg = (UBase_t) enModeArg;
    uxIrdaLowPowerReg >>= 1UL;
    uxIrdaLowPowerReg &= 0x1UL;

    enErrorReg = UART__enSetIrDAState(enModuleArg, (UART_nSTATE) uxIrdaStateReg);
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enSetIrDALowPowerState(enModuleArg, (UART_nSTATE) uxIrdaLowPowerReg);
    }
    return (enErrorReg);
}

UART_nERROR UART__enGetIrDAMode(UART_nMODULE enModuleArg, UART_nIRDA* penModeArg)
{
    UART_nSTATE enIrdaStateReg;
    UART_nSTATE enIrdaLowPowerReg;
    UBase_t uxIrdaReg;
    UART_nERROR enErrorReg;

    uxIrdaReg = 0UL;
    enIrdaLowPowerReg = UART_enSTATE_DIS;
    enIrdaStateReg = UART_enSTATE_DIS;
    enErrorReg = UART__enGetIrDAState(enModuleArg, &enIrdaStateReg);
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetIrDALowPowerState(enModuleArg, &enIrdaLowPowerReg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxIrdaReg = (UBase_t) enIrdaLowPowerReg;
        uxIrdaReg &= 1UL;
        uxIrdaReg <<= 1UL;
        uxIrdaReg |= (UBase_t) enIrdaStateReg;
        *penModeArg = (UART_nIRDA) uxIrdaReg;
    }
    return (enErrorReg);
}

