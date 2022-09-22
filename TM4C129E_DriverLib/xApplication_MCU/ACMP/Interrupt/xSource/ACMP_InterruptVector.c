/**
 *
 * @file ACMP_InterruptVector.c
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ACMP/Interrupt/xHeader/ACMP_InterruptVector.h>

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

static ACMP_nERROR ACMP__enGetInterruptVector(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, NVIC_nVECTOR* enVectorArg);

static ACMP_nERROR ACMP__enGetInterruptVector(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, NVIC_nVECTOR* enVectorArg)
{
    const NVIC_nVECTOR NVIC_VECTOR_ACMP[(uint32_t) ACMP_enMODULE_MAX][(uint32_t) ACMP_enCOMP_MAX] =
    {
        {NVIC_enVECTOR_ACMP0, NVIC_enVECTOR_ACMP1, NVIC_enVECTOR_ACMP2}
    };
    ACMP_nERROR enErrorReg;

    enErrorReg = (ACMP_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) ACMP_enMODULE_MAX);
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((uint32_t) enComparatorArg, (uint32_t) ACMP_enCOMP_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *enVectorArg = NVIC_VECTOR_ACMP[(uint32_t) enModuleArg][(uint32_t) enComparatorArg];

    }
    return (enErrorReg);
}

ACMP_nERROR ACMP__enSetInterruptVectorState(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_nSTATE enStateArg)
{
    NVIC_nVECTOR enVectorReg;
    ACMP_nERROR enErrorReg;

    enVectorReg = NVIC_enVECTOR_ACMP0;
    enErrorReg = ACMP__enGetInterruptVector(enModuleArg, enComparatorArg, &enVectorReg);
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) NVIC__enSetVectorState(NVIC_enMODULE_0, enVectorReg, (NVIC_nSTATE) enStateArg);
    }

    return (enErrorReg);
}

ACMP_nERROR ACMP__enSetInterruptVectorStateWithPriority(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_nSTATE enStateArg, ACMP_nPRIORITY enPriorityArg)
{
    NVIC_nVECTOR enVectorReg;
    ACMP_nERROR enErrorReg;

    enVectorReg = NVIC_enVECTOR_ACMP0;
    enErrorReg = ACMP__enGetInterruptVector(enModuleArg, enComparatorArg, &enVectorReg);
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) NVIC__enSetVectorPriority(NVIC_enMODULE_0, enVectorReg, (NVIC_nPRIORITY) enPriorityArg);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) NVIC__enSetVectorState(NVIC_enMODULE_0, enVectorReg, (NVIC_nSTATE) enStateArg);
    }

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetInterruptVectorState(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_nSTATE* penStateArg)
{
    NVIC_nVECTOR enVectorReg;
    ACMP_nERROR enErrorReg;

    enVectorReg = NVIC_enVECTOR_ACMP0;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enGetInterruptVector(enModuleArg, enComparatorArg, &enVectorReg);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) NVIC__enGetVectorState(NVIC_enMODULE_0, enVectorReg, (NVIC_nSTATE*) penStateArg);
    }

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetInterruptVectorStateWithPriority(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_nSTATE* penStateArg, ACMP_nPRIORITY* penPriorityArg)
{
    NVIC_nVECTOR enVectorReg;
    ACMP_nERROR enErrorReg;

    enVectorReg = NVIC_enVECTOR_ACMP0;
    if((0UL == (uintptr_t) penStateArg) || (0UL == (uintptr_t) penPriorityArg))
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enGetInterruptVector(enModuleArg, enComparatorArg, &enVectorReg);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) NVIC__enGetVectorPriority(NVIC_enMODULE_0, enVectorReg, (NVIC_nPRIORITY*) penPriorityArg);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) NVIC__enGetVectorState(NVIC_enMODULE_0, enVectorReg, (NVIC_nSTATE*) penStateArg);
    }

    return (enErrorReg);
}

ACMP_nERROR ACMP__enEnableInterruptVector(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg)
{
    ACMP_nERROR enErrorReg;
    enErrorReg = ACMP__enSetInterruptVectorState(enModuleArg, enComparatorArg, ACMP_enSTATE_ENA);
    return (enErrorReg);
}

ACMP_nERROR ACMP__enEnableInterruptVectorWithPriority(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_nPRIORITY enPriorityArg)
{
    ACMP_nERROR enErrorReg;
    enErrorReg = ACMP__enSetInterruptVectorStateWithPriority(enModuleArg, enComparatorArg, ACMP_enSTATE_ENA, enPriorityArg);
    return (enErrorReg);
}

ACMP_nERROR ACMP__enDisableInterruptVector(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg)
{
    ACMP_nERROR enErrorReg;
    enErrorReg = ACMP__enSetInterruptVectorState(enModuleArg, enComparatorArg, ACMP_enSTATE_DIS);
    return (enErrorReg);
}

ACMP_nERROR ACMP__enDisableInterruptVectorWithPriority(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_nPRIORITY enPriorityArg)
{
    ACMP_nERROR enErrorReg;
    enErrorReg = ACMP__enSetInterruptVectorStateWithPriority(enModuleArg, enComparatorArg, ACMP_enSTATE_DIS, enPriorityArg);
    return (enErrorReg);
}

