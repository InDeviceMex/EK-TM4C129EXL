/**
 *
 * @file SCB_InterruptRegisterIRQSource_BusFault.c
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
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRegister/xHeader/SCB_InterruptRegisterIRQSource_BusFault.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

void SCB__BusFault__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                                  SCB_nBUS_BIT enInterruptParam)
{
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptParam,
                                                  (uint32_t) SCB_enBUS_BIT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
           SCB_BusFault__pvfGetIRQSourceHandlerPointer((SCB_nBUS_BIT) u32InterruptSource),
           0UL,
           1UL);
    }
}
