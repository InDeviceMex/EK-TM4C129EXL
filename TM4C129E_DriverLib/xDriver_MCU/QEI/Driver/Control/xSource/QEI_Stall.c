/**
 *
 * @file QEI_Stall.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_Stall.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

QEI_nERROR QEI__enSetStallMode(QEI_nMODULE enModuleArg, QEI_nSTALL enModeArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    stRegister.uxShift = QEI_CTL_R_STALLEN_BIT;
    stRegister.uxMask = QEI_CTL_STALLEN_MASK;
    stRegister.uptrAddress = QEI_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enModeArg;
    enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

QEI_nERROR QEI__enGetStallMode(QEI_nMODULE enModuleArg, QEI_nSTALL* penModeArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = QEI_CTL_R_STALLEN_BIT;
        stRegister.uxMask = QEI_CTL_STALLEN_MASK;
        stRegister.uptrAddress = QEI_CTL_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *penModeArg = (QEI_nSTALL) stRegister.uxValue;
    }

    return (enErrorReg);
}
