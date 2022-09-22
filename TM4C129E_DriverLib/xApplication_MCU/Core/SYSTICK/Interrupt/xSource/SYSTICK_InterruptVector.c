/**
 *
 * @file SYSTICK_InterruptVector.c
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
#include <xApplication_MCU/Core/SYSTICK/Interrupt/xHeader/SYSTICK_InterruptVector.h>

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Dependencies.h>

SYSTICK_nERROR SYSTICK__enSetInterruptVectorState(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE enStateArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enSetInterruptSourceState(enModuleArg, enStateArg);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enSetInterruptVectorStateWithPriority(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE enStateArg, SYSTICK_nPRIORITY enPriorityArg)
{
    SYSTICK_nERROR enErrorReg;


    enErrorReg = (SYSTICK_nERROR) SCB_SYSTICK__enSetPriority(SCB_enMODULE_0, (SCB_nPRIORITY) enPriorityArg);
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSTICK__enSetInterruptSourceState(enModuleArg, enStateArg);
    }

    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enGetInterruptVectorState(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE* penStateArg, SYSTICK_nSTATUS* penStatusArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enGetInterruptSourceState(enModuleArg, penStateArg, penStatusArg);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enGetInterruptVectorStateWithPriority(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE* penStateArg, SYSTICK_nSTATUS* penStatusArg, SYSTICK_nPRIORITY* penPriorityArg)
{
    SYSTICK_nERROR enErrorReg;


    enErrorReg = (SYSTICK_nERROR) SCB_SYSTICK__enGetPriority(SCB_enMODULE_0, (SCB_nPRIORITY*) penPriorityArg);
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSTICK_nERROR) SYSTICK__enGetInterruptSourceState(enModuleArg, penStateArg, penStatusArg);
    }

    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enEnableInterruptVector(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enSetInterruptVectorState(enModuleArg, SYSTICK_enSTATE_ENA);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enEnableInterruptVectorWithPriority(SYSTICK_nMODULE enModuleArg, SYSTICK_nPRIORITY enPriorityArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enSetInterruptVectorStateWithPriority(enModuleArg, SYSTICK_enSTATE_ENA, enPriorityArg);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enDisableInterruptVector(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enSetInterruptVectorState(enModuleArg, SYSTICK_enSTATE_DIS);
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enDisableInterruptVectorWithPriority(SYSTICK_nMODULE enModuleArg, SYSTICK_nPRIORITY enPriorityArg)
{
    SYSTICK_nERROR enErrorReg;
    enErrorReg = SYSTICK__enSetInterruptVectorStateWithPriority(enModuleArg, SYSTICK_enSTATE_DIS, enPriorityArg);
    return (enErrorReg);
}
