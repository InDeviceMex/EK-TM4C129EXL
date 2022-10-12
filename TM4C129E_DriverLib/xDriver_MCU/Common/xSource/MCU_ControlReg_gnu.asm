
 	.sect 	".text"
 	.align 	4
	.thumb
	.syntax unified

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

    .thumb_func
MCU__vSetFPUContextActive:
	mrs     r1, CONTROL
	ubfx    r2, r1, #2, #1
	bfi     r1, r0, #2, #1
	msr     CONTROL, r1
	dsb
	isb
	bx      lr

    .thumb_func
MCU__enSetFPUContextActive:
	mrs     r1, CONTROL
	ubfx    r2, r1, #2, #1
	bfi     r1, r0, #2, #1
	msr     CONTROL, r1
	dsb
	isb
	mov     r0, r2
	bx      lr

    .thumb_func
MCU__enGetFPUContextActive:
	mrs     r1, CONTROL
	ubfx    r0, r1, #2, #1
	bx      lr

    .thumb_func
MCU__enSetStackActive:
    mrs     r1, CONTROL
    ubfx    r2, r1, #1, #1
    bfi     r1, r0, #1, #1
    msr     CONTROL, r1
    dsb
    isb
    mov     r0, r2
    bx      lr

    .thumb_func
MCU__enGetStackActive:
    mrs     r1, CONTROL
    ubfx    r0, r1, #1, #1
    bx      lr

    .thumb_func
MCU__vSetPSPValue:
	msr PSP, r0
	dsb
	isb
	bx      lr

    .thumb_func
MCU__uxGetPSPValue:
	mrs     r0, PSP
	bx      lr

    .thumb_func
MCU__vSetMSPValue:
	msr     MSP, r0
	dsb
	isb
	bx      lr

    .thumb_func
MCU__uxGetMSPValue:
	mrs     r0, MSP
    bx      lr

    .thumb_func
MCU__enSetThreadLevel:
	mrs     r1, CONTROL
  	ubfx    r2, r1, #0, #1
  	bfi     r1, r0, #0, #1
  	msr     CONTROL, r1
  	dsb
  	isb
  	mov     r0, r2
  	bx      lr

    .thumb_func
MCU__enGetThreadLevel:
	mrs     r1, CONTROL
	ubfx    r0, r1, #0, #1
	bx      lr



