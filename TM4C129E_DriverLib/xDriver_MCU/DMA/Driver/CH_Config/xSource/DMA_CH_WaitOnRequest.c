/**
 *
 * @file DMA_CH_WaitOnRequest.c
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
 * @verbatim 20 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_WaitOnRequest.h>

#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_ConfigGeneric.h>
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_Enable.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nCH_WAITING DMA_CH__enGetWaitStatus(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_WAITING enChannelWaiting = DMA_enCH_WAITING_UNDEF;
    DMA_nENABLE enModuleEnable = DMA_enENABLE_UNDEF;
    enModuleEnable = DMA__enGetModuleEnable();
    if(DMA_enENABLE_ENA == enModuleEnable)
    {
        enChannelWaiting = (DMA_nCH_WAITING) DMA_CH__u32GetConfigGeneric(enChannel, DMA_WAITSTAT_OFFSET);
    }
    return (enChannelWaiting);
}
