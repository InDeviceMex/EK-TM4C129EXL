/**
 *
 * @file ACMP_InterruptEdge.c
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
 * @verbatim Apr 2, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 2, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_InterruptEdge.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Generic.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nERROR ACMP__enSetComparatorInterruptTriggerEdge(ACMP_nMODULE enModuleArg,
                                              ACMP_nCOMP enComparatorArg,
                                              ACMP_nEDGE enTriggerEdgeArg)
{
    ACMP_Register_t stRegister;
    stRegister.uxShift = ACMP_CTL_R_ISEN_BIT;
    stRegister.uxMask = ACMP_CTL_ISEN_MASK;
    stRegister.uptrAddress = ACMP_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enTriggerEdgeArg;

    ACMP_nERROR enErrorReg;
    enErrorReg = ACMP__enSetCompGeneric(enModuleArg, enComparatorArg, &stRegister);
    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetComparatorInterruptTriggerEdge(ACMP_nMODULE enModuleArg,
                                                         ACMP_nCOMP enComparatorArg,
                                                         ACMP_nEDGE* penTriggerEdgeArg)
{
    ACMP_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penTriggerEdgeArg) ? ACMP_enERROR_POINTER : ACMP_enERROR_OK;

    if(ACMP_enERROR_OK == enErrorReg)
    {
        ACMP_Register_t stRegister;
        stRegister.uxShift = ACMP_CTL_R_ISEN_BIT;
        stRegister.uxMask = ACMP_CTL_ISEN_MASK;
        stRegister.uptrAddress = ACMP_CTL_OFFSET;
        enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            *penTriggerEdgeArg = (ACMP_nEDGE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
