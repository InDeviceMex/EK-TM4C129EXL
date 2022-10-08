/**
 *
 * @file DMA_InterruptRegisterIRQVector.c
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/DMA/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/DMA/Interrupt/InterruptRoutine/DMA_InterruptRoutine.h>
#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Dependencies.h>

DMA_nERROR DMA__enRegisterIRQVectorHandler(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg, DMA_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_DMA[(UBase_t) DMA_enMODULE_MAX][(UBase_t) DMA_enVECTOR_MAX]=
    {
     { SCB_enVECISR_UDMASOFT, SCB_enVECISR_UDMAERROR},
    };
    SCB_nVECISR enVectorReg;
    DMA_nERROR enErrorReg;
    DMA_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) DMA_enMODULE_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) DMA_enVECTOR_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_DMA[(UBase_t) enModuleArg][(UBase_t) enInterruptArg];
        pvfVectorHandlerReg = DMA__pvfGetIRQVectorHandlerPointer(enModuleArg, enInterruptArg);
        enErrorReg = (DMA_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
