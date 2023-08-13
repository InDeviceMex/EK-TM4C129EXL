/**
 *
 * @file ACMP_ADCTriggerConfig.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_ADCTriggerConfig.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_TriggerEdge.h>
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_TriggerLevel.h>

ACMP_nERROR ACMP__enSetADCTriggerConfig(ACMP_nMODULE enModuleArg,
                                ACMP_nCOMP enComparatorArg,
                                ACMP_nADC_CONFIG enIntConfigArg)
{
    ACMP_nERROR enErrorReg;
    UBase_t uxEvent;
    UBase_t uxSense;
    uxSense = (UBase_t) enIntConfigArg;
    uxSense >>= 8UL;
    uxSense &= 1UL;

    uxEvent = (UBase_t) enIntConfigArg;
    uxEvent &= 0x3UL;
    enErrorReg = ACMP_enERROR_VALUE;
    if((UBase_t) ACMP_enSENSE_EDGE == uxSense)
    {
        enErrorReg = ACMP__enSetComparatorADCTriggerEdge(enModuleArg, enComparatorArg, (ACMP_nEDGE) uxEvent);
    }
    else
    {
        enErrorReg = ACMP__enSetComparatorADCTriggerEdge(enModuleArg, enComparatorArg, ACMP_enEDGE_NONE);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            enErrorReg = ACMP__enSetComparatorADCTriggerLevel(enModuleArg, enComparatorArg, (ACMP_nLEVEL) uxEvent);
        }
    }
    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetADCTriggerConfig(ACMP_nMODULE enModuleArg,
                               ACMP_nCOMP enComparatorArg,
                               ACMP_nADC_CONFIG* penIntConfigArg)
{

    ACMP_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penIntConfigArg) ? ACMP_enERROR_POINTER : ACMP_enERROR_OK;

    ACMP_nEDGE enEdgeReg;
    enEdgeReg = ACMP_enEDGE_NONE;
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enGetComparatorADCTriggerEdge(enModuleArg, enComparatorArg, &enEdgeReg);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        UBase_t uxSense;
        if(ACMP_enEDGE_NONE == enEdgeReg)
        {
            ACMP_nLEVEL enLevelReg;
            enErrorReg = ACMP__enGetComparatorADCTriggerLevel(enModuleArg, enComparatorArg, &enLevelReg);
            if(ACMP_enERROR_OK == enErrorReg)
            {
                uxSense = (UBase_t) enLevelReg;
                *penIntConfigArg = (ACMP_nADC_CONFIG) uxSense;
            }
        }
        else
        {
            uxSense = 1U;
            uxSense <<= 8UL;
            uxSense |= (UBase_t) enEdgeReg;
            *penIntConfigArg = (ACMP_nADC_CONFIG) uxSense;
        }
    }

    return (enErrorReg);
}
