/**
 *
 * @file DMA_CH_ControlStructure.c
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
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_ControlStructure.h>

#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_ConfigGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

static void DMA_CH__vSetAlternativeStructure(DMA_nCH_MODULE enChannel);
static void DMA_CH__vSetPrimaryStructure(DMA_nCH_MODULE enChannel);

static void DMA_CH__vSetAlternativeStructure(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_ALTSET_OFFSET);
}

static void DMA_CH__vSetPrimaryStructure(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_ALTCLR_OFFSET);
}

void DMA_CH__vSetControlStructure(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelControlStructure)
{
    if(DMA_enCH_CTL_PRIMARY == enChannelControlStructure)
    {
        DMA_CH__vSetPrimaryStructure(enChannel);
    }
    else
    {
        DMA_CH__vSetAlternativeStructure(enChannel);
    }
}

DMA_nCH_CTL DMA_CH__enGetControlStructure(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_CTL enChannelControlStructure = DMA_enCH_CTL_UNDEF;
    enChannelControlStructure = (DMA_nCH_CTL) DMA_CH__u32GetConfigGeneric(enChannel, DMA_ALTSET_OFFSET);
    return (enChannelControlStructure);
}
