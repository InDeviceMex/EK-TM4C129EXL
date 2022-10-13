
 	.sect 	".text"
 	.align 	4
	.thumb
	.syntax unified


 	.align 	4
    .thumb_func
	.global MCU__uxSetFPUStatusControl
 	.type MCU__uxSetFPUStatusControl, %function
MCU__uxSetFPUStatusControl:
	push    {r1,r2}
	vmrs    r1, FPSCR
	vmsr    FPSCR, r0
	mov     r0, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vSetFPUStatusControl
 	.type MCU__vSetFPUStatusControl, %function
MCU__vSetFPUStatusControl:
	vmsr    FPSCR, r0
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxGetFPUStatusControl
 	.type MCU__uxGetFPUStatusControl, %function
MCU__uxGetFPUStatusControl:
	vmrs    r0, FPSCR
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxSetFPUStatusControlMask
 	.type MCU__uxSetFPUStatusControlMask, %function
MCU__uxSetFPUStatusControlMask:
	push    {r1,r2}
	vmrs    r1, FPSCR
	mov     r2, r1
	orr     r1, r0
	vmsr    FPSCR, r1
	mov     r0, r2
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxClearFPUStatusControlMask
 	.type MCU__uxClearFPUStatusControlMask, %function
MCU__uxClearFPUStatusControlMask:
	push    {r1,r2}
	vmrs    r1, FPSCR
	mov     r2, r1
	bic     r1, r0
	vmsr    FPSCR, r1
	mov     r0, r2
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vSetFPUStatusControlMask
 	.type MCU__vSetFPUStatusControlMask, %function
MCU__vSetFPUStatusControlMask:
	push    {r1,r2}
	vmrs    r1, FPSCR
	orr     r1, r0
	vmsr    FPSCR, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vClearFPUStatusControlMask
 	.type MCU__vClearFPUStatusControlMask, %function
MCU__vClearFPUStatusControlMask:
	push    {r1,r2}
	vmrs    r1, FPSCR
	bic     r1, r0
	vmsr    FPSCR, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxGetFPUStatusControlMask
 	.type MCU__uxGetFPUStatusControlMask, %function
MCU__uxGetFPUStatusControlMask:
	push    {r1,r2}
	vmrs    r1, FPSCR
	and     r1, r0
	mov     r0, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxSetFPUStatusControlBit
 	.type MCU__uxSetFPUStatusControlBit, %function
MCU__uxSetFPUStatusControlBit:
	push    {r1-r4}
	vmrs    r1, FPSCR
	mov     r2, r1
	lsr     r2, r0
	and     r2, #1
	mov     r3, #1
	lsl     r3, r0
	orr     r1, r3
	vmsr    FPSCR, r1
	mov     r0, r2
	pop     {r1-r4}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxClearFPUStatusControlBit
 	.type MCU__uxClearFPUStatusControlBit, %function
MCU__uxClearFPUStatusControlBit:
	push    {r1-r4}
	vmrs    r1, FPSCR
	mov     r2, r1
	lsr     r2, r0
	and     r2, #1
	mov     r3, #1
	lsl     r3, r0
	bic     r1, r3
	vmsr    FPSCR, r1
	mov     r0, r2
	pop     {r1-r4}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vSetFPUStatusControlBit
 	.type MCU__vSetFPUStatusControlBit, %function
MCU__vSetFPUStatusControlBit:
	push    {r1,r2}
	vmrs    r1, FPSCR
	mov     r2, #1
	lsl     r2, r0
	orr     r1, r2
	vmsr    FPSCR, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vClearFPUStatusControlBit
 	.type MCU__vClearFPUStatusControlBit, %function
MCU__vClearFPUStatusControlBit:
	push    {r1,r2}
	vmrs    r1, FPSCR
	mov     r2, #1
	lsl     r2, r0
	bic     r1, r2
	vmsr    FPSCR, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxGetFPUStatusControlBit
 	.type MCU__uxGetFPUStatusControlBit, %function
MCU__uxGetFPUStatusControlBit:
	vmrs    r1, FPSCR
	lsr     r1, r0
	mov     r0, r1
	bx      lr


