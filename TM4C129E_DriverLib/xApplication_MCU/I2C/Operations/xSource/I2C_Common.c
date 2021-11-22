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

I2C_nSTATUS I2C_Master__enWaitMultiMaster(I2C_nMODULE enModule)
{
    I2C_nSTATUS enStatus = I2C_enSTATUS_OK;
    I2C_nMASTER_BUSY enBusBusy = I2C_enMASTER_BUSY_IDLE;
    uint32_t u32Timeout = I2C_TIMEOUT;
    u32Timeout = I2C_TIMEOUT;
    do
    {
        enBusBusy = I2C_Master__enIsBusBusy(enModule);
        u32Timeout--;
        if(0UL == u32Timeout)
        {
            enStatus = I2C_enSTATUS_ERROR;
        }
    }while((I2C_enMASTER_BUSY_IDLE != enBusBusy) && (0UL != u32Timeout));

    return (enStatus);
}

I2C_nSTATUS I2C_Master__enGenerateStopCondition(I2C_nMODULE enModule)
{
    I2C_nSTATUS enStatus = I2C_enSTATUS_OK;
    uint32_t u32Timeout = I2C_TIMEOUT;
    I2C_nMASTER_BUSY enControllerBusy = I2C_enMASTER_BUSY_IDLE;
    I2C_Master__vSetControl(enModule, I2C_enMASTER_CONTROL_RUN_STOP);

    u32Timeout = I2C_TIMEOUT;
    do
    {
        enControllerBusy = I2C_Master__enIsControllerBusy(enModule);
        u32Timeout--;
        if(0UL == u32Timeout)
        {
            enStatus = I2C_enSTATUS_ERROR;
        }
    }while((I2C_enMASTER_BUSY_IDLE != enControllerBusy) && (0UL != u32Timeout));

    if(I2C_enSTATUS_ERROR != enStatus)
    {
        enStatus = I2C_Master__enIsLastOperationError(enModule);
        if(I2C_enSTATUS_ERROR == enStatus)
        {
            /*Error Handling*/
        }
    }
    return (enStatus);
}
