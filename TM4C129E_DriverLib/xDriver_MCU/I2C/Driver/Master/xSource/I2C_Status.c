/**
 *
 * @file I2C_Status.c
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
 * @verbatim Mar 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_Status.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nSTATUS I2C_Master__enIsTimeoutError(I2C_nMODULE enModule)
{
    I2C_nSTATUS enStatusReg = I2C_enSTATUS_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCS_OFFSET, (uint32_t*) &enStatusReg, I2C_MCS_CLKTO_MASK, I2C_MCS_R_CLKTO_BIT);
    return enStatusReg;
}

I2C_nBUSY I2C_Master__enIsBusBusy(I2C_nMODULE enModule)
{
    I2C_nBUSY enBusStateReg = I2C_enBUSY_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCS_OFFSET, (uint32_t*) &enBusStateReg, I2C_MCS_BUSBSY_MASK, I2C_MCS_R_BUSBSY_BIT);
    return enBusStateReg;
}

I2C_nIDLE I2C_Master__enIsControllerIdle(I2C_nMODULE enModule)
{
    I2C_nIDLE enControllerIdleReg = I2C_enIDLE_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCS_OFFSET, (uint32_t*) &enControllerIdleReg, I2C_MCS_IDLE_MASK, I2C_MCS_R_IDLE_BIT);
    return enControllerIdleReg;
}

I2C_nARBITRATION I2C_Master__enIsArbitrationLost(I2C_nMODULE enModule)
{
    I2C_nARBITRATION enArbitrationReg = I2C_enARBITRATION_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCS_OFFSET, (uint32_t*) &enArbitrationReg, I2C_MCS_ARBLST_MASK, I2C_MCS_R_ARBLST_BIT);
    return enArbitrationReg;
}

I2C_nACK I2C_Master__enIsTransmittedDataNACK(I2C_nMODULE enModule)
{
    I2C_nACK enAckReg = I2C_enACK_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCS_OFFSET, (uint32_t*) &enAckReg, I2C_MCS_DATACK_MASK, I2C_MCS_R_DATACK_BIT);
    return enAckReg;
}

I2C_nACK I2C_Master__enIsTransmittedAddressNACK(I2C_nMODULE enModule)
{
    I2C_nACK enAckReg = I2C_enACK_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCS_OFFSET, (uint32_t*) &enAckReg, I2C_MCS_ADRACK_MASK, I2C_MCS_R_ADRACK_BIT);
    return enAckReg;
}

I2C_nSTATUS I2C_Master__enIsLastOperationError(I2C_nMODULE enModule)
{
    I2C_nSTATUS enStatusReg = I2C_enSTATUS_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCS_OFFSET, (uint32_t*) &enStatusReg, I2C_MCS_ERROR_MASK, I2C_MCS_R_ERROR_BIT);
    return enStatusReg;
}

I2C_nBUSY I2C_Master__enIsControllerBusy(I2C_nMODULE enModule)
{
    I2C_nBUSY enControllerStateReg = I2C_enBUSY_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCS_OFFSET, (uint32_t*) &enControllerStateReg, I2C_MCS_BUSY_MASK, I2C_MCS_R_BUSY_BIT);
    return enControllerStateReg;
}


