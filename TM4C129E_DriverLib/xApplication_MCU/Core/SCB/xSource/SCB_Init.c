/**
 *
 * @file SCB_Init.c
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
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/xHeader/SCB_Init.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/SCB_InterruptRoutine.h>
#include <xApplication_MCU/Core/SCB/xHeader/SCB_VectorTable.h>
#include <xApplication_MCU/Core/SCB/xHeader/SCB_RegisterIRQVector.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

SCB_nERROR SCB__enInit(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    SCB_pvfIRQVectorHandler_t* pfnVectorInRam;

    enErrorReg = (SCB_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SCB_enMODULE_MAX);
    if(SCB_enERROR_OK == enErrorReg)
    {
        pfnVectorInRam =  SCB__pfnGetVectorTableRam();
        enErrorReg = SCB__enSetVectorTable(enModuleArg, (UBase_t) pfnVectorInRam);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enRegisterIRQVectorHandler(enModuleArg, SCB_enVECISR_HARDFAULT, &HardFault__vIRQVectorHandler, (SCB_pvfIRQVectorHandler_t*) 0UL);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enRegisterIRQVectorHandler(enModuleArg, SCB_enVECISR_BUSFAULT, &BusFault__vIRQVectorHandler, (SCB_pvfIRQVectorHandler_t*) 0UL);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enRegisterIRQVectorHandler(enModuleArg, SCB_enVECISR_MEMMANAGE, &MemoryFault__vIRQVectorHandler, (SCB_pvfIRQVectorHandler_t*) 0UL);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enRegisterIRQVectorHandler(enModuleArg, SCB_enVECISR_USAGEFAULT, &UsageFault__vIRQVectorHandler, (SCB_pvfIRQVectorHandler_t*) 0UL);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enEnableAllExceptions(enModuleArg);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enEnableAllTraps(enModuleArg);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enSetStackAligment(enModuleArg, SCB_enALIGN_4BYTE);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enRegisterIRQVectorHandler(enModuleArg, SCB_enVECISR_NMI, &NMI__vIRQVectorHandler, (SCB_pvfIRQVectorHandler_t*) 0UL);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enRegisterIRQVectorHandler(enModuleArg, SCB_enVECISR_PENDSV, &PendSV__vIRQVectorHandler, (SCB_pvfIRQVectorHandler_t*) 0UL);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enRegisterIRQVectorHandler(enModuleArg, SCB_enVECISR_SVCALL, &SVCall__vIRQVectorHandler, (SCB_pvfIRQVectorHandler_t*) 0UL);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enEnableUnprivilegedSWTrigger(enModuleArg);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enSetPriorityGroup(enModuleArg, SCB_enPRIGROUP_XXX);
    }
    return (enErrorReg);
}



