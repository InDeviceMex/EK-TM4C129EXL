/**
 *
 * @file QEI_Velocity.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_Velocity.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

QEI_nERROR QEI__enSetPulsePerPeriodState(QEI_nMODULE enModuleArg, QEI_nSTATE enStateArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    stRegister.uxShift = QEI_CTL_R_VELEN_BIT;
    stRegister.uxMask = QEI_CTL_VELEN_MASK;
    stRegister.uptrAddress = QEI_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

QEI_nERROR QEI__enGetPulsePerPeriodState(QEI_nMODULE enModuleArg, QEI_nSTATE* penStateArg)
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
        stRegister.uxShift = QEI_CTL_R_VELEN_BIT;
        stRegister.uxMask = QEI_CTL_VELEN_MASK;
        stRegister.uptrAddress = QEI_CTL_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penStateArg = (QEI_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}


QEI_nERROR QEI__enSetPulsePerPeriodPredivider(QEI_nMODULE enModuleArg, QEI_nPREDIV enPredividerArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    stRegister.uxShift = QEI_CTL_R_VELDIV_BIT;
    stRegister.uxMask = QEI_CTL_VELDIV_MASK;
    stRegister.uptrAddress = QEI_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enPredividerArg;
    enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

QEI_nERROR QEI__enGetPulsePerPeriodPredivider(QEI_nMODULE enModuleArg, QEI_nPREDIV* penPredividerArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penPredividerArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = QEI_CTL_R_VELDIV_BIT;
        stRegister.uxMask = QEI_CTL_VELDIV_MASK;
        stRegister.uptrAddress = QEI_CTL_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penPredividerArg = (QEI_nPREDIV) stRegister.uxValue;
    }

    return (enErrorReg);
}
