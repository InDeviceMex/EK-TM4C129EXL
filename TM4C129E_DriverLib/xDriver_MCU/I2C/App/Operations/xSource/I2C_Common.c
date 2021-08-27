/**
 *
 * @file I2C_Common.c
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

#include <xDriver_MCU/I2C/App/Operations/xHeader/I2C_Common.h>
#include <xDriver_MCU/I2C/Driver/I2C_Driver.h>

I2C_nSTATUS I2C_Master__enWaitMultiMaster(I2C_nMODULE enModule)
{
    I2C_nSTATUS enStatus = I2C_enSTATUS_OK;
    I2C_nBUSY enBusBusy = I2C_enBUSY_IDLE;
    uint32_t u32Timeout = I2C_TIMEOUT;
    u32Timeout = I2C_TIMEOUT;
    do
    {
        enBusBusy = I2C_Master__enIsBusBusy(enModule);
        if(0UL == u32Timeout)
        {
            enStatus = I2C_enSTATUS_ERROR;
            break;
        }
        u32Timeout--;
    }while(I2C_enBUSY_IDLE != enBusBusy);

    return enStatus;
}

I2C_nSTATUS I2C_Master__enGenerateStopCondition(I2C_nMODULE enModule)
{
    I2C_nSTATUS enStatus = I2C_enSTATUS_OK;
    uint32_t u32Timeout = I2C_TIMEOUT;
    I2C_nBUSY enControllerBusy = I2C_enBUSY_IDLE;
    I2C_Master__vSetControl(enModule, I2C_enMASTER_CONTROL_RUN_STOP);

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
        return enStatus;
        /*Error Handling*/
    }

    return enStatus;
}
