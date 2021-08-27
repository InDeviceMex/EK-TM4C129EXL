/**
 *
 * @file I2C_TimerPeriod.c
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
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_TimerPeriod.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_Master__vSetTimerPeriod(I2C_nMODULE enModule, uint32_t u32TimerPeriodArg)
{
    if(0UL != u32TimerPeriodArg)
    {
        I2C__vWriteRegister(enModule, I2C_MTPR_OFFSET, u32TimerPeriodArg, I2C_MTPR_TPR_MASK, I2C_MTPR_R_TPR_BIT);
    }
}

uint32_t I2C_Master__u32GetTimerPeriod(I2C_nMODULE enModule)
{
    uint32_t u32TimerPeriodReg = 0xFFFFFFFFUL;
    I2C__enReadRegister(enModule, I2C_MTPR_OFFSET, &u32TimerPeriodReg, I2C_MTPR_TPR_MASK, I2C_MTPR_R_TPR_BIT);
    return u32TimerPeriodReg;
}

void I2C_Master__vSetHighSpeedPeriod(I2C_nMODULE enModule, I2C_nHIGHSPEED enHighSpeedArg)
{
    I2C__vWriteRegister(enModule, I2C_MTPR_OFFSET, (uint32_t) enHighSpeedArg, I2C_MTPR_HS_MASK, I2C_MTPR_R_HS_BIT);
}

I2C_nHIGHSPEED I2C_Master__enGetHighSpeedPeriod(I2C_nMODULE enModule)
{
    I2C_nHIGHSPEED enHighSpeedReg = I2C_enHIGHSPEED_UNDEF;
    I2C__enReadRegister(enModule, I2C_MTPR_OFFSET, (uint32_t*) &enHighSpeedReg, I2C_MTPR_HS_MASK, I2C_MTPR_R_HS_BIT);
    return enHighSpeedReg;
}


