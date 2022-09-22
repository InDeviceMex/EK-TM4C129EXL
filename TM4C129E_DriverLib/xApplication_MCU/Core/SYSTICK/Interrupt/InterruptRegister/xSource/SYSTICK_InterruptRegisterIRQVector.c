/**
 *
 * @file SYSTICK_InterruptRegisterIRQVector.c
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SYSTICK/Interrupt/InterruptRegister/xHeader/SYSTICK_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/Core/SYSTICK/Interrupt/InterruptRoutine/SYSTICK_InterruptRoutine.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Dependencies.h>

SYSTICK_nERROR SYSTICK__enRegisterIRQVectorHandler(SYSTICK_nMODULE enModuleArg, SYSTICK_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR[(uint32_t) SYSTICK_enMODULE_MAX]=
    {
     {SCB_enVECISR_SYSTICK}
    };
    SCB_nVECISR enVectorReg;
    SYSTICK_nERROR enErrorReg;
    SYSTICK_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (SYSTICK_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) SYSTICK_enMODULE_MAX);
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR[(uint32_t) enModuleArg];
        pvfVectorHandlerReg = SYSTICK__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enErrorReg = (SYSTICK_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
