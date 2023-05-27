
 	.align 	4
	.thumb
	.syntax unified

 	.align 	4
    .thumb_func
	.global OS_Adapt_vStartFirstTask
 	.type OS_Adapt_vStartFirstTask, %function
OS_Adapt_vStartFirstTask:
    ldr r0, = 0xE000ED08
    ldr r0, [r0]
    ldr r0, [r0]
    msr msp, r0
    cpsie i
    cpsie f
    dsb
    isb
    svc #0
    nop
    bx r14

 	.align 	4
    .thumb_func
	.global OS_Adapt_vSVCHandler
 	.type OS_Adapt_vSVCHandler, %function
OS_Adapt_vSVCHandler:
    ldr r3, = OS_Adapt_ppstCurrentTCB
    ldr r1, [r3]
    ldr r2, [r1]
    ldr r0, [r2]
    ldmia r0!, {r4-r11, r14}
    msr psp, r0
    isb
    mov r0, #0
    msr basepri, r0
    bx r14


 	.align 	4
    .thumb_func
	.global OS_Adapt_vPendSVHandler
 	.type OS_Adapt_vPendSVHandler, %function
OS_Adapt_vPendSVHandler:
    mrs r0, psp
    isb
    ldr r3, = OS_Adapt_ppstCurrentTCB
    ldr r1, [r3] /* Use pxCurrentTCBConst to get the pxCurrentTCB address. */
    ldr r2, [r1]
    tst r14, #0x10 /* Is the task using the FPU context?  If so, push high vfp registers. */
    it eq
    vstmdbeq r0!, {s16-s31}
    stmdb r0!, {r4-r11, r14} /* Save the core registers. */
    str r0, [r2] /* Save the new top of stack into the first member of the TCB. */
    stmdb sp!, {r3}
	.global OS_Adapt_uxMaxSyscallInterruptPriority
    ldr r0, = OS_Adapt_uxMaxSyscallInterruptPriority
    ldr r1, [r0]
    msr basepri, r1
    dsb
    isb
    .global     OS_Task__vSwitchContext
    ldr r0, = OS_Task__vSwitchContext
    blx r0
    mov r0, #0
    msr basepri, r0
    ldmia sp!, {r3}
    ldr r2, [r3] /* The first item in pxCurrentTCB is the task top of stack. */
    ldr r1, [r2]
    ldr r0, [r1]
    ldmia r0!, {r4-r11, r14} /* Pop the core registers. */
    tst r14, #0x10 /* Is the task using the FPU context?  If so, pop the high vfp registers too. */
    it eq
    vldmiaeq r0!, {s16-s31}
    msr psp, r0
    isb
    bx r14
