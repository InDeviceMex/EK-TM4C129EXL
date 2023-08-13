/**
 *
 * @file WDT_Reset.c
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Reset.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nERROR WDT__enSetResetOutputState(WDT_nMODULE enModuleArg, WDT_nSTATE enStateArg)
{
    WDT_Register_t stRegister;
    stRegister.uxShift = WDT_CTL_R_RESEN_BIT;
    stRegister.uxMask = WDT_CTL_RESEN_MASK;
    stRegister.uptrAddress = WDT_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

WDT_nERROR WDT__enEnableResetOutput(WDT_nMODULE enModuleArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetResetOutputState(enModuleArg, WDT_enSTATE_ENA);
    return (enErrorReg);
}

WDT_nERROR WDT__enDisableResetOutput(WDT_nMODULE enModuleArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetResetOutputState(enModuleArg, WDT_enSTATE_DIS);
    return (enErrorReg);
}

WDT_nERROR WDT__enGetResetOutputState(WDT_nMODULE enModuleArg, WDT_nSTATE* penStateArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;

    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = WDT_CTL_R_RESEN_BIT;
        stRegister.uxMask = WDT_CTL_RESEN_MASK;
        stRegister.uptrAddress = WDT_CTL_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penStateArg = (WDT_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

