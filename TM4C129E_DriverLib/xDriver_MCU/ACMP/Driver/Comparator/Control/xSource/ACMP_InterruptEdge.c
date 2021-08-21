/**
 *
 * @file ACMP_InterruptEdge.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_InterruptEdge.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vSetComparatorInterruptTriggerEdge(ACMP_nMODULE enModule,
                                              ACMP_nCOMP enComparatorArg,
                                              ACMP_nINT_EDGE enTriggerEdgeArg)
{
    ACMP__vSetCompGenericControl((uint32_t) enModule, (uint32_t) enComparatorArg,
                                 (uint32_t) enTriggerEdgeArg,
                                 ACMP_CTL_ISEN_MASK, ACMP_CTL_R_ISEN_BIT);
}

ACMP_nINT_EDGE ACMP__enGetComparatorInterruptTriggerEdge(ACMP_nMODULE enModule,
                                                         ACMP_nCOMP enComparatorArg)
{
    ACMP_nINT_EDGE enIntEdgeReg = ACMP_enINT_EDGE_NONE;
    enIntEdgeReg = (ACMP_nINT_EDGE) ACMP__u32GetCompGenericControl((uint32_t) enModule,
                                   (uint32_t) enComparatorArg,
                                   ACMP_CTL_ISEN_MASK, ACMP_CTL_R_ISEN_BIT);
    return (enIntEdgeReg);
}





