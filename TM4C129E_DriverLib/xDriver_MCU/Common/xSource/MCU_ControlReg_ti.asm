
 	.sect 	".text"
 	.align 	4
	.thumb
	.clink

	.global MCU__vSetFPUContextActive
	.global MCU__enSetFPUContextActive
	.global MCU__enGetFPUContextActive

	.global MCU__enSetStackActive
	.global MCU__enGetStackActive

	.global MCU__vSetPSPValue
	.global MCU__uxGetPSPValue

	.global MCU__vSetMSPValue
	.global MCU__uxGetMSPValue

	.global MCU__enSetThreadLevel
	.global MCU__enGetThreadLevel

MCU__vSetFPUContextActive:
	push    {r1,r2}
	mrs     r1, CONTROL
	ubfx    r2, r1, #2, #1
	bfi     r1, r0, #2, #1
	msr     CONTROL, r1
	dsb
	isb
	pop     {r1,r2}
	bx      lr

MCU__enSetFPUContextActive:
	push    {r1,r2}
	mrs     r1, CONTROL
	ubfx    r2, r1, #2, #1
	bfi     r1, r0, #2, #1
	msr     CONTROL, r1
	dsb
	isb
	mov     r0, r2
	pop     {r1,r2}
	bx      lr

MCU__enGetFPUContextActive:
	push    {r1,r2}
	mrs     r1, CONTROL
	ubfx    r0, r1, #2, #1
	pop     {r1,r2}
	bx      lr

MCU__enSetStackActive:
	push    {r1,r2}
    mrs     r1, CONTROL
    ubfx    r2, r1, #1, #1
    bfi     r1, r0, #1, #1
    msr     CONTROL, r1
    dsb
    isb
    mov     r0, r2
	pop     {r1,r2}
    bx      lr

MCU__enGetStackActive:
	push    {r1,r2}
    mrs     r1, CONTROL
    ubfx    r0, r1, #1, #1
	pop     {r1,r2}
    bx      lr

MCU__vSetPSPValue:
	msr PSP, r0
	dsb
	isb
	bx      lr

MCU__uxGetPSPValue:
	mrs     r0, PSP
	bx      lr

MCU__vSetMSPValue:
	msr     MSP, r0
	dsb
	isb
	bx      lr

MCU__uxGetMSPValue:
	mrs     r0, MSP
    bx      lr

MCU__enSetThreadLevel:
	push    {r1,r2}
	mrs     r1, CONTROL
  	ubfx    r2, r1, #0, #1
  	bfi     r1, r0, #0, #1
  	msr     CONTROL, r1
  	dsb
  	isb
  	mov     r0, r2
	pop     {r1,r2}
  	bx      lr

MCU__enGetThreadLevel:
	push    {r1,r2}
	mrs     r1, CONTROL
	ubfx    r0, r1, #0, #1
	pop     {r1,r2}
	bx      lr



