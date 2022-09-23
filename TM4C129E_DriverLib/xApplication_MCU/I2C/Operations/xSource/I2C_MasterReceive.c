/**
 *
 * @file I2C_MasterReceive.c
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
#include <xApplication_MCU/I2C/Operations/xHeader/I2C_MasterReceive.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>
#include <xApplication_MCU/I2C/Operations/xHeader/I2C_Common.h>

I2C_nSTATUS I2C_Master_enReceiveGeneric(I2C_nMODULE enModule, I2C_nMULTIMASTER enMultiMasterArg, I2C_nSTOPCONDITION enStopConditionArg,
                                 uint32_t u32SlaveAddressArg, uint8_t *pu8Data, uint32_t u32DataSize)
{
    I2C_nSTATUS enStatus = I2C_enSTATUS_ERROR;
    uint32_t u32Timeout = I2C_TIMEOUT;
    I2C_nMASTER_BUSY enControllerBusy = I2C_enMASTER_BUSY_IDLE;
    I2C_nMASTER_ARB enArbitrationState = I2C_enMASTER_ARB_WON;
    I2C_nMODE enControllerMode = I2C_enMODE_UNDEF;
    uint8_t u8Reg = 0U;
    if((0UL != (uint32_t) pu8Data) && (0UL != u32DataSize))
    {
        enControllerMode = I2C__enGetMode(enModule);
        enControllerMode &= (uint32_t) I2C_enMODE_MASTER;
        if(I2C_enMODE_MASTER == enControllerMode)
        {
            enStatus = I2C_enSTATUS_OK;
            do
            {
                enControllerBusy = I2C_Master__enIsControllerBusy(enModule);
                u32Timeout--;
                if(0UL == u32Timeout)
                {
                    enStatus = I2C_enSTATUS_ERROR;
                }
            }while((I2C_enMASTER_BUSY_IDLE != enControllerBusy) &&
                   (0UL != u32Timeout));

            if(I2C_enSTATUS_OK == enStatus)
            {
                I2C_Master__vSetSlaveAddressOperation(enModule,
                                              u32SlaveAddressArg,
                                              I2C_enOPERATION_RECEIVE);

                if(I2C_enMULTIMASTER_DIS != enMultiMasterArg)
                {
                    enStatus = I2C_Master__enWaitMultiMaster(enModule);
                }

                if(I2C_enSTATUS_OK == enStatus)
                {
                    I2C_Master__vSetControl(enModule,
                                    I2C_enMASTER_CONTROL_RUN_START_ACK);

                    while(0UL != u32DataSize)
                    {
                        u32Timeout = I2C_TIMEOUT;
                        do
                        {
                            enControllerBusy = I2C_Master__enIsControllerBusy(enModule);
                            u32Timeout--;
                            if(0UL == u32Timeout)
                            {
                                enStatus = I2C_enSTATUS_OK;
                            }
                        }while((I2C_enMASTER_BUSY_IDLE != enControllerBusy) &&
                               (0UL != u32Timeout));

                        if(I2C_enSTATUS_ERROR != enStatus)
                        {
                            enStatus = I2C_Master__enIsLastOperationError(enModule);
                            if(I2C_enSTATUS_OK != enStatus)
                            {
                                enArbitrationState = I2C_Master__enIsArbitrationLost(enModule);
                                if(I2C_enMASTER_ARB_WON == enArbitrationState)
                                {
                                    I2C_Master__vSetControl(enModule, I2C_enMASTER_CONTROL_STOP);
                                }
                                /*Error Handling*/
                            }
                            else
                            {
                                u8Reg = (uint8_t) I2C_Master__u32GetData(enModule);
                                *pu8Data = u8Reg;
                                pu8Data += 1UL;
                                u32DataSize -= 1UL;
                                if(1UL < u32DataSize)
                                {
                                    I2C_Master__vSetControl(enModule, I2C_enMASTER_CONTROL_RUN_ACK);
                                }
                            }
                        }
                    };

                    if(I2C_enSTATUS_ERROR != enStatus)
                    {
                        if(I2C_enSTOPCONDITION_DIS != enStopConditionArg)
                        {
                            enStatus = I2C_Master__enGenerateStopCondition(enModule);
                        }
                        else
                        {
                            I2C_Master__vSetControl(enModule, I2C_enMASTER_CONTROL_RUN_ACK);
                        }
                    }
                }
            }
        }
    }
    return (enStatus);
}

I2C_nSTATUS I2C_Master_enReceiveMultiByte(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg, uint8_t *pu8Data, uint32_t u32DataSize)
{
    return I2C_Master_enReceiveGeneric(enModule, I2C_enMULTIMASTER_ENA, I2C_enSTOPCONDITION_ENA, u32SlaveAddressArg, pu8Data, u32DataSize);
}

I2C_nSTATUS I2C_Master_enReceiveByte(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg, uint8_t u8Data)
{
    return I2C_Master_enReceiveGeneric(enModule, I2C_enMULTIMASTER_ENA, I2C_enSTOPCONDITION_ENA, u32SlaveAddressArg, &u8Data, 1UL);
}
