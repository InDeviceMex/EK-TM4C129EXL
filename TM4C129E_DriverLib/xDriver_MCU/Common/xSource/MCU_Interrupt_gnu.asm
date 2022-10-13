

 	.sect 	".text"
	.thumb
	.syntax unified

 	.align 	4
    .thumb_func
	.global MCU__enDisableGlobalInterrupt
 	.type MCU__enDisableGlobalInterrupt, %function
MCU__enDisableGlobalInterrupt:
	mrs     r0, PRIMASK
	cpsid   i
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enEnableGlobalInterrupt
 	.type MCU__enEnableGlobalInterrupt, %function
MCU__enEnableGlobalInterrupt:
	mrs     r0, PRIMASK
	cpsie   i
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vSetGlobalInterrupt
 	.type MCU__vSetGlobalInterrupt, %function
MCU__vSetGlobalInterrupt:
	msr     PRIMASK, r0
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enSetGlobalInterrupt
 	.type MCU__enSetGlobalInterrupt, %function
MCU__enSetGlobalInterrupt:
	push    {r1,r2}
	mrs     r1, PRIMASK
	msr     PRIMASK, r0
	dsb
	isb
	mov     r0, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enGetGlobalInterrupt
 	.type MCU__enGetGlobalInterrupt, %function
MCU__enGetGlobalInterrupt:
	mrs     r0, PRIMASK
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vSetBasePriorityInterrupt
 	.type MCU__vSetBasePriorityInterrupt, %function
MCU__vSetBasePriorityInterrupt:
	push    {r1,r2}
	and     r1, r0, #0x7
	lsl     r1, #0x5
	msr     BASEPRI, r1
	dsb
	isb
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enSetBasePriorityInterrupt
 	.type MCU__enSetBasePriorityInterrupt, %function
MCU__enSetBasePriorityInterrupt:
	push    {r1,r2}
	and     r1, r0, #0x7
	lsl     r1, #0x5
	mrs     r2, BASEPRI
	ubfx    r0, r2, #5, #3
	msr     BASEPRI, r1
	dsb
	isb
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enGetBasePriorityInterrupt
 	.type MCU__enGetBasePriorityInterrupt, %function
MCU__enGetBasePriorityInterrupt:
	push    {r1,r2}
	mrs     r1, BASEPRI
	lsr     r0, r1, #0x5
	and     r0, #0x7
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enDisableGlobalFault
 	.type MCU__enDisableGlobalFault, %function
MCU__enDisableGlobalFault:
	mrs     r0, FAULTMASK
	cpsid   f
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enEnableGlobalFault
 	.type MCU__enEnableGlobalFault, %function
MCU__enEnableGlobalFault:
	mrs     r0, FAULTMASK
	cpsie   f
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enSetGlobalFault
 	.type MCU__enSetGlobalFault, %function
MCU__enSetGlobalFault:
	push    {r1,r2}
	mrs     r1, FAULTMASK
	msr     FAULTMASK, r0
	dsb
	isb
	mov     r0, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enGetGlobalFault
 	.type MCU__enGetGlobalFault, %function
MCU__enGetGlobalFault:
	mrs     r0, FAULTMASK
	bx      lr


 	.sect 	".ramcode"
	.thumb
	.syntax unified

 	.align 	4
    .thumb_func
	.global MCU__enDisableGlobalInterrupt_RAM
 	.type MCU__enDisableGlobalInterrupt_RAM, %function
MCU__enDisableGlobalInterrupt_RAM:
	mrs     r0, PRIMASK
	cpsid   i
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enEnableGlobalInterrupt_RAM
 	.type MCU__enEnableGlobalInterrupt_RAM, %function
MCU__enEnableGlobalInterrupt_RAM:
	mrs     r0, PRIMASK
	cpsie   i
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vSetGlobalInterrupt_RAM
 	.type MCU__vSetGlobalInterrupt_RAM, %function
MCU__vSetGlobalInterrupt_RAM:
	msr     PRIMASK, r0
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enSetGlobalInterrupt_RAM
 	.type MCU__enSetGlobalInterrupt_RAM, %function
MCU__enSetGlobalInterrupt_RAM:
	push    {r1,r2}
	mrs     r1, PRIMASK
	msr     PRIMASK, r0
	dsb
	isb
	mov     r0, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enGetGlobalInterrupt_RAM
 	.type MCU__enGetGlobalInterrupt_RAM, %function
MCU__enGetGlobalInterrupt_RAM:
	mrs     r0, PRIMASK
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__vSetBasePriorityInterrupt_RAM
 	.type MCU__vSetBasePriorityInterrupt_RAM, %function
MCU__vSetBasePriorityInterrupt_RAM:
	push    {r1,r2}
	and     r1, r0, #0x7
	lsl     r1, #0x5
	msr     BASEPRI, r1
	dsb
	isb
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enSetBasePriorityInterrupt_RAM
 	.type MCU__enSetBasePriorityInterrupt_RAM, %function
MCU__enSetBasePriorityInterrupt_RAM:
	push    {r1,r2}
	and     r1, r0, #0x7
	lsl     r1, #0x5
	mrs     r2, BASEPRI
	ubfx    r0, r2, #5, #3
	msr     BASEPRI, r1
	dsb
	isb
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enGetBasePriorityInterrupt_RAM
 	.type MCU__enGetBasePriorityInterrupt_RAM, %function
MCU__enGetBasePriorityInterrupt_RAM:
	push    {r1,r2}
	mrs     r1, BASEPRI
	lsr     r0, r1, #0x5
	and     r0, #0x7
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enDisableGlobalFault_RAM
 	.type MCU__enDisableGlobalFault_RAM, %function
MCU__enDisableGlobalFault_RAM:
	mrs     r0, FAULTMASK
	cpsid   f
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enEnableGlobalFault_RAM
 	.type MCU__enEnableGlobalFault_RAM, %function
MCU__enEnableGlobalFault_RAM:
	mrs     r0, FAULTMASK
	cpsie   f
	dsb
	isb
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enSetGlobalFault_RAM
 	.type MCU__enSetGlobalFault_RAM, %function
MCU__enSetGlobalFault_RAM:
	push    {r1,r2}
	mrs     r1, FAULTMASK
	msr     FAULTMASK, r0
	dsb
	isb
	mov     r0, r1
	pop     {r1,r2}
	bx      lr

 	.align 	4
    .thumb_func
	.global MCU__enGetGlobalFault_RAM
 	.type MCU__enGetGlobalFault_RAM, %function
MCU__enGetGlobalFault_RAM:
	mrs     r0, FAULTMASK
	bx      lr

