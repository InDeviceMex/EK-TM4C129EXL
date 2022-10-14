/**
 *
 * @file QEI_LoadTime.c
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
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_LoadTime.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

QEI_nERROR QEI__enSetLoadTimerValue(QEI_nMODULE enModuleArg, UBase_t uxPeriodArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    stRegister.uxShift = QEI_LOAD_R_LOAD_BIT;
    stRegister.uxMask = QEI_LOAD_LOAD_MASK;
    stRegister.uptrAddress = QEI_LOAD_OFFSET;
    stRegister.uxValue = (UBase_t) uxPeriodArg;
    enErrorReg = QEI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

QEI_nERROR QEI__enGetLoadTimerValue(QEI_nMODULE enModuleArg, UBase_t* puxPeriodArg)
{
    QEI_Register_t stRegister;
    QEI_nERROR enErrorReg;

    enErrorReg = QEI_enERROR_OK;
    if(0UL == (uintptr_t) puxPeriodArg)
    {
        enErrorReg = QEI_enERROR_POINTER;
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = QEI_LOAD_R_LOAD_BIT;
        stRegister.uxMask = QEI_LOAD_LOAD_MASK;
        stRegister.uptrAddress = QEI_LOAD_OFFSET;
        enErrorReg = QEI__enReadRegister(enModuleArg, &stRegister);
    }
    if(QEI_enERROR_OK == enErrorReg)
    {
        *puxPeriodArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}
