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

void SCB__vInit(void)
{
    uint32_t pfnVectors =  0UL;
    pfnVectors = (uint32_t) SCB__pfnGetVectorTableRam();


    SCB__vSetVectorTable(pfnVectors);

    SCB__vRegisterIRQVectorHandler( &NMI__vIRQVectorHandler, (void (**) (void)) 0UL,
                                    SCB_enVECISR_NMI);
    SCB__vRegisterIRQVectorHandler( &PendSV__vIRQVectorHandler, (void (**) (void)) 0UL,
                                    SCB_enVECISR_PENDSV);
    SCB__vRegisterIRQVectorHandler( &UsageFault__vIRQVectorHandler, (void (**) (void)) 0UL,
                                    SCB_enVECISR_USAGEFAULT);
    SCB__vRegisterIRQVectorHandler( &BusFault__vIRQVectorHandler, (void (**) (void)) 0UL,
                                    SCB_enVECISR_BUSFAULT);
    SCB__vRegisterIRQVectorHandler( &MemoryFault__vIRQVectorHandler, (void (**) (void)) 0UL,
                                    SCB_enVECISR_MEMMANAGE);
    SCB__vRegisterIRQVectorHandler( &HardFault__vIRQVectorHandler, (void (**) (void)) 0UL,
                                    SCB_enVECISR_HARDFAULT);
    SCB__vRegisterIRQVectorHandler( &SVCall__vIRQVectorHandler, (void (**) (void)) 0UL,
                                    SCB_enVECISR_SVCALL);

    SCB__enEnableUnprivilegedSWTrigger(SCB_enMODULE_0);
    SCB__enEnableAllTraps(SCB_enMODULE_0);
    SCB__enEnableAllExceptions(SCB_enMODULE_0);
    SCB__enSetPriorityGroup(SCB_enMODULE_0, SCB_enPRIGROUP_XXX);
    SCB__enSetStackAligment(SCB_enMODULE_0, SCB_enALIGN_4BYTE);
}



