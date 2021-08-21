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

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vSetComparatorInterruptTriggerLevel(ACMP_nMODULE enModule,
                                               ACMP_nCOMP enComparatorArg,
                                               ACMP_nINT_LEVEL enInterruptLevelArg)
{
    ACMP__vSetCompGenericControl((uint32_t) enModule, (uint32_t) enComparatorArg,
                                 (uint32_t) enInterruptLevelArg,
                                 ACMP_CTL_ISLVAL_MASK, ACMP_CTL_R_ISLVAL_BIT);
}

ACMP_nINT_LEVEL ACMP__enGetComparatorInterruptTriggerLevel(ACMP_nMODULE enModule,
                                                           ACMP_nCOMP enComparatorArg)
{
    ACMP_nINT_LEVEL enIntLevelReg = ACMP_enINT_LEVEL_LOW;
    enIntLevelReg = (ACMP_nINT_LEVEL) ACMP__u32GetCompGenericControl((uint32_t) enModule,
                                             (uint32_t) enComparatorArg,
                                             ACMP_CTL_ISLVAL_MASK, ACMP_CTL_R_ISLVAL_BIT);
    return (enIntLevelReg);
}





