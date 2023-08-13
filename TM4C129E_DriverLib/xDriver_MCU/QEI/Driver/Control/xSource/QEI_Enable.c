/**
 *
 * @file QEI_Enable.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_Enable.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

QEI_nERROR QEI__enSetState(QEI_nMODULE enModuleArg, QEI_nSTATE enStateArg)
{
    QEI_Register_t stRegister;
    stRegister.uxShift = QEI_CTL_R_ENABLE_BIT;
    stRegister.uxMask = QEI_CTL_ENABLE_MASK;
    stRegister.uptrAddress = QEI_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    QEI_nERROR enErrorReg;
    enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

QEI_nERROR QEI__enGetState(QEI_nMODULE enModuleArg, QEI_nSTATE* penStateArg)
{
    QEI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? QEI_enERROR_POINTER : QEI_enERROR_OK;

    if(QEI_enERROR_OK == enErrorReg)
    {
        QEI_Register_t stRegister;
        stRegister.uxShift = QEI_CTL_R_ENABLE_BIT;
        stRegister.uxMask = QEI_CTL_ENABLE_MASK;
        stRegister.uptrAddress = QEI_CTL_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
        if(QEI_enERROR_OK == enErrorReg)
        {
            *penStateArg = (QEI_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
