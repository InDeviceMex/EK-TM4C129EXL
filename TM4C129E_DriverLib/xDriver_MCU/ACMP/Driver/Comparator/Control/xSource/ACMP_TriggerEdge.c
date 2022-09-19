/**
 *
 * @file ACMP_TriggerEdge.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_TriggerEdge.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Generic.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nERROR ACMP__enSetComparatorADCTriggerEdge(ACMP_nMODULE enModuleArg,
                                        ACMP_nCOMP enComparatorArg,
                                        ACMP_nEDGE enTriggerEdgeArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    stRegister.u32Shift = ACMP_CTL_R_TSEN_BIT;
    stRegister.u32Mask = ACMP_CTL_TSEN_MASK;
    stRegister.uptrAddress = ACMP_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enTriggerEdgeArg;
    enErrorReg = ACMP__enSetCompGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetComparatorADCTriggerEdge(ACMP_nMODULE enModuleArg,
                                                   ACMP_nCOMP enComparatorArg,
                                                   ACMP_nEDGE* penTriggerEdgeArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;
    if(0UL == (uintptr_t) penTriggerEdgeArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = ACMP_CTL_R_TSEN_BIT;
        stRegister.u32Mask = ACMP_CTL_TSEN_MASK;
        stRegister.uptrAddress = ACMP_CTL_OFFSET;
        enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penTriggerEdgeArg = (ACMP_nEDGE) stRegister.u32Value;
    }
    return (enErrorReg);
}
