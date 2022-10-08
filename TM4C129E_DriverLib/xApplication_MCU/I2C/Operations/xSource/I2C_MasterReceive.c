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

I2C_nERROR I2C_Master_enReceiveGeneric(I2C_nMODULE enModule, I2C_nSTATE enMultiMasterArg, I2C_nSTATE enStopConditionArg,
                                 UBase_t uxSlaveAddressArg, uint8_t *pu8Data, UBase_t uxDataSize)
{
    UBase_t uxTimeout;
    UBase_t uxReg;
    I2C_nERROR enErrorReg;
    I2C_nMODE enControllerMode;
    I2C_nSTATUS enControllerBusy;
    I2C_nOPERATION_ERROR enOperationError;
    I2C_nARBITRATION enArbitrationState;

    uxTimeout = I2C_TIMEOUT;
    enArbitrationState = I2C_enARBITRATION_WON;
    enOperationError = I2C_enOPERATION_ERROR_NONE;
    enControllerBusy = I2C_enSTATUS_INACTIVE;
    enControllerMode = I2C_enMODE_NONE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) pu8Data)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(0UL == uxDataSize)
        {
            enErrorReg = I2C_enERROR_VALUE;
        }
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C__enGetMode(enModule, &enControllerMode);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(0UL == ((UBase_t) I2C_enMODE_MASTER & enControllerMode))
        {
            enErrorReg = I2C_enERROR_VALUE;
        }
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        uxTimeout = I2C_TIMEOUT;
        do
        {
            enErrorReg = I2C_Master__enGetControllerStatus(enModule, &enControllerBusy);
            uxTimeout--;
        }while((I2C_enSTATUS_INACTIVE != enControllerBusy) && (0UL != uxTimeout) && (I2C_enERROR_OK == enErrorReg));

    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(0UL == uxTimeout)
        {
            enErrorReg = I2C_enERROR_TIMEOUT;
        }
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enSetSlaveAddressOperation(enModule, uxSlaveAddressArg, I2C_enOPERATION_RECEIVE);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATE_DIS != enMultiMasterArg)
        {
            enErrorReg = I2C_Master__enWaitMultiMaster(enModule, I2C_TIMEOUT);
        }
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enSetControlState(enModule, I2C_enMASTER_CONTROL_RUN_START_ACK);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        while((0UL != uxDataSize) && (I2C_enERROR_OK == enErrorReg))
        {
            uxTimeout = I2C_TIMEOUT;
            do
            {
                enErrorReg = I2C_Master__enGetControllerStatus(enModule, &enControllerBusy);
                uxTimeout--;
            }while((I2C_enSTATUS_INACTIVE != enControllerBusy) && (0UL != uxTimeout) && (I2C_enERROR_OK == enErrorReg));

            if(I2C_enERROR_OK == enErrorReg)
            {
                if(0UL == uxTimeout)
                {
                    enErrorReg = I2C_enERROR_TIMEOUT;
                }
            }

            if(I2C_enERROR_OK == enErrorReg)
            {
              enErrorReg = I2C_Master__enGetLastOperationErrorStatus(enModule, &enOperationError);
            }

            if(I2C_enERROR_OK == enErrorReg)
            {
                if(I2C_enOPERATION_ERROR_NONE != enOperationError)
                {
                    enErrorReg = I2C_Master__enGetArbitrationStatus(enModule, &enArbitrationState);

                    if(I2C_enERROR_OK == enErrorReg)
                    {
                        if(I2C_enARBITRATION_WON == enArbitrationState)
                        {
                            enErrorReg = I2C_Master__enSetControlState(enModule, I2C_enMASTER_CONTROL_STOP);
                        }
                    }
                    enErrorReg = I2C_enERROR_UNDEF;
                    /*Error Handling*/
                }
            }
            if(I2C_enERROR_OK == enErrorReg)
            {
                enErrorReg  = I2C_Master__enGetData(enModule, &uxReg);
                *pu8Data = (uint8_t) uxReg;
                pu8Data += 1UL;
                uxDataSize -= 1UL;
                if(1UL < uxDataSize)
                {
                    enErrorReg = I2C_Master__enSetControlState(enModule, I2C_enMASTER_CONTROL_RUN_ACK);
                }
            }
        }
    }

    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATE_DIS != enStopConditionArg)
        {
            enErrorReg = I2C_Master__enGenerateStopCondition(enModule, I2C_TIMEOUT, (I2C_pvfIRQSourceHandler_t) 0UL);
        }
        else
        {
            enErrorReg = I2C_Master__enSetControlState(enModule, I2C_enMASTER_CONTROL_RUN_ACK);
        }
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master_enReceiveMultiByte(I2C_nMODULE enModule, UBase_t uxSlaveAddressArg, uint8_t *pu8Data, UBase_t uxDataSize)
{
    I2C_nERROR enErrorReg;
    enErrorReg = I2C_Master_enReceiveGeneric(enModule, I2C_enSTATE_ENA, I2C_enSTATE_ENA, uxSlaveAddressArg, pu8Data, uxDataSize);
    return (enErrorReg);
}

I2C_nERROR I2C_Master_enReceiveByte(I2C_nMODULE enModule, UBase_t uxSlaveAddressArg, uint8_t u8Data)
{
    I2C_nERROR enErrorReg;
    enErrorReg = I2C_Master_enReceiveGeneric(enModule, I2C_enSTATE_ENA, I2C_enSTATE_ENA, uxSlaveAddressArg, &u8Data, 1UL);
    return (enErrorReg);
}
