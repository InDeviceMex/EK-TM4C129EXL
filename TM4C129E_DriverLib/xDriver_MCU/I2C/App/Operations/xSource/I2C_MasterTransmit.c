/**
 *
 * @file I2C_MasterTransmit.c
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
 * @verbatim Mar 29, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 29, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/App/Operations/xHeader/I2C_MasterTransmit.h>
#include <xDriver_MCU/I2C/App/Operations/xHeader/I2C_Common.h>
#include <xDriver_MCU/I2C/Driver/I2C_Driver.h>

I2C_nSTATUS I2C_Master_enTransmitGeneric(I2C_nMODULE enModule, I2C_nMULTIMASTER enMultiMasterArg, I2C_nSTOPCONDITION enStopConditionArg,
                                  uint32_t u32SlaveAddressArg, const uint8_t *pu8Data, uint32_t u32DataSize)
{
    I2C_nSTATUS enStatus = I2C_enSTATUS_ERROR;
    uint32_t u32Timeout = I2C_TIMEOUT;
    I2C_nBUSY enControllerBusy = I2C_enBUSY_IDLE;
    I2C_nARBITRATION enArbitrationState = I2C_enARBITRATION_WON;
    I2C_nMODE enControllerMode = I2C_enMODE_UNDEF;
    uint8_t u8Reg = 0U;
    if((0UL == (uint32_t) pu8Data) || (0UL == u32DataSize))
    {
        return enStatus;
    }

    enControllerMode = I2C__enGetMode(enModule);
    enControllerMode &= I2C_enMODE_MASTER;
    if(I2C_enMODE_MASTER != enControllerMode)
    {
        return enStatus;
    }

    do
    {
        enControllerBusy = I2C_Master__enIsControllerBusy(enModule);
        if(0UL == u32Timeout)
        {
            return enStatus;
        }
        u32Timeout--;
    }while(I2C_enBUSY_IDLE != enControllerBusy);


    I2C_Master__vSetSlaveAddressOperation(enModule, u32SlaveAddressArg, I2C_enOPERATION_TRANSMIT);

    u8Reg = (uint8_t) *pu8Data;
    I2C_Master__vSetData(enModule, (uint32_t) u8Reg);
    pu8Data += 1UL;
    u32DataSize -= 1UL;

    if(I2C_enMULTIMASTER_DIS != enMultiMasterArg)
    {
        enStatus = I2C_Master__enWaitMultiMaster(enModule);

        if(I2C_enSTATUS_OK != enStatus)
        {
            return enStatus;
        }
    }

    I2C_Master__vSetControl(enModule, I2C_enMASTER_CONTROL_RUN_START);

    while(0UL != u32DataSize)
    {
        u32Timeout = I2C_TIMEOUT;
        do
        {
            enControllerBusy = I2C_Master__enIsControllerBusy(enModule);
            if(0UL == u32Timeout)
            {
                return enStatus;
            }
            u32Timeout--;
        }while(I2C_enBUSY_IDLE != enControllerBusy);

        enStatus = I2C_Master__enIsLastOperationError(enModule);
        if(I2C_enSTATUS_OK != enStatus)
        {
            enArbitrationState = I2C_Master__enIsArbitrationLost(enModule);
            if(I2C_enARBITRATION_WON == enArbitrationState)
            {
                I2C_Master__vSetControl(enModule, I2C_enMASTER_CONTROL_STOP);
            }
            /*Error Handling*/
            return enStatus;
        }

        u8Reg = (uint8_t) *pu8Data;
        I2C_Master__vSetData(enModule, (uint32_t) u8Reg);
        pu8Data += 1UL;
        u32DataSize -= 1UL;
        if(0UL != u32DataSize)
        {
            I2C_Master__vSetControl(enModule, I2C_enMASTER_CONTROL_RUN);
        }
    }

    if(I2C_enSTOPCONDITION_DIS != enStopConditionArg)
    {
        enStatus = I2C_Master__enGenerateStopCondition(enModule);
    }
    else
    {
        I2C_Master__vSetControl(enModule, I2C_enMASTER_CONTROL_RUN);
    }

    return enStatus;
}

I2C_nSTATUS I2C_Master_enTransmitMultiByte(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg, const uint8_t *pu8Data, uint32_t u32DataSize)
{
    return I2C_Master_enTransmitGeneric(enModule, I2C_enMULTIMASTER_ENA, I2C_enSTOPCONDITION_ENA, u32SlaveAddressArg, pu8Data, u32DataSize);
}

I2C_nSTATUS I2C_Master_enTransmitByte(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg, const uint8_t u8Data)
{
    return I2C_Master_enTransmitGeneric(enModule, I2C_enMULTIMASTER_ENA, I2C_enSTOPCONDITION_ENA, u32SlaveAddressArg, &u8Data, 1UL);
}
