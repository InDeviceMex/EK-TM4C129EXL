/**
 *
 * @file I2C_Common.c
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
#include <xApplication_MCU/I2C/Operations/xHeader/I2C_Common.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>

I2C_nERROR I2C_Master__enWaitMultiMaster(I2C_nMODULE enModuleArg, UBase_t uxTimeoutArg)
{
    I2C_nERROR enErrorReg;
    I2C_nSTATUS enBusBusy;
    UBase_t uxTimeout;

    uxTimeout = uxTimeoutArg;
    enErrorReg = I2C_enERROR_OK;
    enBusBusy = I2C_enSTATUS_INACTIVE;
    do
    {
        enErrorReg = I2C_Master__enGetBusStatus(enModuleArg, &enBusBusy);
        uxTimeout--;
    }while((I2C_enSTATUS_INACTIVE != enBusBusy) && (0UL != uxTimeout) && (I2C_enERROR_OK == enErrorReg));

    if(I2C_enERROR_OK == enErrorReg)
    {
        if(0UL == uxTimeout)
        {
            enErrorReg = I2C_enERROR_TIMEOUT;
        }
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGenerateStopCondition(I2C_nMODULE enModule, UBase_t uxTimeoutArg, I2C_pvfIRQSourceHandler_t pvfErrorHandleArg)
{
    I2C_nERROR enErrorReg;
    UBase_t uxTimeout;
    I2C_nSTATUS enControllerBusy;
    I2C_nOPERATION_ERROR enErrorOperationReg;

    enErrorOperationReg = I2C_enOPERATION_ERROR_NONE;
    uxTimeout = uxTimeoutArg;
    enControllerBusy = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_Master__enSetControlState(enModule, I2C_enMASTER_CONTROL_RUN_STOP);

    if(I2C_enERROR_OK == enErrorReg)
    {
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
        enErrorReg = I2C_Master__enGetLastOperationErrorStatus(enModule, &enErrorOperationReg);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enOPERATION_ERROR_NONE != enErrorOperationReg)
        {
            /*Error Handling*/
            if(0UL != (uintptr_t) pvfErrorHandleArg)
            {
                pvfErrorHandleArg((uintptr_t) enModule, (void*) enErrorOperationReg);
            }
        }
    }
    return (enErrorReg);
}
