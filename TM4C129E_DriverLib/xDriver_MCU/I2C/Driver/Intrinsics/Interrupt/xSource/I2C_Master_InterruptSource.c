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

static I2C_nERROR I2C_Master__enGetInterruptSourceShift(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, uint32_t* pu32ShiftArg);


static I2C_nERROR I2C_Master__enGetInterruptSourceShift(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, uint32_t* pu32ShiftArg)
{
    const uint32_t I2C_Master_u32InterruptBit[(uint32_t) I2C_enMASTER_INT_SW] =
    {
     I2C_MASTER_RIS_R_RIS_BIT     , I2C_MASTER_RIS_R_CLKRIS_BIT , I2C_MASTER_RIS_R_DMARXRIS_BIT  , I2C_MASTER_RIS_R_DMATXRIS_BIT   , I2C_MASTER_RIS_R_NACKRIS_BIT,
     I2C_MASTER_RIS_R_STARTRIS_BIT, I2C_MASTER_RIS_R_STOPRIS_BIT, I2C_MASTER_RIS_R_ARBLOSTRIS_BIT, I2C_MASTER_RIS_R_TXRIS_BIT      , I2C_MASTER_RIS_R_RXRIS_BIT,
     I2C_MASTER_RIS_R_TXFERIS_BIT, I2C_MASTER_RIS_R_RXFFRIS_BIT
    };

    I2C_nERROR enErrorReg;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) pu32ShiftArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) I2C_enMODULE_MAX);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptArg, (uint32_t) I2C_enMASTER_INT_SW);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *pu32ShiftArg = I2C_Master_u32InterruptBit[(uint32_t) enInterruptArg];
    }
    return (enErrorReg);
}


I2C_nERROR I2C_Master__enSetInterruptSourceStateByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    uint32_t u32ValueReg;
    I2C_nERROR enErrorReg;

    enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptMaskArg, (uint32_t) I2C_enMASTER_INTMASK_MAX);
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(I2C_enSTATE_DIS == enStateArg)
        {
            u32ValueReg = 0U;
        }
        else
        {
            u32ValueReg = (uint32_t) enInterruptMaskArg;
        }
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enInterruptMaskArg;
        stRegister.uptrAddress = I2C_MASTER_IMR_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enSetInterruptSourceStateByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    uint32_t u32ShiftReg;
    I2C_nERROR enErrorReg;

    u32ShiftReg = 0UL;
    enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptArg, (uint32_t) I2C_enMASTER_INT_SW);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32ShiftReg;
        stRegister.u32Mask = I2C_MASTER_IMR_IM_MASK;
        stRegister.uptrAddress = I2C_MASTER_IMR_OFFSET;
        stRegister.u32Value = (uint32_t) enStateArg;
        enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetInterruptSourceStateByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg, I2C_nMASTER_INTMASK* penInterruptGetArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptGetArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptMaskArg, (uint32_t) I2C_enMASTER_INTMASK_MAX);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enInterruptMaskArg;
        stRegister.uptrAddress = I2C_MASTER_IMR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penInterruptGetArg = (I2C_nMASTER_INTMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetInterruptSourceStateByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, I2C_nSTATE* penStateArg)
{
    I2C_Register_t stRegister;
    uint32_t u32ShiftReg;
    I2C_nERROR enErrorReg;

    u32ShiftReg = 0U;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptArg, (uint32_t) I2C_enMASTER_INT_SW);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32ShiftReg;
        stRegister.u32Mask = I2C_MASTER_IMR_IM_MASK;
        stRegister.uptrAddress = I2C_MASTER_IMR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penStateArg = (I2C_nSTATE) stRegister.u32Value;
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enEnableInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg)
{
    I2C_nERROR enReturnReg;

    enReturnReg = I2C_Master__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, I2C_enSTATE_ENA);

    return (enReturnReg);
}

I2C_nERROR I2C_Master__enEnableInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg)
{
    I2C_nERROR enReturnReg;

    enReturnReg = I2C_Master__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, I2C_enSTATE_ENA);

    return (enReturnReg);
}

I2C_nERROR I2C_Master__enDisableInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg)
{
    I2C_nERROR enReturnReg;

    enReturnReg = I2C_Master__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, I2C_enSTATE_DIS);

    return (enReturnReg);
}

I2C_nERROR I2C_Master__enDisableInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg)
{
    I2C_nERROR enReturnReg;

    enReturnReg = I2C_Master__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, I2C_enSTATE_DIS);

    return (enReturnReg);
}

I2C_nERROR I2C_Master__enClearInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptMaskArg, (uint32_t) I2C_enMASTER_INTMASK_MAX);
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = I2C_MASTER_ICR_OFFSET;
        stRegister.u32Value = enInterruptMaskArg;
        enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enClearInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg)
{
    I2C_Register_t stRegister;
    uint32_t u32ShiftReg;
    uint32_t u32ValueReg;
    I2C_nERROR enErrorReg;

    u32ShiftReg = 0UL;
    enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptArg, (uint32_t) I2C_enMASTER_INT_SW);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        u32ValueReg = 1UL;
        u32ValueReg <<= u32ShiftReg;
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = I2C_MASTER_ICR_OFFSET;
        stRegister.u32Value = (uint32_t) u32ValueReg;
        enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enStatusInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg, I2C_nMASTER_INTMASK* penInterruptStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptMaskArg, (uint32_t) I2C_enMASTER_INTMASK_MAX);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enInterruptMaskArg;
        stRegister.uptrAddress = I2C_MASTER_RIS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penInterruptStatusArg = (I2C_nMASTER_INTMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enStatusInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, I2C_nSTATUS* penStatusArg)
{
    I2C_Register_t stRegister;
    uint32_t u32ShiftReg;
    I2C_nERROR enErrorReg;

    u32ShiftReg = 0UL;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptArg, (uint32_t) I2C_enMASTER_INT_SW);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32ShiftReg;
        stRegister.u32Mask = I2C_MASTER_RIS_RIS_MASK;
        stRegister.uptrAddress = I2C_MASTER_RIS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (I2C_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enStatusMaskedInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg, I2C_nMASTER_INTMASK* penInterruptStatusArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptMaskArg, (uint32_t) I2C_enMASTER_INTMASK_MAX);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enInterruptMaskArg;
        stRegister.uptrAddress = I2C_MASTER_MIS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penInterruptStatusArg = (I2C_nMASTER_INTMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enStatusMaskedInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, I2C_nSTATUS* penStatusArg)
{
    I2C_Register_t stRegister;
    uint32_t u32ShiftReg;
    I2C_nERROR enErrorReg;

    u32ShiftReg = 0UL;
    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enInterruptArg, (uint32_t) I2C_enMASTER_INT_SW);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32ShiftReg;
        stRegister.u32Mask = I2C_MASTER_MIS_MIS_MASK;
        stRegister.uptrAddress = I2C_MASTER_MIS_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (I2C_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}
