/**
 *
 * @file EEPROM_InterruptSource.c
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/xHeader/EEPROM_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Primitives/EEPROM_Primitives.h>

EEPROM_nERROR EEPROM__enSetInterruptSourceStateByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg, EEPROM_nSTATE enStateArg)
{
    EEPROM_Register_t stRegister;
    uint32_t u32ValueReg;
    EEPROM_nERROR enErrorReg;

    enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompMaskArg, (uint32_t) EEPROM_enCOMPMASK_MAX);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        if(EEPROM_enSTATE_DIS == enStateArg)
        {
            u32ValueReg = 0U;
        }
        else
        {
            u32ValueReg = (uint32_t) enCompMaskArg;
        }
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enCompMaskArg;
        stRegister.uptrAddress = EEPROM_INTEN_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enSetInterruptSourceStateByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg, EEPROM_nSTATE enStateArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompArg, (uint32_t) EEPROM_enCOMP_MAX);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enCompArg;
        stRegister.u32Mask = EEPROM_INTEN_IN0_MASK;
        stRegister.uptrAddress = EEPROM_INTEN_OFFSET;
        stRegister.u32Value = (uint32_t) enStateArg;
        enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enGetInterruptSourceStateByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg, EEPROM_nCOMPMASK* penCompGetArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;

    if(0UL == (uintptr_t) penCompGetArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompMaskArg, (uint32_t) EEPROM_enCOMPMASK_MAX);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enCompMaskArg;
        stRegister.uptrAddress = EEPROM_INTEN_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *penCompGetArg = (EEPROM_nCOMPMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}


EEPROM_nERROR EEPROM__enGetInterruptSourceStateByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg, EEPROM_nSTATE* penStateArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;

    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompArg, (uint32_t) EEPROM_enCOMP_MAX);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enCompArg;
        stRegister.u32Mask = EEPROM_INTEN_IN0_MASK;
        stRegister.uptrAddress = EEPROM_INTEN_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *penStateArg = (EEPROM_nSTATE) stRegister.u32Value;
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enEnableInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg)
{
    EEPROM_nERROR enReturnReg;

    enReturnReg = EEPROM__enSetInterruptSourceStateByMask(enModuleArg, enCompMaskArg, EEPROM_enSTATE_ENA);

    return (enReturnReg);
}

EEPROM_nERROR EEPROM__enEnableInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg)
{
    EEPROM_nERROR enReturnReg;

    enReturnReg = EEPROM__enSetInterruptSourceStateByNumber(enModuleArg, enCompArg, EEPROM_enSTATE_ENA);

    return (enReturnReg);
}

EEPROM_nERROR EEPROM__enDisableInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg)
{
    EEPROM_nERROR enReturnReg;

    enReturnReg = EEPROM__enSetInterruptSourceStateByMask(enModuleArg, enCompMaskArg, EEPROM_enSTATE_DIS);

    return (enReturnReg);
}

EEPROM_nERROR EEPROM__enDisableInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg)
{
    EEPROM_nERROR enReturnReg;

    enReturnReg = EEPROM__enSetInterruptSourceStateByNumber(enModuleArg, enCompArg, EEPROM_enSTATE_DIS);

    return (enReturnReg);
}

EEPROM_nERROR EEPROM__enClearInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompMaskArg, (uint32_t) EEPROM_enCOMPMASK_MAX);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = EEPROM_MIS_OFFSET;
        stRegister.u32Value = enCompMaskArg;
        enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enClearInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg)
{
    EEPROM_Register_t stRegister;
    uint32_t u32ValueReg;
    EEPROM_nERROR enErrorReg;

    enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompArg, (uint32_t) EEPROM_enCOMP_MAX);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        u32ValueReg = 1UL;
        u32ValueReg <<= (uint32_t) enCompArg;
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = EEPROM_MIS_OFFSET;
        stRegister.u32Value = (uint32_t) u32ValueReg;
        enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enStatusInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg, EEPROM_nCOMPMASK* penCompStatusArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;

    if(0UL == (uintptr_t) penCompStatusArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompMaskArg, (uint32_t) EEPROM_enCOMPMASK_MAX);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enCompMaskArg;
        stRegister.uptrAddress = EEPROM_RIS_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *penCompStatusArg = (EEPROM_nCOMPMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}


EEPROM_nERROR EEPROM__enStatusInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg, EEPROM_nSTATUS* penStatusArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;

    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompArg, (uint32_t) EEPROM_enCOMP_MAX);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enCompArg;
        stRegister.u32Mask = EEPROM_RIS_IN0_MASK;
        stRegister.uptrAddress = EEPROM_RIS_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (EEPROM_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}


EEPROM_nERROR EEPROM__enStatusMaskedInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg, EEPROM_nCOMPMASK* penCompStatusArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;

    if(0UL == (uintptr_t) penCompStatusArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompMaskArg, (uint32_t) EEPROM_enCOMPMASK_MAX);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enCompMaskArg;
        stRegister.uptrAddress = EEPROM_MIS_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *penCompStatusArg = (EEPROM_nCOMPMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}


EEPROM_nERROR EEPROM__enStatusMaskedInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg, EEPROM_nSTATUS* penStatusArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enCompArg, (uint32_t) EEPROM_enCOMP_MAX);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enCompArg;
        stRegister.u32Mask = EEPROM_MIS_IN0_MASK;
        stRegister.uptrAddress = EEPROM_MIS_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (EEPROM_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}
