
 	.sect 	".text"
 	.align 	4
	.thumb
	.clink

	.global OS_Adapt_vStartFirstTask
	.global OS_Adapt_vSVCHandler
	.global OS_Adapt_vPendSVHandler

	.global OS_Adapt_ppstCurrentTCB

 	.align 	4
OS_Adapt_vStartFirstTask:
    movw r0, #0xED08
    movt r0, #0xE000
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
OS_Adapt_vSVCHandler:
    movw r3, OS_Adapt_ppstCurrentTCB
    movt r3, OS_Adapt_ppstCurrentTCB
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
OS_Adapt_vPendSVHandler:
    mrs r0, psp
    isb
    movw r3, OS_Adapt_ppstCurrentTCB
    movt r3, OS_Adapt_ppstCurrentTCB
    ldr r1, [r3]
    ldr r2, [r1]
    tst r14, #0x10
    it eq
    vstmdbeq r0!, {s16-s31}
    stmdb r0!, {r4-r11, r14}
    str r0, [r2]
    stmdb sp!, {r3}
	.global OS_Adapt_uxMaxSyscallInterruptPriority
    movw r0, OS_Adapt_uxMaxSyscallInterruptPriority
    movt r0, OS_Adapt_uxMaxSyscallInterruptPriority
    ldr r1, [r0]
    msr basepri, r1
    dsb
    isb
    .global     OS_Task__vSwitchContext
    movw r0, OS_Task__vSwitchContext
    movt r0, OS_Task__vSwitchContext
    blx r0
    mov r0, #0
    msr basepri, r0
    ldmia sp!, {r3}
    ldr r2, [r3]
    ldr r1, [r2]
    ldr r0, [r1]
    ldmia r0!, {r4-r11, r14}
    tst r14, #0x10
    it eq
    vldmiaeq r0!, {s16-s31}
    msr psp, r0
    isb
    bx r14
