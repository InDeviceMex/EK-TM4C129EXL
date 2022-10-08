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
    UBase_t uxModule = 0UL;
    const SCB_nVECISR SCB_enVECISR_QEI[(UBase_t) QEI_enMODULE_MAX]=
    {
        SCB_enVECISR_QEI0
    };

    if(0UL != (UBase_t) pfIrqVectorHandler)
    {
        uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) QEI_enMODULE_MAX);
        enVector = SCB_enVECISR_QEI[uxModule];
        SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVector, pfIrqVectorHandler,
                           QEI__pvfGetIRQVectorHandlerPointer((QEI_nMODULE) uxModule));
    }
}
