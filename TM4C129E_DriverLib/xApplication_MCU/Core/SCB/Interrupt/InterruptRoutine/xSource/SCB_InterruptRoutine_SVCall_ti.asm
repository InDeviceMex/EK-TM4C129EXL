
 	.sect 	".text"
 	.align 	4
	.thumb
	.clink

	.global SVCall__vIRQVectorHandler

 	.align 	4
SVCall__vIRQVectorHandler:
    push 	{R0,R1,R2,LR}
    ubfx	r0, LR, #2, #1
    cmp		r0, #0
    beq		MainStack
    b		ProcessStack

MainStack:
    mrs		r0, MSP
    ldr		r1, [r0,#0x28]
    b		Process

ProcessStack:
    mrs		r0, PSP
    ldr		r1, [r0,#0x18]

Process:
    sub		r1, #2
    ldrb	r0, [r1]
    and		r0, #0xFF
    mov 	R1, R0
    .global SVCall_uxFunction
    .global SCB_SVCall__pvfGetIRQSourceHandler
    movw 	R0, #0X0
    movt 	R0, #0x0
    movw 	R2, SCB_SVCall__pvfGetIRQSourceHandler
    movt 	R2, SCB_SVCall__pvfGetIRQSourceHandler
    blx 	R2
    mov 	R2, R0
    movw 	R0, #0xE000
    movt 	R0, #0xE000
    blx 	R2
    pop 	{R0,R1,R2,LR}
    BX 		LR

