/**
 *
 * @file ACMP_InterruptConfig.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_InterruptConfig.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_InterruptEdge.h>
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_InterruptLevel.h>

ACMP_nERROR ACMP__enSetInterruptConfig(ACMP_nMODULE enModuleArg,
                               ACMP_nCOMP enComparatorArg,
                               ACMP_nINT_CONFIG enIntConfigArg)
{
    UBase_t uxSense;
    UBase_t uxEvent;

    uxSense = (UBase_t) enIntConfigArg;
    uxSense >>= 8UL;
    uxSense &= 1UL;

    uxEvent = (UBase_t) enIntConfigArg;
    uxEvent &= 0x3UL;

    ACMP_nERROR enErrorReg;
    if((UBase_t) ACMP_enSENSE_EDGE == uxSense)
    {
        enErrorReg = ACMP__enSetComparatorInterruptTriggerEdge(enModuleArg, enComparatorArg, (ACMP_nEDGE) uxEvent);
    }
    else
    {
        enErrorReg = ACMP__enSetComparatorInterruptTriggerEdge(enModuleArg, enComparatorArg, ACMP_enEDGE_NONE);
        if(ACMP_enERROR_OK != enErrorReg)
        {
            return (enErrorReg);
        }
        enErrorReg = ACMP__enSetComparatorInterruptTriggerLevel(enModuleArg, enComparatorArg, (ACMP_nLEVEL) uxEvent);
    }
    return (enErrorReg);
}



ACMP_nERROR ACMP__enGetInterruptConfig(ACMP_nMODULE enModuleArg,
                               ACMP_nCOMP enComparatorArg,
                               ACMP_nINT_CONFIG* penIntConfigArg)
{

    if(0UL == (uintptr_t) penIntConfigArg)
    {
        return (ACMP_enERROR_POINTER);
    }

    ACMP_nERROR enErrorReg;
    ACMP_nEDGE enEdgeReg;
    ACMP_nLEVEL enLevelReg;
    enEdgeReg = ACMP_enEDGE_NONE;
    enLevelReg = ACMP_enLEVEL_LOW;
    enErrorReg = ACMP__enGetComparatorInterruptTriggerEdge(enModuleArg, enComparatorArg, &enEdgeReg);
    if(ACMP_enERROR_OK != enErrorReg)
    {
        return (enErrorReg);
    }

    UBase_t uxSense;
    if(ACMP_enEDGE_NONE == enEdgeReg)
    {
        enErrorReg = ACMP__enGetComparatorInterruptTriggerLevel(enModuleArg, enComparatorArg, &enLevelReg);
        if(ACMP_enERROR_OK != enErrorReg)
        {
            return (enErrorReg);
        }
        uxSense = (UBase_t) enLevelReg;
    }
    else
    {
        uxSense = 1U;
        uxSense <<= 8UL;
        uxSense |= (UBase_t) enEdgeReg;
    }
    *penIntConfigArg = (ACMP_nINT_CONFIG) uxSense;
    return (enErrorReg);
}
