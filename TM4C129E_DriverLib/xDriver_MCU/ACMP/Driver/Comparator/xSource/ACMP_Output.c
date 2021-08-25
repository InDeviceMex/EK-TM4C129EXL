/**
 *
 * @file ACMP_Output.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Output.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Generic.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>


ACMP_nOUTPUT_VALUE ACMP__enGetComparatorOutput(ACMP_nMODULE enModule,
                                                ACMP_nCOMP  enComparatorArg)
{
    ACMP_nOUTPUT_VALUE enOutputValueReg = ACMP_enOUTPUT_VALUE_VMIN_GREATER;
    enOutputValueReg = (ACMP_nOUTPUT_VALUE) ACMP__u32GetCompGeneric((uint32_t) enModule,
                                            (uint32_t) enComparatorArg,
                                            ACMP_STAT_OFFSET, ACMP_STAT_OVAL_MASK,
                                            ACMP_STAT_R_OVAL_BIT);
    return (enOutputValueReg);
}
