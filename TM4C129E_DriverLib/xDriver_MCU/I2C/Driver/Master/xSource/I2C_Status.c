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

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Master__enGetControllerStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_MASTER_STS_R_BUSY_BIT;
        stRegister.uxMask = I2C_MASTER_STS_BUSY_MASK;
        stRegister.uptrAddress = I2C_MASTER_STS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (I2C_nSTATUS) stRegister.uxValue;
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetDMATxStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enControllerStatus;
    I2C_nERROR enErrorReg;

    enControllerStatus = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetControllerStatus(enModuleArg, &enControllerStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_INACTIVE == enControllerStatus)
        {
            stRegister.uxShift = I2C_MASTER_STS_R_ACTDMATX_BIT;
            stRegister.uxMask = I2C_MASTER_STS_ACTDMATX_MASK;
            stRegister.uptrAddress = I2C_MASTER_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *penStatusArg = (I2C_nSTATUS) stRegister.uxValue;
            }
        }
        else
        {
            *penStatusArg = I2C_enSTATUS_UNDEF;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetDMARxStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enControllerStatus;
    I2C_nERROR enErrorReg;

    enControllerStatus = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetControllerStatus(enModuleArg, &enControllerStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_INACTIVE == enControllerStatus)
        {
            stRegister.uxShift = I2C_MASTER_STS_R_ACTDMARX_BIT;
            stRegister.uxMask = I2C_MASTER_STS_ACTDMARX_MASK;
            stRegister.uptrAddress = I2C_MASTER_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *penStatusArg = (I2C_nSTATUS) stRegister.uxValue;
            }
        }
        else
        {
            *penStatusArg = I2C_enSTATUS_UNDEF;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetLastOperationErrorStatus(I2C_nMODULE enModuleArg, I2C_nOPERATION_ERROR* penStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enControllerStatus;
    I2C_nSTATUS enErrorStatus;
    I2C_nACK enAddressStatus;
    I2C_nERROR enErrorReg;

    enErrorStatus = I2C_enSTATUS_INACTIVE;
    enControllerStatus = I2C_enSTATUS_INACTIVE;
    enAddressStatus = I2C_enACK_ACK;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetControllerStatus(enModuleArg, &enControllerStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_INACTIVE == enControllerStatus)
        {
            stRegister.uxShift = I2C_MASTER_STS_R_ERROR_BIT;
            stRegister.uxMask = I2C_MASTER_STS_ERROR_MASK;
            stRegister.uptrAddress = I2C_MASTER_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                enErrorStatus = (I2C_nSTATUS) stRegister.uxValue;
            }
        }
        else
        {
            enErrorStatus = I2C_enSTATUS_UNDEF;
        }
    }

    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_ACTIVE == enErrorStatus)
        {
            enErrorReg = I2C_Master__enGetAcknowledgeAddressStatus(enModuleArg, &enAddressStatus);
            if(I2C_enERROR_OK == enErrorReg)
            {
                if(I2C_enACK_NACK == enAddressStatus)
                {
                    *penStatusArg = I2C_enOPERATION_ERROR_ADDRESS;
                }
                else
                {
                    *penStatusArg = I2C_enOPERATION_ERROR_DATA;
                }
            }
        }
        else if(I2C_enSTATUS_INACTIVE == enErrorStatus)
        {
            *penStatusArg = I2C_enOPERATION_ERROR_NONE;
        }
        else
        {
            *penStatusArg = I2C_enOPERATION_ERROR_UNDEF;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetSCLTimeoutStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enControllerStatus;
    I2C_nERROR enErrorReg;

    enControllerStatus = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetControllerStatus(enModuleArg, &enControllerStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_INACTIVE == enControllerStatus)
        {
            stRegister.uxShift = I2C_MASTER_STS_R_CLKTO_BIT;
            stRegister.uxMask = I2C_MASTER_STS_CLKTO_MASK;
            stRegister.uptrAddress = I2C_MASTER_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *penStatusArg = (I2C_nSTATUS) stRegister.uxValue;
            }
        }
        else
        {
            *penStatusArg = I2C_enSTATUS_UNDEF;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetBusStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enControllerStatus;
    I2C_nERROR enErrorReg;

    enControllerStatus = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetControllerStatus(enModuleArg, &enControllerStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_INACTIVE == enControllerStatus)
        {
            stRegister.uxShift = I2C_MASTER_STS_R_BUSBSY_BIT;
            stRegister.uxMask = I2C_MASTER_STS_BUSBSY_MASK;
            stRegister.uptrAddress = I2C_MASTER_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *penStatusArg = (I2C_nSTATUS) stRegister.uxValue;
            }
        }
        else
        {
            *penStatusArg = I2C_enSTATUS_UNDEF;
        }
    }

    return (enErrorReg);
}


I2C_nERROR I2C_Master__enGetArbitrationStatus(I2C_nMODULE enModuleArg, I2C_nARBITRATION* penStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enControllerStatus;
    I2C_nERROR enErrorReg;

    enControllerStatus = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetControllerStatus(enModuleArg, &enControllerStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_INACTIVE == enControllerStatus)
        {
            stRegister.uxShift = I2C_MASTER_STS_R_ARBLST_BIT;
            stRegister.uxMask = I2C_MASTER_STS_ARBLST_MASK;
            stRegister.uptrAddress = I2C_MASTER_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *penStatusArg = (I2C_nARBITRATION) stRegister.uxValue;
            }
        }
        else
        {
            *penStatusArg = I2C_enARBITRATION_UNDEF;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetAcknowledgeDataStatus(I2C_nMODULE enModuleArg, I2C_nACK* penStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enControllerStatus;
    I2C_nERROR enErrorReg;

    enControllerStatus = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetControllerStatus(enModuleArg, &enControllerStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_INACTIVE == enControllerStatus)
        {
            stRegister.uxShift = I2C_MASTER_STS_R_DATACK_BIT;
            stRegister.uxMask = I2C_MASTER_STS_DATACK_MASK;
            stRegister.uptrAddress = I2C_MASTER_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *penStatusArg = (I2C_nACK) stRegister.uxValue;
            }
        }
        else
        {
            *penStatusArg = I2C_enACK_UNDEF;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetAcknowledgeAddressStatus(I2C_nMODULE enModuleArg, I2C_nACK* penStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enControllerStatus;
    I2C_nERROR enErrorReg;

    enControllerStatus = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetControllerStatus(enModuleArg, &enControllerStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_INACTIVE == enControllerStatus)
        {
            stRegister.uxShift = I2C_MASTER_STS_R_ADRACK_BIT;
            stRegister.uxMask = I2C_MASTER_STS_ADRACK_MASK;
            stRegister.uptrAddress = I2C_MASTER_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *penStatusArg = (I2C_nACK) stRegister.uxValue;
            }
        }
        else
        {
            *penStatusArg = I2C_enACK_UNDEF;
        }
    }

    return (enErrorReg);
}
