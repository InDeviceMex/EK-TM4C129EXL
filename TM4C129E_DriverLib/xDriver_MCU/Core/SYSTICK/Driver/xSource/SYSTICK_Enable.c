/**
 *
 * @file SYSTICK_Enable.c
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
 * @verbatim 18 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Enable.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/Primitives/SYSTICK_Primitives.h>

SYSTICK_nERROR SYSTICK__enSetState(SYSTICK_nMODULE enModuleArg,
                                   SYSTICK_nSTATE enEnableStateArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    stRegister.uxShift = SYSTICK_CSR_R_ENABLE_BIT;
    stRegister.uxMask = SYSTICK_CSR_ENABLE_MASK;
    stRegister.uptrAddress = SYSTICK_CSR_OFFSET;
    stRegister.uxValue = (UBase_t) enEnableStateArg;
    enErrorReg = SYSTICK__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enEnable(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enSetState(enModuleArg, SYSTICK_enSTATE_ENA);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enDisable(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enSetState(enModuleArg, SYSTICK_enSTATE_DIS);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enGetState(SYSTICK_nMODULE enModuleArg,
                                   SYSTICK_nSTATE* penEnableStateArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK_enERROR_OK;
    if(0UL == (uintptr_t) penEnableStateArg)
    {
        enErrorReg = SYSTICK_enERROR_POINTER;
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SYSTICK_CSR_R_ENABLE_BIT;
        stRegister.uxMask = SYSTICK_CSR_ENABLE_MASK;
        stRegister.uptrAddress = SYSTICK_CSR_OFFSET;
        enErrorReg = SYSTICK__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        *penEnableStateArg = (SYSTICK_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}



