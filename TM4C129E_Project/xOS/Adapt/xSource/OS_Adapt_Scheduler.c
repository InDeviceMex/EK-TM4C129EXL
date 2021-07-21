/**
 *
 * @file OS_Adapt_Scheduler.c
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
#include <xOS/Adapt/xHeader/OS_Adapt_Scheduler.h>

#include <xApplication_MCU/Core/SCB/SCB.h>
#include <xApplication_MCU/Core/SYSTICK/SYSTICK.h>
#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/Core/FPU/FPU.h>
#include <xOS/Task/xHeader/OS_Task_Scheduler.h>
#include <xOS/Task/Intrinsics/xHeader/OS_Task_TCB.h>
#include <xOS/Task/xHeader/OS_Task_TCB.h>



static void OS_Adapt_vSetupTimerInterrupt( uint32_t u32UsPeriod );
static void OS_Adapt_vStartFirstTask(void);
static void OS_Adapt_vSysTickHandler( void );
__attribute__ (( naked )) static void OS_Adapt_vSVCHandler(void);
__attribute__ (( naked )) static void OS_Adapt_vPendSVHandler(void);

OS_TASK_TCB *volatile *  OS_Adapt_ppstCurrentTCB = (OS_TASK_TCB**) 0UL;
const uint32_t OS_Adapt_u32MaxSyscallInterruptPriority = OS_ADAPT_MAX_SYSCALL_INTERRUPT_PRIORITY;

static void OS_Adapt_vSetupTimerInterrupt( uint32_t u32UsPeriod )
{    /* Configure SysTick to interrupt at the requested rate. */
    SYSTICK__enInitUsVector(u32UsPeriod, SYSTICK_enPRI7, &OS_Adapt_vSysTickHandler);
}

uint32_t OS_Adapt__u32StartScheduler( uint32_t u32UsPeriod )
{

    SCB__vRegisterIRQVectorHandler(&OS_Adapt_vPendSVHandler, (void (**) (void)) 0UL, SCB_enVECISR_PENDSV);
    SCB__vRegisterIRQVectorHandler(&OS_Adapt_vSVCHandler, (void (**) (void)) 0UL, SCB_enVECISR_SVCALL);
    /* Make PendSV and SysTick the lowest priority interrupts. */
    SCB_PendSV__vSetPriority(SCB_enSHPR7);
    SCB_SYSTICK__vSetPriority(SCB_enSHPR7);

    /* Start the timer that generates the tick ISR.  Interrupts are disabled
    here already. */
    OS_Adapt_vSetupTimerInterrupt(u32UsPeriod);

    /* Initialise the critical nesting count ready for the first task. */
    OS_Adapt__vSetCriticalNesting(0UL);

    /* Ensure the VFP is enabled - it should be anyway. */
    FPU__vInit();
    OS_Adapt_ppstCurrentTCB = OS_Task__pstGetCurrentTCBAddress();
    /* Start the first task. */
    OS_Adapt_vStartFirstTask();

    /* Should not get here! */
    return 0UL;
}


static void OS_Adapt_vStartFirstTask(void)
{
    { __asm volatile(
#if defined (__TI_ARM__ )
                    " movw r0, #0xED08      \n"/* Use the NVIC offset register to locate the stack. */
                    " movt r0, #0xE000      \n"
#elif defined (__GNUC__ )
                    " ldr r0, = 0xE000ED08 \n"
#endif
                    " ldr r0, [r0]          \n"
                    " ldr r0, [r0]          \n"
                    " msr msp, r0           \n" /* Set the msp back to the start of the stack. */
                    " cpsie i               \n" /* Globally enable interrupts. */
                    " cpsie f               \n"
                    " dsb                   \n"
                    " isb                   \n"
                    " svc #0                \n" /* System call to start first task. */
                    " nop                   \n"
                );}
}

__attribute__ (( naked )) static void OS_Adapt_vSVCHandler(void)
{
{__asm volatile (
#if defined (__TI_ARM__ )
                "   movw r3, OS_Adapt_ppstCurrentTCB     \n"/* Get the location of the current TCB. */
                "   movt r3, OS_Adapt_ppstCurrentTCB     \n"
#elif defined (__GNUC__ )
                " ldr r3, = OS_Adapt_ppstCurrentTCB      \n"
#endif
                "   ldr r1, [r3]                    \n" /* Use pxCurrentTCBConst to get the pxCurrentTCB address. */
                "   ldr r2, [r1]                    \n" /* Use pxCurrentTCBConst to get the pxCurrentTCB address. */
                "   ldr r0, [r2]                    \n" /* The first item in OS_Kernel_psCurrentTask is the task top of stack. */
                "   ldmia r0!, {r4-r11, r14}        \n" /* Pop the registers that are not automatically saved on exception entry and the critical nesting count. */
                "   msr psp, r0                     \n" /* Restore the task stack pointer. */
                "   isb                             \n"
                "   mov r0, #0                      \n"
                "   msr basepri, r0                 \n"
                "   bx r14                          \n"
            );}
}

__attribute__ (( naked )) static void OS_Adapt_vPendSVHandler (void)
{
    /* This is a naked function. */

    { __asm volatile
    (
    "   mrs r0, psp                         \n"
    "   isb                                 \n"
    "                                       \n"
#if defined (__TI_ARM__ )
    "   movw r3, OS_Adapt_ppstCurrentTCB         \n"/* Get the location of the current TCB. */
    "   movt r3, OS_Adapt_ppstCurrentTCB         \n"
#elif defined (__GNUC__ )
    "   ldr r3, = OS_Adapt_ppstCurrentTCB        \n"
#endif
    "   ldr r1, [r3]                    \n" /* Use pxCurrentTCBConst to get the pxCurrentTCB address. */
    "   ldr r2, [r1]                        \n"
    "                                       \n"
    "   tst r14, #0x10                      \n" /* Is the task using the FPU context?  If so, push high vfp registers. */
    "   it eq                               \n"
    "   vstmdbeq r0!, {s16-s31}             \n"
    "                                       \n"
    "   stmdb r0!, {r4-r11, r14}            \n" /* Save the core registers. */
    "                                       \n"
    "   str r0, [r2]                        \n" /* Save the new top of stack into the first member of the TCB. */
    "                                       \n"
    "   stmdb sp!, {r3}                     \n"
#if defined (__TI_ARM__ )
    "   movw r0, OS_Adapt_u32MaxSyscallInterruptPriority         \n"/* Get the location of the current TCB. */
    "   movt r0, OS_Adapt_u32MaxSyscallInterruptPriority         \n"
#elif defined (__GNUC__ )
    "   ldr r0, = OS_Adapt_u32MaxSyscallInterruptPriority        \n"
#endif
    "   ldr r1, [r0]                          \n"
    "   msr basepri, r1                     \n"
    "   dsb                                 \n"
    "   isb                                 \n");}

    OS_Task__vSwitchContext();

    { __asm volatile
    (
    "   mov r0, #0                          \n"
    "   msr basepri, r0                     \n"
    "   ldmia sp!, {r3}                     \n"
    "                                       \n"
    "   ldr r2, [r3]                        \n" /* The first item in pxCurrentTCB is the task top of stack. */
    "   ldr r1, [r2]                        \n"
    "   ldr r0, [r1]                        \n"
    "                                       \n"
    "   ldmia r0!, {r4-r11, r14}            \n" /* Pop the core registers. */
    "                                       \n"
    "   tst r14, #0x10                      \n" /* Is the task using the FPU context?  If so, pop the high vfp registers too. */
    "   it eq                               \n"
    "   vldmiaeq r0!, {s16-s31}             \n"
    "                                       \n"
    "   msr psp, r0                         \n"
    "   isb                                 \n"
    "                                       \n"
    "                                       \n"
    "   bx r14                              \n"
    "                                       \n"
    );}
}


static void OS_Adapt_vSysTickHandler( void )
{
    uint32_t u32Status = 0UL;
    /* The SysTick runs at the lowest interrupt priority, so when this interrupt
    executes all interrupts must be unmasked.  There is therefore no need to
    save and then restore the interrupt mask value as its value is already
    known. */
    ( void ) OS_Adapt__u32SetInterruptMaskFromISR();
    {
        /* Increment the RTOS tick. */
        u32Status = OS_Task__u32TaskIncrementTick();
        if(0UL !=  u32Status)
        {
            /* A context switch is required.  Context switching is performed in
            the PendSV interrupt.  Pend the PendSV interrupt. */
            SCB_PendSV__vSetPending();
        }
    }
    OS_Adapt__vClearInterruptMaskFromISR(0UL);
}

void OS_Adapt__vEndScheduler(void)
{
    uint32_t u32CriticalNestingReg = 0UL;
    /* Not implemented in ports where there is nothing to return to.
    Artificially force an assert. */
    u32CriticalNestingReg = OS_Adapt__u32GetCriticalNesting();
    if(1000UL != u32CriticalNestingReg)
    {
        OS_Adapt__vDisableInterrupts();
        while(1UL);
    }
}

