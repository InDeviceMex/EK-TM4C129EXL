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
    uint32_t u32Sense;
    uint32_t u32Event;
    ACMP_nERROR enErrorReg;

    u32Sense = (uint32_t) enIntConfigArg;
    u32Sense >>= 8UL;
    u32Sense &= 1UL;

    u32Event = (uint32_t) enIntConfigArg;
    u32Event &= 0x3UL;

    if((uint32_t) ACMP_enSENSE_EDGE == u32Sense)
    {
        enErrorReg = ACMP__enSetComparatorADCTriggerEdge(enModuleArg,
                                           enComparatorArg,
                                           (ACMP_nEDGE) u32Event);
    }
    else
    {
        enErrorReg = ACMP__enSetComparatorADCTriggerEdge(enModuleArg,
                                           enComparatorArg,
                                           ACMP_enEDGE_NONE);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            enErrorReg = ACMP__enSetComparatorADCTriggerLevel(enModuleArg,
                                            enComparatorArg,
                                            (ACMP_nLEVEL) u32Event);
        }
    }

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetADCTriggerConfig(ACMP_nMODULE enModuleArg,
                               ACMP_nCOMP enComparatorArg,
                               ACMP_nADC_CONFIG* penIntConfigArg)
{
    uint32_t u32Sense;
    ACMP_nERROR enErrorReg;
    ACMP_nEDGE enEdgeReg;
    ACMP_nLEVEL enLevelReg;

    if(0UL != (uintptr_t) penIntConfigArg)
    {
        enEdgeReg = ACMP_enEDGE_NONE;
        enLevelReg = ACMP_enLEVEL_LOW;
        enErrorReg = ACMP__enGetComparatorADCTriggerEdge(enModuleArg, enComparatorArg, &enEdgeReg);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            if(ACMP_enEDGE_NONE == enEdgeReg)
            {
                enErrorReg = ACMP__enGetComparatorADCTriggerLevel(enModuleArg,
                                                      enComparatorArg,
                                                      &enLevelReg);
                if(ACMP_enERROR_OK == enErrorReg)
                {
                    u32Sense = (uint32_t) enLevelReg;
                    *penIntConfigArg = (ACMP_nADC_CONFIG) u32Sense;
                }
            }
            else
            {
                u32Sense = 1U;
                u32Sense <<= 8UL;
                u32Sense |= (uint32_t) enEdgeReg;
                *penIntConfigArg = (ACMP_nADC_CONFIG) u32Sense;
            }
        }
    }
    else
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }

    return (enErrorReg);
}
