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
    QEI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxShiftArg) ? QEI_enERROR_POINTER : QEI_enERROR_OK;
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
        static const UBase_t QEI_uxInterruptBit[(UBase_t) QEI_enINT_SW] =
        {
         QEI_RIS_R_INTINDEX_BIT,
         QEI_RIS_R_INTTIMER_BIT,
         QEI_RIS_R_INTDIR_BIT,
         QEI_RIS_R_INTERROR_BIT
        };
        *puxShiftArg = QEI_uxInterruptBit[(UBase_t) enInterruptArg];
    }
    return (enErrorReg);
}


QEI_nERROR QEI__enSetInterruptSourceStateByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nSTATE enStateArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    if(QEI_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (QEI_enSTATE_DIS == enStateArg) ? 0U : (UBase_t) enInterruptMaskArg;

        QEI_Register_t stRegister;
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
    QEI_nERROR enErrorReg;
    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        QEI_Register_t stRegister;
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
    QEI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptGetArg) ? QEI_enERROR_POINTER : QEI_enERROR_OK;

    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        QEI_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = QEI_INTEN_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
        if(QEI_enERROR_OK == enErrorReg)
        {
            *penInterruptGetArg = (QEI_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enGetInterruptSourceStateByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATE* penStateArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? QEI_enERROR_POINTER : QEI_enERROR_OK;
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);
    }

    UBase_t uxShiftReg;
    uxShiftReg = 0U;
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        QEI_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = QEI_INTEN_INTINDEX_MASK;
        stRegister.uptrAddress = QEI_INTEN_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
        if(QEI_enERROR_OK == enErrorReg)
        {
            *penStateArg = (QEI_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enEnableInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = QEI__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, QEI_enSTATE_ENA);
    return (enErrorReg);
}

QEI_nERROR QEI__enEnableInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = QEI__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, QEI_enSTATE_ENA);
    return (enErrorReg);
}

QEI_nERROR QEI__enDisableInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = QEI__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, QEI_enSTATE_DIS);
    return (enErrorReg);
}

QEI_nERROR QEI__enDisableInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = QEI__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, QEI_enSTATE_DIS);
    return (enErrorReg);
}

QEI_nERROR QEI__enClearInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    if(QEI_enERROR_OK == enErrorReg)
    {
        QEI_Register_t stRegister;
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
    QEI_nERROR enErrorReg;
    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = 1UL;
        uxValueReg <<= uxShiftReg;

        QEI_Register_t stRegister;
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
    QEI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptStatusArg) ? QEI_enERROR_POINTER : QEI_enERROR_OK;

    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        QEI_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = QEI_RIS_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
        if(QEI_enERROR_OK == enErrorReg)
        {
            *penInterruptStatusArg = (QEI_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enStatusInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATUS* penStatusArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? QEI_enERROR_POINTER :  QEI_enERROR_OK;

    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);
    }

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        QEI_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = QEI_RIS_INTINDEX_MASK;
        stRegister.uptrAddress = QEI_RIS_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
        if(QEI_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (QEI_nSTATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enStatusMaskedInterruptSourceByMask(QEI_nMODULE enModuleArg, QEI_nINTMASK enInterruptMaskArg, QEI_nINTMASK* penInterruptStatusArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptStatusArg) ? QEI_enERROR_POINTER : QEI_enERROR_OK;

    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) QEI_enINTMASK_MAX);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        QEI_Register_t stRegister;
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = QEI_ISC_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
        if(QEI_enERROR_OK == enErrorReg)
        {
            *penInterruptStatusArg = (QEI_nINTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enStatusMaskedInterruptSourceByNumber(QEI_nMODULE enModuleArg, QEI_nINT enInterruptArg, QEI_nSTATUS* penStatusArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? QEI_enERROR_POINTER : QEI_enERROR_OK;
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) QEI_enINT_SW);
    }

    UBase_t uxShiftReg;
    uxShiftReg = 0UL;
    if(QEI_enERROR_OK == enErrorReg)
    {
        enErrorReg = QEI__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        QEI_Register_t stRegister;
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = QEI_ISC_INTINDEX_MASK;
        stRegister.uptrAddress = QEI_ISC_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
        if(QEI_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (QEI_nSTATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
