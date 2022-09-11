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
#include <xDriver_MCU/DMA/Driver/DMA_Driver.h>

DMA_nERROR DMA_CH__enSetConfigParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                        DMA_CONFIG_t* pstConfigArg)
{
    DMA_nERROR enErrorReg;
    if(0UL != (uintptr_t) pstConfigArg)
    {
    enErrorReg = DMA_CH__enSetActiveControStructureByNumber(enModuleArg, enChannelArg, pstConfigArg->enControlStructure);
    if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
    enErrorReg = DMA_CH__enSetPriorityByNumber(enModuleArg, enChannelArg, pstConfigArg->enChannelPriority);
    if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
    enErrorReg = DMA_CH__enSetEncoderByNumber(enModuleArg, enChannelArg, pstConfigArg->enEncoder);
    if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
    enErrorReg = DMA_CH__enSetPeripheralStateByNumber(enModuleArg, enChannelArg, pstConfigArg->enPeripheralEnable);
    if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
    enErrorReg = DMA_CH__enSetRequestTypeByNumber(enModuleArg, enChannelArg, pstConfigArg->enRequestType);
    if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
    enErrorReg = DMA_CH__enSetStateByNumber(enModuleArg, enChannelArg, pstConfigArg->enChannelEnable);
    if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetConfigParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                        DMA_CONFIG_t* pstConfigArg)
{
    DMA_nERROR enErrorReg;
    if(0UL != (uint32_t) pstConfigArg)
    {
        enErrorReg = DMA_CH__enGetActiveControStructureByNumber(enModuleArg, enChannelArg, &(pstConfigArg->enControlStructure));
        if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
        enErrorReg = DMA_CH__enGetPriorityByNumber(enModuleArg, enChannelArg, &(pstConfigArg->enChannelPriority));
        if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
        enErrorReg = DMA_CH__enGetEncoderByNumber(enModuleArg, enChannelArg, &(pstConfigArg->enEncoder));
        if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
        enErrorReg = DMA_CH__enGetPeripheralStateByNumber(enModuleArg, enChannelArg, &(pstConfigArg->enPeripheralEnable));
        if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
        enErrorReg = DMA_CH__enGetRequestTypeByNumber(enModuleArg, enChannelArg, &(pstConfigArg->enRequestType));
        if(DMA_enERROR_OK != enErrorReg){ return (enErrorReg);}
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetConfigParameters_Create(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                           DMA_CONFIG_t** pstConfigArg)
{
    DMA_CONFIG_t* pstConfigReg;
    DMA_nERROR enErrorReg;
    if(0UL != (uint32_t) pstConfigArg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstConfigReg = (DMA_CONFIG_t*) memalign( (size_t) 4, (size_t) sizeof(DMA_CONFIG_t));
#elif defined (__GNUC__ )
        pstConfigReg = (DMA_CONFIG_t*) malloc(sizeof(DMA_CONFIG_t));
#endif
        enErrorReg = DMA_CH__enGetConfigParameters(enModuleArg, enChannelArg, pstConfigReg);

        if(DMA_enERROR_OK == enErrorReg)
        {
            *pstConfigArg = pstConfigReg;
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    return (enErrorReg);
}

void DMA_CH__vDeleteConfigParameters(DMA_CONFIG_t* pstConfig)
{
    free(pstConfig);
    pstConfig = (DMA_CONFIG_t*) 0UL;
}
