/**
 *
 * @file SSI_InterruptRegisterIRQVector.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SSI/Interrupt/InterruptRegister/xHeader/SSI_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/SSI_InterruptRoutine.h>
#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

void SSI__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),SSI_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_SSI0;
    UBase_t uxModule = 0UL;
    const SCB_nVECISR SCB_enVECISR_SSI[(UBase_t) SSI_enMODULE_MAX]=
    {
        SCB_enVECISR_SSI0, SCB_enVECISR_SSI1, SCB_enVECISR_SSI2, SCB_enVECISR_SSI3,
    };

    if(0UL != (UBase_t) pfIrqVectorHandler)
    {
        uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);
        enVector = SCB_enVECISR_SSI[uxModule];
        SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVector, pfIrqVectorHandler,
                                       SSI__pvfGetIRQVectorHandlerPointer((SSI_nMODULE) uxModule));
    }
}
