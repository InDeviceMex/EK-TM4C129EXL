/**
 *
 * @file ACMP_TriggerEnable.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_TriggerEnable.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Generic.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nERROR ACMP__enSetComparatorADCTriggerState(ACMP_nMODULE enModuleArg,
                                    ACMP_nCOMP enComparatorArg,
                                    ACMP_nSTATE enTriggerStateArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;
    stRegister.uxShift = ACMP_CTL_R_TOEN_BIT;
    stRegister.uxMask = ACMP_CTL_TOEN_MASK;
    stRegister.uptrAddress = ACMP_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enTriggerStateArg;
    enErrorReg = ACMP__enSetCompGeneric(enModuleArg, enComparatorArg, &stRegister);
    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetComparatorADCTriggerState(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg,
                                          ACMP_nSTATE* penTriggerStateArg)
{
    if(0UL == (uintptr_t) penTriggerStateArg)
    {
        return (ACMP_enERROR_POINTER);
    }

    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;
    stRegister.uxShift = ACMP_CTL_R_TOEN_BIT;
    stRegister.uxMask = ACMP_CTL_TOEN_MASK;
    stRegister.uptrAddress = ACMP_CTL_OFFSET;
    enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penTriggerStateArg = (ACMP_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}
