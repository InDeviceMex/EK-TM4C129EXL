/**
 *
 * @file ACMP_InterruptLevel.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_InterruptLevel.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Generic.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nERROR ACMP__enSetComparatorInterruptTriggerLevel(ACMP_nMODULE enModuleArg,
                                               ACMP_nCOMP enComparatorArg,
                                               ACMP_nLEVEL enInterruptLevelArg)
{
    ACMP_Register_t stRegister;
    stRegister.uxShift = ACMP_CTL_R_ISLVAL_BIT;
    stRegister.uxMask = ACMP_CTL_ISLVAL_MASK;
    stRegister.uptrAddress = ACMP_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enInterruptLevelArg;

    ACMP_nERROR enErrorReg;
    enErrorReg = ACMP__enSetCompGeneric(enModuleArg, enComparatorArg, &stRegister);
    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetComparatorInterruptTriggerLevel(ACMP_nMODULE enModuleArg,
                                                           ACMP_nCOMP enComparatorArg,
                                                           ACMP_nLEVEL* penInterruptLevelArg)
{
    ACMP_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptLevelArg) ? ACMP_enERROR_POINTER : ACMP_enERROR_OK;

    if(ACMP_enERROR_OK == enErrorReg)
    {
        ACMP_Register_t stRegister;
        stRegister.uxShift = ACMP_CTL_R_ISLVAL_BIT;
        stRegister.uxMask = ACMP_CTL_ISLVAL_MASK;
        stRegister.uptrAddress = ACMP_CTL_OFFSET;
        enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            *penInterruptLevelArg = (ACMP_nLEVEL) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
