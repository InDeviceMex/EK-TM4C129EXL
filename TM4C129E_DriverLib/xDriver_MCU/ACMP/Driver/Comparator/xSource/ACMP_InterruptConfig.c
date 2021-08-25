/**
 *
 * @file ACMP_InterruptConfig.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_InterruptConfig.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_InterruptEdge.h>
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_InterruptLevel.h>

void ACMP__vSetInterruptConfig(ACMP_nMODULE enModule,
                               ACMP_nCOMP enComparatorArg,
                               ACMP_nINT_CONFIG enIntConfigArg)
{
    uint32_t u32Sense = 0UL;
    uint32_t u32Event = 0UL;

    u32Sense = (uint32_t) enIntConfigArg;
    u32Sense >>= 8UL;
    u32Sense &= 1UL;

    u32Event = (uint32_t) enIntConfigArg;
    u32Event &= 0x3UL;

    if((uint32_t) ACMP_enINT_SENSE_EDGE == u32Sense)
    {
        ACMP__vSetComparatorInterruptTriggerEdge(enModule,
                                                 enComparatorArg,
                                                 (ACMP_nINT_EDGE) u32Event);
    }
    else
    {
        ACMP__vSetComparatorInterruptTriggerEdge(enModule,
                                                 enComparatorArg,
                                                 ACMP_enINT_EDGE_NONE);
        ACMP__vSetComparatorInterruptTriggerLevel(enModule,
                                                  enComparatorArg,
                                                  (ACMP_nINT_LEVEL) u32Event);
    }
}
