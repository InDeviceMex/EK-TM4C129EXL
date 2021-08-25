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

static void SCB_vIRQSourceHandler_Dummy(void);

void (*SCB_SVCall__vIRQSourceHandler[256UL])(void) = {0UL};


void (*SCB_BusFault__vIRQSourceHandler[(uint32_t) SCB_enBUS_BIT_MAX])(void) =
{
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy
};

void (*SCB_UsageFault__vIRQSourceHandler[(uint32_t) SCB_enUSAGE_BIT_MAX])(void) =
{
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
};

void (*SCB_MemoryFault__vIRQSourceHandler[(uint32_t) SCB_enMEMORY_BIT_MAX])(void) =
{
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
};

void (*SCB_HardFault__vIRQSourceHandler[(uint32_t) SCB_enHARD_BIT_MAX])(void) =
{
    &SCB_vIRQSourceHandler_Dummy
};

void (*SCB_NMI__vIRQSourceHandler[(uint32_t) SCB_enNMI_BIT_MAX])(void) =
{
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy, &SCB_vIRQSourceHandler_Dummy,
    &SCB_vIRQSourceHandler_Dummy
};

static void SCB_vIRQSourceHandler_Dummy(void)
{
    while(1UL){ }
}

void (*SCB_BusFault__pvfGetIRQSourceHandler(SCB_nBUS_BIT enBusFaultBit))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SCB_BusFault__vIRQSourceHandler[(uint32_t) enBusFaultBit];
    return (pvfFunctionReg);
}

void (**SCB_BusFault__pvfGetIRQSourceHandlerPointer(SCB_nBUS_BIT enBusFaultBit))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SCB_BusFault__vIRQSourceHandler[(uint32_t) enBusFaultBit];
    return (pvfFunctionReg);
}

void (*SCB_UsageFault__pvfGetIRQSourceHandler(SCB_nUSAGE_BIT enUsageFaultBit))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SCB_UsageFault__vIRQSourceHandler[(uint32_t) enUsageFaultBit];
    return (pvfFunctionReg);
}

void (**SCB_UsageFault__pvfGetIRQSourceHandlerPointer(SCB_nUSAGE_BIT enUsageFaultBit))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SCB_UsageFault__vIRQSourceHandler[(uint32_t) enUsageFaultBit];
    return (pvfFunctionReg);
}

void (*SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_nMEMORY_BIT enMemoryFaultBit))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SCB_MemoryFault__vIRQSourceHandler[(uint32_t) enMemoryFaultBit];
    return (pvfFunctionReg);
}

void (**SCB_MemoryFault__pvfGetIRQSourceHandlerPointer(SCB_nMEMORY_BIT enMemoryFaultBit))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SCB_MemoryFault__vIRQSourceHandler[(uint32_t) enMemoryFaultBit];
    return (pvfFunctionReg);
}

void (*SCB_HardFault__pvfGetIRQSourceHandler(SCB_nHARD_BIT enHardFaultBit))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SCB_HardFault__vIRQSourceHandler[(uint32_t) enHardFaultBit];
    return (pvfFunctionReg);
}

void (**SCB_HardFault__pvfGetIRQSourceHandlerPointer(SCB_nHARD_BIT enHardFaultBit))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SCB_HardFault__vIRQSourceHandler[(uint32_t) enHardFaultBit];
    return (pvfFunctionReg);
}


void (*SCB_NMI__pvfGetIRQSourceHandler(SCB_nNMI_BIT enNMIBit))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SCB_NMI__vIRQSourceHandler[(uint32_t) enNMIBit];
    return (pvfFunctionReg);
}

void (**SCB_NMI__pvfGetIRQSourceHandlerPointer(SCB_nNMI_BIT enNMIBit))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SCB_NMI__vIRQSourceHandler[(uint32_t) enNMIBit];
    return (pvfFunctionReg);
}

void SCB_SVCall__vInit(void)
{
    uint32_t u32Count = 0UL;

    for(u32Count = 0UL; u32Count < 256UL; u32Count++)
    {
        SCB_SVCall__vIRQSourceHandler[u32Count] = &SCB_vIRQSourceHandler_Dummy;
    }
}

void (*SCB_SVCall__pvfGetIRQSourceHandler(uint32_t u32SVCallBit))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SCB_SVCall__vIRQSourceHandler[u32SVCallBit];
    return (pvfFunctionReg);
}

void (**SCB_SVCall__pvfGetIRQSourceHandlerPointer(uint32_t u32SVCallBit))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SCB_SVCall__vIRQSourceHandler[u32SVCallBit];
    return (pvfFunctionReg);
}
