/**
 *
 * @file DMA_CH_Enable.c
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
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_Enable.h>

#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_ConfigGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

static void DMA_CH__vEnable(DMA_nCH_MODULE enChannel);
static void DMA_CH__vDisable(DMA_nCH_MODULE enChannel);

static void DMA_CH__vEnable(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_ENASET_OFFSET);
}

static void DMA_CH__vDisable(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_ENACLR_OFFSET);
}

void DMA_CH__vSetEnable(DMA_nCH_MODULE enChannel, DMA_nCH_ENA enEnable)
{
    if(DMA_enCH_ENA_DIS == enEnable)
    {
        DMA_CH__vDisable(enChannel);
    }
    else
    {
        DMA_CH__vEnable(enChannel);
    }
}

DMA_nCH_ENA DMA_CH__enGetEnable(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_ENA enEnable = DMA_enCH_ENA_UNDEF;
    enEnable = (DMA_nCH_ENA) DMA_CH__u32GetConfigGeneric(enChannel, DMA_ENASET_OFFSET);
    return (enEnable);
}
