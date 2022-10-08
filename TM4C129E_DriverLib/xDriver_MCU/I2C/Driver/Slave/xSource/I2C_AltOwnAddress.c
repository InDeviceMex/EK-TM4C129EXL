/**
 *
 * @file I2C_AltOwnAddress.c
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
 * @verbatim Mar 24, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 24, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_AltOwnAddress.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Slave__enSetOwnAddressAlternateState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.uxShift = I2C_SLAVE_OAR2_R_OAR2EN_BIT;
    stRegister.uxMask = I2C_SLAVE_OAR2_OAR2EN_MASK;
    stRegister.uptrAddress = I2C_SLAVE_OAR2_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetOwnAddressAlternateState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_SLAVE_OAR2_R_OAR2EN_BIT;
        stRegister.uxMask = I2C_SLAVE_OAR2_OAR2EN_MASK;
        stRegister.uptrAddress = I2C_SLAVE_OAR2_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penStateArg = (I2C_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enSetOwnAddressAlternate(I2C_nMODULE enModuleArg, UBase_t uxOwnAddressArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.uxShift = I2C_SLAVE_OAR2_R_OAR2_BIT;
    stRegister.uxMask = I2C_SLAVE_OAR2_OAR2_MASK;
    stRegister.uptrAddress = I2C_SLAVE_OAR2_OFFSET;
    stRegister.uxValue = (UBase_t) uxOwnAddressArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetOwnAddressAlternate(I2C_nMODULE enModuleArg, UBase_t* puxOwnAddressArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) puxOwnAddressArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_SLAVE_OAR2_R_OAR2_BIT;
        stRegister.uxMask = I2C_SLAVE_OAR2_OAR2_MASK;
        stRegister.uptrAddress = I2C_SLAVE_OAR2_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *puxOwnAddressArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enSetOwnAddressAlternateWithState(I2C_nMODULE enModuleArg, UBase_t uxOwnAddressArg, I2C_nSTATE enStateArg)
{
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_Slave__enSetOwnAddressAlternateState(enModuleArg, enStateArg);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Slave__enSetOwnAddressAlternate(enModuleArg, uxOwnAddressArg);
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetOwnAddressAlternateWithState(I2C_nMODULE enModuleArg, UBase_t* puxOwnAddressArg, I2C_nSTATE* penStateArg)
{
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_Slave__enGetOwnAddressAlternateState(enModuleArg, penStateArg);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Slave__enGetOwnAddressAlternate(enModuleArg, puxOwnAddressArg);
    }
    return (enErrorReg);
}

