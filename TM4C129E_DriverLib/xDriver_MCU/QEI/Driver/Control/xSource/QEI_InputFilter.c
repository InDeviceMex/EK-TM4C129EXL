/**
 *
 * @file QEI_InputFilter.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_InputFilter.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

QEI_nERROR QEI__enSetInputFilterState(QEI_nMODULE enModuleArg, QEI_nSTATE enStateArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    stRegister.uxShift = QEI_CTL_R_FILTEN_BIT;
    stRegister.uxMask = QEI_CTL_FILTEN_MASK;
    stRegister.uptrAddress = QEI_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

QEI_nERROR QEI__enGetInputFilterState(QEI_nMODULE enModuleArg, QEI_nSTATE* penStateArg)
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
        stRegister.uxShift = QEI_CTL_R_FILTEN_BIT;
        stRegister.uxMask = QEI_CTL_FILTEN_MASK;
        stRegister.uptrAddress = QEI_CTL_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penStateArg = (QEI_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}


QEI_nERROR QEI__enSetInputFilterCount(QEI_nMODULE enModuleArg, QEI_nFILTER_COUNT enCountArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    stRegister.uxShift = QEI_CTL_R_FILTCNT_BIT;
    stRegister.uxMask = QEI_CTL_FILTCNT_MASK;
    stRegister.uptrAddress = QEI_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enCountArg;
    enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

QEI_nERROR QEI__enGetInputFilterCount(QEI_nMODULE enModuleArg, QEI_nFILTER_COUNT* penCountArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penCountArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = QEI_CTL_R_FILTCNT_BIT;
        stRegister.uxMask = QEI_CTL_FILTCNT_MASK;
        stRegister.uptrAddress = QEI_CTL_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penCountArg = (QEI_nFILTER_COUNT) stRegister.uxValue;
    }

    return (enErrorReg);
}

