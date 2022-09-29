/**
 *
 * @file I2C_Request.c
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
 * @verbatim 17 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_Request.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Slave__enGetDMATxStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) enStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_SLAVE_STS_R_ACTDMATX_BIT;
        stRegister.u32Mask = I2C_SLAVE_STS_ACTDMATX_MASK;
        stRegister.uptrAddress = I2C_SLAVE_STS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *enStatusArg = (I2C_nSTATUS) stRegister.u32Value;
        }
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetDMARxStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) enStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_SLAVE_STS_R_ACTDMARX_BIT;
        stRegister.u32Mask = I2C_SLAVE_STS_ACTDMARX_MASK;
        stRegister.uptrAddress = I2C_SLAVE_STS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *enStatusArg = (I2C_nSTATUS) stRegister.u32Value;
        }
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetReceiveRequestStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) enStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_SLAVE_STS_R_RREQ_BIT;
        stRegister.u32Mask = I2C_SLAVE_STS_RREQ_MASK;
        stRegister.uptrAddress = I2C_SLAVE_STS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *enStatusArg = (I2C_nSTATUS) stRegister.u32Value;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetTransmitRequestStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) enStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_SLAVE_STS_R_TREQ_BIT;
        stRegister.u32Mask = I2C_SLAVE_STS_TREQ_MASK;
        stRegister.uptrAddress = I2C_SLAVE_STS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *enStatusArg = (I2C_nSTATUS) stRegister.u32Value;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetFirstByteReceivedStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enReceiveStatus;
    I2C_nERROR enErrorReg;

    enReceiveStatus = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) enStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Slave__enGetReceiveRequestStatus(enModuleArg, &enReceiveStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_ACTIVE == enReceiveStatus)
        {
            stRegister.u32Shift = I2C_SLAVE_STS_R_FBR_BIT;
            stRegister.u32Mask = I2C_SLAVE_STS_FBR_MASK;
            stRegister.uptrAddress = I2C_SLAVE_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *enStatusArg = (I2C_nSTATUS) stRegister.u32Value;
            }
        }
        else
        {
            *enStatusArg = I2C_enSTATUS_UNDEF;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetOwnAddressAlternateMatchStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) enStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_SLAVE_STS_R_OAR2SEL_BIT;
        stRegister.u32Mask = I2C_SLAVE_STS_OAR2SEL_MASK;
        stRegister.uptrAddress = I2C_SLAVE_STS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *enStatusArg = (I2C_nSTATUS) stRegister.u32Value;
        }
    }

    return (enErrorReg);
}


I2C_nERROR I2C_Slave__enGetQuickCommandStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) enStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_SLAVE_STS_R_QCMDST_BIT;
        stRegister.u32Mask = I2C_SLAVE_STS_QCMDST_MASK;
        stRegister.uptrAddress = I2C_SLAVE_STS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *enStatusArg = (I2C_nSTATUS) stRegister.u32Value;
        }
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetQuickCommandType(I2C_nMODULE enModuleArg, I2C_nOPERATION* enTypeArg)
{
    I2C_Register_t stRegister;
    I2C_nSTATUS enReceiveStatus;
    I2C_nERROR enErrorReg;

    enReceiveStatus = I2C_enSTATUS_INACTIVE;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) enTypeArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Slave__enGetQuickCommandStatus(enModuleArg, &enReceiveStatus);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATUS_ACTIVE == enReceiveStatus)
        {
            stRegister.u32Shift = I2C_SLAVE_STS_R_FBR_BIT;
            stRegister.u32Mask = I2C_SLAVE_STS_FBR_MASK;
            stRegister.uptrAddress = I2C_SLAVE_STS_OFFSET;
            enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
            if(I2C_enERROR_OK == enErrorReg)
            {
                *enTypeArg = (I2C_nOPERATION) stRegister.u32Value;
            }
        }
        else
        {
            *enTypeArg = I2C_enOPERATION_UNDEF;
        }
    }

    return (enErrorReg);
}



