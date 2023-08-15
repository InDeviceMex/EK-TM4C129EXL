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
 * @verbatim 9 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Adapt/xHeader/OS_Adapt_Priority.h>

#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/Common/MCU_Common.h>

void OS_Adapt__vRecordReadyPriority(OS_UBase_t uxPriorityArg,
                                    volatile OS_UBase_t* puxReadyPriorities)
{
    OS_UBase_t uxPriorityBitReg;
    uxPriorityBitReg = 1UL;
    uxPriorityBitReg <<= uxPriorityArg;
    *puxReadyPriorities |= uxPriorityBitReg;
}

void OS_Adapt__vResetReadyPriority(OS_UBase_t uxPriorityArg,
                                   volatile OS_UBase_t* puxReadyPriorities)
{
    OS_UBase_t uxPriorityBitReg;
    uxPriorityBitReg = 1UL;
    uxPriorityBitReg <<= uxPriorityArg;
    *puxReadyPriorities &= ~uxPriorityBitReg;
}

OS_UBase_t OS_Adapt__uxGetHighestPriority(volatile OS_UBase_t uxReadyPriorities)
{
    OS_UBase_t uxCLZReg;
    uxCLZReg = MCU__uxGetCounLeadingZeros(uxReadyPriorities);

    OS_UBase_t puxTopPriorityReg;
    puxTopPriorityReg = 31UL;
    puxTopPriorityReg -= uxCLZReg;
    return(puxTopPriorityReg);
}
