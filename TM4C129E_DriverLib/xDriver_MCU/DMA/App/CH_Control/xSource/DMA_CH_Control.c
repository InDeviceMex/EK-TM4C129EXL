/**
 *
 * @file DMA_CH_Control.c
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
#include <stdlib.h>
#include <xDriver_MCU/DMA/Driver/CH_Control/DMA_CH_Control.h>
#include <xDriver_MCU/DMA/App/CH_Control/DMA_CH_Control.h>
#include <xDriver_MCU/DMA/App/CH_Control/xHeader/DMA_CH_ControlStruct.h>
#include <xDriver_MCU/DMA/Driver/DMA_Driver.h>

void DMA_CH__vSetPrimaryControlStruct(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef pstControl)
{
    DMA_CH__vSetControlStruct(enDMAChannel, DMA_enCH_CTL_PRIMARY, pstControl);
}

void DMA_CH__vSetAlternateControlStruct(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef pstControl)
{
    DMA_CH__vSetControlStruct(enDMAChannel, DMA_enCH_CTL_ALTERNATE, pstControl);
}

void DMA_CH__vSetControlStruct(DMA_nCH_MODULE enDMAChannel, DMA_nCH_CTL enChannelStructure, DMA_CONTROL_Typedef pstControl)
{
    DMA_CH__vSetTransferMode(enDMAChannel, enChannelStructure, pstControl.enTransferMode);
    DMA_CH__vSetBurst(enDMAChannel, enChannelStructure, pstControl.enUseBurst);
    DMA_CH__vSetTransferSize(enDMAChannel, enChannelStructure, pstControl.u32TransferSize);
    DMA_CH__vSetBurstSize(enDMAChannel, enChannelStructure, pstControl.enBurstSize);
    DMA_CH__vSetSourceSize(enDMAChannel, enChannelStructure, pstControl.enSourceSize);
    DMA_CH__vSetSourceIncrement(enDMAChannel, enChannelStructure, pstControl.enSourceInc);
    DMA_CH__vSetDestinationSize(enDMAChannel, enChannelStructure, pstControl.enDestSize);
    DMA_CH__vSetDestinationIncrement(enDMAChannel, enChannelStructure, pstControl.enDestInc);
}

DMA_nSTATUS DMA_CH__enGetPrimaryControl(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef* pstControl)
{
    DMA_nSTATUS enSTATUS = DMA_enSTATUS_ERROR;
    enSTATUS = DMA_CH__enGetControl(enDMAChannel, DMA_enCH_CTL_PRIMARY, pstControl);
    return (enSTATUS);
}

DMA_nSTATUS DMA_CH__enGetAlternateControl(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef* pstControl)
{
    DMA_nSTATUS enSTATUS = DMA_enSTATUS_ERROR;
    enSTATUS = DMA_CH__enGetControl(enDMAChannel, DMA_enCH_CTL_ALTERNATE, pstControl);
    return (enSTATUS);
}

DMA_nSTATUS DMA_CH__enGetControl(DMA_nCH_MODULE enDMAChannel, DMA_nCH_CTL enChannelStructure, DMA_CONTROL_Typedef* pstControl)
{
    DMA_nSTATUS enSTATUS = DMA_enSTATUS_ERROR;

    if(0UL != (uint32_t) pstControl)
    {
        pstControl->enTransferMode = DMA_CH__enGetTransferMode(enDMAChannel, enChannelStructure);
        pstControl->enUseBurst = DMA_CH__enGetBurst(enDMAChannel, enChannelStructure);
        pstControl->u32TransferSize = DMA_CH__u32GetTransferSize(enDMAChannel, enChannelStructure);
        pstControl->enBurstSize = DMA_CH__enGetBurstSize(enDMAChannel, enChannelStructure);
        pstControl->enSourceSize = DMA_CH__enGetSourceSize(enDMAChannel, enChannelStructure);
        pstControl->enSourceInc = DMA_CH__enGetSourceIncrement(enDMAChannel, enChannelStructure);
        pstControl->enDestSize = DMA_CH__enGetDestinationSize(enDMAChannel, enChannelStructure);
        pstControl->enDestInc = DMA_CH__enGetDestinationIncrement(enDMAChannel, enChannelStructure);
    }
    return (enSTATUS);
}

DMA_CONTROL_Typedef* DMA_CH__pstGetPrimaryControl(DMA_nCH_MODULE enDMAChannel)
{
    return (DMA_CH__pstGetControl(enDMAChannel, DMA_enCH_CTL_PRIMARY));
}

DMA_CONTROL_Typedef* DMA_CH__pstGetAlternateControl(DMA_nCH_MODULE enDMAChannel)
{
    return (DMA_CH__pstGetControl(enDMAChannel, DMA_enCH_CTL_ALTERNATE));
}

DMA_CONTROL_Typedef* DMA_CH__pstGetControl(DMA_nCH_MODULE enDMAChannel, DMA_nCH_CTL enChannelStructure)
{
    DMA_CONTROL_Typedef* pstControl = 0UL;
    #if defined (__TI_ARM__ )
    pstControl = (DMA_CONTROL_Typedef*) memalign( (size_t) 4, (size_t) sizeof(DMA_CONTROL_Typedef));
    #elif defined (__GNUC__ )
    pstControl = (DMA_CONTROL_Typedef*) malloc(sizeof(DMA_CONTROL_Typedef));
    #endif
    DMA_CH__enGetControl(enDMAChannel, enChannelStructure, pstControl);
    return (pstControl);
}

void DMA_CH__vDeleteControlStruct(DMA_CONTROL_Typedef* pstControl)
{
    free(pstControl);
    pstControl = (DMA_CONTROL_Typedef*) 0UL;
}
