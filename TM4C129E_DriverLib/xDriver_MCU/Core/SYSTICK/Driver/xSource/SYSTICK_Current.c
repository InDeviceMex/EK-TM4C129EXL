/**
 *
 * @file SYSTICK_Current.c
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
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Current.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/Primitives/SYSTICK_Primitives.h>

SYSTICK_nERROR SYSTICK__enClearCurrentValue(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    stRegister.u32Shift = SYSTICK_CVR_R_CURRENT_BIT;
    stRegister.u32Mask = MCU_MASK_32;
    stRegister.uptrAddress = SYSTICK_CVR_OFFSET;
    stRegister.u32Value = 0U;
    enErrorReg = SYSTICK__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}
SYSTICK_nERROR SYSTICK__enGetCurrentValue(SYSTICK_nMODULE enModuleArg,
                                         uint32_t* u32ValueArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK_enERROR_OK;
    if(0UL == (uintptr_t) u32ValueArg)
    {
        enErrorReg = SYSTICK_enERROR_POINTER;
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = SYSTICK_CVR_R_CURRENT_BIT;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = SYSTICK_CVR_OFFSET;
        enErrorReg = SYSTICK__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        *u32ValueArg = stRegister.u32Value;
    }
    return (enErrorReg);
}



