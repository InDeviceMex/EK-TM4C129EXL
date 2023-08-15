/**
 *
 * @file SSI_InterruptSource.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/xHeader/SSI_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

static SSI_nERROR SSI__enGetInterruptSourceShift(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, UBase_t* puxShiftArg);


static SSI_nERROR SSI__enGetInterruptSourceShift(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, UBase_t* puxShiftArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxShiftArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SSI_enMODULE_MAX);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SSI_enINT_SW);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        static const UBase_t SSI_uxInterruptBit[(UBase_t) SSI_enINT_SW] =
        {
         SSI_RIS_R_RORRIS_BIT     , SSI_RIS_R_RTRIS_BIT    ,
         SSI_RIS_R_RXRIS_BIT      , SSI_RIS_R_TXRIS_BIT    ,
         SSI_RIS_R_DMARXRIS_BIT   , SSI_RIS_R_DMATXRIS_BIT ,
         SSI_RIS_R_EOTRIS_BIT     ,
        };
        *puxShiftArg = SSI_uxInterruptBit[(UBase_t) enInterruptArg];
    }
    return (enErrorReg);
}


SSI_nERROR SSI__enSetInterruptSourceStateByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg, SSI_nSTATE enStateArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SSI_enINTMASK_MAX);
    if(SSI_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (SSI_enSTATE_DIS == enStateArg) ? 0U : (UBase_t) enInterruptMaskArg;

        SSI_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = SSI_IM_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

SSI_nERROR SSI__enSetInterruptSourceStateByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, SSI_nSTATE enStateArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SSI_enINT_SW);
    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SSI_IM_RORIM_MASK;
        stRegister.uptrAddress = SSI_IM_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetInterruptSourceStateByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg, SSI_nINTMASK* penInterruptGetArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptGetArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;

    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SSI_enINTMASK_MAX);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = SSI_IM_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
        if(SSI_enERROR_OK == enErrorReg)
        {
            *penInterruptGetArg = (SSI_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetInterruptSourceStateByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, SSI_nSTATE* penStateArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SSI_enINT_SW);
    }
    UBase_t uxShiftReg;
    uxShiftReg = 0U;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SSI_IM_RORIM_MASK;
        stRegister.uptrAddress = SSI_IM_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
        if(SSI_enERROR_OK == enErrorReg)
        {
            *penStateArg = (SSI_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enEnableInterruptSourceByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, SSI_enSTATE_ENA);
    return (enErrorReg);
}

SSI_nERROR SSI__enEnableInterruptSourceByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, SSI_enSTATE_ENA);
    return (enErrorReg);
}

SSI_nERROR SSI__enDisableInterruptSourceByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, SSI_enSTATE_DIS);
    return (enErrorReg);
}

SSI_nERROR SSI__enDisableInterruptSourceByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, SSI_enSTATE_DIS);
    return (enErrorReg);
}

SSI_nERROR SSI__enClearInterruptSourceByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SSI_enINTMASK_MAX);
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = SSI_ICR_OFFSET;
        stRegister.uxValue = enInterruptMaskArg;
        enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enClearInterruptSourceByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SSI_enINT_SW);
    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = 1UL;
        uxValueReg <<= uxShiftReg;

        SSI_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = SSI_ICR_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enStatusInterruptSourceByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg, SSI_nINTMASK* penInterruptStatusArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptStatusArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;

    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SSI_enINTMASK_MAX);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = SSI_RIS_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
        if(SSI_enERROR_OK == enErrorReg)
        {
            *penInterruptStatusArg = (SSI_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enStatusInterruptSourceByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, SSI_nSTATUS* penStatusArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SSI_enINT_SW);
    }
    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SSI_RIS_RORRIS_MASK;
        stRegister.uptrAddress = SSI_RIS_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
        if(SSI_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (SSI_nSTATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enStatusMaskedInterruptSourceByMask(SSI_nMODULE enModuleArg, SSI_nINTMASK enInterruptMaskArg, SSI_nINTMASK* penInterruptStatusArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptStatusArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SSI_enINTMASK_MAX);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = SSI_MIS_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
        if(SSI_enERROR_OK == enErrorReg)
        {
            *penInterruptStatusArg = (SSI_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enStatusMaskedInterruptSourceByNumber(SSI_nMODULE enModuleArg, SSI_nINT enInterruptArg, SSI_nSTATUS* penStatusArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SSI_enINT_SW);
    }
    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SSI_MIS_RORMIS_MASK;
        stRegister.uptrAddress = SSI_MIS_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
        if(SSI_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (SSI_nSTATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
