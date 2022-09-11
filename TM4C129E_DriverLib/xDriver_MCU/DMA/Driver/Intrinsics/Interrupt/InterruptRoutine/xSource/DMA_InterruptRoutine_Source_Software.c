/**
 *
 * @file DMA_InterruptRoutine_Source_Software.c
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
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source_Software.h>

static void DMA_CH_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument);

static DMA_pvfIRQSourceHandler_t DMA_CH_vIRQSourceHandler_Software[(uint32_t)DMA_enMODULE_MAX]
                                                                  [(uint32_t) DMA_enCH_MAX + 1UL] =
{
    {
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy
    }
};

static DMA_pvfIRQSourceHandler_t DMA_vIRQSourceHandler_Error[(uint32_t)DMA_enMODULE_MAX]
                                                            [(uint32_t) DMA_enINT_ERROR_MAX] =
{
    {
        &DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy
    }
};

static void DMA_CH_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument)
{
    (void) uptrModuleArg;
    (void) pvArgument;

    while(1UL){}
}


DMA_pvfIRQSourceHandler_t DMA__pvfGetIRQSourceHandler_Error(DMA_nMODULE enModuleArg,
                                                            DMA_nINT_ERROR enInterruptSourceArg)
{
    DMA_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = DMA_vIRQSourceHandler_Error[(uint32_t) enModuleArg]
                                                 [(uint32_t) enInterruptSourceArg];
    return (pvfFunctionReg);
}


DMA_pvfIRQSourceHandler_t* DMA__pvfGetIRQSourceHandlerPointer_Error(DMA_nMODULE enModuleArg,
                                                                    DMA_nINT_ERROR enInterruptSourceArg)
{
    DMA_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &DMA_vIRQSourceHandler_Error[(uint32_t) enModuleArg]
                                                  [(uint32_t) enInterruptSourceArg];
    return (pvfFunctionReg);
}


DMA_pvfIRQSourceHandler_t DMA_CH__pvfGetIRQSourceHandler_Software(DMA_nMODULE enModuleArg,
                                                                  DMA_nCH enChannelArg)
{
    DMA_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = DMA_CH_vIRQSourceHandler_Software[(uint32_t) enModuleArg]
                                                      [(uint32_t) enChannelArg];
    return (pvfFunctionReg);
}


DMA_pvfIRQSourceHandler_t* DMA_CH__pvfGetIRQSourceHandlerPointer_Software(DMA_nMODULE enModuleArg,
                                                                 DMA_nCH enChannelArg)
{
    DMA_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &DMA_CH_vIRQSourceHandler_Software[(uint32_t) enModuleArg]
                                                       [(uint32_t) enChannelArg];
    return (pvfFunctionReg);
}
