/**
 *
 * @file I2C_LineState.c
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
 * @verbatim 27 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_LineState.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Master__enGetLineLevel(I2C_nMODULE enModuleArg, I2C_nLINE enLineArg, I2C_nLEVEL* enLevelArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) enLevelArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;

    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enLineArg;
        stRegister.uxMask = 0x1UL;
        stRegister.uptrAddress = I2C_MASTER_BMON_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *enLevelArg = (I2C_nLEVEL) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetSCLLevel(I2C_nMODULE enModule, I2C_nLEVEL* enLevelArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = I2C_Master__enGetLineLevel(enModule, I2C_enLINE_SCL, enLevelArg);
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetSDALevel(I2C_nMODULE enModule, I2C_nLEVEL* enLevelArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = I2C_Master__enGetLineLevel(enModule, I2C_enLINE_SDA, enLevelArg);
    return (enErrorReg);
}
