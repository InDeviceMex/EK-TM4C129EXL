/**
 *
 * @file SSI_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/SSI/Interrupt/InterruptRegister/xHeader/SSI_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/SSI_InterruptRoutine.h>
#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

SSI_nERROR SSI__enRegisterIRQVectorHandler(SSI_nMODULE enModuleArg, SSI_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_SSI[(UBase_t) SSI_enMODULE_MAX] =
    {
     SCB_enVECISR_SSI0, SCB_enVECISR_SSI1, SCB_enVECISR_SSI2, SCB_enVECISR_SSI3,
    };
    SCB_nVECISR enVectorReg;
    SSI_nERROR enErrorReg;
    SSI_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SSI_enMODULE_MAX);
    if(SSI_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_SSI[(UBase_t) enModuleArg];
        pvfVectorHandlerReg = SSI__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enErrorReg = (SSI_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
