/**
 *
 * @file ACMP_VmaxSource.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_VmaxSource.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vSetComparatorVmaxSource(ACMP_nMODULE enModule,
                                    ACMP_nCOMP enComparatorArg,
                                    ACMP_nVMAX_SOURCE enVmaxPinSource)
{
    ACMP__vSetCompGenericControl((uint32_t) enModule, (uint32_t) enComparatorArg,
                                 (uint32_t) enVmaxPinSource,
                                 ACMP_CTL_ASRCP_MASK, ACMP_CTL_R_ASRCP_BIT);
}

ACMP_nVMAX_SOURCE ACMP__enGetComparatorVmaxSource(ACMP_nMODULE enModule,
                                                  ACMP_nCOMP enComparatorArg)
{
    ACMP_nVMAX_SOURCE enVmaxSourceReg = ACMP_enVMAX_SOURCE_CN;
    enVmaxSourceReg = (ACMP_nVMAX_SOURCE) ACMP__u32GetCompGenericControl((uint32_t) enModule,
                                                     (uint32_t) enComparatorArg,
                                                     ACMP_CTL_ASRCP_MASK, ACMP_CTL_R_ASRCP_BIT);
    return (enVmaxSourceReg);
}
