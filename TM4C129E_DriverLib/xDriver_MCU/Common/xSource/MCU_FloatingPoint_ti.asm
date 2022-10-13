
 	.sect 	".text"
 	.align 	4
	.thumb
	.clink

	.global MCU__uxSetFPUStatusControl
	.global MCU__vSetFPUStatusControl
	.global MCU__uxGetFPUStatusControl
	.global MCU__uxSetFPUStatusControlMask
	.global MCU__uxClearFPUStatusControlMask
	.global MCU__vSetFPUStatusControlMask
	.global MCU__vClearFPUStatusControlMask
	.global MCU__uxGetFPUStatusControlMask
	.global MCU__uxSetFPUStatusControlBit
	.global MCU__uxClearFPUStatusControlBit
	.global MCU__vSetFPUStatusControlBit
	.global MCU__vClearFPUStatusControlBit
	.global MCU__uxGetFPUStatusControlBit

 	.align 	4
MCU__uxSetFPUStatusControl:
	push    {r1,r2}
	vmrs    r1, FPSCR
	vmsr    FPSCR, r0
	mov     r0, r1
	pop     {r1,r2}
	bx      lr


 	.align 	4
MCU__vSetFPUStatusControl:
	vmsr    FPSCR, r0
	bx      lr

 	.align 	4
MCU__uxGetFPUStatusControl:
	vmrs    r0, FPSCR
	bx      lr


 	.align 	4
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
MCU__vSetFPUStatusControlMask:
	push    {r1,r2}
	vmrs    r1, FPSCR
	orr     r1, r0
	vmsr    FPSCR, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
MCU__vClearFPUStatusControlMask:
	push    {r1,r2}
	vmrs    r1, FPSCR
	bic     r1, r0
	vmsr    FPSCR, r1
	pop     {r1,r2}
	bx      lr


 	.align 	4
MCU__uxGetFPUStatusControlMask:
	push    {r1,r2}
	vmrs    r1, FPSCR
	and     r1, r0
	mov     r0, r1
	pop     {r1,r2}
	bx      lr


 	.align 	4
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
MCU__uxGetFPUStatusControlBit:
	vmrs    r1, FPSCR
	lsr     r1, r0
	mov     r0, r1
	bx      lr
