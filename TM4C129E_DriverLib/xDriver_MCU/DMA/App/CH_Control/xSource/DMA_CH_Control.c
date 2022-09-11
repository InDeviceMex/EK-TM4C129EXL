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

DMA_nERROR DMA_CH_Primary__enSetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  const DMA_CONTROL_t* const pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlParameters(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, pstControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    const DMA_CONTROL_t* const pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetControlParameters(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, pstControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enSetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                         DMA_nCH_CONTROL enControlArg, const DMA_CONTROL_t* const pstControlArg)
{
    DMA_nERROR enErrorReg;
    if(0UL != (uintptr_t) pstControlArg)
    {
        enErrorReg = DMA_CH__enSetTransferModeByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->enTransferMode);
        if(DMA_enERROR_OK == enErrorReg)
        {
            enErrorReg = DMA_CH__enUseLastBurstTransferByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->enUseLastBurst);
            if(DMA_enERROR_OK == enErrorReg)
            {
                enErrorReg = DMA_CH__enSetTransferSizeByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->u32TransferSize);
                if(DMA_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DMA_CH__enSetArbitrationSizeByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->enArbitrationSize);
                    if(DMA_enERROR_OK == enErrorReg)
                    {
                        enErrorReg = DMA_CH__enSetSourceDataSizeByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->enSourceDataSize);
                        if(DMA_enERROR_OK == enErrorReg)
                        {
                            enErrorReg = DMA_CH__enSetSourceTransferIncrementByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->enSourceIncrement);
                            if(DMA_enERROR_OK == enErrorReg)
                            {
                                enErrorReg = DMA_CH__enSetDestinationDataSizeByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->enDestinationDataSize);
                                if(DMA_enERROR_OK == enErrorReg)
                                {
                                    enErrorReg = DMA_CH__enSetDestinationTransferIncrementByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->enDestinationIncrement);
                                    if(DMA_enERROR_OK == enErrorReg)
                                    {
                                        enErrorReg = DMA_CH__enSetSourceDataAccessByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->enSourceAccess);
                                        if(DMA_enERROR_OK == enErrorReg)
                                        {
                                            enErrorReg = DMA_CH__enSetDestinationDataAccessByNumber(enModuleArg, enChannelArg, enControlArg, pstControlArg->enDestinationAccess);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                 DMA_CONTROL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlParameters(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, pstControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                   DMA_CONTROL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlParameters(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, pstControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                         DMA_nCH_CONTROL enControlArg, DMA_CONTROL_t* pstControlArg)
{
    DMA_nERROR enErrorReg;

    if(0UL != (uint32_t) pstControlArg)
    {
        enErrorReg = DMA_CH__enGetTransferModeByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->enTransferMode));
        if(DMA_enERROR_OK == enErrorReg)
        {
            enErrorReg = DMA_CH__enGetLastBurstTransferStateByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->enUseLastBurst));
            if(DMA_enERROR_OK == enErrorReg)
            {
                enErrorReg = DMA_CH__enGetTransferSizeByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->u32TransferSize));
                if(DMA_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DMA_CH__enGetArbitrationSizeByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->enArbitrationSize));
                    if(DMA_enERROR_OK == enErrorReg)
                    {
                        enErrorReg = DMA_CH__enGetSourceDataSizeByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->enSourceDataSize));
                        if(DMA_enERROR_OK == enErrorReg)
                        {
                            enErrorReg = DMA_CH__enGetSourceTransferIncrementByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->enSourceIncrement));
                            if(DMA_enERROR_OK == enErrorReg)
                            {
                                enErrorReg = DMA_CH__enGetDestinationDataSizeByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->enDestinationDataSize));
                                if(DMA_enERROR_OK == enErrorReg)
                                {
                                    enErrorReg = DMA_CH__enGetDestinationTransferIncrementByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->enDestinationIncrement));
                                    if(DMA_enERROR_OK == enErrorReg)
                                    {
                                        enErrorReg = DMA_CH__enGetSourceDataAccessByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->enSourceAccess));
                                        if(DMA_enERROR_OK == enErrorReg)
                                        {
                                            enErrorReg = DMA_CH__enGetDestinationDataAccessByNumber(enModuleArg, enChannelArg, enControlArg, &(pstControlArg->enDestinationAccess));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetControlParameters_Create(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_CONTROL_t** pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlParameters_Create(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, pstControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetControlParameters_Create(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                      DMA_CONTROL_t** pstControlArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetControlParameters_Create(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, pstControlArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetControlParameters_Create(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                            DMA_nCH_CONTROL enControlArg, DMA_CONTROL_t** pstControlArg)
{
    DMA_CONTROL_t* pstControlReg;
    DMA_nERROR enErrorReg;
    if(0UL != (uint32_t) pstControlArg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstControlReg = (DMA_CONTROL_t*) memalign( (size_t) 4,
                                                      (size_t) sizeof(DMA_CONTROL_t));
#elif defined (__GNUC__ )
        pstControlReg = (DMA_CONTROL_t*) malloc(sizeof(DMA_CONTROL_t));
#endif
        enErrorReg = DMA_CH__enGetControlParameters(enModuleArg, enChannelArg, enControlArg, pstControlReg);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *pstControlArg = pstControlReg;
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    return (enErrorReg);
}

void DMA_CH__vDeleteControlParameters(DMA_CONTROL_t* pstControl)
{
    free(pstControl);
    pstControl = (DMA_CONTROL_t*) 0UL;
}
