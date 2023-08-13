/**
 *
 * @file DMA_InterruptRegisterIRQSource_Software.c
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
 * @verbatim 1 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQSource_Software.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source_Software.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enRegisterIRQSourceHandler_Software(DMA_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                      DMA_nMODULE enModuleArg,
                                                      DMA_nCH enChannelArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) DMA_enMODULE_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, ((UBase_t) DMA_enCH_MAX + 1UL));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_pvfIRQSourceHandler_t* pvfIrqHandler = DMA_CH__pvfGetIRQSourceHandlerPointer_Software(enModuleArg, enChannelArg);
        enErrorReg = (DMA_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}

DMA_nERROR DMA__enRegisterIRQSourceHandler_Error(DMA_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                  DMA_nMODULE enModuleArg,
                                                  DMA_nINT_ERROR enInterruptSourceArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) DMA_enMODULE_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enInterruptSourceArg, (UBase_t) DMA_enINT_ERROR_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_pvfIRQSourceHandler_t* pvfIrqHandler = DMA__pvfGetIRQSourceHandlerPointer_Error(enModuleArg, enInterruptSourceArg);
        enErrorReg = (DMA_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }
    return (enErrorReg);
}

