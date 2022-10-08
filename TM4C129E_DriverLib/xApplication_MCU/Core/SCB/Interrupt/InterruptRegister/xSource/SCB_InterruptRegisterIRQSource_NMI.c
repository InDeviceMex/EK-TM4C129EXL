/**
 *
 * @file SCB_InterruptRegisterIRQSource_NMI.c
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
 * @verbatim 25 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRegister/xHeader/SCB_InterruptRegisterIRQSource_NMI.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

SCB_nERROR SCB_NMI__enRegisterIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nNMI_BIT enInterrupArg,
                                                       SCB_pvfIRQSourceHandler_t pfIrqSourceHandlerArg)
{
    SCB_pvfIRQSourceHandler_t* pvfIrqHandler;
    SCB_nERROR enErrorReg;

    enErrorReg = (SCB_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SCB_enMODULE_MAX);
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SCB_nERROR) MCU__enCheckParams((UBase_t) enInterrupArg, (UBase_t) SCB_enNMI_BIT_MAX);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        pvfIrqHandler = SCB_NMI__pvfGetIRQSourceHandlerPointer(enModuleArg, enInterrupArg);
        enErrorReg = (SCB_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandlerArg, pvfIrqHandler, 0UL, 1UL);
    }
    return (enErrorReg);
}

