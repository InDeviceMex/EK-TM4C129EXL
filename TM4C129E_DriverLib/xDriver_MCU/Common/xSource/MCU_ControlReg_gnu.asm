


 	.sect 	".text"
 	.align 	4
	.thumb
	.syntax unified

 	.align 	4
	.global MCU__vSetFPUContextActive
 	.type MCU__vSetFPUContextActive, %function
    .thumb_func
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

 	.align 	4
    .thumb_func
	.global MCU__enSetFPUContextActive
 	.type MCU__enSetFPUContextActive, %function
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

 	.align 	4
    .thumb_func
	.global MCU__enGetFPUContextActive
 	.type MCU__enGetFPUContextActive, %function
MCU__enGetFPUContextActive:
	push    {r1,r2}
	mrs     r1, CONTROL
	ubfx    r0, r1, #2, #1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enSetStackActive
 	.type MCU__enSetStackActive, %function
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

 	.align 	4
    .thumb_func
	.global MCU__enGetStackActive
 	.type MCU__enGetStackActive, %function
MCU__enGetStackActive:
	push    {r1,r2}
    mrs     r1, CONTROL
    ubfx    r0, r1, #1, #1
	pop     {r1,r2}
    bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vSetPSPValue
 	.type MCU__vSetPSPValue, %function
MCU__vSetPSPValue:
	msr PSP, r0
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxGetPSPValue
 	.type MCU__uxGetPSPValue, %function
MCU__uxGetPSPValue:
	mrs     r0, PSP
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vSetMSPValue
 	.type MCU__vSetMSPValue, %function
MCU__vSetMSPValue:
	msr     MSP, r0
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__uxGetMSPValue
 	.type MCU__uxGetMSPValue, %function
MCU__uxGetMSPValue:
	mrs     r0, MSP
    bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enSetThreadLevel
 	.type MCU__enSetThreadLevel, %function
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

 	.align 	4
    .thumb_func
	.global MCU__enGetThreadLevel
 	.type MCU__enGetThreadLevel, %function
MCU__enGetThreadLevel:
	push    {r1,r2}
	mrs     r1, CONTROL
	ubfx    r0, r1, #0, #1
	pop     {r1,r2}
	bx      lr



