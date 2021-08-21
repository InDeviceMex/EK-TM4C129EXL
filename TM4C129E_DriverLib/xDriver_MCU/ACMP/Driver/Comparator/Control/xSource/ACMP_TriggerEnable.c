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

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vSetComparatorADCTrigger(ACMP_nMODULE enModule,
                                    ACMP_nCOMP enComparatorArg,
                                    ACMP_nADC enTriggerEnable)
{
    ACMP__vSetCompGenericControl((uint32_t) enModule, (uint32_t) enComparatorArg,
                                 (uint32_t) enTriggerEnable,
                                 ACMP_CTL_TOEN_MASK, ACMP_CTL_R_TOEN_BIT);
}

ACMP_nADC ACMP__enGetComparatorADCTrigger(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg)
{
    ACMP_nADC enAdcEnaReg = ACMP_enADC_DIS;
    enAdcEnaReg = (ACMP_nADC) ACMP__u32GetCompGenericControl((uint32_t) enModule,
                                 (uint32_t) enComparatorArg,
                                 ACMP_CTL_TOEN_MASK, ACMP_CTL_R_TOEN_BIT);
    return (enAdcEnaReg);
}
