
 	.sect 	".text"
 	.align 	4
	.thumb
	.syntax unified

 	.align 	4
    .thumb_func
	.global MCU__uxGetCounLeadingZeros
 	.type MCU__uxGetCounLeadingZeros, %function
MCU__uxGetCounLeadingZeros:
	clz     r0, r0
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__u8ReverseByte
 	.type MCU__u8ReverseByte, %function
MCU__u8ReverseByte:
	push    {r1,r2}
	rbit    r1, r0
	lsr     r0, r1, #24
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__u16ReverseHalfWorld
 	.type MCU__u16ReverseHalfWorld, %function
MCU__u16ReverseHalfWorld:
	push    {r1,r2}
	rbit    r1, r0
	lsr     r0, r1, #16
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxReverseWorld
 	.type MCU__uxReverseWorld, %function
MCU__uxReverseWorld:
	rbit     r0, r0
	bx      lr



