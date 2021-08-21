/**
 *
 * @file ACMP_OutputInvert.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_OutputInvert.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vSetComparatorOutputInvert(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg, ACMP_nOUTPUT_INVERT enOutputInvertArg)
{
    ACMP__vSetCompGenericControl((uint32_t) enModule, (uint32_t) enComparatorArg, (uint32_t) enOutputInvertArg, ACMP_CTL_CINV_MASK, ACMP_CTL_R_CINV_BIT);
}

ACMP_nOUTPUT_INVERT ACMP__enGetComparatorOutputInvert(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg)
{
    ACMP_nOUTPUT_INVERT enOutputInvertReg = ACMP_enOUTPUT_INVERT_DIS;
    enOutputInvertReg = (ACMP_nOUTPUT_INVERT) ACMP__u32GetCompGenericControl((uint32_t) enModule,
                                                     (uint32_t) enComparatorArg,
                                                     ACMP_CTL_CINV_MASK, ACMP_CTL_R_CINV_BIT);
    return (enOutputInvertReg);
}
