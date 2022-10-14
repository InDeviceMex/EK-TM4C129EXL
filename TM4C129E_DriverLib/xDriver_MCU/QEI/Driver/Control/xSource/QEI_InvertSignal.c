/**
 *
 * @file QEI_InvertSignal.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_InvertSignal.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

QEI_nERROR QEI__enSetInvertInputStateByNumber(QEI_nMODULE enModuleArg,
                                              QEI_nINPUT enInputArg,
                                              QEI_nSTATE enStateArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    stRegister.uxShift = QEI_CTL_R_INVA_BIT;
    stRegister.uxShift += (UBase_t) enInputArg;
    stRegister.uxMask = QEI_CTL_INVA_MASK;
    stRegister.uxValue = (UBase_t) enStateArg;
    stRegister.uptrAddress = QEI_CTL_OFFSET;
    enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

QEI_nERROR QEI__enSetInvertInputStateByMask(QEI_nMODULE enModuleArg,
                                            QEI_nINPUTMASK enInputArg,
                                            QEI_nSTATE enStateArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    stRegister.uxShift = QEI_CTL_R_INVA_BIT;
    stRegister.uxMask = (UBase_t) enInputArg;
    stRegister.uptrAddress = QEI_CTL_OFFSET;
    if(QEI_enSTATE_DIS == enStateArg)
    {
        stRegister.uxValue = (UBase_t) 0UL;
        enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    }
    else
    {
        stRegister.uxValue = (UBase_t) enInputArg;
        enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

QEI_nERROR QEI__enGetInvertInputStateByNumber(QEI_nMODULE enModuleArg,
                                          QEI_nINPUT enInputArg,
                                          QEI_nSTATE* penStateArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = QEI_CTL_R_INVA_BIT;
        stRegister.uxShift += (UBase_t) enInputArg;
        stRegister.uxMask = QEI_CTL_INVA_MASK;
        stRegister.uptrAddress = QEI_CTL_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penStateArg = (QEI_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

QEI_nERROR QEI__enGetInvertInputStateByMask(QEI_nMODULE enModuleArg,
                                          QEI_nINPUT enSignalsArg,
                                          QEI_nINPUT* penStateArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = QEI_CTL_R_INVA_BIT;
        stRegister.uxMask = (UBase_t) enSignalsArg;
        stRegister.uptrAddress = QEI_CTL_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penStateArg = (QEI_nINPUT) stRegister.uxValue;
    }

    return (enErrorReg);
}

