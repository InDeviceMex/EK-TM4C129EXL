/**
 *
 * @file SYSEXC_InterruptRegisterIRQVector.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SYSEXC/Interrupt/InterruptRegister/xHeader/SYSEXC_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/SYSEXC/Interrupt/InterruptRoutine/SYSEXC_InterruptRoutine.h>
#include <xApplication_MCU/SYSEXC/Intrinsics/xHeader/SYSEXC_Dependencies.h>

SYSEXC_nERROR SYSEXC__enRegisterIRQVectorHandler(SYSEXC_nMODULE enModuleArg, SYSEXC_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR[(UBase_t) SYSEXC_enMODULE_MAX] =
    {
     SCB_enVECISR_SYSEXC
    };
    SCB_nVECISR enVectorReg;
    SYSEXC_nERROR enErrorReg;
    SYSEXC_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SYSEXC_enMODULE_MAX);
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR[(UBase_t) enModuleArg];
        pvfVectorHandlerReg = SYSEXC__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enErrorReg = (SYSEXC_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}

