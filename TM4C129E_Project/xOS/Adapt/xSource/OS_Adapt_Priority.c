/**
 *
 * @file OS_Adapt_Priority.c
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
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Adapt/xHeader/OS_Adapt_Priority.h>

#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/Common/MCU_Common.h>



/* Store/clear the ready priorities in a bit map. */
void OS_Adapt__vRecordReadyPriority(uint32_t u32Priority, volatile uint32_t* pu32ReadyPriorities)
{
    *pu32ReadyPriorities |= ((uint32_t) 1UL << (uint32_t)(u32Priority) );
}


void OS_Adapt__vResetReadyPriority(uint32_t u32Priority, volatile uint32_t* pu32ReadyPriorities)
{
    *pu32ReadyPriorities &= ~((uint32_t) 1UL << (uint32_t)(u32Priority) );
}

/*-----------------------------------------------------------*/

void OS_Adapt__vGetHighestPriority(uint32_t* const pu32TopPriority, volatile uint32_t u32ReadyPriorities )
{
    uint32_t u32CLZ = 0UL;
    uint32_t* const pu32Prio = pu32TopPriority;
    *pu32Prio = 31UL;
    u32CLZ = MCU__u32GetCounLeadingZeros(u32ReadyPriorities);
    *pu32Prio -= u32CLZ;
}
