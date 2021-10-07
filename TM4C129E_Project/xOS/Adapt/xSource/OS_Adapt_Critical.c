/**
 *
 * @file OS_Adapt_Critical.c
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
#include <xOS/Adapt/xHeader/OS_Adapt_Critical.h>

#include <xOS/Adapt/xHeader/OS_Adapt_Interrupt.h>

static void OS_Adapt_Fault(void);

static OS_UBase_t OS_Adapt_uxCriticalNesting = 0xaaaaaaaa;

void OS_Adapt__vEnterCritical(void)
{
    OS_Adapt__vDisableInterrupts();
    OS_Adapt_uxCriticalNesting++;

    if(1UL == OS_Adapt_uxCriticalNesting)
    {
        if(FALSE != OS_Adapt__boIsInterruptActive())
        {
            OS_Adapt_Fault();
        }
    }

}

void OS_Adapt__vExitCritical(void)
{
    if(0UL != OS_Adapt_uxCriticalNesting)
    {
        OS_Adapt_uxCriticalNesting--;
        if(0UL == OS_Adapt_uxCriticalNesting)
        {
            OS_Adapt__vEnableInterrupts();
        }
    }
}

OS_UBase_t OS_Adapt__uxGetCriticalNesting(void)
{
    return (OS_Adapt_uxCriticalNesting);
}

void OS_Adapt__vSetCriticalNesting(OS_UBase_t uxNestingValue)
{
    OS_Adapt_uxCriticalNesting = uxNestingValue;
}

void OS_Adapt__vIncreaseCriticalNesting(void)
{
    OS_Adapt_uxCriticalNesting++;
}

static void OS_Adapt_Fault(void)
{
    OS_Adapt__vDisableInterrupts();
    while(1UL){}
}
