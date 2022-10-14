/**
 *
 * @file QEI_InterruptSource.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/xHeader/QEI_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

static QEI_nERROR QEI__enGetInterruptSourceShift(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, UBase_t* puxShiftArg);


static QEI_nERROR QEI__enGetInterruptSourceShift(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, UBase_t* puxShiftArg)
{
    const UBase_t QEI_uxInterruptBit[(UBase_t) QEI_enINT_SW] =
    {
     QEI_RIS_R_INTINDEX_BIT     , QEI_RIS_R_INTTIMER_BIT , QEI_RIS_R_INTDIR_BIT  , QEI_RIS_R_INTERROR_BIT
    };

    QEI_nERROR enErrorReg;
    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) puxShiftArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) QEI_enMODULE_MAX);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *puxShiftArg = QEI_uxInterruptBit[(UBase_t) enInterruptArg];
    }
    return (enErrorReg);
}


QEI_nERROR QEI__enSetInterruptSourceStateByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nSTATE enStateArg)
{
    QEI_Register_t stRegister;
    UBase_t uxValueReg;
    QEI_nERROR enErrorReg;

    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    if(QEI_enERROR_OK == enErrorReg)
    {
        if(QEI_enSTATE_DIS == enStateArg)
        {
            uxValueReg = 0U;
        }
        else
        {
            uxValueReg = (UBase_t) enInterruptMaskArg;
        }
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = QEI_INTEN_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

QEI_nERROR QEI__enSetInterruptSourceStateByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATE enStateArg)
{
    QEI_Register_t stRegister;
    UBase_t uxShiftReg;
    QEI_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = QEI_INTEN_INTINDEX_MASK;
        stRegister.uptrAddress = QEI_INTEN_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

QEI_nERROR QEI__enGetInterruptSourceStateByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nINTMASK* penInterruptGetArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptGetArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = QEI_INTEN_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penInterruptGetArg = (QEI_nINTMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enGetInterruptSourceStateByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATE* penStateArg)
{
    QEI_Register_t stRegister;
    UBase_t uxShiftReg;
    QEI_nERROR enErrorReg;

    uxShiftReg = 0U;
    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = QEI_INTEN_INTINDEX_MASK;
        stRegister.uptrAddress = QEI_INTEN_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penStateArg = (QEI_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enEnableInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg)
{
    QEI_nERROR enReturnReg;

    enReturnReg = QEI__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, QEI_enSTATE_ENA);

    return (enReturnReg);
}

QEI_nERROR QEI__enEnableInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg)
{
    QEI_nERROR enReturnReg;

    enReturnReg = QEI__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, QEI_enSTATE_ENA);

    return (enReturnReg);
}

QEI_nERROR QEI__enDisableInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg)
{
    QEI_nERROR enReturnReg;

    enReturnReg = QEI__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, QEI_enSTATE_DIS);

    return (enReturnReg);
}

QEI_nERROR QEI__enDisableInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg)
{
    QEI_nERROR enReturnReg;

    enReturnReg = QEI__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, QEI_enSTATE_DIS);

    return (enReturnReg);
}

QEI_nERROR QEI__enClearInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = QEI_ISC_OFFSET;
        stRegister.uxValue = enInterruptMaskArg;
        enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

QEI_nERROR QEI__enClearInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg)
{
    QEI_Register_t stRegister;
    UBase_t uxShiftReg;
    UBase_t uxValueReg;
    QEI_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        uxValueReg = 1UL;
        uxValueReg <<= uxShiftReg;
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = QEI_ISC_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

QEI_nERROR QEI__enStatusInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nINTMASK* penInterruptStatusArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptStatusArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = QEI_RIS_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penInterruptStatusArg = (QEI_nINTMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enStatusInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATUS* penStatusArg)
{
    QEI_Register_t stRegister;
    UBase_t uxShiftReg;
    QEI_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = QEI_RIS_INTINDEX_MASK;
        stRegister.uptrAddress = QEI_RIS_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (QEI_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enStatusMaskedInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nINTMASK* penInterruptStatusArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptStatusArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = QEI_ISC_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penInterruptStatusArg = (QEI_nINTMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enStatusMaskedInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATUS* penStatusArg)
{
    QEI_Register_t stRegister;
    UBase_t uxShiftReg;
    QEI_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = QEI_ISC_INTINDEX_MASK;
        stRegister.uptrAddress = QEI_ISC_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (QEI_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

