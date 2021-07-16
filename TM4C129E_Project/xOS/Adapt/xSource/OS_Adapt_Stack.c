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

static void OS_Adapt__vErrorTask(void);

uint32_t *OS_Adapt__p32InitialiseStack( uint32_t* pu32TopOfStack, void (*pfvThread)( void * pvParameters ), void *pvParameters )
{
    /* Simulate the stack frame as it would be created by a context switch
    interrupt. */

    /* Offset added to account for the way the MCU uses the stack on entry/exit
    of interrupts, and to ensure alignment. */
    pu32TopOfStack -= 1UL;

    *pu32TopOfStack = OS_KERNEL_INITIAL_XPSR;   /* xPSR */
    pu32TopOfStack-= 1UL;
    *pu32TopOfStack = (uint32_t)  pfvThread; /* PC */
    pu32TopOfStack-= 1UL;
    *pu32TopOfStack = (uint32_t) &OS_Adapt__vErrorTask;    /* LR */

    /* Save code space by skipping register initialisation. */
    pu32TopOfStack -= 5;  /* R12, R3, R2 and R1. */
    *pu32TopOfStack = ( uint32_t ) pvParameters;   /* R0 */

    /* A save method is being used that requires each task to maintain its
    own exec return value. */
    pu32TopOfStack-= 1UL;
    *pu32TopOfStack = OS_KERNEL_EXEC_RETURN;

    pu32TopOfStack -= 8;  /* R11, R10, R9, R8, R7, R6, R5 and R4. */

    return pu32TopOfStack;
}



static void OS_Adapt__vErrorTask(void)
{
    OS_ADAPT_DISABLE_INTERRUPTS();
    while(1UL);
}


