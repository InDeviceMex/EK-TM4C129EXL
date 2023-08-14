/**
 *
 * @file I2C_HighSpeed.c
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
 * @verbatim Mar 27, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 27, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/xHeader/I2C_HighSpeed.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C__enIsHighSpeedAvailable(I2C_nMODULE enModuleArg, I2C_nBOOLEAN* penStatusArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;
    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_PP_R_HS_BIT;
        stRegister.uxMask = I2C_PP_HS_MASK;
        stRegister.uptrAddress = I2C_PP_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (I2C_nBOOLEAN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}


I2C_nERROR I2C__enSetHighSpeedState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg)
{
    I2C_nERROR enErrorReg;
    I2C_nBOOLEAN enAvailable;
    enAvailable = I2C_enFALSE;
    enErrorReg = I2C__enIsHighSpeedAvailable(enModuleArg, &enAvailable);
    if((I2C_enERROR_OK == enErrorReg) && (I2C_enFALSE == enAvailable) && (I2C_enSTATE_ENA == enStateArg))
    {
        enErrorReg = I2C_enERROR_VALUE;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_PC_R_HS_BIT;
        stRegister.uxMask = I2C_PC_HS_MASK;
        stRegister.uptrAddress = I2C_PC_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}


I2C_nERROR I2C__enGetHighSpeedState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;
    I2C_nBOOLEAN enAvailable;
    enAvailable = I2C_enFALSE;
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C__enIsHighSpeedAvailable(enModuleArg, &enAvailable);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enFALSE == enAvailable)
        {
            *penStateArg = I2C_enSTATE_DIS;
        }
        else
        {
            I2C_Register_t stRegister;
            stRegister.uxShift = 0UL;
            stRegister.uxMask = MCU_MASK_BASE;
            stRegister.uptrAddress = I2C_MASTER_DATA_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *penStateArg = (I2C_nSTATE) stRegister.uxValue;
            }
        }
    }
    return (enErrorReg);
}

