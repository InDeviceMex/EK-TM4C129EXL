/**
 *
 * @file ACMP_InterruptRegisterIRQSource.c
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/ACMP_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Source.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                         ACMP_nMODULE enModule,
                                         ACMP_nCOMP enComparatorArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32Comparator = 0UL;

    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Module = MCU__u32CheckParams( (uint32_t) enModule,
                                         (uint32_t) ACMP_enMODULE_MAX);
        u32Comparator = MCU__u32CheckParams( (uint32_t) enComparatorArg,
                                             (uint32_t) ACMP_enCOMP_MAX);

        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                       ACMP__pvfGetIRQSourceHandlerPointer((ACMP_nMODULE) u32Module,
                                                               (ACMP_nCOMP) u32Comparator),
                       0UL,
                       1UL);
    }
}
