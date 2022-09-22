/**
 *
 * @file FLASH_InterruptSource.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/xHeader/FLASH_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Primitives/FLASH_Primitives.h>

uint32_t FLASH_u32InterruptBit[(uint32_t) FLASH_enMODULE_MAX][(uint32_t) FLASH_enINT_MAX] =
{
 {FLASH_RIS_R_ARIS_BIT, FLASH_RIS_R_ARIS_BIT   , FLASH_RIS_R_PRIS_BIT , FLASH_RIS_R_ERIS_BIT   , FLASH_RIS_R_VOLTRIS_BIT,
 FLASH_RIS_R_INVDRIS_BIT, FLASH_RIS_R_ERRIS_BIT, FLASH_RIS_R_PROGRIS_BIT},
};


FLASH_nERROR FLASH__enGetInterruptSourceShift(FLASH_nMODULE enModuleArg, FLASH_nINT enInterruptArg, uint32_t* pu32ShiftArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32ShiftArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enModuleArg, (uint32_t) FLASH_enMODULE_MAX);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptArg, (uint32_t) FLASH_enINT_MAX);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *pu32ShiftArg = FLASH_u32InterruptBit[(uint32_t) enModuleArg][(uint32_t) enInterruptArg];
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH__enSetInterruptSourceStateByMask(FLASH_nMODULE enModuleArg, FLASH_nINTMASK enInterruptMaskArg, FLASH_nSTATE enStateArg)
{
    FLASH_Register_t stRegister;
    uint32_t u32ValueReg;
    FLASH_nERROR enErrorReg;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptMaskArg, (uint32_t) FLASH_enINTMASK_MAX);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        if(FLASH_enSTATE_DIS == enStateArg)
        {
            u32ValueReg = 0U;
        }
        else
        {
            u32ValueReg = (uint32_t) enInterruptMaskArg;
        }
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enInterruptMaskArg;
        stRegister.uptrAddress = FLASH_IM_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetInterruptSourceStateByNumber(FLASH_nMODULE enModuleArg, FLASH_nINT enInterruptArg, FLASH_nSTATE enStateArg)
{
    FLASH_Register_t stRegister;
    uint32_t u32ShiftReg;
    FLASH_nERROR enErrorReg;

    u32ShiftReg = 0UL;
    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptArg, (uint32_t) FLASH_enINT_MAX);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32ShiftReg;
        stRegister.u32Mask = FLASH_IM_AMASK_MASK;
        stRegister.uptrAddress = FLASH_IM_OFFSET;
        stRegister.u32Value = (uint32_t) enStateArg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetInterruptSourceStateByMask(FLASH_nMODULE enModuleArg, FLASH_nINTMASK enInterruptMaskArg, FLASH_nINTMASK* penInterruptGetArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptGetArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptMaskArg, (uint32_t) FLASH_enINTMASK_MAX);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enInterruptMaskArg;
        stRegister.uptrAddress = FLASH_IM_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *penInterruptGetArg = (FLASH_nINTMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetInterruptSourceStateByNumber(FLASH_nMODULE enModuleArg, FLASH_nINT enInterruptArg, FLASH_nSTATE* penStateArg)
{
    FLASH_Register_t stRegister;
    uint32_t u32ShiftReg;
    FLASH_nERROR enErrorReg;

    u32ShiftReg = 0U;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptArg, (uint32_t) FLASH_enINT_MAX);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32ShiftReg;
        stRegister.u32Mask = FLASH_IM_AMASK_MASK;
        stRegister.uptrAddress = FLASH_IM_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *penStateArg = (FLASH_nSTATE) stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enEnableInterruptSourceByMask(FLASH_nMODULE enModuleArg, FLASH_nINTMASK enInterruptMaskArg)
{
    FLASH_nERROR enReturnReg;

    enReturnReg = FLASH__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, FLASH_enSTATE_ENA);

    return (enReturnReg);
}

FLASH_nERROR FLASH__enEnableInterruptSourceByNumber(FLASH_nMODULE enModuleArg, FLASH_nINT enInterruptArg)
{
    FLASH_nERROR enReturnReg;

    enReturnReg = FLASH__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, FLASH_enSTATE_ENA);

    return (enReturnReg);
}

FLASH_nERROR FLASH__enDisableInterruptSourceByMask(FLASH_nMODULE enModuleArg, FLASH_nINTMASK enInterruptMaskArg)
{
    FLASH_nERROR enReturnReg;

    enReturnReg = FLASH__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, FLASH_enSTATE_DIS);

    return (enReturnReg);
}

FLASH_nERROR FLASH__enDisableInterruptSourceByNumber(FLASH_nMODULE enModuleArg, FLASH_nINT enInterruptArg)
{
    FLASH_nERROR enReturnReg;

    enReturnReg = FLASH__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, FLASH_enSTATE_DIS);

    return (enReturnReg);
}

FLASH_nERROR FLASH__enClearInterruptSourceByMask(FLASH_nMODULE enModuleArg, FLASH_nINTMASK enInterruptMaskArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptMaskArg, (uint32_t) FLASH_enINTMASK_MAX);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = FLASH_MISC_OFFSET;
        stRegister.u32Value = enInterruptMaskArg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enClearInterruptSourceByNumber(FLASH_nMODULE enModuleArg, FLASH_nINT enInterruptArg)
{
    FLASH_Register_t stRegister;
    uint32_t u32ShiftReg;
    uint32_t u32ValueReg;
    FLASH_nERROR enErrorReg;

    u32ShiftReg = 0UL;
    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptArg, (uint32_t) FLASH_enINT_MAX);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32ValueReg = 1UL;
        u32ValueReg <<= u32ShiftReg;
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = FLASH_MISC_OFFSET;
        stRegister.u32Value = (uint32_t) u32ValueReg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enStatusInterruptSourceByMask(FLASH_nMODULE enModuleArg, FLASH_nINTMASK enInterruptMaskArg, FLASH_nINTMASK* penInterruptStatusArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptStatusArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptMaskArg, (uint32_t) FLASH_enINTMASK_MAX);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enInterruptMaskArg;
        stRegister.uptrAddress = FLASH_RIS_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *penInterruptStatusArg = (FLASH_nINTMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enStatusInterruptSourceByNumber(FLASH_nMODULE enModuleArg, FLASH_nINT enInterruptArg, FLASH_nSTATUS* penStatusArg)
{
    FLASH_Register_t stRegister;
    uint32_t u32ShiftReg;
    FLASH_nERROR enErrorReg;

    u32ShiftReg = 0UL;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptArg, (uint32_t) FLASH_enINT_MAX);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32ShiftReg;
        stRegister.u32Mask = FLASH_RIS_ARIS_MASK;
        stRegister.uptrAddress = FLASH_RIS_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (FLASH_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enStatusMaskedInterruptSourceByMask(FLASH_nMODULE enModuleArg, FLASH_nINTMASK enInterruptMaskArg, FLASH_nINTMASK* penInterruptStatusArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptStatusArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptMaskArg, (uint32_t) FLASH_enINTMASK_MAX);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enInterruptMaskArg;
        stRegister.uptrAddress = FLASH_MISC_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *penInterruptStatusArg = (FLASH_nINTMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enStatusMaskedInterruptSourceByNumber(FLASH_nMODULE enModuleArg, FLASH_nINT enInterruptArg, FLASH_nSTATUS* penStatusArg)
{
    FLASH_Register_t stRegister;
    uint32_t u32ShiftReg;
    FLASH_nERROR enErrorReg;

    u32ShiftReg = 0UL;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM((uint32_t) enInterruptArg, (uint32_t) FLASH_enINT_MAX);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &u32ShiftReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32ShiftReg;
        stRegister.u32Mask = FLASH_MISC_AMISC_MASK;
        stRegister.uptrAddress = FLASH_MISC_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (FLASH_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}
