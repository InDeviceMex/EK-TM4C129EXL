/**
 *
 * @file OS_Adapt_Stack.c
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
#include <xOS/Task/Adapt/xHeader/OS_Adapt_Stack.h>

#include <xOS/Task/Adapt/xHeader/OS_Adapt_Interrupt.h>

static void OS_Adapt__vErrorTask(void);

OS_UBase_t* OS_Adapt__puxInitialiseStack(OS_UBase_t* puxTopOfStackArg,
                                         void (*pfvThreadArg)(void* pvParameters),
                                         void *pvParametersArg)
{
    /* Simulate the stack frame as it would be created by a context switch
    interrupt. */

    /* Offset added to account for the way the MCU uses the stack on entry/exit
    of interrupts, and to ensure alignment. */
    puxTopOfStackArg -= 1UL;

    *puxTopOfStackArg = OS_KERNEL_INITIAL_XPSR;   /* xPSR */
    puxTopOfStackArg-= 1UL;
    *puxTopOfStackArg = (OS_UBase_t)  pfvThreadArg; /* PC */
    puxTopOfStackArg-= 1UL;
    *puxTopOfStackArg = (OS_UBase_t) &OS_Adapt__vErrorTask;    /* LR */

    /* Save code space by skipping register initialisation. */
    puxTopOfStackArg -= 5;  /* R12, R3, R2 and R1. */
    *puxTopOfStackArg =(OS_UBase_t) pvParametersArg;   /* R0 */

    /* A save method is being used that requires each task to maintain its
    own exec return value. */
    puxTopOfStackArg -= 1UL;
    *puxTopOfStackArg = OS_KERNEL_EXEC_RETURN;

    puxTopOfStackArg -= 8;  /* R11, R10, R9, R8, R7, R6, R5 and R4. */

    return (puxTopOfStackArg);
}

static void OS_Adapt__vErrorTask(void)
{
    OS_Adapt__vDisableInterrupts();
    while(1UL);
}
