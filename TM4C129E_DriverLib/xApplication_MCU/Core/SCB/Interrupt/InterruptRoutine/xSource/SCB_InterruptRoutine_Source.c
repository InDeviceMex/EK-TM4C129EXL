/**
 *
 * @file SCB_InterruptRoutine_Source.c
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
 * @verbatim 15 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

static SCB_pvfIRQSourceHandler_t SCB_SVCall_vIRQSourceHandler[(UBase_t)SCB_enMODULE_MAX][256UL] = {0UL};

static SCB_pvfIRQSourceHandler_t SCB_BusFault_vIRQSourceHandler[(UBase_t)SCB_enMODULE_MAX][(UBase_t) SCB_enBUS_BIT_MAX] =
{
 {
    &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy,
    &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_DummyNonBlocking,
 },
};

static SCB_pvfIRQSourceHandler_t SCB_UsageFault_vIRQSourceHandler[(UBase_t)SCB_enMODULE_MAX][(UBase_t) SCB_enUSAGE_BIT_MAX] =
{
 {
    &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy,
    &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy,  &MCU_vIRQSourceHandler_Dummy,
 },
};

static SCB_pvfIRQSourceHandler_t SCB_MemoryFault_vIRQSourceHandler[(UBase_t)SCB_enMODULE_MAX][(UBase_t) SCB_enMEMORY_BIT_MAX] =
{
 {
    &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy,
    &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_DummyNonBlocking,
 },
};

static SCB_pvfIRQSourceHandler_t SCB_HardFault_vIRQSourceHandler[(UBase_t)SCB_enMODULE_MAX][(UBase_t) SCB_enHARD_BIT_MAX] =
{
    {&MCU_vIRQSourceHandler_Dummy,&MCU_vIRQSourceHandler_Dummy,},
};

static SCB_pvfIRQSourceHandler_t SCB_NMI_vIRQSourceHandler[(UBase_t)SCB_enMODULE_MAX][(UBase_t) SCB_enNMI_BIT_MAX] =
{
 {
    &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy,
    &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy, &MCU_vIRQSourceHandler_Dummy,
 },
};


SCB_pvfIRQSourceHandler_t SCB_BusFault__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nBUS_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = SCB_BusFault_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t* SCB_BusFault__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nBUS_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &SCB_BusFault_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t SCB_UsageFault__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nUSAGE_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = SCB_UsageFault_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t* SCB_UsageFault__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nUSAGE_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &SCB_UsageFault_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nMEMORY_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = SCB_MemoryFault_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t* SCB_MemoryFault__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nMEMORY_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &SCB_MemoryFault_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t SCB_HardFault__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nHARD_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = SCB_HardFault_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t* SCB_HardFault__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nHARD_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &SCB_HardFault_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t SCB_NMI__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nNMI_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = SCB_NMI_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t* SCB_NMI__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nNMI_BIT enFaultBit)
{
    SCB_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &SCB_NMI_vIRQSourceHandler[(UBase_t) enModuleArg][(UBase_t) enFaultBit];
    return (pvfFunctionReg);
}

SCB_nERROR SCB_SVCall__enInit(SCB_nMODULE enModuleArg)
{
    UBase_t uxCount;
    SCB_nERROR enErrorReg;
    enErrorReg = (SCB_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SCB_enMODULE_MAX);
    if(SCB_enERROR_OK == enErrorReg)
    {
        for(uxCount = 0UL; uxCount < 256UL; uxCount++)
        {
            SCB_SVCall_vIRQSourceHandler[(UBase_t) enModuleArg][uxCount] = &MCU_vIRQSourceHandler_Dummy;
        }
    }
    return (enErrorReg);
}

SCB_pvfIRQSourceHandler_t SCB_SVCall__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, UBase_t uxFaultBit)
{
    SCB_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = SCB_SVCall_vIRQSourceHandler[(UBase_t) enModuleArg][uxFaultBit];
    return (pvfFunctionReg);
}

SCB_pvfIRQSourceHandler_t* SCB_SVCall__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, UBase_t uxFaultBit)
{
    SCB_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &SCB_SVCall_vIRQSourceHandler[(UBase_t) enModuleArg][uxFaultBit];
    return (pvfFunctionReg);
}

