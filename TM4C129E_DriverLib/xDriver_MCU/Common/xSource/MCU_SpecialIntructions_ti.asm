
 	.sect 	".text"
 	.align 	4
	.thumb
	.clink

	.global MCU__uxGetCounLeadingZeros
	.global MCU__u8ReverseByte
	.global MCU__u16ReverseHalfWorld
	.global MCU__uxReverseWorld


 	.align 	4
MCU__uxGetCounLeadingZeros:
	clz     r0, r0
	bx      lr

MCU__u8ReverseByte:
	push    {r1,r2}
	rbit    r1, r0
	lsr     r0, r1, #24
	pop     {r1,r2}
	bx      lr

MCU__u16ReverseHalfWorld:
	push    {r1,r2}
	rbit    r1, r0
	lsr     r0, r1, #16
	pop     {r1,r2}
	bx      lr

MCU__uxReverseWorld:
	rbit     r0, r0
	bx      lr
