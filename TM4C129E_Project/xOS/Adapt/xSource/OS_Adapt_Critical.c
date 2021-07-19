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
#include <xOS/Adapt/xHeader/OS_Adapt_Critical.h>

#include <xOS/Adapt/xHeader/OS_Adapt_Interrupt.h>

static void OS_Adapt_Fault(void);

static uint32_t OS_Adapt_u32CriticalNesting = 0xaaaaaaaa;

void OS_Adapt__vEnterCritical(void)
{
    OS_Adapt__vDisableInterrupts();
    OS_Adapt_u32CriticalNesting++;


    if(1UL == OS_Adapt_u32CriticalNesting)
    {
        if(0UL != OS_Adapt__u32IsInterruptActive())
        {
            OS_Adapt_Fault();
        }
    }

}


void OS_Adapt__vExitCritical(void)
{
    if(0UL != OS_Adapt_u32CriticalNesting)
    {
        OS_Adapt_u32CriticalNesting--;
        if(0UL == OS_Adapt_u32CriticalNesting)
        {
            OS_Adapt__vEnableInterrupts();
        }
    }
}


uint32_t OS_Adapt__u32GetCriticalNesting(void)
{
    return (OS_Adapt_u32CriticalNesting);
}

void OS_Adapt__vSetCriticalNesting(uint32_t u32NestingValue)
{
    OS_Adapt_u32CriticalNesting = u32NestingValue;
}

void OS_Adapt__vIncreaseCriticalNesting(void)
{
    OS_Adapt_u32CriticalNesting++;
}


static void OS_Adapt_Fault(void)
{
    OS_Adapt__vDisableInterrupts();
    while(1UL){}
}
