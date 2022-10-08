/**
 *
 * @file SCB_InterruptRegisterIRQSource_SVCall.c
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
 * @verbatim 18 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRegister/xHeader/SCB_InterruptRegisterIRQSource_SVCall.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

SCB_nERROR SCB_SVCall__enRegisterIRQSourceHandler(SCB_nMODULE enModuleArg, UBase_t uxInterrupArg,
                                                       SCB_pvfIRQSourceHandler_t pfIrqSourceHandlerArg)
{
    SCB_pvfIRQSourceHandler_t* pvfIrqHandler;
    SCB_nERROR enErrorReg;

    enErrorReg = (SCB_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SCB_enMODULE_MAX);
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SCB_nERROR) MCU__enCheckParams(uxInterrupArg, 256UL);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        pvfIrqHandler = SCB_SVCall__pvfGetIRQSourceHandlerPointer(enModuleArg, uxInterrupArg);
        enErrorReg = (SCB_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandlerArg, pvfIrqHandler, 0UL, 1UL);
    }
    return (enErrorReg);
}



