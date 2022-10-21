/**
 *
 * @file WDT_InterruptRegisterIRQVector.c
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
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/Interrupt/InterruptRegister/xHeader/WDT_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/WDT/Interrupt/InterruptRoutine/WDT_InterruptRoutine.h>
#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Dependencies.h>

WDT_nERROR WDT__enRegisterIRQVectorHandler(WDT_nMODULE enModuleArg, WDT_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_WDT[(UBase_t) WDT_enMODULE_MAX] =
    {
     SCB_enVECISR_WDT01, SCB_enVECISR_WDT01
    };
    SCB_nVECISR enVectorReg;
    WDT_nERROR enErrorReg;
    WDT_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) WDT_enMODULE_MAX);
    if(WDT_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_WDT[(UBase_t) enModuleArg];
        pvfVectorHandlerReg = WDT__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enErrorReg = (WDT_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
