/**
 *
 * @file I2C_MasterTransmitReceive.c
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
 * @verbatim Mar 30, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 30, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/App/Operations/xHeader/I2C_MasterTransmitReceive.h>

#include <xDriver_MCU/I2C/App/Operations/xHeader/I2C_MasterTransmit.h>
#include <xDriver_MCU/I2C/App/Operations/xHeader/I2C_MasterReceive.h>

I2C_nSTATUS I2C_Master_enTransmitReceive(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg,
                                         const uint8_t *pu8DataTransmit, uint32_t u32DataTransmitSize,
                                         uint8_t *pu8DataReceive, uint32_t u32DataReceiveSize)
{
    I2C_nSTATUS enStatus = I2C_enSTATUS_OK;
    enStatus = I2C_Master_enTransmitGeneric(enModule, I2C_enMULTIMASTER_ENA, I2C_enSTOPCONDITION_DIS, u32SlaveAddressArg, pu8DataTransmit, u32DataTransmitSize);
    if(I2C_enSTATUS_OK == enStatus)
    {
        enStatus = I2C_Master_enReceiveGeneric(enModule, I2C_enMULTIMASTER_DIS, I2C_enSTOPCONDITION_ENA, u32SlaveAddressArg, pu8DataReceive, u32DataReceiveSize);
    }
    return enStatus;
}

I2C_nSTATUS I2C_Master_enReceiveTransmit(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg,
                                         const uint8_t *pu8DataTransmit, uint32_t u32DataTransmitSize,
                                         uint8_t *pu8DataReceive, uint32_t u32DataReceiveSize)
{
    I2C_nSTATUS enStatus = I2C_enSTATUS_OK;
    enStatus = I2C_Master_enReceiveGeneric(enModule, I2C_enMULTIMASTER_ENA, I2C_enSTOPCONDITION_DIS, u32SlaveAddressArg, pu8DataReceive, u32DataReceiveSize);
    if(I2C_enSTATUS_OK == enStatus)
    {
        enStatus = I2C_Master_enTransmitGeneric(enModule, I2C_enMULTIMASTER_DIS, I2C_enSTOPCONDITION_ENA, u32SlaveAddressArg, pu8DataTransmit, u32DataTransmitSize);
    }
    return enStatus;
}

