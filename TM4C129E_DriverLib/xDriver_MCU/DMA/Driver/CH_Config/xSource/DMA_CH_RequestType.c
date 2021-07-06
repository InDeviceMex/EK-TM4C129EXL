/**
 *
 * @file DMA_CH_RequestType.c
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
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_RequestType.h>

#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_ConfigGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

static void DMA_CH__vSetRequestBoth(DMA_nCH_MODULE enChannel);
static void DMA_CH__vSetRequestOnlyBurst(DMA_nCH_MODULE enChannel);

static void DMA_CH__vSetRequestBoth(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_USEBURSTCLR_OFFSET);
}

static void DMA_CH__vSetRequestOnlyBurst(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_USEBURSTSET_OFFSET);
}

void DMA_CH__vSetRequestType(DMA_nCH_MODULE enChannel, DMA_nCH_REQTYPE enRequestType)
{
    if(DMA_enCH_REQTYPE_BOTH == enRequestType)
    {
        DMA_CH__vSetRequestBoth(enChannel);
    }
    else
    {
        DMA_CH__vSetRequestOnlyBurst(enChannel);
    }
}

DMA_nCH_REQTYPE DMA_CH__enGetRequestType(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_REQTYPE enRequestType = DMA_enCH_REQTYPE_UNDEF;
    enRequestType = (DMA_nCH_REQTYPE) DMA_CH__u32GetConfigGeneric(enChannel, DMA_USEBURSTSET_OFFSET);
    return (enRequestType);
}
