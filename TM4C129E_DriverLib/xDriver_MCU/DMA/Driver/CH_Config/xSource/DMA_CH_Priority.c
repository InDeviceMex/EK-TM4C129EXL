/**
 *
 * @file DMA_CH_Priority.c
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
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_Priority.h>

#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_ConfigGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

static void DMA_CH__vSetDefaultPriority(DMA_nCH_MODULE enChannel);
static void DMA_CH__vSetHighPriority(DMA_nCH_MODULE enChannel);

static void DMA_CH__vSetDefaultPriority(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_PRIOCLR_OFFSET);
}

static void DMA_CH__vSetHighPriority(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_PRIOSET_OFFSET);
}

void DMA_CH__vSetPriority(DMA_nCH_MODULE enChannel, DMA_nCH_PRIO enDMAChannelPriority)
{
    if(DMA_enCH_PRIO_DEFAULT == enDMAChannelPriority)
    {
        DMA_CH__vSetDefaultPriority(enChannel);
    }
    else
    {
        DMA_CH__vSetHighPriority(enChannel);
    }
}

DMA_nCH_PRIO DMA_CH__enGetPriority(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_PRIO enChannelPrio = DMA_enCH_PRIO_UNDEF;
    enChannelPrio = (DMA_nCH_PRIO) DMA_CH__u32GetConfigGeneric(enChannel, DMA_PRIOSET_OFFSET);
    return (enChannelPrio);
}
