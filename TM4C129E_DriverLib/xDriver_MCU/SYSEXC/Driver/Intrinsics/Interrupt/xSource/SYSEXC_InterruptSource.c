/**
 *
 * @file SYSEXC_InterruptSource.c
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
 * @verbatim 19 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Interrupt/xHeader/SYSEXC_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Primitives/SYSEXC_Primitives.h>
#include <xDriver_MCU/SYSEXC/Peripheral/SYSEXC_Peripheral.h>

static SYSEXC_nERROR SYSEXC__enGetInterruptSourceShift(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, UBase_t* puxShiftArg);


static SYSEXC_nERROR SYSEXC__enGetInterruptSourceShift(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, UBase_t* puxShiftArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxShiftArg) ? SYSEXC_enERROR_POINTER : SYSEXC_enERROR_OK;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SYSEXC_enMODULE_MAX);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SYSEXC_enINT_SW);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        static const UBase_t SYSEXC_uxInterruptBit[(UBase_t) SYSEXC_enINT_SW] =
        {
         SYSEXC_RIS_R_FPIDC_BIT, SYSEXC_RIS_R_FPDZC_BIT,
         SYSEXC_RIS_R_FPIOC_BIT, SYSEXC_RIS_R_FPUFC_BIT,
         SYSEXC_RIS_R_FPOFC_BIT, SYSEXC_RIS_R_FPIXC_BIT,
        };
        *puxShiftArg = SYSEXC_uxInterruptBit[(UBase_t) enInterruptArg];
    }
    return (enErrorReg);
}


SYSEXC_nERROR SYSEXC__enSetInterruptSourceStateByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg, SYSEXC_nSTATE enStateArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SYSEXC_enINTMASK_MAX);
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (SYSEXC_enSTATE_DIS == enStateArg) ? 0U : enInterruptMaskArg;
        SYSEXC_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = SYSEXC_IM_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = SYSEXC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enSetInterruptSourceStateByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, SYSEXC_nSTATE enStateArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SYSEXC_enINT_SW);

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSEXC__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        SYSEXC_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SYSEXC_IM_FPIDC_MASK;
        stRegister.uptrAddress = SYSEXC_IM_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = SYSEXC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enGetInterruptSourceStateByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg, SYSEXC_nINTMASK* penInterruptGetArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptGetArg) ? SYSEXC_enERROR_POINTER : SYSEXC_enERROR_OK;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SYSEXC_enINTMASK_MAX);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        SYSEXC_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = SYSEXC_IM_OFFSET;
        enErrorReg = SYSEXC__enReadRegister(enModuleArg, &stRegister);
        if(SYSEXC_enERROR_OK == enErrorReg)
        {
            *penInterruptGetArg = (SYSEXC_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enGetInterruptSourceStateByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, SYSEXC_nSTATE* penStateArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? SYSEXC_enERROR_POINTER : SYSEXC_enERROR_OK;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SYSEXC_enINT_SW);
    }

    UBase_t uxShiftReg;
    uxShiftReg = 0U;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSEXC__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        SYSEXC_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SYSEXC_IM_FPIDC_MASK;
        stRegister.uptrAddress = SYSEXC_IM_OFFSET;
        enErrorReg = SYSEXC__enReadRegister(enModuleArg, &stRegister);
        if(SYSEXC_enERROR_OK == enErrorReg)
        {
            *penStateArg = (SYSEXC_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enEnableInterruptSourceByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = SYSEXC__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, SYSEXC_enSTATE_ENA);
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enEnableInterruptSourceByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = SYSEXC__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, SYSEXC_enSTATE_ENA);
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enDisableInterruptSourceByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = SYSEXC__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, SYSEXC_enSTATE_DIS);
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enDisableInterruptSourceByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = SYSEXC__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, SYSEXC_enSTATE_DIS);
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enClearInterruptSourceByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SYSEXC_enINTMASK_MAX);
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        SYSEXC_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = SYSEXC_IC_OFFSET;
        stRegister.uxValue = enInterruptMaskArg;
        enErrorReg = SYSEXC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enClearInterruptSourceByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SYSEXC_enINT_SW);

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSEXC__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = 1UL;
        uxValueReg <<= uxShiftReg;

        SYSEXC_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = SYSEXC_IC_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = SYSEXC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enStatusInterruptSourceByMaskByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg, SYSEXC_nINTMASK* penInterruptStatusArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptStatusArg) ? SYSEXC_enERROR_POINTER : SYSEXC_enERROR_OK;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SYSEXC_enINTMASK_MAX);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        SYSEXC_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = SYSEXC_RIS_OFFSET;
        enErrorReg = SYSEXC__enReadRegister(enModuleArg, &stRegister);
        if(SYSEXC_enERROR_OK == enErrorReg)
        {
            *penInterruptStatusArg = (SYSEXC_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enStatusInterruptSourceByMaskByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, SYSEXC_nSTATUS* penStatusArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? SYSEXC_enERROR_POINTER : SYSEXC_enERROR_OK;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SYSEXC_enINT_SW);
    }

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSEXC__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        SYSEXC_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SYSEXC_RIS_FPIDC_MASK;
        stRegister.uptrAddress = SYSEXC_RIS_OFFSET;
        enErrorReg = SYSEXC__enReadRegister(enModuleArg, &stRegister);
        if(SYSEXC_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (SYSEXC_nSTATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enStatusMaskedInterruptSourceByMask(SYSEXC_nMODULE enModuleArg, SYSEXC_nINTMASK enInterruptMaskArg, SYSEXC_nINTMASK* penInterruptStatusArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptStatusArg) ? SYSEXC_enERROR_POINTER : SYSEXC_enERROR_OK;

    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SYSEXC_enINTMASK_MAX);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        SYSEXC_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = SYSEXC_MIS_OFFSET;
        enErrorReg = SYSEXC__enReadRegister(enModuleArg, &stRegister);
        if(SYSEXC_enERROR_OK == enErrorReg)
        {
            *penInterruptStatusArg = (SYSEXC_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSEXC_nERROR SYSEXC__enStatusMaskedInterruptSourceByNumber(SYSEXC_nMODULE enModuleArg, SYSEXC_nINT enInterruptArg, SYSEXC_nSTATUS* penStatusArg)
{
    SYSEXC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? SYSEXC_enERROR_POINTER : SYSEXC_enERROR_OK;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SYSEXC_enINT_SW);
    }

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSEXC__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        SYSEXC_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SYSEXC_MIS_FPIDC_MASK;
        stRegister.uptrAddress = SYSEXC_MIS_OFFSET;
        enErrorReg = SYSEXC__enReadRegister(enModuleArg, &stRegister);
        if(SYSEXC_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (SYSEXC_nSTATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
