/**
 *
 * @file I2C_Timeout.c
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
 * @verbatim Mar 27, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 27, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_Timeout.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Master__enSetSCLTimeoutCount(I2C_nMODULE enModuleArg, UBase_t uxTimeoutArg)
{
    uxTimeoutArg >>= 4UL;
    I2C_nERROR enErrorReg;
    enErrorReg = (2UL > uxTimeoutArg) ? I2C_enERROR_VALUE : I2C_enERROR_OK;
    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_MASTER_CLKOCNT_R_CNTL_BIT;
        stRegister.uxMask = I2C_MASTER_CLKOCNT_CNTL_MASK;
        stRegister.uptrAddress = I2C_MASTER_CLKOCNT_OFFSET;
        stRegister.uxValue = (UBase_t) uxTimeoutArg;
        enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetSCLTimeoutCount(I2C_nMODULE enModuleArg, UBase_t* puxTimeoutArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxTimeoutArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;

    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_MASTER_CLKOCNT_R_CNTL_BIT;
        stRegister.uxMask = I2C_MASTER_CLKOCNT_CNTL_MASK;
        stRegister.uptrAddress = I2C_MASTER_CLKOCNT_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            stRegister.uxValue <<= 4UL;
            *puxTimeoutArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
