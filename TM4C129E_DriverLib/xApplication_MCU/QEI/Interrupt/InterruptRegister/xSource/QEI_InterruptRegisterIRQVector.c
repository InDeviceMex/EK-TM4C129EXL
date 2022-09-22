/**
 *
 * @file QEI_InterruptRegisterIRQVector.c
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/QEI/Interrupt/InterruptRegister/xHeader/QEI_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/QEI/Interrupt/InterruptRoutine/QEI_InterruptRoutine.h>
#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Dependencies.h>

void QEI__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),QEI_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_QEI0;
    uint32_t u32Module = 0UL;
    const SCB_nVECISR SCB_enVECISR_QEI[(uint32_t) QEI_enMODULE_MAX]=
    {
        SCB_enVECISR_QEI0
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);
        enVector = SCB_enVECISR_QEI[u32Module];
        SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVector, pfIrqVectorHandler,
                           QEI__pvfGetIRQVectorHandlerPointer((QEI_nMODULE) u32Module));
    }
}
