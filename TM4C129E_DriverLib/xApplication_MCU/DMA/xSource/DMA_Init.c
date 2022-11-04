/**
 *
 * @file DMA_Init.c
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
#include <xApplication_MCU/DMA/xHeader/DMA_Init.h>

#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Ready.h>
#include <xApplication_MCU/DMA/Interrupt/DMA_Interrupt.h>
#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Dependencies.h>

DMA_nERROR DMA__enInit(DMA_nMODULE enModuleArg)
{
    DMA_nERROR enErrorReg;
    UBase_t uxInterruptReg;
    DMA_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    enErrorReg = DMA__enSetReadyOnRunMode(enModuleArg);
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA__enSetPrimaryControlStructureAddress(enModuleArg, DMA_CH_PRIMARY_BASE);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        uxInterruptReg = 0UL;
        while((uxInterruptReg < (UBase_t) DMA_enVECTOR_MAX) && (DMA_enERROR_OK == enErrorReg))
        {
            pfIrqVectorHandlerReg = DMA__pvfGetIRQVectorHandler(enModuleArg, (DMA_nVECTOR) uxInterruptReg);
            enErrorReg = DMA__enRegisterIRQVectorHandler(enModuleArg, (DMA_nVECTOR) uxInterruptReg, pfIrqVectorHandlerReg);
            uxInterruptReg++;
        }
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA__enSetState(enModuleArg, DMA_enSTATE_ENA);
    }

    return (enErrorReg);
}

