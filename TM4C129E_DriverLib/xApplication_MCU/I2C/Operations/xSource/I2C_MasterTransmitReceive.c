/**
 *
 * @file I2C_MasterTransmitReceive.c
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
 * @verbatim 31 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/I2C/Operations/xHeader/I2C_MasterTransmitReceive.h>
#include <xApplication_MCU/I2C/Operations/xHeader/I2C_MasterTransmit.h>
#include <xApplication_MCU/I2C/Operations/xHeader/I2C_MasterReceive.h>

I2C_nERROR I2C_Master_enTransmitReceive(I2C_nMODULE enModule, UBase_t uxSlaveAddressArg,
                                         const uint8_t *pu8DataTransmit, UBase_t uxDataTransmitSize,
                                         uint8_t *pu8DataReceive, UBase_t uxDataReceiveSize)
{
    I2C_nERROR enStatus;
    enStatus = I2C_Master_enTransmitGeneric(enModule, I2C_enSTATE_ENA, I2C_enSTATE_DIS, uxSlaveAddressArg, pu8DataTransmit, uxDataTransmitSize);
    if(I2C_enERROR_OK == enStatus)
    {
        enStatus = I2C_Master_enReceiveGeneric(enModule, I2C_enSTATE_DIS, I2C_enSTATE_ENA, uxSlaveAddressArg, pu8DataReceive, uxDataReceiveSize);
    }
    return enStatus;
}

I2C_nERROR I2C_Master_enReceiveTransmit(I2C_nMODULE enModule, UBase_t uxSlaveAddressArg,
                                         const uint8_t *pu8DataTransmit, UBase_t uxDataTransmitSize,
                                         uint8_t *pu8DataReceive, UBase_t uxDataReceiveSize)
{
    I2C_nERROR enStatus;
    enStatus = I2C_Master_enReceiveGeneric(enModule, I2C_enSTATE_ENA, I2C_enSTATE_DIS, uxSlaveAddressArg, pu8DataReceive, uxDataReceiveSize);
    if(I2C_enERROR_OK == enStatus)
    {
        enStatus = I2C_Master_enTransmitGeneric(enModule, I2C_enSTATE_DIS, I2C_enSTATE_ENA, uxSlaveAddressArg, pu8DataTransmit, uxDataTransmitSize);
    }
    return enStatus;
}


