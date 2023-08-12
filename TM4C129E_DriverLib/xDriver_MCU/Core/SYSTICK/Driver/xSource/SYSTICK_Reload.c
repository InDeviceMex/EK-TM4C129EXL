/**
 *
 * @file SYSTICK_Reload.c
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
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Reload.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/Primitives/SYSTICK_Primitives.h>

SYSTICK_nERROR SYSTICK__enClearReloadValue(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_Register_t stRegister;
    stRegister.uxShift = SYSTICK_RVR_R_RELOAD_BIT;
    stRegister.uxMask = SYSTICK_RVR_RELOAD_MASK;
    stRegister.uptrAddress = SYSTICK_RVR_OFFSET;
    stRegister.uxValue = 0U;

    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enSetReloadValue(SYSTICK_nMODULE enModuleArg, UBase_t uxReloadValueArg)
{
    SYSTICK_Register_t stRegister;
    stRegister.uxShift = SYSTICK_RVR_R_RELOAD_BIT;
    stRegister.uxMask = SYSTICK_RVR_RELOAD_MASK;
    stRegister.uptrAddress = SYSTICK_RVR_OFFSET;
    stRegister.uxValue = (UBase_t) uxReloadValueArg;

    SYSTICK_nERROR enErrorReg;
    enErrorReg = (0UL < uxReloadValueArg) ? SYSTICK__enWriteRegister(enModuleArg, &stRegister) :  SYSTICK_enERROR_VALUE;
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enGetReloadValue(SYSTICK_nMODULE enModuleArg, UBase_t* uxValueArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) uxValueArg) ? SYSTICK_enERROR_POINTER : SYSTICK_enERROR_OK;
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        SYSTICK_Register_t stRegister;
        stRegister.uxShift = SYSTICK_RVR_R_RELOAD_BIT;
        stRegister.uxMask = SYSTICK_RVR_RELOAD_MASK;
        stRegister.uptrAddress = SYSTICK_RVR_OFFSET;
        enErrorReg = SYSTICK__enReadRegister(enModuleArg, &stRegister);
        if(SYSTICK_enERROR_OK == enErrorReg)
        {
            *uxValueArg = stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
