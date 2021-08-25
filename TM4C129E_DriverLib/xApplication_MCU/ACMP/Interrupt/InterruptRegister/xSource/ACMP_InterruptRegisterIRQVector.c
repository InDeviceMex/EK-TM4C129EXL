/**
 *
 * @file ACMP_InterruptRegisterIRQVector.c
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
 * @verbatim 21 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ACMP/Interrupt/InterruptRegister/xHeader/ACMP_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/ACMP/Interrupt/InterruptRoutine/ACMP_InterruptRoutine.h>
#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

void ACMP__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),
                                     ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg)
{
    SCB_nVECISR enVector = SCB_enVECISR_ACMP0;
    uint32_t u32Module = 0UL;
    uint32_t u32Comparator = 0UL;

    const SCB_nVECISR SCB_enVECISR_ACMP[(uint32_t) ACMP_enMODULE_MAX]
                                       [(uint32_t) ACMP_enCOMP_MAX]=
    {
        {SCB_enVECISR_ACMP0, SCB_enVECISR_ACMP1, SCB_enVECISR_ACMP2},
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule,
                                        (uint32_t) ACMP_enMODULE_MAX);
        u32Comparator = MCU__u32CheckParams((uint32_t) enComparatorArg,
                                            (uint32_t) ACMP_enCOMP_MAX);
        enVector = SCB_enVECISR_ACMP[u32Module][u32Comparator];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler,
                ACMP__pvfGetIRQVectorHandlerPointer((ACMP_nMODULE) u32Module,
                (ACMP_nCOMP) u32Comparator),
                enVector);
    }
}
