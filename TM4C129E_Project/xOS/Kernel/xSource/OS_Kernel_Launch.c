/**
 *
 * @file OS_Kernel_Launch.c
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xOS/Kernel/xHeader/OS_Kernel_Launch.h>
#include <xOS/Kernel/xHeader/OS_Kernel_Threads.h>
#include <xOS/TCB/OS_TCB.h>
#include <xApplication_MCU/Core/SYSTICK/SYSTICK.h>
#include <xApplication_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/Common/MCU_Common.h>

static void OS_Kernel_vPendSVHandler( void ) __attribute__ (( naked ));
static void OS_Kernel_vSVCHandler( void ) __attribute__ (( naked ));
static void OS_Kernel_vSysTickHandler( void );
static void OS_Kernel_vStartFirstTask(void);
void vTaskSwitchContext(void);

OS_TCB_Item_TypeDef* OS_Kernel_psCurrentTask = (OS_TCB_Item_TypeDef*) 0UL;
uint32_t OS_Kernel_u32Tick = 0UL;

void OS_Kernel__vLaunch(uint32_t u32Ticks)
{
    SYSTICK__enInitTickVector(u32Ticks, SYSTICK_enPRI7, SYSTICK_enSYSCLK, &OS_Kernel_vSysTickHandler);
}

void OS_Kernel__vLaunchMs(uint32_t u32Ms)
{
    uint32_t u32Us = u32Ms * 1000UL;

    MCU__enDisGlobalInterrupt();
    SCB_PendSV__vSetPriority(SCB_enSHPR7);
    SCB__vRegisterIRQVectorHandler(&OS_Kernel_vPendSVHandler, (void (**) (void)) 0UL, SCB_enVECISR_PENDSV);
    SCB__vRegisterIRQVectorHandler(&OS_Kernel_vSVCHandler, (void (**) (void)) 0UL, SCB_enVECISR_SVCALL);
    OS_Kernel_psCurrentTask = OS_Kernel__u32GetCurrentTask();
    SYSTICK__enInitUsVector(u32Us, SYSTICK_enPRI7, &OS_Kernel_vSysTickHandler);
    OS_Kernel_vStartFirstTask();
}

void vTaskSwitchContext(void)
{
    OS_Kernel_psCurrentTask = OS_Kernel_psCurrentTask->pstNextItem;
}

static void OS_Kernel_vStartFirstTask(void)
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

__attribute__ (( naked )) static void OS_Kernel_vSVCHandler(void)
{
{__asm volatile (
#if defined (__TI_ARM__ )
                "   movw r3, OS_Kernel_psCurrentTask     \n"/* Get the location of the current TCB. */
                "   movt r3, OS_Kernel_psCurrentTask     \n"
#elif defined (__GNUC__ )
                " ldr r3, = OS_Kernel_psCurrentTask      \n"
#endif
                "   ldr r2, [r3]                    \n" /* Use pxCurrentTCBConst to get the pxCurrentTCB address. */
                "   ldr r1, [r2]                    \n" /* The first item in OS_Kernel_psCurrentTask is the task top of stack. */
                "   ldr r0, [r1]                    \n" /* The first item in OS_Kernel_psCurrentTask is the task top of stack. */
                "   ldmia r0!, {r4-r11, r14}        \n" /* Pop the registers that are not automatically saved on exception entry and the critical nesting count. */
                "   msr psp, r0                     \n" /* Restore the task stack pointer. */
                "   isb                             \n"
                "   mov r0, #0                      \n"
                "   msr basepri, r0                 \n"
                "   bx r14                          \n"
            );}
}

__attribute__ (( naked )) static void OS_Kernel_vPendSVHandler (void)
{
    /* This is a naked function. */

    { __asm volatile
    (
    "   mrs r0, psp                         \n"
    "   isb                                 \n"
    "                                       \n"
#if defined (__TI_ARM__ )
    "   movw r3, OS_Kernel_psCurrentTask         \n"/* Get the location of the current TCB. */
    "   movt r3, OS_Kernel_psCurrentTask         \n"
#elif defined (__GNUC__ )
    "   ldr r3, = OS_Kernel_psCurrentTask        \n"
#endif
    "   ldr r1, [r3]                        \n"
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
    "   mov r0, #5                          \n"
    "   msr basepri, r0                     \n"
    "   dsb                                 \n"
    "   isb                                 \n");}
    vTaskSwitchContext();
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

static void OS_Kernel_vSysTickHandler(void)
{
    MCU__enSetBasePriorityInterrupt(MCU_enPRI5);
    OS_Kernel_u32Tick++;
    SCB_PendSV__vSetPending();
    MCU__enSetBasePriorityInterrupt(MCU_enPRI0);
}



