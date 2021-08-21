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

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vSetComparatorADCTriggerEdge(ACMP_nMODULE enModule,
                                        ACMP_nCOMP enComparatorArg,
                                        ACMP_nADC_EDGE enTriggerEdgeArg)
{
    ACMP__vSetCompGenericControl((uint32_t) enModule, (uint32_t) enComparatorArg,
                                 (uint32_t) enTriggerEdgeArg,
                                 ACMP_CTL_TSEN_MASK, ACMP_CTL_R_TSEN_BIT);
}

ACMP_nADC_EDGE ACMP__enGetComparatorADCTriggerEdge(ACMP_nMODULE enModule,
                                                   ACMP_nCOMP enComparatorArg)
{
    ACMP_nADC_EDGE enAdcEdgeReg = ACMP_enADC_EDGE_NONE;
    enAdcEdgeReg = (ACMP_nADC_EDGE) ACMP__u32GetCompGenericControl((uint32_t) enModule,
                                                   (uint32_t) enComparatorArg,
                                                   ACMP_CTL_TSEN_MASK, ACMP_CTL_R_TSEN_BIT);
    return (enAdcEdgeReg);
}
