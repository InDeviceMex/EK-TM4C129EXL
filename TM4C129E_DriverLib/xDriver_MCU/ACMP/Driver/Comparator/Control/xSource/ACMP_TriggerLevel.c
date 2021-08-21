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

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vSetComparatorADCTriggerLevel(ACMP_nMODULE enModule,
                                         ACMP_nCOMP enComparatorArg,
                                         ACMP_nADC_LEVEL enTriggerLevelArg)
{
    ACMP__vSetCompGenericControl((uint32_t) enModule, (uint32_t) enComparatorArg,
                                 (uint32_t) enTriggerLevelArg,
                                 ACMP_CTL_TSLVAL_MASK, ACMP_CTL_R_TSLVAL_BIT);
}

ACMP_nADC_LEVEL ACMP__enGetComparatorADCTriggerLevel(ACMP_nMODULE enModule,
                                                     ACMP_nCOMP enComparatorArg)
{
    ACMP_nADC_LEVEL enAdcLevelReg = ACMP_enADC_LEVEL_LOW;
    enAdcLevelReg = (ACMP_nADC_LEVEL) ACMP__u32GetCompGenericControl((uint32_t) enModule,
                                             (uint32_t) enComparatorArg,
                                             ACMP_CTL_TSLVAL_MASK, ACMP_CTL_R_TSLVAL_BIT);
    return (enAdcLevelReg);
}
