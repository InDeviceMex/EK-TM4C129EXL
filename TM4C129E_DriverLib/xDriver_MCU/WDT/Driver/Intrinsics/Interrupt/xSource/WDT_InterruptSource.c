/**
 *
 * @file WDT_InterruptSource.c
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

static WDT_nERROR WDT__enGetInterruptSourceShift(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, UBase_t* puxShiftArg);


static WDT_nERROR WDT__enGetInterruptSourceShift(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, UBase_t* puxShiftArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxShiftArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) WDT_enMODULE_MAX);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) WDT_enINT_SW);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        static const UBase_t WDT_uxInterruptBit[(UBase_t) WDT_enINT_SW] =
        {
         WDT_RIS_R_RIS_BIT,
        };

        *puxShiftArg = WDT_uxInterruptBit[(UBase_t) enInterruptArg];
    }
    return (enErrorReg);
}


WDT_nERROR WDT__enSetInterruptSourceStateByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg, WDT_nSTATE enStateArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) WDT_enINTMASK_MAX);
    if(WDT_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg;
        uxValueReg = (WDT_enSTATE_DIS == enStateArg) ? 0U : (UBase_t) enInterruptMaskArg;

        WDT_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = WDT_CTL_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = WDT__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enSetInterruptSourceStateByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, WDT_nSTATE enStateArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) WDT_enINT_SW);

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = WDT_CTL_INTEN_MASK;
        stRegister.uptrAddress = WDT_CTL_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = WDT__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enGetInterruptSourceStateByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg, WDT_nINTMASK* penInterruptGetArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptGetArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;

    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) WDT_enINTMASK_MAX);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = WDT_CTL_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penInterruptGetArg = (WDT_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enGetInterruptSourceStateByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, WDT_nSTATE* penStateArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) WDT_enINT_SW);
    }

    UBase_t uxShiftReg;
    uxShiftReg = 0U;
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = WDT_CTL_INTEN_MASK;
        stRegister.uptrAddress = WDT_CTL_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penStateArg = (WDT_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enEnableInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, WDT_enSTATE_ENA);
    return (enErrorReg);
}

WDT_nERROR WDT__enEnableInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, WDT_enSTATE_ENA);
    return (enErrorReg);
}

WDT_nERROR WDT__enClearInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) WDT_enINTMASK_MAX);
    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = WDT_ICR_OFFSET;
        stRegister.uxValue = enInterruptMaskArg;
        enErrorReg = WDT__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

WDT_nERROR WDT__enClearInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) WDT_enINT_SW);

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = 1UL;
        uxValueReg <<= uxShiftReg;

        WDT_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = WDT_ICR_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = WDT__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enStatusInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg, WDT_nINTMASK* penInterruptStatusArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptStatusArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;

    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) WDT_enINTMASK_MAX);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = WDT_RIS_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penInterruptStatusArg = (WDT_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enStatusInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, WDT_nSTATUS* penStatusArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) WDT_enINT_SW);
    }

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = WDT_RIS_RIS_MASK;
        stRegister.uptrAddress = WDT_RIS_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (WDT_nSTATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enStatusMaskedInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg, WDT_nINTMASK* penInterruptStatusArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptStatusArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;

    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) WDT_enINTMASK_MAX);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = WDT_MIS_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penInterruptStatusArg = (WDT_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enStatusMaskedInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg, WDT_nSTATUS* penStatusArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? WDT_enERROR_POINTER : WDT_enERROR_OK;
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) WDT_enINT_SW);
    }

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        WDT_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = WDT_MIS_MIS_MASK;
        stRegister.uptrAddress = WDT_MIS_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
        if(WDT_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (WDT_nSTATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
