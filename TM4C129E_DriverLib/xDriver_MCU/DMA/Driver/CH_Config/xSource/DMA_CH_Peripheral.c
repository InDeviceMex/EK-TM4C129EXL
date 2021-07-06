/**
 *
 * @file DMA_CH_Peripheral.c
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
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_Peripheral.h>

#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_ConfigGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

static void DMA_CH__vEnPeripheral(DMA_nCH_MODULE enChannel);
static void DMA_CH__vDisPeripheral(DMA_nCH_MODULE enChannel);

static void DMA_CH__vEnPeripheral(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_REQMASKCLR_OFFSET);
}

static void DMA_CH__vDisPeripheral(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_REQMASKSET_OFFSET);
}

void DMA_CH__vSetPeripheralEnable(DMA_nCH_MODULE enChannel, DMA_nCH_PERIPHERAL enChannelPeripheralEn)
{
    if(DMA_enCH_PERIPHERAL_ENA == enChannelPeripheralEn)
    {
        DMA_CH__vEnPeripheral(enChannel);
    }
    else
    {
        DMA_CH__vDisPeripheral(enChannel);
    }
}

DMA_nCH_PERIPHERAL DMA_CH__enGetPeripheralEnable(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_PERIPHERAL enPeripheral = DMA_enCH_PERIPHERAL_UNDEF;
    enPeripheral = (DMA_nCH_PERIPHERAL) DMA_CH__u32GetConfigGeneric(enChannel, DMA_REQMASKSET_OFFSET);
    return (enPeripheral);
}
