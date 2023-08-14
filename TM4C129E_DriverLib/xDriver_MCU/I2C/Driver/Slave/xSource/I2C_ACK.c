/**
 *
 * @file I2C_ACK.c
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
 * @verbatim 17 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_ACK.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Slave__enSetACKOverrideState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    stRegister.uxShift = I2C_SLAVE_ACKCTL_R_ACKOEN_BIT;
    stRegister.uxMask = I2C_SLAVE_ACKCTL_ACKOEN_MASK;
    stRegister.uptrAddress = I2C_SLAVE_ACKCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    I2C_nERROR enErrorReg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetACKOverrideState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;
    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_SLAVE_ACKCTL_R_ACKOEN_BIT;
        stRegister.uxMask = I2C_SLAVE_ACKCTL_ACKOEN_MASK;
        stRegister.uptrAddress = I2C_SLAVE_ACKCTL_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *penStateArg = (I2C_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enSetACKOverrideValue(I2C_nMODULE enModuleArg, I2C_nACK enValueArg)
{
    I2C_Register_t stRegister;
    stRegister.uxShift = I2C_SLAVE_ACKCTL_R_ACKOVAL_BIT;
    stRegister.uxMask = I2C_SLAVE_ACKCTL_ACKOVAL_MASK;
    stRegister.uptrAddress = I2C_SLAVE_ACKCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enValueArg;

    I2C_nERROR enErrorReg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetACKOverrideValue(I2C_nMODULE enModuleArg, I2C_nACK* penValueArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penValueArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;
    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_SLAVE_ACKCTL_R_ACKOVAL_BIT;
        stRegister.uxMask = I2C_SLAVE_ACKCTL_ACKOVAL_MASK;
        stRegister.uptrAddress = I2C_SLAVE_ACKCTL_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *penValueArg = (I2C_nACK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

