/**
 *
 * @file I2C_Master_InterruptSource.c
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
 * @verbatim Mar 24, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 24, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/xHeader/I2C_Master_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_Master__vEnInterruptSource(I2C_nMODULE enModule, I2C_nMASTER_INT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) I2C_enMASTER_INT_SOURCE_ALL;
    I2C__vWriteRegister(enModule , I2C_MIMR_OFFSET, u32SourceInt, u32SourceInt, 0UL);
}

void I2C_Master__vDisInterruptSource(I2C_nMODULE enModule, I2C_nMASTER_INT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) I2C_enMASTER_INT_SOURCE_ALL;
    I2C__vWriteRegister(enModule , I2C_MIMR_OFFSET, 0UL, u32SourceInt, 0UL);
}

void I2C_Master__vClearInterruptSource(I2C_nMODULE enModule, I2C_nMASTER_INT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) I2C_enMASTER_INT_SOURCE_ALL;
    I2C__vWriteRegister(enModule , I2C_MICR_OFFSET, u32SourceInt, 0xFFFFFFFFUL, 0UL);
}

I2C_nINT_STATUS I2C_Master__enStatusInterruptSource(I2C_nMODULE enModule, I2C_nMASTER_INT_SOURCE enSourceInt)
{
    I2C_nINT_STATUS enInterruptReg = I2C_enINT_STATUS_UNDEF;
    I2C_nSTATUS enStatus = I2C_enSTATUS_UNDEF;
    uint32_t u32SourceInt = 0UL;
    uint32_t u32Register= 0xFFFFFFFFUL;
    u32SourceInt &= (uint32_t) I2C_enMASTER_INT_SOURCE_ALL;
    enStatus = I2C__enReadRegister(enModule , I2C_MRIS_OFFSET, (uint32_t*) &u32Register, (uint32_t) u32SourceInt, 0UL);
    if(I2C_enSTATUS_OK == enStatus)
    {
        if(0UL != u32Register)
        {
            enInterruptReg = I2C_enINT_OCCUR;
        }
        else
        {
            enInterruptReg = I2C_enINT_NOOCCUR;
        }
    }
    return enInterruptReg;
}




