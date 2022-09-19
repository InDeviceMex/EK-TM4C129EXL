/**
 *
 * @file ACMP_TriggerLevel.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_TriggerLevel.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Generic.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nERROR ACMP__enSetComparatorADCTriggerLevel(ACMP_nMODULE enModuleArg,
                                         ACMP_nCOMP enComparatorArg,
                                         ACMP_nLEVEL enTriggerLevelArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    stRegister.u32Shift = ACMP_CTL_R_TSLVAL_BIT;
    stRegister.u32Mask = ACMP_CTL_TSLVAL_MASK;
    stRegister.uptrAddress = ACMP_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enTriggerLevelArg;
    enErrorReg = ACMP__enSetCompGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetComparatorADCTriggerLevel(ACMP_nMODULE enModuleArg,
                                                     ACMP_nCOMP enComparatorArg,
                                                     ACMP_nLEVEL* penTriggerLevelArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;
    if(0UL == (uintptr_t) penTriggerLevelArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = ACMP_CTL_R_TSLVAL_BIT;
        stRegister.u32Mask = ACMP_CTL_TSLVAL_MASK;
        stRegister.uptrAddress = ACMP_CTL_OFFSET;
        enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penTriggerLevelArg = (ACMP_nLEVEL) stRegister.u32Value;
    }
    return (enErrorReg);
}
