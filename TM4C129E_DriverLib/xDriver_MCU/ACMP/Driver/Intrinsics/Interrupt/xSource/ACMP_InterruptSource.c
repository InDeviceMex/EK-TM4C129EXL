/**
 *
 * @file ACMP_InterruptSource.c
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
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/xHeader/ACMP_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

ACMP_nERROR ACMP__enSetInterruptSourceStateByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg, ACMP_nSTATE enStateArg)
{
    ACMP_Register_t stRegister;
    UBase_t uxValueReg;
    ACMP_nERROR enErrorReg;

    enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompMaskArg, (UBase_t) ACMP_enCOMPMASK_MAX);
    if(ACMP_enERROR_OK == enErrorReg)
    {
        if(ACMP_enSTATE_DIS == enStateArg)
        {
            uxValueReg = 0U;
        }
        else
        {
            uxValueReg = (UBase_t) enCompMaskArg;
        }
        stRegister.uxShift = 0U;
        stRegister.uxMask = enCompMaskArg;
        stRegister.uptrAddress = ACMP_INTEN_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = ACMP__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ACMP_nERROR ACMP__enSetInterruptSourceStateByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg, ACMP_nSTATE enStateArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompArg, (UBase_t) ACMP_enCOMP_MAX);
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enCompArg;
        stRegister.uxMask = ACMP_INTEN_IN0_MASK;
        stRegister.uptrAddress = ACMP_INTEN_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = ACMP__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetInterruptSourceStateByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg, ACMP_nCOMPMASK* penCompGetArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;

    if(0UL == (uintptr_t) penCompGetArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompMaskArg, (UBase_t) ACMP_enCOMPMASK_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = enCompMaskArg;
        stRegister.uptrAddress = ACMP_INTEN_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penCompGetArg = (ACMP_nCOMPMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}


ACMP_nERROR ACMP__enGetInterruptSourceStateByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg, ACMP_nSTATE* penStateArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;

    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompArg, (UBase_t) ACMP_enCOMP_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enCompArg;
        stRegister.uxMask = ACMP_INTEN_IN0_MASK;
        stRegister.uptrAddress = ACMP_INTEN_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penStateArg = (ACMP_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}

ACMP_nERROR ACMP__enEnableInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg)
{
    ACMP_nERROR enReturnReg;

    enReturnReg = ACMP__enSetInterruptSourceStateByMask(enModuleArg, enCompMaskArg, ACMP_enSTATE_ENA);

    return (enReturnReg);
}

ACMP_nERROR ACMP__enEnableInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg)
{
    ACMP_nERROR enReturnReg;

    enReturnReg = ACMP__enSetInterruptSourceStateByNumber(enModuleArg, enCompArg, ACMP_enSTATE_ENA);

    return (enReturnReg);
}

ACMP_nERROR ACMP__enDisableInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg)
{
    ACMP_nERROR enReturnReg;

    enReturnReg = ACMP__enSetInterruptSourceStateByMask(enModuleArg, enCompMaskArg, ACMP_enSTATE_DIS);

    return (enReturnReg);
}

ACMP_nERROR ACMP__enDisableInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg)
{
    ACMP_nERROR enReturnReg;

    enReturnReg = ACMP__enSetInterruptSourceStateByNumber(enModuleArg, enCompArg, ACMP_enSTATE_DIS);

    return (enReturnReg);
}

ACMP_nERROR ACMP__enClearInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompMaskArg, (UBase_t) ACMP_enCOMPMASK_MAX);
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = ACMP_MIS_OFFSET;
        stRegister.uxValue = enCompMaskArg;
        enErrorReg = ACMP__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ACMP_nERROR ACMP__enClearInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg)
{
    ACMP_Register_t stRegister;
    UBase_t uxValueReg;
    ACMP_nERROR enErrorReg;

    enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompArg, (UBase_t) ACMP_enCOMP_MAX);
    if(ACMP_enERROR_OK == enErrorReg)
    {
        uxValueReg = 1UL;
        uxValueReg <<= (UBase_t) enCompArg;
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = ACMP_MIS_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = ACMP__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ACMP_nERROR ACMP__enStatusInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg, ACMP_nCOMPMASK* penCompStatusArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;

    if(0UL == (uintptr_t) penCompStatusArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompMaskArg, (UBase_t) ACMP_enCOMPMASK_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = enCompMaskArg;
        stRegister.uptrAddress = ACMP_RIS_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penCompStatusArg = (ACMP_nCOMPMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}


ACMP_nERROR ACMP__enStatusInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg, ACMP_nSTATUS* penStatusArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;

    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompArg, (UBase_t) ACMP_enCOMP_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enCompArg;
        stRegister.uxMask = ACMP_RIS_IN0_MASK;
        stRegister.uptrAddress = ACMP_RIS_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (ACMP_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}


ACMP_nERROR ACMP__enStatusMaskedInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg, ACMP_nCOMPMASK* penCompStatusArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;

    if(0UL == (uintptr_t) penCompStatusArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompMaskArg, (UBase_t) ACMP_enCOMPMASK_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = enCompMaskArg;
        stRegister.uptrAddress = ACMP_MIS_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penCompStatusArg = (ACMP_nCOMPMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}


ACMP_nERROR ACMP__enStatusMaskedInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg, ACMP_nSTATUS* penStatusArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enCompArg, (UBase_t) ACMP_enCOMP_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enCompArg;
        stRegister.uxMask = ACMP_MIS_IN0_MASK;
        stRegister.uptrAddress = ACMP_MIS_OFFSET;
        enErrorReg = ACMP__enReadRegister(enModuleArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (ACMP_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}
