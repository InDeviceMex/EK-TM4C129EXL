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

void SCB__SVCall__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                                  uint32_t u32InterruptParam)
{
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32InterruptSource = MCU__u32CheckParams( u32InterruptParam,
                                                  256UL);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
           SCB_SVCall__pvfGetIRQSourceHandlerPointer(u32InterruptSource),
           0UL,
           1UL);
    }
}



