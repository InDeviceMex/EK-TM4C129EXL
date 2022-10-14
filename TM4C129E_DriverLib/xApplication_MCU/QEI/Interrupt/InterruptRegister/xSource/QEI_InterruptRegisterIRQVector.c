/**
 *
 * @file QEI_InterruptRegisterIRQVector.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/QEI/Interrupt/InterruptRegister/xHeader/QEI_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/QEI/Interrupt/InterruptRoutine/QEI_InterruptRoutine.h>
#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Dependencies.h>

QEI_nERROR QEI__enRegisterIRQVectorHandler(QEI_nMODULE enModuleArg, QEI_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_QEI[(UBase_t) QEI_enMODULE_MAX] =
    {
     SCB_enVECISR_QEI0
    };
    SCB_nVECISR enVectorReg;
    QEI_nERROR enErrorReg;
    QEI_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (QEI_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) QEI_enMODULE_MAX);
    if(QEI_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_QEI[(UBase_t) enModuleArg];
        pvfVectorHandlerReg = QEI__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enErrorReg = (QEI_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
