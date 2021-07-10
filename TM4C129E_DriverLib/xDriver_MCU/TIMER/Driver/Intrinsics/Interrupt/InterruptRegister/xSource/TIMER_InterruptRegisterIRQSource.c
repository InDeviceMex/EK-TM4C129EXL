/**
 *
 * @file TIMER_InterruptRegisterIRQSource.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/TIMER_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>


void TIMER__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),TIMER_nMODULE enModule, TIMER_nINTERRUPT enInterruptParam)
{
    uint32_t u32InterruptSource = (uint32_t) enInterruptParam;

    uint32_t u32ModuleNumber = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleSize = 0UL;

    if(0U != (uint32_t) pfIrqSourceHandler)
    {
        TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);
        u32SubModule &= 0x1UL;
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptParam,  (uint32_t) TIMER_enINTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler, &TIMER__vIRQSourceHandler[u32ModuleSize][u32SubModule][u32ModuleNumber][u32InterruptSource], 0UL, 1UL);
    }
}
