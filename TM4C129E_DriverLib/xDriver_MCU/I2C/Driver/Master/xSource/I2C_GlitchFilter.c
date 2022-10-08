/**
 *
 * @file I2C_GlitchFilter.c
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
 * @verbatim 27 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_GlitchFilter.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Master__enSetGlitchFilter(I2C_nMODULE enModuleArg, I2C_nGLITCH_CLOCK enGlitchFilterArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.uxShift = I2C_MASTER_TPR_R_PULSEL_BIT;
    stRegister.uxMask = I2C_MASTER_TPR_PULSEL_MASK;
    stRegister.uptrAddress = I2C_MASTER_TPR_OFFSET;
    stRegister.uxValue = (UBase_t) enGlitchFilterArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetGlitchFilter(I2C_nMODULE enModuleArg, I2C_nGLITCH_CLOCK* penGlitchFilterArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penGlitchFilterArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_MASTER_TPR_R_PULSEL_BIT;
        stRegister.uxMask = I2C_MASTER_TPR_PULSEL_MASK;
        stRegister.uptrAddress = I2C_MASTER_TPR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penGlitchFilterArg = (I2C_nGLITCH_CLOCK) stRegister.uxValue;
    }

    return (enErrorReg);
}

