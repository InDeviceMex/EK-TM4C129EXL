/**
 *
 * @file ACMP_InterruptRegisterIRQVector.c
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
 * @verbatim 21 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ACMP/Interrupt/InterruptRegister/xHeader/ACMP_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/ACMP/Interrupt/InterruptRoutine/ACMP_InterruptRoutine.h>
#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

ACMP_nERROR ACMP__enRegisterIRQVectorHandler(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_ACMP[(UBase_t) ACMP_enMODULE_MAX][(UBase_t) ACMP_enCOMP_MAX]=
    {
        {SCB_enVECISR_ACMP0, SCB_enVECISR_ACMP1, SCB_enVECISR_ACMP2}
    };
    SCB_nVECISR enVectorReg;
    ACMP_nERROR enErrorReg;
    ACMP_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) ACMP_enMODULE_MAX);
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enComparatorArg, (UBase_t) ACMP_enCOMP_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_ACMP[(UBase_t) enModuleArg][(UBase_t) enComparatorArg];
        pvfVectorHandlerReg = ACMP__pvfGetIRQVectorHandlerPointer(enModuleArg, enComparatorArg);
        enErrorReg = (ACMP_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
