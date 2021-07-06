/**
 *
 * @file DMA_CH_ControlStruct.c
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/App/CH_Control/xHeader/DMA_CH_ControlStruct.h>

#include <stdlib.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nSTATUS DMA_CH__enCreateControlStructPointer(uint32_t u32ControlWorld, DMA_CONTROL_Typedef* pstControl)
{
    DMA_nSTATUS enSTATUS = DMA_enSTATUS_ERROR;
    if(0UL != (uint32_t) pstControl)
    {
        pstControl->enTransferMode = (DMA_nCH_MODE) ((u32ControlWorld >> DMAALTCH_CHCTL_R_XFERMODE_BIT) & DMAALTCH_CHCTL_XFERMODE_MASK);
        pstControl->enUseBurst = (DMA_nCH_BURST) ((u32ControlWorld >> DMAALTCH_CHCTL_R_NXTUSEBURST_BIT) & DMAALTCH_CHCTL_NXTUSEBURST_MASK);
        pstControl->u32TransferSize = (((u32ControlWorld >> DMAALTCH_CHCTL_R_XFERSIZE_BIT) & DMAALTCH_CHCTL_XFERSIZE_MASK) + 1U);
        pstControl->enBurstSize = (DMA_nCH_BURST_SIZE) ((u32ControlWorld >> DMAALTCH_CHCTL_R_ARBSIZE_BIT) & DMAALTCH_CHCTL_ARBSIZE_MASK);
        pstControl->enSourceSize = (DMA_nCH_SRC_SIZE) ((u32ControlWorld >> DMAALTCH_CHCTL_R_SRCSIZE_BIT) & DMAALTCH_CHCTL_SRCSIZE_MASK);
        pstControl->enSourceInc = (DMA_nCH_SRC_INC) ((u32ControlWorld >> DMAALTCH_CHCTL_R_SRCINC_BIT) & DMAALTCH_CHCTL_SRCINC_MASK);
        pstControl->enDestSize = (DMA_nCH_DST_SIZE) ((u32ControlWorld >> DMAALTCH_CHCTL_R_DSTSIZE_BIT) & DMAALTCH_CHCTL_DSTSIZE_MASK);
        pstControl->enDestInc = (DMA_nCH_DST_INC) ((u32ControlWorld >> DMAALTCH_CHCTL_R_DSTINC_BIT) & DMAALTCH_CHCTL_DSTINC_MASK);
    }
    return (enSTATUS);
}

DMA_CONTROL_Typedef* DMA_CH__pstCreateControlStruct(uint32_t u32ControlWorld)
{
    DMA_CONTROL_Typedef* pstControl = 0UL;
    #if defined (__TI_ARM__ )
    pstControl = (DMA_CONTROL_Typedef*) memalign( (size_t) 4, (size_t) sizeof(DMA_CONTROL_Typedef));
    #elif defined (__GNUC__ )
    pstControl = (DMA_CONTROL_Typedef*) malloc( (size_t) sizeof(DMA_CONTROL_Typedef));
    #endif
    DMA_CH__enCreateControlStructPointer(u32ControlWorld, pstControl);
    return (pstControl);
}
