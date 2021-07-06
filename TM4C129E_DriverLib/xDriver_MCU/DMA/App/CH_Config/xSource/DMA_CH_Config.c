/**
 *
 * @file DMA_CH_Config.c
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
 * @verbatim 21 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/App/CH_Config/DMA_CH_Config.h>

#include <stdlib.h>
#include <xDriver_MCU/DMA/App/CH_Config/xHeader/DMA_CH_ConfigStruct.h>
#include <xDriver_MCU/DMA/Driver/DMA_Driver.h>

void DMA_CH__vSetConfigStruct(DMA_nCH_MODULE enDMAChannel, DMA_CONFIG_Typedef pstConfig)
{
    DMA_CH__vSetControlStructure(enDMAChannel, pstConfig.enControlStructure);
    DMA_CH__vSetPriority(enDMAChannel, pstConfig.enChannelPriority);
    DMA_CH__vSetEncoder(enDMAChannel, pstConfig.enEncoder);
    DMA_CH__vSetPeripheralEnable(enDMAChannel, pstConfig.enPeripheralEnable);
    DMA_CH__vSetRequestType(enDMAChannel, pstConfig.enReqType);
}

void DMA_CH__vGetConfig(DMA_nCH_MODULE enDMAChannel, DMA_CONFIG_Typedef* pstConfig)
{
    pstConfig->enControlStructure = DMA_CH__enGetControlStructure(enDMAChannel);
    pstConfig->enChannelPriority = DMA_CH__enGetPriority(enDMAChannel);
    pstConfig->enEncoder = DMA_CH__enGetEncoder(enDMAChannel);
    pstConfig->enPeripheralEnable = DMA_CH__enGetPeripheralEnable(enDMAChannel);
    pstConfig->enReqType = DMA_CH__enGetRequestType(enDMAChannel);
}

DMA_CONFIG_Typedef* DMA_CH__pstGetConfig(DMA_nCH_MODULE enDMAChannel)
{
    DMA_CONFIG_Typedef* pstConfig = 0UL;
    #if defined (__TI_ARM__ )
    pstConfig = (DMA_CONFIG_Typedef*) memalign( (size_t) 4, (size_t) sizeof(DMA_CONFIG_Typedef));
    #elif defined (__GNUC__ )
    pstConfig = (DMA_CONFIG_Typedef*) malloc(sizeof(DMA_CONFIG_Typedef));
    #endif
    if(0UL != (uint32_t) pstConfig)
    {
        pstConfig->enControlStructure = DMA_CH__enGetControlStructure(enDMAChannel);
        pstConfig->enChannelPriority = DMA_CH__enGetPriority(enDMAChannel);
        pstConfig->enEncoder = DMA_CH__enGetEncoder(enDMAChannel);
        pstConfig->enPeripheralEnable = DMA_CH__enGetPeripheralEnable(enDMAChannel);
        pstConfig->enReqType = DMA_CH__enGetRequestType(enDMAChannel);
    }
    return (pstConfig);
}

void DMA_CH__vDeleteConfigStruct(DMA_CONFIG_Typedef* pstConfig)
{
    free(pstConfig);
    pstConfig = (DMA_CONFIG_Typedef*) 0UL;
}
