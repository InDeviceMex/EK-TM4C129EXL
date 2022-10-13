
 	.sect 	".text"
 	.align 	4
	.thumb
	.clink

	.global MCU__enDisableGlobalInterrupt
	.global MCU__enEnableGlobalInterrupt
	.global MCU__vSetGlobalInterrupt
	.global MCU__enSetGlobalInterrupt
	.global MCU__enGetGlobalInterrupt
	.global MCU__vSetBasePriorityInterrupt
	.global MCU__enSetBasePriorityInterrupt
	.global MCU__enGetBasePriorityInterrupt
	.global MCU__enDisableGlobalFault
	.global MCU__enEnableGlobalFault
	.global MCU__enSetGlobalFault
	.global MCU__enGetGlobalFault


 	.align 	4
MCU__enDisableGlobalInterrupt:
	mrs     r0, PRIMASK
	cpsid   i
	dsb
	isb
	bx      lr


 	.align 	4
MCU__enEnableGlobalInterrupt:
	mrs     r0, PRIMASK
	cpsie   i
	dsb
	isb
	bx      lr


 	.align 	4
MCU__vSetGlobalInterrupt:
	msr     PRIMASK, r0
	dsb
	isb
	bx      lr


 	.align 	4
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
MCU__enGetGlobalInterrupt:
	mrs     r0, PRIMASK
	bx      lr


 	.align 	4
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
MCU__enGetBasePriorityInterrupt:
	push    {r1,r2}
	mrs     r1, BASEPRI
	lsr     r0, r1, #0x5
	and     r0, #0x7
	pop     {r1,r2}
	bx      lr


 	.align 	4
MCU__enDisableGlobalFault:
	mrs     r0, FAULTMASK
	cpsid   f
	dsb
	isb
	bx      lr


 	.align 	4
MCU__enEnableGlobalFault:
	mrs     r0, FAULTMASK
	cpsie   f
	dsb
	isb
	bx      lr


 	.align 	4
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
MCU__enGetGlobalFault:
	mrs     r0, FAULTMASK
	bx      lr


 	.sect 	".ramcode"
 	.align 	4
	.thumb
	.clink

	.global MCU__enDisableGlobalInterrupt_RAM
	.global MCU__enEnableGlobalInterrupt_RAM
	.global MCU__vSetGlobalInterrupt_RAM
	.global MCU__enSetGlobalInterrupt_RAM
	.global MCU__enGetGlobalInterrupt_RAM
	.global MCU__vSetBasePriorityInterrupt_RAM
	.global MCU__enSetBasePriorityInterrupt_RAM
	.global MCU__enGetBasePriorityInterrupt_RAM
	.global MCU__enDisableGlobalFault_RAM
	.global MCU__enEnableGlobalFault_RAM
	.global MCU__enSetGlobalFault_RAM
	.global MCU__enGetGlobalFault_RAM


 	.align 	4
MCU__enDisableGlobalInterrupt_RAM:
	mrs     r0, PRIMASK
	cpsid   i
	dsb
	isb
	bx      lr


 	.align 	4
MCU__enEnableGlobalInterrupt_RAM:
	mrs     r0, PRIMASK
	cpsie   i
	dsb
	isb
	bx      lr


 	.align 	4
MCU__vSetGlobalInterrupt_RAM:
	msr     PRIMASK, r0
	dsb
	isb
	bx      lr


 	.align 	4
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
MCU__enGetGlobalInterrupt_RAM:
	mrs     r0, PRIMASK
	bx      lr


 	.align 	4
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
MCU__enGetBasePriorityInterrupt_RAM:
	push    {r1,r2}
	mrs     r1, BASEPRI
	lsr     r0, r1, #0x5
	and     r0, #0x7
	pop     {r1,r2}
	bx      lr


 	.align 	4
MCU__enDisableGlobalFault_RAM:
	mrs     r0, FAULTMASK
	cpsid   f
	dsb
	isb
	bx      lr


 	.align 	4
MCU__enEnableGlobalFault_RAM:
	mrs     r0, FAULTMASK
	cpsie   f
	dsb
	isb
	bx      lr


 	.align 	4
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
MCU__enGetGlobalFault_RAM:
	mrs     r0, FAULTMASK
	bx      lr




