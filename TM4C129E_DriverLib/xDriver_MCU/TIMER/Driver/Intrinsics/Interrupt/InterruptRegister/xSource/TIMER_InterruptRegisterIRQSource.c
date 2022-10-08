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


void TIMER__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                      TIMER_nMODULE enModule,
                                      TIMER_nINTERRUPT enInterruptParam)
{
    UBase_t uxInterruptSource = (UBase_t) enInterruptParam;

    UBase_t uxModuleNumber = 0UL;
    UBase_t uxSubModule = 0UL;

    if(0U != (UBase_t) pfIrqSourceHandler)
    {
        TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
        uxSubModule &= 0x1UL;
        uxInterruptSource = MCU__uxCheckParams( (UBase_t) enInterruptParam,
                                                  (UBase_t) TIMER_enINTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
               TIMER__pvfGetIRQSourceHandlerPointer((TIMER_nSUBMODULE) uxSubModule,
                                                    (TIMER_nMODULE_NUM) uxModuleNumber,
                                                    (TIMER_nINTERRUPT)uxInterruptSource),
               0UL,
               1UL);
    }
}
