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
 * @verbatim 16 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Adapt/xHeader/OS_Adapt_Stack.h>

#include <xOS/Adapt/xHeader/OS_Adapt_Interrupt.h>

static void OS_Adapt__vErrorTask(void);

uint32_t *OS_Adapt__p32InitialiseStack( uint32_t* pu32TopOfStackArg, void (*pfvThreadArg)( void * pvParameters ), void *pvParametersArg )
{
    /* Simulate the stack frame as it would be created by a context switch
    interrupt. */

    /* Offset added to account for the way the MCU uses the stack on entry/exit
    of interrupts, and to ensure alignment. */
    pu32TopOfStackArg -= 1UL;

    *pu32TopOfStackArg = OS_KERNEL_INITIAL_XPSR;   /* xPSR */
    pu32TopOfStackArg-= 1UL;
    *pu32TopOfStackArg = (uint32_t)  pfvThreadArg; /* PC */
    pu32TopOfStackArg-= 1UL;
    *pu32TopOfStackArg = (uint32_t) &OS_Adapt__vErrorTask;    /* LR */

    /* Save code space by skipping register initialisation. */
    pu32TopOfStackArg -= 5;  /* R12, R3, R2 and R1. */
    *pu32TopOfStackArg =(uint32_t) pvParametersArg;   /* R0 */

    /* A save method is being used that requires each task to maintain its
    own exec return value. */
    pu32TopOfStackArg -= 1UL;
    *pu32TopOfStackArg = OS_KERNEL_EXEC_RETURN;

    pu32TopOfStackArg -= 8;  /* R11, R10, R9, R8, R7, R6, R5 and R4. */

    return (pu32TopOfStackArg);
}



static void OS_Adapt__vErrorTask(void)
{
    OS_Adapt__vDisableInterrupts();
    while(1UL);
}


