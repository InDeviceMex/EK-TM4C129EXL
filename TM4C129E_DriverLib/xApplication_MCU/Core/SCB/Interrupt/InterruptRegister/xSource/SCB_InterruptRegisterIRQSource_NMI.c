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

void SCB_NMI__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                                  SCB_nNMI_BIT enInterruptParam)
{
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptParam,
                                                  (uint32_t) SCB_enNMI_BIT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
           SCB_NMI__pvfGetIRQSourceHandlerPointer((SCB_nNMI_BIT) u32InterruptSource),
           0UL,
           1UL);
    }
}
